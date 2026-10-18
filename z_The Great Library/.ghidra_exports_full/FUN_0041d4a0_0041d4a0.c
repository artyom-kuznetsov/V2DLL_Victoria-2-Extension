// FUN_0041d4a0 @ 0041d4a0 body=[[0041d4a0, 0041d59e] [0041d5a2, 0041d5c1] [0041d5c5, 0041d5d7]]


undefined1 * FUN_0041d4a0(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_5c;
  uint local_48;
  undefined4 local_40;
  uint local_2c;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b9cad9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar2 = *(int *)(DAT_012588e8 + 0xb60);
  piVar3 = (int *)*param_2;
  local_14 = 1;
  local_18 = iVar2;
  if (0 < (param_2[1] - (int)piVar3) / 0x1c) {
    if (0xf < (uint)piVar3[5]) {
      piVar3 = (int *)*piVar3;
    }
    FUN_0055c6c0(DAT_012587e4,&local_24,piVar3);
    if (local_20 != 0) {
      local_1c = local_24;
      local_18 = local_20;
      iVar2 = local_20;
    }
  }
  FUN_00517250(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4));
  *param_1 = 1;
  uVar1 = FUN_0055dd40();
  local_8 = 1;
  uVar1 = FUN_00988fa0(uVar1);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00408ed0(uVar1,0,0xffffffff);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40);
  }
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c);
  }
  ExceptionList = local_10;
  return param_1;
}

