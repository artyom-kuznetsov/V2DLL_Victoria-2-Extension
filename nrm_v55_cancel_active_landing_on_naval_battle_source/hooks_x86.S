.intel_syntax noprefix
.code32
.text

.extern __imp__VirtualProtect
.extern __imp__FlushInstructionCache
.extern __imp__GetCurrentProcess
.extern __imp__GetModuleHandleA

.extern _g_game_base
.extern _g_mobilize_name
.extern _g_unmobilize_name
.extern _nrm_fire_reserved
.extern _nrm_capture_factory_provinces
.extern _nrm_factory_allowed_in_state
.extern _nrm_factory_ui_build_sorted_vector
.extern _nrm_factory_any_available
.extern _g_nrm_factory_money_failure
.extern _g_nrm_factory_list_keep_gray
.extern _nrm_owner_payout_dispatch
.extern _nrm_owner_equivalent_population_from_state
.extern _nrm_cancel_landing_if_naval_battle

.global _nrm_get_game_base
.global _nrm_patch_memory
.global _nrm_wrapper_mobilize
.global _nrm_wrapper_demobilize
.global _nrm_decision_filter
.global _nrm_regiment_guard_trampoline
.global _nrm_mobilize_button_state_wrapper
.global _nrm_mobilize_potential_available
.global _nrm_factory_parser_hook
.global _nrm_factory_parser_trampoline
.global _nrm_factory_list_filter_trampoline
.global _nrm_factory_can_build_wrapper
.global _nrm_factory_can_build_list_wrapper
.global _nrm_factory_money_fail_trampoline
.global _nrm_factory_ui_sort_vector_trampoline
.global _nrm_factory_can_build_full_cdecl
.global _nrm_factory_any_available_button_wrapper
.global _nrm_factory_force_enabled_wrapper
.global _nrm_factory_state_gate_colony_enforced
.global _nrm_factory_state_colony_trampoline
.global _nrm_factory_type_colony_trampoline
.global _nrm_owner_payout_hook
.global _nrm_owner_payout_vanilla_trampoline
.global _nrm_owner_payout_call_vanilla
.global _nrm_owner_bonus_primary_hook
.global _nrm_owner_bonus_secondary_hook
.global _nrm_owner_bonus_tooltip_hook
.global _nrm_production_pop_sort_domestic_hook
.global _nrm_production_pop_sort_foreign_hook
.global _nrm_unit_movement_update_trampoline
.global _nrm_clear_unit_route_vanilla

# void* __cdecl nrm_get_game_base(void)
_nrm_get_game_base:
    push 0
    call dword ptr [__imp__GetModuleHandleA]
    ret

# int __cdecl nrm_patch_memory(void *dst, const void *src, unsigned size)
# Uses PAGE_EXECUTE_READWRITE only during the copy, restores original protection,
# then flushes the CPU instruction cache. This is the shared patch-manager primitive.
_nrm_patch_memory:
    push ebp
    mov ebp, esp
    push ebx
    push esi
    push edi
    sub esp, 8

    mov edi, dword ptr [ebp+8]
    mov esi, dword ptr [ebp+12]
    mov ebx, dword ptr [ebp+16]
    test edi, edi
    jz .patch_fail
    test esi, esi
    jz .patch_fail
    test ebx, ebx
    jz .patch_ok

    lea eax, [ebp-16]        # old protection
    push eax
    push 0x40                # PAGE_EXECUTE_READWRITE
    push ebx
    push edi
    call dword ptr [__imp__VirtualProtect]
    test eax, eax
    jz .patch_fail

    mov ecx, ebx
.patch_copy_loop:
    mov al, byte ptr [esi]
    mov byte ptr [edi], al
    inc esi
    inc edi
    dec ecx
    jnz .patch_copy_loop

    # Recover original dst after the copy.
    mov edi, dword ptr [ebp+8]
    lea eax, [ebp-20]        # throwaway previous protection
    push eax
    push dword ptr [ebp-16]
    push ebx
    push edi
    call dword ptr [__imp__VirtualProtect]

    call dword ptr [__imp__GetCurrentProcess]
    push ebx
    push edi
    push eax
    call dword ptr [__imp__FlushInstructionCache]

.patch_ok:
    mov eax, 1
    jmp .patch_done
.patch_fail:
    xor eax, eax
.patch_done:
    add esp, 8
    pop edi
    pop esi
    pop ebx
    mov esp, ebp
    pop ebp
    ret

# Existing Mobilize UI callback adapter.
# First fire the reserved decision, then restore *all* original registers and
# invoke the untouched vanilla callback using the original GUI ECX context.
_nrm_wrapper_mobilize:
    push ebp
    mov ebp, esp
    pushad
    push 0
    call _nrm_fire_reserved
    add esp, 4
    popad
    mov eax, dword ptr [_g_game_base]
    add eax, 0x002AE4B0
    call eax
    mov esp, ebp
    pop ebp
    ret

_nrm_wrapper_demobilize:
    push ebp
    mov ebp, esp
    pushad
    push 1
    call _nrm_fire_reserved
    add esp, 4
    popad
    mov eax, dword ptr [_g_game_base]
    add eax, 0x002AE540
    call eax
    mov esp, ebp
    pop ebp
    ret

# Regiment maintenance guard.
# Hooked at EXE+0x1C8402 inside the vanilla per-regiment army-maintenance loop.
# At entry EBX is CRegiment*. The original code has not yet modified any
# callee-saved state for this individual regiment.
#
# Invalid source POP type -> jump into the function's OWN vanilla full-delete
# branch at EXE+0x1C886C. That branch invokes 0x68A900, which unlinks the
# regiment from the POP, army and registries and destroys it safely.
_nrm_regiment_guard_trampoline:
    mov eax, dword ptr [ebx+0x30]       # CRegiment::source_pop
    test eax, eax
    jz .rg_null_pop

    mov edx, dword ptr [eax+0x68]       # CPop::type
    test edx, edx
    jz .rg_normal
    cmp byte ptr [edx+0x42], 0          # CPopType::can_be_recruited
    je .rg_delete

.rg_normal:
    mov ecx, dword ptr [_g_game_base]
    add ecx, 0x001C8414
    jmp ecx

.rg_null_pop:
    mov ecx, dword ptr [_g_game_base]
    add ecx, 0x001C8409
    jmp ecx

.rg_delete:
    mov ecx, dword ptr [_g_game_base]
    add ecx, 0x001C886C
    jmp ecx

# Mobilize button UI state adapter.
# Both vanilla branches (zero and nonzero mobilizable brigades) now call here.
# ECX is the actual button/widget instance. We evaluate only
# mobilize_nrm_dec::potential, then tail-jump to the untouched vanilla
# Enable (+0xB8) or Disable (+0xBC) virtual method.
_nrm_mobilize_button_state_wrapper:
    pushad
    call _nrm_mobilize_potential_available
    mov dword ptr [esp+28], eax       # make POPAD restore EAX = boolean
    popad

    test eax, eax
    mov edx, dword ptr [ecx]
    jz .mob_state_disabled
    mov eax, dword ptr [edx+0xB8]
    jmp eax

.mob_state_disabled:
    mov eax, dword ptr [edx+0xBC]
    jmp eax

# int __cdecl nrm_mobilize_potential_available(void)
# Uses Victoria's own CDecision potential evaluator at EXE+0x474C60.
# The lookup key is a read-only synthetic std::string object pointing at
# g_mobilize_name; no game heap allocation is needed.
_nrm_mobilize_potential_available:
    push ebp
    mov ebp, esp
    push ebx
    push esi
    push edi
    sub esp, 0x60

    # Local layout after the three saved registers:
    #   [esp+0x00 .. +0x47] = 0x48-byte Scope
    #   [esp+0x48 .. +0x5F] = synthetic MSVC std::string
    # This avoids touching saved EBX/ESI/EDI at [ebp-4..-0x0C].
    lea edi, [esp]
    lea ebx, [esp+0x48]
    lea eax, [_g_mobilize_name]
    mov dword ptr [ebx+0x00], eax
    mov dword ptr [ebx+0x04], 0
    mov dword ptr [ebx+0x08], 0
    mov dword ptr [ebx+0x0C], 0
    mov dword ptr [ebx+0x10], 16
    mov dword ptr [ebx+0x14], 16

    # Ensure Victoria's lazily-created decision registry exists, using the
    # same vanilla helper used by decision UI code. It returns the registry.
    mov eax, dword ptr [_g_game_base]
    add eax, 0x00475040
    call eax
    test eax, eax
    jz .mob_potential_false
    add eax, 0x1C
    push ebx
    mov edx, dword ptr [_g_game_base]
    add edx, 0x001C2AD0
    call edx                         # EAX = CDecision* or NULL, callee pops arg
    test eax, eax
    jz .mob_potential_false
    mov esi, eax

    # Build the same 0x48-byte country Scope used by decision UI checks.
    push 0
    mov eax, dword ptr [_g_game_base]
    add eax, 0x004A8650
    mov ecx, edi
    call eax

    # Root/from country = current local player country, same fields used by
    # Victoria's own decision UI path.
    mov eax, dword ptr [_g_game_base]
    mov eax, dword ptr [eax+0x00E588E8]
    test eax, eax
    jz .mob_potential_false
    mov edx, dword ptr [eax+0x0B5C]
    mov dword ptr [edi+0x08], edx
    mov edx, dword ptr [eax+0x0B60]
    mov dword ptr [edi+0x0C], edx

    # 0x874C60: CDecision potential check. ESI = decision, stack arg = Scope*.
    push edi
    mov eax, dword ptr [_g_game_base]
    add eax, 0x00474C60
    call eax
    movzx eax, al
    jmp .mob_potential_done

.mob_potential_false:
    xor eax, eax

.mob_potential_done:
    add esp, 0x60
    pop edi
    pop esi
    pop ebx
    mov esp, ebp
    pop ebp
    ret

# Factory-definition parser extension for token 0x285 ("provinces").
# Entry ABI is the untouched CFactoryType field parser:
#   ECX      = FactoryType*
#   [ESP+4]  = parse/value node
#   [ESP+8]  = token id
# For every token except provinces, replay the original nine-byte prologue
# and continue at EXE+0xD9319. For provinces, let the DLL consume the field
# and return exactly like the vanilla parser's other handled cases (ret 8).
_nrm_factory_parser_hook:
    cmp dword ptr [esp+8], 0x285
    jne _nrm_factory_parser_trampoline

    push dword ptr [esp+4]              # parse node
    push ecx                            # FactoryType*
    call _nrm_capture_factory_provinces
    add esp, 8
    ret 8

_nrm_factory_parser_trampoline:
    push ebp
    mov ebp, esp
    mov eax, dword ptr fs:[0]
    mov edx, dword ptr [_g_game_base]
    add edx, 0x000D9319
    jmp edx


# First vanilla colonial reject in the shared factory state gate 0x52E960.
# Hooked at 0x52E970 over:
#   cmp dword ptr [eax+0x84],0
#   jg  0x52E9D8
# At this point EAX=CState*, EDI=actor. ESI is the current FactoryType* only
# when the caller is 0x52C9B0; [EBP+4] is then exactly 0x52C9C7.
# Only that concrete per-type path may bypass colonial rejection, and only for
# strategic_factory=yes. All direct UI/invest callers retain vanilla behavior.
_nrm_factory_state_colony_trampoline:
    cmp dword ptr [eax+0x84], 0
    jle .state_colony_continue

    mov edx, dword ptr [_g_game_base]
    add edx, 0x0012C9C7
    cmp dword ptr [ebp+4], edx
    jne .state_colony_reject

    test esi, esi
    jz .state_colony_reject
    cmp byte ptr [esi+0x13B], 0
    je .state_colony_reject

.state_colony_continue:
    mov edx, dword ptr [_g_game_base]
    add edx, 0x0012E979
    jmp edx

.state_colony_reject:
    mov edx, dword ptr [_g_game_base]
    add edx, 0x0012E9D8
    jmp edx

# Second, independent vanilla colonial reject at the start of 0x4D04B0.
# Hooked at 0x4D04BC after ECX=[EBP+8]=CState*. The second stack argument is
# FactoryType*. We replay the three original pushes before branching so both
# vanilla continuation and vanilla reject paths see exactly the original stack.
# strategic_factory=yes skips only this first colony rejection; all later
# 0x4D04B0 checks (8-factory limit, duplicate strategic guard, type/group rules,
# technology, existing factory checks, etc.) execute unchanged.
_nrm_factory_type_colony_trampoline:
    cmp dword ptr [ecx+0x84], 0
    push ebx
    push esi
    push edi
    jle .type_colony_continue

    mov edx, dword ptr [ebp+0x0C]
    test edx, edx
    jz .type_colony_reject
    cmp byte ptr [edx+0x13B], 0
    je .type_colony_reject

.type_colony_continue:
    mov edx, dword ptr [_g_game_base]
    add edx, 0x000D04D3
    jmp edx

.type_colony_reject:
    mov edx, dword ptr [_g_game_base]
    add edx, 0x000D04C8
    jmp edx

# Shared factory-build wrapper.
# Replaces calls to vanilla 0x52C9B0 without changing 0x52C9B0 itself.
# Entry ABI is identical to vanilla:
#   EAX      = FactoryType*
#   ECX      = country/actor object
#   [ESP+4]  = CState*
#   returns AL boolean and pops the 4-byte stack argument.
#
# We preserve FactoryType* and CState*, run the untouched vanilla predicate,
# and only if vanilla returned true apply the sidecar provinces rule.
_nrm_factory_can_build_wrapper:
    mov byte ptr [_g_nrm_factory_money_failure], 0
    push ebp
    mov ebp, esp
    push ebx
    push esi
    push edi

    mov esi, eax                          # FactoryType*
    mov edi, dword ptr [ebp+8]           # CState*

    # Vanilla 0x52C9B0 performs all original checks. Two precise trampolines
    # only let strategic_factory=yes pass the two duplicated colony rejects.
    push dword ptr [ebp+8]
    mov edx, dword ptr [_g_game_base]
    add edx, 0x0012C9B0
    call edx                              # callee pops duplicate CState*
    test al, al
    jz .factory_can_build_false

    # Reimpose the one NRM colony rule at the per-factory level:
    # colony => only strategic_factory=yes. Non-colonies are unchanged.
    test edi, edi
    jz .factory_can_build_false
    cmp dword ptr [edi+0x84], 0
    jle .factory_can_build_check_provinces
    test esi, esi
    jz .factory_can_build_false
    cmp byte ptr [esi+0x13B], 0
    je .factory_can_build_false

.factory_can_build_check_provinces:
    push edi                              # CState*
    push esi                              # FactoryType*
    call _nrm_factory_allowed_in_state
    add esp, 8
    test eax, eax
    setne al
    movzx eax, al
    jmp .factory_can_build_done

.factory_can_build_false:
    xor eax, eax

.factory_can_build_done:
    pop edi
    pop esi
    pop ebx
    mov esp, ebp
    pop ebp
    ret 4                                 # match vanilla 0x52C9B0 ABI

# Exact vanilla insufficient-funds branch in 0x52C9B0. Reached only after
# every earlier vanilla construction test has passed and the final 64-bit
# construction-cost comparison fails. Mark that reason, replay the five
# overwritten bytes, and return through the original epilogue.
_nrm_factory_money_fail_trampoline:
    mov byte ptr [_g_nrm_factory_money_failure], 1
    xor eax, eax
    pop edi
    pop esi
    pop ebx
    mov edx, dword ptr [_g_game_base]
    add edx, 0x0012CA1F
    jmp edx

# Chooser-only version of CanBuild. It deliberately returns AL=0 for the
# insufficient-funds case so vanilla constructs a disabled/gray row, but sets
# g_nrm_factory_list_keep_gray so our list filter does not remove that row.
# NRM provinces is checked explicitly here because the common wrapper normally
# reaches the provinces sidecar only after vanilla CanBuild returned true.
_nrm_factory_can_build_list_wrapper:
    push ebp
    mov ebp, esp
    push ebx
    push esi
    push edi

    mov byte ptr [_g_nrm_factory_list_keep_gray], 0
    mov esi, eax                          # FactoryType*
    mov edi, dword ptr [ebp+8]           # CState*

    push dword ptr [ebp+8]
    mov eax, esi
    call _nrm_factory_can_build_wrapper   # preserves vanilla ABI; pops state
    test al, al
    jnz .factory_list_can_build_done

    cmp byte ptr [_g_nrm_factory_money_failure], 0
    je .factory_list_can_build_false

    push edi
    push esi
    call _nrm_factory_allowed_in_state
    add esp, 8
    test eax, eax
    jz .factory_list_can_build_false

    mov byte ptr [_g_nrm_factory_list_keep_gray], 1

.factory_list_can_build_false:
    xor eax, eax

.factory_list_can_build_done:
    pop edi
    pop esi
    pop ebx
    mov esp, ebp
    pop ebp
    ret 4

# cdecl adapter for the exact same authoritative predicate.
# args: actor, state, FactoryType*
_nrm_factory_can_build_full_cdecl:
    push ebp
    mov ebp, esp
    push ebx
    push esi
    push edi
    mov ecx, dword ptr [ebp+8]            # actor
    mov eax, dword ptr [ebp+16]           # FactoryType*
    push dword ptr [ebp+12]               # CState*
    call _nrm_factory_can_build_wrapper    # wrapper pops CState*
    movzx eax, al
    pop edi
    pop esi
    pop ebx
    mov esp, ebp
    pop ebp
    ret

# Diagnostic v21: the confirmed province/state-panel Build Factory button
# at EXE+0x33FEC0 is forced enabled unconditionally. This deliberately does
# not alter chooser filtering or command execution; it exists only so the
# colony chooser can be inspected while the per-type colonial predicate is
# debugged. Same ABI as vanilla 0x52E960: no stack arguments, boolean in AL.
_nrm_factory_force_enabled_wrapper:
    mov eax, 1
    ret

# Confirmed build-factory entry button. Do not special-case colonies here.
# The button asks one question only: would the chooser contain >=1 row?
# Entry ABI at both own-country call sites: EAX=CState*, EDI=actor.
_nrm_factory_any_available_button_wrapper:
    push ebp
    mov ebp, esp
    push ebx
    push esi
    push edi
    mov ebx, eax                          # state
    mov esi, edi                          # actor
    push esi
    push ebx
    call _nrm_factory_any_available
    add esp, 8
    test eax, eax
    setne al
    movzx eax, al
    pop edi
    pop esi
    pop ebx
    mov esp, ebp
    pop ebp
    ret

# 0x52E960 has its BUILD_COLONIAL branch disabled for factory construction.
# Foreign-investment UI is not part of this feature, so preserve its vanilla
# behavior by explicitly rejecting colonies before tail-calling the otherwise
# untouched state gate.
_nrm_factory_state_gate_colony_enforced:
    test eax, eax
    jz .factory_state_gate_colony_false
    cmp dword ptr [eax+0x84], 0
    jg .factory_state_gate_colony_false
    mov edx, dword ptr [_g_game_base]
    add edx, 0x0012E960
    jmp edx
.factory_state_gate_colony_false:
    xor eax, eax
    ret

# UI-only strategic-first ordering at chooser-loop setup.
# Hooked at EXE+0x2F9DAA, after vanilla has already:
#   ECX = pointer to the FactoryType* vector object (begin/end/capacity)
#   ESI = 0 (loop index)
#   EAX = vanilla element count
# We replace only the local vector pointer/count with a DLL-owned shadow vector.
# The global registry and the rest of the vanilla loop remain untouched.
_nrm_factory_ui_sort_vector_trampoline:
    push ecx
    call _nrm_factory_ui_build_sorted_vector
    mov edx, dword ptr [esp]              # original vector object
    add esp, 4
    test eax, eax
    jnz .factory_ui_sort_vector_have
    mov eax, edx

.factory_ui_sort_vector_have:
    mov ecx, eax                           # chosen vector object
    mov eax, dword ptr [ecx+4]             # end
    sub eax, dword ptr [ecx]               # end - begin
    sar eax, 2                             # element count
    xor esi, esi
    mov dword ptr [esp+0x14], ecx          # replay original local stores
    mov dword ptr [esp+0x18], esi
    mov dword ptr [esp+0x24], eax
    mov edx, dword ptr [_g_game_base]
    add edx, 0x002F9DB6
    jmp edx

# Final build-factory list filter.
# Hooked at EXE+0x2F9E7B immediately after the now-shared 0x52C9B0 predicate.
# AL=0 means the factory cannot actually be built by the normal command path,
# whether because of vanilla rules or because of provinces. Such a row is not
# constructed at all. AL=1 continues into the untouched vanilla constructor.
_nrm_factory_list_filter_trampoline:
    test al, al
    jnz .factory_list_keep
    cmp byte ptr [_g_nrm_factory_list_keep_gray], 0
    je .factory_list_hide

.factory_list_keep:
    mov ecx, dword ptr [esp+0x24]         # original 0x6F9E7B
    movzx edx, al                         # original 0x6F9E7F
    mov eax, dword ptr [_g_game_base]
    add eax, 0x002F9E82
    jmp eax

.factory_list_hide:
    mov eax, dword ptr [esp+0x24]         # unconstructed 0x30-byte allocation
    test eax, eax
    jz .factory_list_no_free
    push eax
    mov edx, dword ptr [_g_game_base]
    add edx, 0x006AE91B                   # game's operator delete
    call edx
    add esp, 4

.factory_list_no_free:
    mov esi, dword ptr [esp+0x20]         # restore loop index local
    add esp, 8                            # discard two pre-staged vanilla pushes
    mov eax, dword ptr [_g_game_base]
    add eax, 0x002F9EB0                   # loop increment
    jmp eax

# Predicate compatible with the pointer at EXE+0xA29B6C.
# Return EAX=0 only for NRM's two reserved decisions when the caller lies in
# the Politics decision-list construction range. Else return EAX=1.
_nrm_decision_filter:
    push ebp
    mov ebp, esp
    push esi
    push edi
    push ebx

    test ecx, ecx
    jz .filter_allow

    mov eax, dword ptr [ecx+0x1c]
    lea edi, [ecx+0x08]
    mov edx, dword ptr [edi+0x10]
    cmp edx, 0xfa
    ja .filter_allow
    cmp eax, edx
    jb .filter_allow
    cmp eax, 0x0f
    jbe .filter_have_name
    mov edi, dword ptr [edi]
    test edi, edi
    jz .filter_allow

.filter_have_name:
    cmp byte ptr [edi], 0
    je .filter_allow

    lea esi, [_g_mobilize_name]
    call .streq
    test eax, eax
    jnz .filter_target

    lea esi, [_g_unmobilize_name]
    call .streq
    test eax, eax
    jz .filter_allow

.filter_target:
    mov eax, dword ptr [ebp+4]
    mov edx, dword ptr [_g_game_base]
    lea ecx, [edx+0x002DB2E0]
    cmp eax, ecx
    jb .filter_allow
    lea ecx, [edx+0x002DC750]
    cmp eax, ecx
    jae .filter_allow
    xor eax, eax
    jmp .filter_done

.filter_allow:
    mov eax, 1

.filter_done:
    pop ebx
    pop edi
    pop esi
    mov esp, ebp
    pop ebp
    ret

# EDI/ESI -> NUL strings. EAX=1 equal, EAX=0 unequal.
.streq:
    push ecx
    push edx
    mov ecx, edi
    mov edx, esi
.streq_loop:
    mov al, byte ptr [ecx]
    cmp al, byte ptr [edx]
    jne .streq_no
    test al, al
    je .streq_yes
    inc ecx
    inc edx
    jmp .streq_loop
.streq_yes:
    mov eax, 1
    jmp .streq_out
.streq_no:
    xor eax, eax
.streq_out:
    pop edx
    pop ecx
    ret


# ---------------------------------------------------------------------------
# Equivalent-aware owner payout
# ---------------------------------------------------------------------------

# Replacement for the whole vanilla 0x4CFE20 function.
# Entry ABI is Victoria's native ABI:
#   EAX = definition object
#   [ESP+4]  = CState*
#   [ESP+8]  = owner money low 32
#   [ESP+12] = owner money high 32
# Original function returns AL and RET 0x0C.
_nrm_owner_payout_hook:
    push ebp
    mov ebp, esp

    push dword ptr [ebp+16]       # money high
    push dword ptr [ebp+12]       # money low
    push dword ptr [ebp+8]        # state
    push eax                      # definition
    call _nrm_owner_payout_dispatch
    add esp, 16

    mov esp, ebp
    pop ebp
    ret 12

# Reconstruct the six bytes overwritten at 0x4CFE20, then enter vanilla at
# 0x4CFE26.  It will eventually execute its own RET 0x0C back to our caller.
_nrm_owner_payout_vanilla_trampoline:
    push ebp
    mov ebp, esp
    sub esp, 0x48
    mov edx, dword ptr [_g_game_base]
    add edx, 0x000CFE26
    jmp edx

# C-callable adapter around the native vanilla ABI.
# nrm_bool __cdecl nrm_owner_payout_call_vanilla(def,state,lo,hi)
_nrm_owner_payout_call_vanilla:
    push ebp
    mov ebp, esp

    push dword ptr [ebp+20]       # money high
    push dword ptr [ebp+16]       # money low
    push dword ptr [ebp+12]       # state
    mov eax, dword ptr [ebp+8]    # definition
    call _nrm_owner_payout_vanilla_trampoline
    movzx eax, al

    mov esp, ebp
    pop ebp
    ret


# ---------------------------------------------------------------------------
# Equivalent-aware owner production bonus
# ---------------------------------------------------------------------------

# Hook 0x4EEA14.
# Entry: ECX=CState*, EDI=production definition, EAX is live vanilla value.
# Vanilla used state->poptype_counts[owner_index].  Replace that ONE count with
# the combined canonical+equivalent owner population and resume after the
# original exact-type lookup at 0x4EEA26.
_nrm_owner_bonus_primary_hook:
    push eax
    push edi                         # arg2: definition
    push ecx                         # arg1: state
    call _nrm_owner_equivalent_population_from_state
    add esp, 8
    mov edx, eax                     # vanilla expects owner population in EDX
    pop eax                          # preserve live value used at 0x4EEA31
    mov ecx, dword ptr [_g_game_base]
    add ecx, 0x000EEA26
    jmp ecx

# Hook 0x4EEF47.
# Entry: ECX=state+0x118 count array, EDI=production definition.
# EDX:EAX is a live fixed-point numerator and must survive the helper call.
_nrm_owner_bonus_secondary_hook:
    push eax
    push edx
    lea eax, [ecx-0x118]             # recover CState*
    push edi                         # arg2: definition
    push eax                         # arg1: state
    call _nrm_owner_equivalent_population_from_state
    add esp, 8
    mov ecx, eax                     # vanilla expects owner population in ECX
    pop edx
    pop eax
    mov edi, dword ptr [_g_game_base]
    add edi, 0x000EEF53
    jmp edi                          # next vanilla instruction zeroes EDI

# UI tooltip for owner presence/bonus, 0x744EE4. Keep the displayed percentage
# consistent with the production calculation. ESI must still hold owner block
# because vanilla localizes it later at 0x744F3A.
_nrm_owner_bonus_tooltip_hook:
    mov esi, dword ptr [edx+0xF0]
    push eax                         # preserve state's total population
    push edx                         # arg2: definition
    push ecx                         # arg1: state
    call _nrm_owner_equivalent_population_from_state
    add esp, 8
    mov ecx, eax                     # combined owner population
    pop eax
    mov edx, dword ptr [_g_game_base]
    add edx, 0x00344EF6
    jmp edx


# ---------------------------------------------------------------------------
# Production UI: remove owner/investor POP sort controls only
# ---------------------------------------------------------------------------

# The generic sort_by_pop_template is instantiated for several POP types.
# CPopType+0x3DA is vanilla's investor/owner flag (the same flag used to select
# PRODUCTION_SORT_BY_AVG_INVESTORS_TOOLTIP).  Workforce POP sort controls are
# left untouched; flagged owner/investor controls are skipped before creation.

# First Production list loop. EAX is already the resolved CPopType*.
_nrm_production_pop_sort_domestic_hook:
    cmp byte ptr [eax+0x3DA], 0
    jne .owner_sort_domestic_skip

    lea ecx, [esp+0xC0]              # overwritten vanilla instruction
    mov edx, dword ptr [_g_game_base]
    add edx, 0x002F239C
    jmp edx

.owner_sort_domestic_skip:
    mov edi, dword ptr [esp+0x54]    # iterator was advanced at loop top
    cmp edi, dword ptr [esp+0x138]
    jne .owner_sort_domestic_more
    mov edx, dword ptr [_g_game_base]
    add edx, 0x002F26C0
    jmp edx
.owner_sort_domestic_more:
    mov edx, dword ptr [_g_game_base]
    add edx, 0x002F2290
    jmp edx

# Second Production list loop (foreign/investment variant).
_nrm_production_pop_sort_foreign_hook:
    cmp byte ptr [eax+0x3DA], 0
    jne .owner_sort_foreign_skip

    lea ecx, [esp+0xC0]              # overwritten vanilla instruction
    mov edx, dword ptr [_g_game_base]
    add edx, 0x002F2879
    jmp edx

.owner_sort_foreign_skip:
    mov esi, dword ptr [esp+0x54]    # iterator was advanced at loop top
    cmp esi, dword ptr [esp+0x148]
    jne .owner_sort_foreign_more
    mov edx, dword ptr [_g_game_base]
    add edx, 0x002F2BD4
    jmp edx
.owner_sort_foreign_more:
    mov edx, dword ptr [_g_game_base]
    add edx, 0x002F2782
    jmp edx


# ---------------------------------------------------------------------------

# v55 movement-update entry hook.
# Replays the exact six overwritten prologue bytes, invokes the guard using the
# original function argument at [ebp+8], then resumes vanilla at EXE+0x1D25C6.
_nrm_unit_movement_update_trampoline:
    push ebp
    mov ebp, esp
    and esp, 0xfffffff8

    pushad
    push dword ptr [ebp+8]
    call _nrm_cancel_landing_if_naval_battle
    add esp, 4
    popad

    mov eax, dword ptr [_g_game_base]
    add eax, 0x001D25C6
    jmp eax

# cdecl helper: void nrm_clear_unit_route_vanilla(void *route_container)
# Vanilla 0x9A63F0 expects the container pointer in EDI and frees all route
# nodes, then zeros head/tail/count.
_nrm_clear_unit_route_vanilla:
    push ebp
    mov ebp, esp
    push edi
    mov edi, dword ptr [ebp+8]
    mov eax, dword ptr [_g_game_base]
    add eax, 0x005A63F0
    call eax
    pop edi
    pop ebp
    ret
