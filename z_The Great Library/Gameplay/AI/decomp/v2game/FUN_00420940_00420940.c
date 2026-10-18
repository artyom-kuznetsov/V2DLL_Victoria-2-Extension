// FUN_00420940 @ 00420940 body=[[00420940, 00420acb] [00420acf, 00420aed] [00420af1, 00420b0a] [00420b0e, 00420b2a] [00420b2e, 00420b4d] [00420b51, 00420bac]]


undefined1 * FUN_00420940(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_a8;
  uint local_94;
  undefined4 local_8c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ba2357;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  iVar2 = *param_2;
  local_1c = 1;
  if ((param_2[1] - iVar2) / 0x1c < 2) {
    *param_1 = 0;
    FUN_00409350("Please specify country tag and province id",0x2a);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)(iVar2 + 0x1c);
  if (0xf < *(uint *)(iVar2 + 0x30)) {
    piVar1 = (int *)*piVar1;
  }
  iVar2 = FUN_00aaf0c5(piVar1);
  piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4);
  if (piVar1[0x16] < 1) {
    *param_1 = 0;
    FUN_00409350("Invalid province specified",0x1a);
    ExceptionList = local_10;
    return param_1;
  }
  param_2 = (int *)*param_2;
  if (0xf < (uint)param_2[5]) {
    param_2 = (int *)*param_2;
  }
  FUN_0055c6c0(DAT_012587e4,local_18,param_2);
  if (local_14 == 0) {
    *param_1 = 0;
    FUN_00409350("Unknown country.",0x10);
    ExceptionList = local_10;
    return param_1;
  }
  FUN_004b5730(piVar1,local_18,DAT_012588e8 + 0xb0c,0);
  *param_1 = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(" is now controlled by ",0x16);
  local_8 = 1;
  uVar3 = FUN_0055dd40();
  local_8._0_1_ = 2;
  (**(code **)(*piVar1 + 0x1c))(local_70);
  local_8._0_1_ = 3;
  FUN_00988f20(local_38);
  local_8._0_1_ = 4;
  uVar3 = FUN_00988f20(uVar3);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c);
  }
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8);
  }
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

