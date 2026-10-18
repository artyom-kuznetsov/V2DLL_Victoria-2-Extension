// FUN_004233a0 @ 004233a0 body=[[004233a0, 0042346d] [00423471, 00423526] [0042352a, 00423547] [0042354b, 0042356c]]


undefined1 * FUN_004233a0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined **local_94 [18];
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b5c3ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  iVar1 = DAT_012588e8;
  local_8 = 0;
  local_14 = 1;
  if (0 < (param_2[1] - *param_2) / 0x1c) {
    *param_1 = 0;
    FUN_00409350("Invalid arguments count.",0x18);
    ExceptionList = local_10;
    return param_1;
  }
  *param_1 = 1;
  iVar1 = (**(code **)(**(int **)(iVar1 + 0xb24) + 0x170))();
  uVar4 = *(undefined4 *)(iVar1 + 0x48);
  uVar2 = FUN_00423ec0(uVar4,local_30);
  local_8 = 1;
  FUN_00408ed0(uVar2,0,0xffffffff);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("ConsoleCmdImpl.cpp",0x12);
  local_8 = 2;
  puVar3 = (undefined4 *)FUN_00423fa0(uVar4,local_30);
  local_8._0_1_ = 3;
  FUN_004015b0(local_4c,0x9cb,0x10002);
  local_8._0_1_ = 4;
  uVar4 = FUN_00987d20();
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar4 = FUN_00418e30(uVar4,puVar3);
  FUN_00401280(uVar4);
  local_8._0_1_ = 3;
  FUN_00987ac0(local_94);
  local_94[0] = std::ios_base::vftable;
  FUN_00aad52d(local_94);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_00409350("See game.log for full help details.",0x23);
  ExceptionList = local_10;
  return param_1;
}

