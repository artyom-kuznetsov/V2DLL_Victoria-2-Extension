// FUN_0041efe0 @ 0041efe0 body=[[0041efe0, 0041f102] [0041f106, 0041f120] [0041f126, 0041f14c] [0041f150, 0041f163]]


undefined1 * FUN_0041efe0(undefined1 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_68;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b62de1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_14 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify texture name",0x1b);
    ExceptionList = local_10;
    return param_1;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  FUN_00408ed0(*param_2,0,0xffffffff);
  local_8 = 1;
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
  cVar1 = FUN_009bd3f0(iVar2 + 0x158);
  if (cVar1 == '\0') {
    *param_1 = 1;
    FUN_00409350("Reload failed",0xd);
  }
  else {
    *param_1 = 1;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350(" reloaded",9);
    local_8._0_1_ = 2;
    uVar3 = FUN_00988f20(local_4c);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68);
    }
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  ExceptionList = local_10;
  return param_1;
}

