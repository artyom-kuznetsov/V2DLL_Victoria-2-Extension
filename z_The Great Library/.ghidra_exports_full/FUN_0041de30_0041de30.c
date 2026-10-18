// FUN_0041de30 @ 0041de30 body=[[0041de30, 0041dfdf] [0041dfe3, 0041dffe] [0041e002, 0041e018] [0041e01c, 0041e032] [0041e036, 0041e049]]


undefined1 * FUN_0041de30(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int _Value;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  char local_ac [32];
  undefined4 local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b77a01;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  piVar8 = (int *)*param_2;
  local_14 = 1;
  if ((param_2[1] - (int)piVar8) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify the amount of points.",0x24);
    ExceptionList = local_10;
    return param_1;
  }
  if (0xf < (uint)piVar8[5]) {
    piVar8 = (int *)*piVar8;
  }
  _Value = FUN_00aaf0c5(piVar8);
  local_8c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  iVar4 = _Value * 1000 + *(int *)(iVar2 + 0x15a0);
  *(int *)(iVar2 + 0x15a0) = iVar4;
  if (iVar4 < 0) {
    *(undefined4 *)(iVar2 + 0x15a0) = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xc4);
    if (iVar3 < iVar4) {
      *(int *)(iVar2 + 0x15a0) = iVar3;
    }
  }
  *param_1 = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(" suppression points.",0x14);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pcVar5 = __itoa(_Value,local_ac,10);
  pcVar7 = pcVar5;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
  local_8._0_1_ = 3;
  FUN_00988fa0(local_30);
  local_8._0_1_ = 4;
  uVar6 = FUN_00988f20(local_4c);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00408ed0(uVar6,0,0xffffffff);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

