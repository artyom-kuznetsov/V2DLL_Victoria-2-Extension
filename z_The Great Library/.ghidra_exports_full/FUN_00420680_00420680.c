// FUN_00420680 @ 00420680 body=[[00420680, 00420845] [00420849, 0042086d] [00420871, 0042088a] [0042088e, 004208ad] [004208b1, 004208d0] [004208d4, 004208e0] [004208e4, 0042093f]]


undefined1 * FUN_00420680(undefined1 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c4;
  uint local_b0;
  undefined4 local_a8;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38 [4];
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bb6db2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_20 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 2) {
    *param_1 = 0;
    FUN_00409350("Please specify country tag and province id",0x2a);
    ExceptionList = local_10;
    return param_1;
  }
  puVar1 = (undefined4 *)(*param_2 + 0x1c);
  if (0xf < *(uint *)(*param_2 + 0x30)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  iVar2 = FUN_00aaf0c5(puVar1);
  local_1c = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4);
  if (local_1c[0x16] < 1) {
    *param_1 = 0;
    FUN_00409350("Invalid province specified",0x1a);
    ExceptionList = local_10;
    return param_1;
  }
  param_2 = (int *)*param_2;
  if (0xf < (uint)param_2[5]) {
    param_2 = (int *)*param_2;
  }
  FUN_0055c6c0(DAT_012587e4,local_28,param_2);
  if (local_24 == 0) {
    *param_1 = 0;
    FUN_00409350("Unknown country.",0x10);
    ExceptionList = local_10;
    return param_1;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_8 = 1;
  FUN_004e9b90();
  local_18 = 0x2d2d2d;
  local_14 = 0;
  FUN_004b5a90(local_38,local_28,DAT_012588e8 + 0xb0c,0,&local_18);
  *param_1 = 1;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350(" now belongs to ",0x10);
  local_8._0_1_ = 2;
  uVar3 = FUN_0055dd40();
  local_8._0_1_ = 3;
  (**(code **)(*local_1c + 0x1c))(local_8c);
  local_8._0_1_ = 4;
  FUN_00988f20(local_54);
  local_8._0_1_ = 5;
  uVar3 = FUN_00988f20(uVar3);
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8);
  }
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4);
  }
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  if (local_38[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

