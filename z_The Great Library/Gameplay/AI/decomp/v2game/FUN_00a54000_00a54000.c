// FUN_00a54000 @ 00a54000 body=[[00a54000, 00a54096] [00a5409a, 00a54333]]


void FUN_00a54000(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  int local_90;
  undefined4 local_8c;
  float local_88 [6];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44d98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 100) + 0x15c))(*(int **)(param_1 + 100),DAT_01258b60);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350("linechart",9);
  local_8 = 0;
  piVar4 = (int *)FUN_00a45090(local_44);
  if (*piVar4 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + *piVar4 * 4);
  }
  local_8 = 0xffffffff;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  local_90 = *(int *)(param_1 + 0x6b9bc);
  local_8c = *(undefined4 *)(param_1 + 0x6b9c0);
  local_88[0] = 2.0 / (float)local_90;
  local_50 = 0;
  local_5c = 0;
  local_64 = 0;
  local_68 = 0;
  local_88[5] = -2.0 / (float)*(int *)(param_1 + 0x6b9c0);
  local_6c = 0;
  local_70 = 0;
  local_88[4] = 0.0;
  local_88[3] = 0.0;
  local_88[2] = 0.0;
  local_88[1] = 0.0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  local_4c = DAT_00f092fc;
  local_60 = DAT_00f092fc;
  local_58 = DAT_00f092dc;
  local_54 = DAT_00f092fc;
  (**(code **)(*piVar4 + 0x98))(piVar4,"InverseView",local_88);
  (**(code **)(*piVar4 + 0x90))(piVar4,"vColorHeight",*param_3,param_3[1] - *param_3 >> 4);
  iVar5 = (**(code **)(*piVar4 + 0x24))(piVar4,0,"bIsOutline");
  if (iVar5 != 0) {
    (**(code **)(*piVar4 + 0x58))(piVar4,iVar5,*(undefined1 *)(param_2[0x5d] + 0x85));
  }
  puVar6 = (undefined4 *)(**(code **)(*param_2 + 0xd4))(local_a0);
  uVar1 = *puVar6;
  iVar5 = (**(code **)(*param_2 + 0xd4))(local_98);
  local_24 = *(float *)(iVar5 + 4);
  local_20 = (float)(int)(short)param_2[0x53];
  local_1c = (float)(int)*(short *)((int)param_2 + 0x14e);
  local_28 = uVar1;
  (**(code **)(*piVar4 + 0x88))(piVar4,"vScreenPosWidthHeight",&local_28);
  local_28 = *(undefined4 *)(param_2[0x5d] + 0x80);
  iVar5 = param_3[1] - *param_3 >> 4;
  local_24 = (float)iVar5;
  if (iVar5 < 0) {
    local_24 = local_24 + 4.2949673e+09;
  }
  local_24 = (float)(int)(short)param_2[0x53] / local_24;
  (**(code **)(*piVar4 + 0x88))(piVar4,"vHalfLineWidthScale",&local_28);
  local_18[0] = 0;
  (**(code **)(*piVar4 + 0xfc))(piVar4,local_18,0);
  (**(code **)(*piVar4 + 0x100))(piVar4,0);
  iVar5 = param_3[1];
  iVar2 = *param_3;
  piVar3 = *(int **)(param_1 + 100);
  if (DAT_013f054c != 0) {
    (**(code **)(*piVar3 + 0x164))(piVar3,DAT_013f054c);
  }
  (**(code **)(*piVar3 + 400))(piVar3,0,DAT_013f0530,0,DAT_013f0548);
  (**(code **)(*piVar3 + 0x144))(piVar3,4,0,(iVar5 - iVar2 >> 4) * 2 + -2);
  (**(code **)(*piVar4 + 0x108))(piVar4);
  (**(code **)(*piVar4 + 0x10c))(piVar4);
  ExceptionList = local_10;
  return;
}

