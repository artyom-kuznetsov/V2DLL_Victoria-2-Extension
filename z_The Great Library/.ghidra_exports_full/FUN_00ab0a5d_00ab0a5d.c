// FindMITargetTypeInstance @ 00ab0a5d body=[[00ab0a5d, 00ab0b64]]


/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindMITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2010 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindMITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  _s_RTTIBaseClassDescriptor _Var1;
  uint uVar2;
  int iVar3;
  _s_RTTIBaseClassDescriptor *p_Var4;
  int in_EAX;
  int iVar5;
  TypeDescriptor *pTVar6;
  PMD *unaff_EDI;
  _s_RTTIBaseClassDescriptor *local_18;
  _s_RTTIBaseClassDescriptor *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0xffffffff;
  uVar2 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  iVar3 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  local_14 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_18 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_10 = 0;
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      p_Var4 = *(_s_RTTIBaseClassDescriptor **)(iVar3 + local_8 * 4);
      if ((local_10 < local_8 - local_c) &&
         ((*(int *)p_Var4 == param_4 ||
          (iVar5 = _strcmp((char *)(*(int *)p_Var4 + 8),(char *)(param_4 + 8)), iVar5 == 0)))) {
        local_14 = p_Var4;
        if (local_18 != (_s_RTTIBaseClassDescriptor *)0x0) {
          if (((byte)p_Var4[0x14] & 3) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          _Var1 = local_18[0x14];
          goto joined_r0x00ab0b16;
        }
        local_c = local_8;
        local_10 = *(uint *)(p_Var4 + 4);
      }
      if ((((*(_s_RTTICompleteObjectLocator **)p_Var4 == param_2) ||
           (iVar5 = _strcmp((char *)(*(_s_RTTICompleteObjectLocator **)p_Var4 + 8),
                            (char *)(param_2 + 8)), iVar5 == 0)) &&
          (pTVar6 = (TypeDescriptor *)PMDtoOffset(param_1,unaff_EDI), pTVar6 == param_3)) &&
         (local_18 = p_Var4, local_14 != (_s_RTTIBaseClassDescriptor *)0x0)) {
        if (local_10 < local_8 - local_c) {
          if (((byte)local_14[0x14] & 3) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
        }
        else {
          if (((byte)local_14[0x14] & 0x40) != 0) {
            return (_s_RTTIBaseClassDescriptor *)
                   (~-(uint)((*(byte *)(*(int *)(*(int *)(*(int *)(local_14 + 0x18) + 0xc) +
                                                (local_8 - local_c) * 4) + 0x14) & 1) != 0) &
                   (uint)local_14);
          }
          if (local_c != 0) {
            return local_14;
          }
        }
        _Var1 = p_Var4[0x14];
joined_r0x00ab0b16:
        if (((byte)_Var1 & 1) != 0) {
          return (_s_RTTIBaseClassDescriptor *)0x0;
        }
        return local_14;
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar2);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}

