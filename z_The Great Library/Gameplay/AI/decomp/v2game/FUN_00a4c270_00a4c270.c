// FUN_00a4c270 @ 00a4c270 body=[[00a4c270, 00a4c307] [00a4c30b, 00a4c31d]]


undefined1 * FUN_00a4c270(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  puStack_c = &LAB_00b4e251;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  param_2._0_1_ = 0x5c;
  iVar2 = FUN_0098a0d0(&param_2);
  if (iVar2 == -1) {
    param_2._0_1_ = 0x2f;
    FUN_0098a0d0(&param_2);
  }
  uVar3 = FUN_009895f0(*(undefined4 *)(iVar1 + 0x10));
  local_8 = 3;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  ExceptionList = local_10;
  return param_1;
}

