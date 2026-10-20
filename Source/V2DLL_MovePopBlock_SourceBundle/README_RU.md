# V2DLL Move POP Block patch

This package contains the source changes for the block form of `move_pop`, for integration into V2DLL.

## Files

- `Source/V2/V2/V2DLL_PopMergeIdentity.cpp`: parses and executes `move_pop = { where = <province_id> amount = <share> }`, formats its tooltip, and prevents the moved POP from merging with a POP of a different type, culture, or religion.
- `Source/V2/V2/V2DLL_AssimilateBlock.cpp`: the effect-factory hook shared by the assimilate block and move_pop block. Merge this version's factory-hook changes with the target branch's assimilate implementation if that branch has diverged.
- `Source/V2/V2/V2DLL_Shared.h`: declarations used by the two source files.
- `integration/*.patch`: narrow integration changes for `V2TechButton.cpp`, `V2.vcxproj`, and `V2DLL_Shared.h`.
- `v2dll_settings.ini.example`: enable the block with `ENABLE_MOVE_POP_BLOCK=1`.
- `localisation/MOVE_POP_AMOUNT_EFFECT.csv.example`: localization key used by the custom tooltip.

## Integration

1. Add `V2DLL_PopMergeIdentity.cpp` to the V2DLL project and merge the declarations from the header patch.
2. Merge the shared effect-factory router from the supplied `V2DLL_AssimilateBlock.cpp`. It must call `CaptureMovePopBlock(effect, ctx, keyId, token)` when the move block is enabled; `InstallMovePopBlock()` installs that shared factory hook.
3. Apply the `V2TechButton.cpp` patch: add the setting, INI parser/writer entry, and startup call to `InstallMovePopBlock()`.
4. Add the localization row to the game's localization CSV, using the target branch's encoding and CSV conventions.

Script syntax:

```txt
move_pop = {
    where = 425
    amount = 0.7
}
```

`amount` is a share from `0` to `1`; for example `0.7` moves 70 percent. The setting defaults to enabled in this patch. Set it to `0` in `v2dll_settings.ini` to disable the extension.

## Build note

The patch was built as a 32-bit Release DLL with MSVC and exercised in Victoria II. The hook signatures and RVAs target the supported game executable layout; the integrating author should validate them against the exact executable version they support.
