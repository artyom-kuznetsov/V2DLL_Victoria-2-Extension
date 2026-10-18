// FUN_005811f0 @ 005811f0 body=[[005811f0, 00581283]]


undefined4 FUN_005811f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (0 < *(int *)(in_ECX + 0x44)) {
    if (DAT_0125eadc == 0) {
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x9c);
      local_8 = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00576fe0(iVar1);
      }
      FUN_0057ab10(uVar2);
    }
    if (*(int *)(in_ECX + 0x44) < *(int *)(DAT_0125eadc + 0x84) - *(int *)(DAT_0125eadc + 0x80) >> 2
       ) {
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}

