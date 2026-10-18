// FUN_00aa8d10 @ 00aa8d10 body=[[00aa8d10, 00aa8e20]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00aa8d10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined **local_24 [3];
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3652e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_00f1f838 & 1) == 0) {
    DAT_00f1f838 = DAT_00f1f838 | 1;
    local_8 = 0;
    _DAT_00f1f830 = 0;
    iVar1 = FUN_00aae9af(0x18,DAT_00ef259c ^ (uint)&stack0xfffffffc);
    if (iVar1 == 0) {
      local_14 = (char *)0x0;
      std::exception::exception((exception *)local_24,&local_14);
      local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_24,&DAT_00e6fb20);
    }
    DAT_00f1f82c = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(DAT_00f1f82c + 4) = DAT_00f1f82c;
    *(int *)(DAT_00f1f82c + 8) = DAT_00f1f82c;
    *(undefined1 *)(DAT_00f1f82c + 0x14) = 1;
    *(undefined1 *)(DAT_00f1f82c + 0x15) = 1;
    _atexit(FUN_00c89000);
  }
  local_8 = 0xffffffff;
  local_18 = *param_1;
  uVar3 = 0;
  local_14 = DAT_00f1f824;
  uVar2 = FUN_00aa8280(&local_18);
  FUN_00831e80(&local_18,uVar2,uVar3);
  if ((char)local_14 != '\0') {
    DAT_00f1f824 = DAT_00f1f824 + 1;
  }
  ExceptionList = local_10;
  return *(undefined4 *)(local_18 + 0x10);
}

