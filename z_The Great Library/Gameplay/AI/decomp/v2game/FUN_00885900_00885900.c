// FUN_00885900 @ 00885900 body=[[00885900, 00885a2c]]


void FUN_00885900(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5b23b;
  local_14 = ExceptionList;
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x30) * 4)
                                + 0xbe8) + *(int *)(param_1 + 0xc) * 4) + 0x34) != 0) {
    ExceptionList = &local_14;
    if (DAT_0131acac == 0) {
      ExceptionList = &local_14;
      iVar1 = FUN_00aae9af(0x20);
      local_c = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0090cca0();
      }
      local_c = 0xffffffff;
      FUN_0090d9d0(uVar2);
    }
    FUN_0090da40(in_ECX + 0x20);
    FUN_0094bdb0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    FUN_0093cfb0();
    FUN_0042c2f0();
    FUN_0093cfb0();
    FUN_009547e0();
  }
  ExceptionList = local_14;
  return;
}

