// FUN_0099dc90 @ 0099dc90 body=[[0099dc90, 0099e177]]


void FUN_0099dc90(int *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uStack_160;
  int *piStack_158;
  float fStack_154;
  undefined8 uStack_150;
  float fStack_148;
  char *pcStack_144;
  int *piStack_140;
  undefined8 uStack_13c;
  int *piStack_134;
  float fStack_130;
  char *pcStack_12c;
  int *piStack_128;
  float fStack_124;
  char *pcStack_120;
  int *piStack_11c;
  int iStack_118;
  char *pcStack_114;
  int *piStack_110;
  float fStack_10c;
  char *pcStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  char *pcStack_fc;
  int *piStack_f8;
  undefined8 uStack_f4;
  int *piStack_ec;
  float fStack_e8;
  char *pcStack_e4;
  
  pcStack_e4 = "vCamPos";
  fStack_e8 = 0.0;
  piStack_ec = param_1;
  uStack_f4 = CONCAT44(0x99dcb1,(undefined4)uStack_f4);
  (**(code **)(*param_1 + 0x24))();
  uStack_f4 = 0xe1a8d000000000;
  piStack_f8 = param_1;
  pcStack_fc = (char *)0x99dcc4;
  (**(code **)(*param_1 + 0x24))();
  pcStack_fc = "vCamRightDir";
  uStack_100 = 0;
  piStack_104 = param_1;
  pcStack_108 = (char *)0x99dcd7;
  (**(code **)(*param_1 + 0x24))();
  pcStack_108 = "vCamLookAtDir";
  fStack_10c = 0.0;
  piStack_110 = param_1;
  pcStack_114 = (char *)0x99dcea;
  (**(code **)(*param_1 + 0x24))();
  pcStack_114 = "vCamUpDir";
  iStack_118 = 0;
  piStack_11c = param_1;
  pcStack_120 = (char *)0x99dcfd;
  (**(code **)(*param_1 + 0x24))();
  pcStack_120 = "ViewProjectionMatrix";
  fStack_124 = 0.0;
  piStack_128 = param_1;
  pcStack_12c = (char *)0x99dd10;
  pcStack_fc = (char *)(**(code **)(*param_1 + 0x24))();
  pcStack_12c = "vLightDir";
  fStack_130 = 0.0;
  piStack_134 = param_1;
  uStack_13c = CONCAT44(0x99dd23,(float)uStack_13c);
  uVar4 = (**(code **)(*param_1 + 0x24))();
  uStack_13c = 0xe1936400000000;
  uStack_f4 = CONCAT44(uVar4,(undefined4)uStack_f4);
  piStack_140 = param_1;
  pcStack_144 = (char *)0x99dd36;
  fStack_10c = (float)(**(code **)(*param_1 + 0x24))();
  pcStack_144 = "InvViewMatrix";
  fStack_148 = 0.0;
  uStack_150._4_4_ = param_1;
  uStack_150._0_4_ = 1.4130213e-38;
  piStack_11c = (int *)(**(code **)(*param_1 + 0x24))();
  uStack_150 = CONCAT44(uStack_150._4_4_,"InvViewProjMatrix");
  fStack_154 = 0.0;
  piStack_158 = param_1;
  uStack_160 = CONCAT44(0x99dd5c,(undefined4)uStack_160);
  fStack_130 = (float)(**(code **)(*param_1 + 0x24))();
  piStack_140 = *(int **)(param_2 + 0x100);
  fStack_148 = (float)*(undefined8 *)(param_2 + 0xf8);
  pcStack_144 = (char *)((ulonglong)*(undefined8 *)(param_2 + 0xf8) >> 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x104);
  uStack_13c._0_4_ = (float)uVar1;
  piStack_134 = *(int **)(param_2 + 0x10c);
  uStack_f4 = CONCAT44((float)uStack_13c - fStack_148,(undefined4)uStack_f4);
  uStack_13c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  piStack_ec = (int *)(uStack_13c._4_4_ - (float)pcStack_144);
  fStack_e8 = (float)piStack_134 - (float)piStack_140;
  uStack_160 = CONCAT44((int)&uStack_f4 + 4,&pcStack_120);
  uStack_13c = uVar1;
  D3DXVec3Normalize();
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  fStack_148 = *(float *)(param_2 + 0x118);
  uStack_150._4_4_ = (int *)((ulonglong)uVar1 >> 0x20);
  pcStack_144 = (char *)(fStack_148 * fStack_124 - (float)uStack_150._4_4_ * (float)pcStack_120);
  uStack_150._0_4_ = (float)uVar1;
  piStack_140 = (int *)((float)pcStack_120 * (float)uStack_150 - fStack_148 * (float)piStack_128);
  uStack_13c = CONCAT44(uStack_13c._4_4_,
                        (float)uStack_150._4_4_ * (float)piStack_128 -
                        fStack_124 * (float)uStack_150);
  uStack_150 = uVar1;
  D3DXVec3Normalize(&piStack_104,&stack0xffffff20);
  piStack_158 = (int *)((float)pcStack_108 * (float)piStack_128 -
                       (float)piStack_104 * (float)pcStack_12c);
  fStack_154 = (float)piStack_104 * fStack_130 - (float)piStack_128 * fStack_10c;
  piStack_ec = (int *)((float)pcStack_12c * fStack_10c - (float)pcStack_108 * fStack_130);
  uStack_150 = CONCAT44(uStack_150._4_4_,piStack_ec);
  uStack_f4 = CONCAT44(fStack_154,piStack_158);
  D3DXVec3Normalize(&stack0xffffff24,&uStack_f4);
  if (piStack_11c != (int *)0x0) {
    piStack_158 = *(int **)(param_2 + 0x100);
    uStack_160 = *(undefined8 *)(param_2 + 0xf8);
    (**(code **)(*param_1 + 0x80))(param_1,piStack_11c,&uStack_160,3);
  }
  if (piStack_128 != (int *)0x0) {
    piStack_158 = *(int **)(param_2 + 0x100);
    uStack_160 = *(undefined8 *)(param_2 + 0xf8);
    (**(code **)(*param_1 + 0x80))(param_1,piStack_128,&uStack_160,3);
  }
  if (pcStack_120 != (char *)0x0) {
    (**(code **)(*param_1 + 0x80))(param_1,pcStack_120,&pcStack_114,3);
  }
  if (iStack_118 != 0) {
    (**(code **)(*param_1 + 0x80))(param_1,iStack_118,(int)&uStack_13c + 4,3);
  }
  if (fStack_124 != 0.0) {
    (**(code **)(*param_1 + 0x80))(param_1,fStack_124,&pcStack_e4,3);
  }
  pcVar3 = pcStack_12c;
  if (pcStack_12c != (char *)0x0) {
    uStack_160 = CONCAT44(DAT_00f092dc,DAT_00f092dc);
    piStack_158 = (int *)DAT_00f17898;
    D3DXVec3Normalize(&fStack_154,&uStack_160);
    (**(code **)(*param_1 + 0x80))(param_1,pcVar3,(int)&uStack_160 + 4,3);
  }
  if (pcStack_144 != (char *)0x0) {
    pcVar2 = *(code **)(*param_1 + 0x98);
    puVar5 = (undefined4 *)(param_3 + 0x1a4);
    puVar7 = (undefined4 *)&stack0xffffff28;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    (*pcVar2)(param_1,pcStack_144,&stack0xffffff28);
  }
  if ((float)uStack_13c != 0.0) {
    puVar5 = (undefined4 *)(**(code **)(*(int *)(param_3 + 0x1c) + 0x16c))();
    puVar7 = (undefined4 *)&stack0xffffff28;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    (**(code **)(*param_1 + 0x98))(param_1,(float)uStack_13c,&stack0xffffff28);
  }
  if (piStack_140 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*(int *)(param_3 + 0x1c) + 0x170))();
    puVar7 = (undefined4 *)&stack0xffffff28;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    (**(code **)(*param_1 + 0x98))(param_1,piStack_140,&stack0xffffff28);
  }
  if (fStack_148 != 0.0) {
    pcVar2 = *(code **)(*param_1 + 0x98);
    puVar5 = (undefined4 *)(param_3 + 0x264);
    puVar7 = (undefined4 *)&stack0xffffff28;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    (*pcVar2)(param_1,fStack_148,&stack0xffffff28);
  }
  return;
}

