// FUN_00a4c320 @ 00a4c320 body=[[00a4c320, 00a4c3bc] [00a4c3c0, 00a4c3d2]]


undefined1 * FUN_00a4c320(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_34;
  uint local_20;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4e221;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_14[0] = 0x5c;
  iVar1 = FUN_0098a0d0(local_14);
  if (iVar1 == -1) {
    local_14[0] = 0x2f;
    iVar1 = FUN_0098a0d0(local_14);
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1 + 0x10);
    }
  }
  uVar2 = FUN_009895f0(iVar1 + 1);
  local_8 = 3;
  FUN_00408ed0(uVar2,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  ExceptionList = local_10;
  return param_1;
}

