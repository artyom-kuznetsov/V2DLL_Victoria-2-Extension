// FUN_00a54340 @ 00a54340 body=[[00a54340, 00a5439c] [00a543a0, 00a5441f] [00a54423, 00a54774]]


void FUN_00a54340(int param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  int iStack_e4;
  int iStack_e0;
  int *piStack_dc;
  char *pcStack_d8;
  float *pfStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  uint local_a8;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
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
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4e168;
  local_14 = ExceptionList;
  if (param_2[0x59] - param_2[0x58] >> 4 == 0) {
    piStack_cc = param_2 + 0x54;
    piStack_d0 = param_2;
    pfStack_d4 = (float *)param_1;
    pcStack_d8 = (char *)0xa5475d;
    ExceptionList = &local_14;
    FUN_00a54000();
    ExceptionList = local_14;
    return;
  }
  local_a8 = 0;
  ExceptionList = &local_14;
  do {
    piStack_d0 = *(int **)(param_1 + 100);
    piStack_cc = DAT_01258b60;
    pfStack_d4 = (float *)0xa543ba;
    (**(code **)(*piStack_d0 + 0x15c))();
    pfStack_d4 = (float *)0x9;
    pcStack_d8 = "linechart";
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    piStack_dc = (int *)0xa543db;
    FUN_00409350();
    pfStack_d4 = (float *)auStack_8c;
    local_14 = (void *)0x0;
    pcStack_d8 = (char *)0xa543f0;
    piVar2 = (int *)FUN_00a45090();
    if (*piVar2 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + *piVar2 * 4);
    }
    local_14 = (void *)0xffffffff;
    if (0xf < uStack_78) {
      pfStack_d4 = (float *)auStack_8c[0];
                    /* WARNING: Subroutine does not return */
      pcStack_d8 = &UNK_00a54420;
      FUN_00aae91b();
    }
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
    pfStack_d4 = afStack_70;
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    uStack_34 = DAT_00f092fc;
    uStack_48 = DAT_00f092fc;
    uStack_40 = DAT_00f092dc;
    uStack_3c = DAT_00f092fc;
    pcStack_d8 = "InverseView";
    iStack_e0 = 0xa5452a;
    piStack_dc = piVar2;
    (**(code **)(*piVar2 + 0x98))();
    iStack_e4 = *(int *)((int)piStack_cc + unaff_EDI);
    iStack_e0 = *(int *)((int)piStack_cc + unaff_EDI + 4) - iStack_e4 >> 4;
    piStack_e8 = (int *)0xe4192c;
    pcStack_f0 = (char *)0xa54556;
    piStack_ec = piVar2;
    (**(code **)(*piVar2 + 0x90))();
    pcStack_f0 = "bIsOutline";
    piVar7 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,0);
    if (iVar3 != 0) {
      (**(code **)(*piVar2 + 0x58))(piVar2,iVar3,*(undefined1 *)(param_2[0x5d] + 0x85));
    }
    puVar6 = &uStack_50;
    puVar4 = (undefined4 *)(**(code **)(*param_2 + 0xd4))();
    piStack_cc = (int *)*puVar4;
    iVar3 = (**(code **)(*param_2 + 0xd4))(afStack_70 + 5);
    unaff_EDI = *(int *)(iVar3 + 4);
    piStack_cc = piStack_d0;
    (**(code **)(*piVar2 + 0x88))(piVar2,"vScreenPosWidthHeight",&piStack_cc);
    pcStack_d8 = *(char **)(param_2[0x5d] + 0x80);
    iVar3 = *piStack_e8 - *(int *)((int)puVar6 + (int)piVar7) >> 4;
    fVar1 = (float)iVar3;
    if (iVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    pfStack_d4 = (float *)((float)(int)(short)param_2[0x53] / fVar1);
    (**(code **)(*piVar2 + 0x88))(piVar2,"vHalfLineWidthScale",&pcStack_d8);
    pcStack_f0 = (char *)0x0;
    (**(code **)(*piVar2 + 0xfc))(piVar2,&pcStack_f0);
    uVar5 = 0;
    (**(code **)(*piVar2 + 0x100))(piVar2,0);
    piVar7 = *(int **)(param_1 + 100);
    if (DAT_013f054c != 0) {
      (**(code **)(*piVar7 + 0x164))(piVar7,DAT_013f054c);
    }
    (**(code **)(*piVar7 + 400))(piVar7,0,DAT_013f0530,0,DAT_013f0548);
    (**(code **)(*piVar7 + 0x144))(piVar7,4,0,uVar5);
    (**(code **)(*piVar2 + 0x108))(piVar2);
    (**(code **)(*piVar2 + 0x10c))(piVar2);
    local_a8 = local_a8 + 1;
  } while (local_a8 < (uint)(param_2[0x59] - param_2[0x58] >> 4));
  ExceptionList = local_14;
  return;
}

