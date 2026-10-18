// FUN_00b2a030 @ 00b2a030 body=[[00b2a030, 00b2a094]]


undefined4 FUN_00b2a030(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *local_14 [4];
  
  puVar1 = &DAT_00f20be8;
  local_14[0] = (undefined *)&DAT_00f20be8;
  local_14[1] = (undefined *)&DAT_00f20bec;
  local_14[2] = &DAT_00f20bf0;
  local_14[3] = (undefined *)0x0;
  (*DAT_013f3ab0)(DAT_00f20be0);
  DAT_00f20be0 = 0;
  iVar2 = 0;
  do {
    if ((HMODULE)*puVar1 != (HMODULE)0x0) {
      FreeLibrary((HMODULE)*puVar1);
    }
    iVar2 = iVar2 + 1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)local_14[iVar2];
  } while (puVar1 != (undefined4 *)0x0);
  return 1;
}

