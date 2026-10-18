// FUN_00a3bdc0 @ 00a3bdc0 body=[[00a3bdc0, 00a3be64] [00a3be68, 00a3c0e7]]


void FUN_00a3bdc0(int param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  int *unaff_ESI;
  int *piVar7;
  char *pcStack_d0;
  float fStack_cc;
  int iStack_c8;
  int *piStack_c4;
  char *pcStack_c0;
  float *pfStack_bc;
  int *piStack_b8;
  undefined4 uStack_b4;
  char *pcStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  void *pvStack_8c;
  uint uStack_88;
  float afStack_70 [6];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4896b;
  pvStack_14 = ExceptionList;
  piStack_b8 = *(int **)(param_1 + 100);
  uStack_b4 = DAT_01258b54;
  pfStack_bc = (float *)0xa3bdfb;
  ExceptionList = &pvStack_14;
  (**(code **)(*piStack_b8 + 0x15c))();
  pfStack_bc = (float *)0x8;
  pcStack_c0 = "barchart";
  uStack_88 = 0xf;
  pvStack_8c = (void *)0x0;
  fStack_9c = (float)((uint)fStack_9c & 0xffffff00);
  piStack_c4 = (int *)0xa3be1e;
  FUN_00409350();
  pfStack_bc = &fStack_9c;
  pvStack_14 = (void *)0x0;
  pcStack_c0 = (char *)0xa3be35;
  piVar3 = (int *)FUN_00a45090();
  if (*piVar3 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + *piVar3 * 4);
  }
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_88) {
    pfStack_bc = (float *)fStack_9c;
                    /* WARNING: Subroutine does not return */
    pcStack_c0 = &UNK_00a3be65;
    FUN_00aae91b();
  }
  pcStack_a4 = *(char **)(param_1 + 0x6b9c0);
  afStack_70[0] = 2.0 / (float)*(int *)(param_1 + 0x6b9bc);
  uStack_38 = 0;
  uStack_44 = 0;
  uStack_4c = 0;
  afStack_70[5] = -2.0 / (float)*(int *)(param_1 + 0x6b9c0);
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  afStack_70[4] = 0.0;
  afStack_70[3] = 0.0;
  afStack_70[2] = 0.0;
  afStack_70[1] = 0.0;
  pfStack_bc = afStack_70;
  uStack_88 = 0xf;
  pvStack_8c = (void *)0x0;
  fStack_9c = (float)((uint)fStack_9c & 0xffffff00);
  uStack_34 = DAT_00f092fc;
  uStack_48 = DAT_00f092fc;
  uStack_40 = DAT_00f092dc;
  uStack_3c = DAT_00f092fc;
  pcStack_c0 = "InverseView";
  iStack_c8 = 0xa3bf5d;
  piStack_c4 = piVar3;
  (**(code **)(*piVar3 + 0x98))();
  fStack_cc = (float)unaff_ESI[0x54];
  iStack_c8 = unaff_ESI[0x55] - (int)fStack_cc >> 4;
  pcStack_d0 = "vColorBarheight";
  (**(code **)(*piVar3 + 0x90))(piVar3);
  iVar6 = unaff_ESI[0x55] - unaff_ESI[0x54] >> 4;
  fVar2 = (float)iVar6;
  if (iVar6 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  piStack_c4 = (int *)(20.0 / fVar2);
  pfVar4 = (float *)(**(code **)(*unaff_ESI + 0xd4))(&uStack_4c);
  fStack_cc = *pfVar4;
  iVar6 = (**(code **)(*unaff_ESI + 0xd4))(&uStack_48);
  uStack_a0 = *(undefined4 *)(iVar6 + 4);
  fStack_98 = (float)(int)*(short *)((int)unaff_ESI + 0x14e);
  fStack_9c = (float)(int)(short)unaff_ESI[0x53] * fStack_cc;
  pcStack_a4 = pcStack_d0;
  pcStack_d0 = (char *)(int)(short)unaff_ESI[0x53];
  (**(code **)(*piVar3 + 0x88))(piVar3,"vScreenPosWidthHeight",&pcStack_a4);
  pcStack_d0 = (char *)0x0;
  (**(code **)(*piVar3 + 0xfc))(piVar3,&pcStack_d0,0);
  (**(code **)(*piVar3 + 0x100))(piVar3,0);
  piVar5 = *(int **)(param_1 + 100);
  iVar6 = unaff_ESI[0x55];
  iVar1 = unaff_ESI[0x54];
  if (DAT_0132cea8 != 0) {
    (**(code **)(*piVar5 + 0x164))(piVar5,DAT_0132cea8);
  }
  piVar7 = (int *)0x0;
  (**(code **)(*piVar5 + 400))(piVar5,0,DAT_0132ce8c,0,DAT_0132cea4);
  (**(code **)(*piVar7 + 0x144))(piVar7,4,0,(iVar6 - iVar1 >> 4) * 2);
  (**(code **)(*piVar3 + 0x108))(piVar3);
  (**(code **)(*piVar3 + 0x10c))(piVar3);
  ExceptionList = pvStack_8c;
  return;
}

