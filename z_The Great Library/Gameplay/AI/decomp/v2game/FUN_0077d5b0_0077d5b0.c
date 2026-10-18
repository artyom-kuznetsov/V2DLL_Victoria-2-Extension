// FUN_0077d5b0 @ 0077d5b0 body=[[0077d5b0, 0077de9b] [0077de9f, 0077e352] [0077e356, 0077e393] [0077e397, 0077e3de] [0077e3e2, 0077e506] [0077e50a, 0077e542] [0077e546, 0077e583] [0077e587, 0077e5cf] [0077e5d3, 0077e606] [0077e60a, 0077e61e]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0077d5b0(void)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 ***pppuVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 ****ppppuVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  char ****ppppcVar13;
  char *pcVar14;
  int in_ECX;
  code *pcVar15;
  undefined4 ****ppppuVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  char ****ppppcStack_188;
  char ****ppppcStack_184;
  undefined4 ****ppppuStack_170;
  undefined4 ****ppppuStack_16c;
  undefined4 **ppuStack_168;
  uint uStack_164;
  undefined4 ****ppppuStack_160;
  int local_15c;
  undefined4 ****ppppuStack_158;
  int iStack_154;
  undefined4 ****appppuStack_150 [2];
  uint uStack_148;
  uint local_144;
  undefined4 ****ppppuStack_140;
  undefined4 ****ppppuStack_13c;
  undefined4 ****ppppuStack_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 ****appppuStack_124 [4];
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 ****appppuStack_108 [4];
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 ****appppuStack_dc [4];
  undefined4 uStack_cc;
  uint uStack_c8;
  undefined4 ****appppuStack_c0 [4];
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 ****appppuStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  undefined1 auStack_88 [28];
  undefined1 auStack_6c [28];
  undefined1 auStack_50 [28];
  undefined4 ***apppuStack_34 [8];
  void *local_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b7b3ae;
  local_14 = ExceptionList;
  local_144 = 0;
  if (*(int *)(in_ECX + 0x10) == 0) {
    return;
  }
  local_15c = in_ECX;
  if (*(char *)(in_ECX + 0x158) == '\0') {
LAB_0077d60d:
    ExceptionList = &local_14;
    if (*(char *)((int)*(int **)(in_ECX + 0x30) + 0x4f) != '\0') {
      pcVar15 = *(code **)(**(int **)(in_ECX + 0x30) + 0x104);
LAB_0077d61e:
      ppppcStack_184 = (char ****)0x77d620;
      ExceptionList = &local_14;
      (*pcVar15)();
    }
  }
  else {
    if (*(char *)((int)*(int **)(in_ECX + 0x30) + 0x4f) == '\0') {
      pcVar15 = *(code **)(**(int **)(in_ECX + 0x30) + 0x108);
      goto LAB_0077d61e;
    }
    ExceptionList = &local_14;
    if (*(char *)(in_ECX + 0x158) == '\0') goto LAB_0077d60d;
  }
  ppppcStack_184 = (char ****)0x77d62b;
  iVar4 = FUN_00967f50();
  if (iVar4 != 0) {
    if (*(char *)(in_ECX + 0x1b0) == '\0') {
      ppppcStack_184 = (char ****)0x77d66e;
      iStack_130 = FUN_00967f50();
      iVar4 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c);
      ppppuStack_160 = *(undefined4 *****)(iVar4 + 0x10);
      if ((undefined4 ****)*(int *)(in_ECX + 0xc) == ppppuStack_160) {
        ppppuStack_160 = *(undefined4 *****)(iVar4 + 0x14);
      }
      iVar4 = *(int *)((int)ppppuStack_160 + 0x6c);
      iVar10 = 0;
      ppppuVar16 = ppppuStack_160;
      if (0 < (int)(*(int *)((int)ppppuStack_160 + 0x70) - iVar4 & 0xfffffffcU)) {
        do {
          iVar4 = *(int *)(iVar4 + iVar10 * 4);
          ppppuStack_170 = *(undefined4 *****)(iVar4 + 0x34);
          ppppuStack_16c = *(undefined4 *****)(iVar4 + 0x38);
          if (ppppuStack_170 < (undefined4 ****)0x1269) {
            if (DAT_01258a98 == 0) goto LAB_0077d6f6;
            ppppcStack_184 = (char ****)0x77d6f0;
            iVar11 = FUN_009c1d40();
            ppppuVar16 = ppppuStack_160;
          }
          else if (DAT_01258a94 == 0) {
LAB_0077d6f6:
            iVar11 = 0;
          }
          else {
            ppppcStack_184 = (char ****)0x77d6d2;
            iVar11 = FUN_009c1d40();
            ppppuVar16 = ppppuStack_160;
          }
          *(int *)(iVar4 + 0x30) = iVar11;
          if ((iVar11 != 0) && (iVar11 == iStack_130)) {
            ppppcStack_184 = (char ****)0x77d773;
            cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0xc0))();
            if (cVar2 != '\0') {
              ppppcStack_184 = (char ****)0x77d784;
              (**(code **)(**(int **)(in_ECX + 0x34) + 0xb8))();
            }
            goto LAB_0077d74b;
          }
          iVar4 = *(int *)((int)ppppuVar16 + 0x6c);
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)((int)ppppuVar16 + 0x70) - iVar4 >> 2);
      }
      ppppcStack_184 = (char ****)0x77d722;
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0xc0))();
      if (cVar2 == '\0') {
        ppppcStack_184 = (char ****)0x77d733;
        (**(code **)(**(int **)(in_ECX + 0x34) + 0xbc))();
      }
      if (*(char *)(in_ECX + 0x158) != '\0') {
        ppppcStack_184 = (char ****)(in_ECX + -0x1c);
        ppppcStack_188 = (char ****)0x77d74b;
        FUN_00780710();
      }
    }
    else {
      ppppcStack_184 = (char ****)0x77d649;
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0xc0))();
      if (cVar2 == '\0') {
        ppppcStack_184 = (char ****)0x77d65e;
        (**(code **)(**(int **)(in_ECX + 0x34) + 0xbc))();
      }
    }
  }
LAB_0077d74b:
  if (*(char *)(in_ECX + 0x4c) == '\0') {
    ppppcStack_184 = (char ****)0x77d75e;
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0xc0))();
    if (cVar2 != '\0') goto LAB_0077d786;
    uVar3 = 1;
  }
  else {
LAB_0077d786:
    uVar3 = 0;
  }
  *(undefined1 *)(in_ECX + 0xd0) = uVar3;
  if (*(char *)(in_ECX + 0x4c) == '\0') {
LAB_0077d7a9:
    uVar3 = 0;
  }
  else {
    ppppcStack_184 = (char ****)0x77d7a1;
    cVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0xc0))();
    if (cVar2 != '\0') goto LAB_0077d7a9;
    uVar3 = 1;
  }
  *(undefined1 *)(in_ECX + 0x154) = uVar3;
  if (*(char *)(in_ECX + 0x4c) == '\0') {
    ppppuStack_138 = (undefined4 ****)(in_ECX + 0x50);
    iStack_e8 = in_ECX + 0xd4;
    uStack_e4 = *(undefined4 *)(in_ECX + 0x14);
    uStack_ec = *(undefined4 *)(in_ECX + 0x18);
    uStack_e0 = *(undefined4 *)(in_ECX + 0x1c);
    iStack_130 = *(undefined4 *)(in_ECX + 0x20);
  }
  else {
    ppppuStack_138 = (undefined4 ****)(in_ECX + 0xd4);
    iStack_e8 = in_ECX + 0x50;
    uStack_e4 = *(undefined4 *)(in_ECX + 0x18);
    uStack_ec = *(undefined4 *)(in_ECX + 0x14);
    uStack_e0 = *(undefined4 *)(in_ECX + 0x20);
    iStack_130 = *(undefined4 *)(in_ECX + 0x1c);
  }
  ppppuStack_158 = *(undefined4 *****)(*(int *)(in_ECX + 0x10) + 0x68);
  uVar18 = 0;
  ppppcStack_184 = (char ****)0x0;
  ppppuVar16 = (undefined4 ****)0x0;
  ppppcStack_188 = (char ****)&DAT_00ded94d;
  ppppuStack_160 = (undefined4 ****)0x0;
  ppppuStack_13c = (undefined4 ****)0x0;
  uStack_148 = CONCAT31(uStack_148._1_3_,1);
  uStack_164 = CONCAT31(uStack_164._1_3_,1);
  ppppuStack_140 = (undefined4 ****)0x0;
  uStack_ac = 0xf;
  uStack_b0 = 0;
  appppuStack_c0[0] = (undefined4 ****)((uint)appppuStack_c0[0] & 0xffffff00);
  FUN_00409350();
  uStack_c = 0;
  iStack_134 = 0;
  ppppcStack_184 = (char ****)0x77d8b5;
  iVar4 = FUN_00967f50();
  if (iVar4 == 0) {
    uStack_164 = uStack_164 & 0xffffff00;
    uStack_148 = uStack_148 & 0xffffff00;
  }
  else {
    iVar4 = *(int *)(local_15c + 0x10);
    ppppuStack_170 = *(undefined4 *****)(iVar4 + 0xc);
    ppppuStack_16c = *(undefined4 *****)(iVar4 + 0x10);
    appppuStack_150[0] = (undefined4 ****)(iVar4 + 8);
    iVar4 = DAT_01258a94;
    if (ppppuStack_170 < (undefined4 ****)0x1269) {
      iVar4 = DAT_01258a98;
    }
    if (iVar4 == 0) {
      pppuVar5 = (undefined4 ***)0x0;
    }
    else {
      ppppcStack_184 = (char ****)0x77d8fa;
      pppuVar5 = (undefined4 ***)FUN_009c1d40();
    }
    *appppuStack_150[0] = pppuVar5;
    ppppuStack_140 = (undefined4 ****)pppuVar5[0xe][0x93];
    ppppcStack_184 = (char ****)0x0;
    ppppcStack_188 = (char ****)appppuStack_150;
    piVar6 = (int *)(*(code *)(*pppuVar5)[0xc])();
    if (0 < *piVar6) {
      ppuStack_168 = pppuVar5[0xf];
      piVar6 = (int *)(*(code *)(*pppuVar5)[0xc])(&ppppuStack_158,0);
      ppppuVar9 = (undefined4 ****)*piVar6;
      if (ppppuVar9 == (undefined4 ****)0x0) {
        ppuStack_168 = (undefined4 **)0xffffffff;
      }
      else if ((char *)((int)ppuStack_168 + 0x189373) < (char *)0x39580e) {
        ppuStack_168 = (undefined4 **)(((int)ppuStack_168 * 1000) / (int)ppppuVar9);
      }
      else {
        iStack_154 = (int)ppppuVar9 >> 0x1f;
        ppppuStack_158 = ppppuVar9;
        uVar19 = __allmul(ppuStack_168,(int)ppuStack_168 >> 0x1f,1000,0);
        ppuStack_168 = (undefined4 **)__alldiv(uVar19,ppppuStack_158,iStack_154);
      }
    }
    piVar6 = (int *)(*(code *)(*pppuVar5)[0xd])(&ppppuStack_158,0);
    if (0 < *piVar6) {
      if ((pppuVar5[0x1d] == (undefined4 **)0x0) || (*(char *)(pppuVar5[0x1d] + 0x59) == '\0')) {
        ppppuStack_13c = (undefined4 ****)pppuVar5[0x10];
      }
      else {
        ppppuStack_13c = (undefined4 ****)0x0;
      }
      ppppcStack_184 = (char ****)0x0;
      ppppcStack_188 = (char ****)appppuStack_150;
      puVar7 = (uint *)(*(code *)(*pppuVar5)[0xd])();
      appppuStack_150[0] = (undefined4 ****)*puVar7;
      if (appppuStack_150[0] == (undefined4 ****)0x0) {
        ppppuStack_13c = (undefined4 ****)0xffffffff;
      }
      else if (((int)ppppuStack_13c < -0x189373) || (0x20c49a < (int)ppppuStack_13c)) {
        ppppcStack_184 = (char ****)0x0;
        ppppcStack_188 = (char ****)0x3e8;
        ppppuStack_16c = (undefined4 ****)((int)appppuStack_150[0] >> 0x1f);
        ppppuStack_170 = appppuStack_150[0];
        uVar19 = __allmul(ppppuStack_13c,(int)ppppuStack_13c >> 0x1f);
        ppppcStack_184 = (char ****)ppppuStack_16c;
        ppppcStack_188 = (char ****)ppppuStack_170;
        ppppuStack_13c = (undefined4 ****)__alldiv(uVar19);
        ppppuStack_16c = (undefined4 ****)((int)ppppuStack_13c >> 0x1f);
      }
      else {
        ppppuStack_13c = (undefined4 ****)(((int)ppppuStack_13c * 1000) / (int)appppuStack_150[0]);
      }
    }
  }
  iVar4 = *(int *)(local_15c + 0x10);
  switch(*(undefined4 *)(iVar4 + 0x5c)) {
  case 1:
    ppppcStack_188 = *(char *****)(iVar4 + 100);
    ppppcStack_184 = (char ****)0x2;
    appppuStack_150[0] = &ppppcStack_188;
    ppppuVar16 = (undefined4 ****)(1000 - *(int *)(iVar4 + 0x58));
    uVar18 = 1;
    ppppuVar9 = (undefined4 ****)FUN_00988a50(auStack_6c);
    uStack_c._0_1_ = 4;
    ppppcStack_188 = *(char *****)(*(int *)(local_15c + 0x10) + 0x60);
    ppppcStack_184 = (char ****)0x2;
    appppuStack_150[0] = &ppppcStack_188;
    uVar8 = FUN_00988a50(auStack_50);
    ppppcStack_188 = (char ****)&DAT_00e15680;
    uStack_c._0_1_ = 5;
    ppppcStack_184 = (char ****)ppppuVar9;
    uVar8 = FUN_0043ec10(auStack_88,&DAT_00dff614,uVar8);
    ppppcStack_184 = (char ****)0xffffffff;
    ppppcStack_188 = (char ****)0x0;
    uStack_c._0_1_ = 6;
    FUN_00408ed0(uVar8);
    ppppcStack_184 = (char ****)0x77dc27;
    FUN_00408ad0();
    ppppcStack_184 = (char ****)0x77dc33;
    FUN_00408ad0();
    uStack_c = (uint)uStack_c._1_3_ << 8;
    ppppcStack_184 = (char ****)0x77dc47;
    FUN_00408ad0();
    ppppcStack_184 = (char ****)0x77dc56;
    iVar4 = FUN_00967f50();
    if (iVar4 != 0) {
      ppppcStack_188 = *(char *****)(local_15c + 0x10);
      ppppcStack_184 = (char ****)&ppppuStack_170;
      piVar6 = (int *)FUN_00596fd0();
      iStack_134 = *piVar6;
    }
    goto switchD_0077da8d_default;
  case 2:
    ppppcStack_184 = (char ****)appppuStack_124;
    uVar18 = 0;
    ppppuVar16 = (undefined4 ****)(1000 - *(int *)(iVar4 + 0x58));
    uStack_164 = CONCAT31(uStack_164._1_3_,1);
    ppppcStack_188 = (char ****)0x77db1b;
    uVar8 = FUN_00475d50();
    ppppcStack_184 = (char ****)0xffffffff;
    ppppcStack_188 = (char ****)0x0;
    uStack_c = CONCAT31(uStack_c._1_3_,2);
    FUN_00408ed0(uVar8);
    break;
  case 3:
    ppppcStack_184 = (char ****)appppuStack_108;
    uVar18 = 0;
    ppppuVar16 = (undefined4 ****)(1000 - *(int *)(iVar4 + 0x58));
    uStack_164 = (uint)uStack_164._1_3_ << 8;
    ppppcStack_188 = (char ****)0x77db5f;
    uVar8 = FUN_00475d50();
    ppppcStack_184 = (char ****)0xffffffff;
    ppppcStack_188 = (char ****)0x0;
    uStack_c = CONCAT31(uStack_c._1_3_,3);
    FUN_00408ed0(uVar8);
    break;
  case 4:
    ppppcStack_184 = (char ****)apppuStack_34;
    uVar18 = 3;
    ppppuVar16 = (undefined4 ****)(1000 - *(int *)(iVar4 + 0x58));
    uStack_164 = (uint)uStack_164._1_3_ << 8;
    ppppcStack_188 = (char ****)0x77dc9a;
    uVar8 = FUN_00475d50();
    ppppcStack_184 = (char ****)0xffffffff;
    ppppcStack_188 = (char ****)0x0;
    uStack_c = CONCAT31(uStack_c._1_3_,7);
    FUN_00408ed0(uVar8);
    break;
  case 5:
    uVar18 = 2;
    ppppuVar16 = (undefined4 ****)(1000 - *(int *)(iVar4 + 0x58));
    uStack_164 = (uint)uStack_164._1_3_ << 8;
    uStack_148 = (uint)uStack_148._1_3_ << 8;
    goto switchD_0077da8d_default;
  case 6:
    ppppcStack_184 = (char ****)appppuStack_dc;
    uVar18 = 4;
    uStack_164 = (uint)uStack_164._1_3_ << 8;
    uStack_148 = (uint)uStack_148._1_3_ << 8;
    ppppcStack_188 = (char ****)0x77dad3;
    uVar8 = FUN_00475d50();
    ppppcStack_184 = (char ****)0xffffffff;
    ppppcStack_188 = (char ****)0x0;
    uStack_c = CONCAT31(uStack_c._1_3_,1);
    FUN_00408ed0(uVar8);
    break;
  default:
    goto switchD_0077da8d_default;
  }
  uStack_c = uStack_c & 0xffffff00;
  ppppcStack_184 = (char ****)0x77dcca;
  FUN_00408ad0();
switchD_0077da8d_default:
  ppppuStack_140 = (undefined4 ****)((int)ppppuStack_140 + (int)ppppuVar16);
  appppuStack_150[0] = ppppuVar16;
  if (*(char *)(local_15c + 0x4c) != '\0') {
    appppuStack_150[0] = (undefined4 ****)-(int)ppppuVar16;
  }
  ppppuStack_170 = &ppppcStack_184;
  ppppcStack_184 = (char ****)appppuStack_150[0];
  ppppcStack_188 = (char ****)ppppuStack_158;
  FUN_0077cc30(uVar18);
  ppppcStack_184 = (char ****)ppppuStack_13c;
  ppppuStack_170 = &ppppcStack_188;
  ppppcStack_188 = (char ****)ppppuStack_160;
  FUN_0077cab0(uStack_148);
  if (*(char *)(local_15c + 0x4c) != '\0') {
    ppppuVar16 = (undefined4 ****)-(int)ppppuVar16;
  }
  ppppuStack_170 = &ppppcStack_184;
  ppppcStack_188 = (char ****)(uint)(0 < iStack_134);
  ppppcStack_184 = (char ****)ppppuVar16;
  ppppuStack_158 = ppppuVar16;
  FUN_0077ca20();
  iVar4 = local_15c;
  if (*(char *)(local_15c + 0x4c) == '\0') {
    ppppuStack_158 = ppppuStack_140;
  }
  else {
    ppppuStack_158 = (undefined4 ****)-(int)ppppuStack_140;
  }
  ppppuStack_170 = &ppppcStack_184;
  ppppcStack_184 = (char ****)ppppuStack_158;
  ppppcStack_188 = (char ****)(uint)*(byte *)(local_15c + 0x4c);
  FUN_0077d500(uStack_164);
  ppppcStack_184 = (char ****)0x0;
  ppppcStack_188 = (char ****)&DAT_00ded94d;
  uStack_164 = 5;
  appppuStack_150[0] = (undefined4 ****)0xffffffff;
  ppppuStack_138 = (undefined4 ****)0x0;
  ppppuStack_160 = (undefined4 ****)0x0;
  ppppuStack_13c = (undefined4 ****)0x0;
  uStack_148 = uStack_148 & 0xffffff00;
  uStack_90 = 0xf;
  uStack_94 = 0;
  appppuStack_a4[0] = (undefined4 ****)((uint)appppuStack_a4[0] & 0xffffff00);
  FUN_00409350();
  uStack_c = CONCAT31(uStack_c._1_3_,8);
  ppppuStack_140 = (undefined4 ****)0x0;
  ppppuStack_170 = (undefined4 ****)0x2d2d2d;
  uStack_12c = (undefined4 ***)0x2d2d2d;
  iStack_128 = 0;
  ppppcStack_184 = (char ****)0x77de19;
  iVar10 = FUN_00967f50();
  if (iVar10 == 0) goto LAB_0077e169;
  ppppuStack_170 = *(undefined4 *****)(*(int *)(iVar4 + 0x10) + 0x34);
  ppppuStack_16c = *(undefined4 *****)(*(int *)(iVar4 + 0x10) + 0x38);
  uStack_148 = CONCAT31(uStack_148._1_3_,1);
  iVar10 = DAT_01258a94;
  if (ppppuStack_170 < (char ***)0x1269) {
    iVar10 = DAT_01258a98;
  }
  if (iVar10 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    ppppcStack_184 = (char ****)0x77de58;
    piVar6 = (int *)FUN_009c1d40();
  }
  ppppcStack_184 = (char ****)appppuStack_124;
  ppppcStack_188 = (char ****)0x77de6a;
  uVar18 = (**(code **)(*piVar6 + 0x20))();
  ppppcStack_184 = (char ****)0xffffffff;
  ppppcStack_188 = (char ****)0x0;
  uStack_c._0_1_ = 9;
  FUN_00408ed0(uVar18);
  iVar10 = DAT_01258a94;
  uStack_c = CONCAT31(uStack_c._1_3_,8);
  if (0xf < uStack_110) {
    ppppcStack_184 = (char ****)appppuStack_124[0];
                    /* WARNING: Subroutine does not return */
    ppppcStack_188 = (char ****)&UNK_0077de9c;
    FUN_00aae91b();
  }
  ppppuStack_170 = *(undefined4 *****)(*(int *)(iVar4 + 0x10) + 0x34);
  ppppuStack_16c = *(undefined4 *****)(*(int *)(iVar4 + 0x10) + 0x38);
  uStack_110 = 0xf;
  uStack_114 = 0;
  appppuStack_124[0] = (undefined4 ****)((uint)appppuStack_124[0] & 0xffffff00);
  if (ppppuStack_170 < (char ***)0x1269) {
    if (DAT_01258a98 == 0) goto LAB_0077def9;
    ppppcStack_184 = (char ****)0x77def7;
    iVar11 = FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_0077def9:
    iVar11 = 0;
  }
  else {
    ppppcStack_184 = (char ****)0x77dee8;
    iVar11 = FUN_009c1d40();
  }
  uStack_12c = *(undefined4 ****)(*(int *)(iVar11 + 0x74) + 0xc0);
  iVar1 = *(int *)(iVar4 + 0x10);
  iStack_128 = *(int *)(*(int *)(iVar11 + 0x74) + 0xc4);
  ppppuStack_170 = *(undefined4 *****)(iVar1 + 0x34);
  ppppuStack_16c = *(undefined4 *****)(iVar1 + 0x38);
  if (ppppuStack_170 < (char ***)0x1269) {
    if (DAT_01258a98 == 0) goto LAB_0077df55;
    ppppcStack_184 = (char ****)0x77df53;
    ppppcStack_184 = (char ****)FUN_009c1d40();
  }
  else if (iVar10 == 0) {
LAB_0077df55:
    ppppcStack_184 = (char ****)0x0;
  }
  else {
    ppppcStack_184 = (char ****)0x77df39;
    ppppcStack_184 = (char ****)FUN_009c1d40();
  }
  *(char *****)(iVar1 + 0x30) = ppppcStack_184;
  ppppcStack_188 = (char ****)0x77df76;
  ppppuVar16 = (undefined4 ****)FUN_00598ed0();
  if (ppppuVar16 != (undefined4 ****)0x0) {
    uStack_164 = 0;
    switch(ppppuVar16[0x17]) {
    case (undefined4 ***)0x1:
      ppppcStack_184 = (char ****)0x77dfcc;
      iVar10 = FUN_00967f50();
      if (iVar10 != 0) {
        ppppcStack_184 = (char ****)0x77dfdb;
        iVar10 = FUN_00967f50();
        if (iVar10 != 0) {
          ppppcStack_184 = (char ****)0x77dfea;
          ppppuStack_158 = (undefined4 ****)FUN_00967f50();
          ppppcStack_184 = (char ****)0x77dff6;
          ppppuVar9 = (undefined4 ****)FUN_00967f50();
          if (ppppuVar9 == ppppuStack_158) {
            ppppcStack_184 = (char ****)&ppppuStack_170;
            uStack_164 = 1;
            ppppcStack_188 = (char ****)ppppuVar16;
            piVar6 = (int *)FUN_00596fd0();
            ppppuStack_140 = (undefined4 ****)*piVar6;
          }
        }
      }
      break;
    case (undefined4 ***)0x4:
      uStack_164 = 3;
      break;
    case (undefined4 ***)0x5:
      uStack_164 = 2;
      uStack_148 = (uint)uStack_148._1_3_ << 8;
      break;
    case (undefined4 ***)0x6:
      uStack_164 = 4;
      uStack_148 = (uint)uStack_148._1_3_ << 8;
    }
    ppppcStack_184 = (char ****)0x77e020;
    piVar6 = (int *)FUN_00967f50();
    appppuStack_150[0] = *(undefined4 *****)(piVar6[0xe] + 0x2c);
    ppppuStack_138 = (undefined4 ****)(1000 - (int)ppppuVar16[0x16]);
    ppppcStack_184 = (char ****)0x0;
    ppppcStack_188 = (char ****)&ppppuStack_170;
    piVar12 = (int *)(**(code **)(*piVar6 + 0x30))();
    if (0 < *piVar12) {
      iVar10 = piVar6[0xf];
      piVar12 = (int *)(**(code **)(*piVar6 + 0x30))(&stack0xfffffe88,0);
      iVar11 = *piVar12;
      if (iVar11 == 0) {
        ppuStack_168 = (undefined4 **)0xffffffff;
      }
      else if (iVar10 + 0x189373U < 0x39580e) {
        ppuStack_168 = (undefined4 **)((iVar10 * 1000) / iVar11);
      }
      else {
        local_15c = iVar10 >> 0x1f;
        uVar19 = __allmul(iVar10,local_15c,1000,0);
        ppuStack_168 = (undefined4 **)__alldiv(uVar19,iVar11,iVar11 >> 0x1f);
      }
    }
    piVar12 = (int *)(**(code **)(*piVar6 + 0x34))(&stack0xfffffe88,0);
    if (0 < *piVar12) {
      if ((piVar6[0x1d] == 0) || (*(char *)(piVar6[0x1d] + 0x164) == '\0')) {
        iStack_134 = piVar6[0x10];
      }
      else {
        iStack_134 = 0;
      }
      ppppcStack_184 = (char ****)0x0;
      ppppcStack_188 = (char ****)&ppppuStack_170;
      piVar6 = (int *)(**(code **)(*piVar6 + 0x34))();
      ppppuVar16 = (undefined4 ****)*piVar6;
      if (ppppuVar16 == (undefined4 ****)0x0) {
        ppppuStack_13c = (undefined4 ****)0xffffffff;
      }
      else if ((iStack_134 < -0x189373) || (0x20c49a < iStack_134)) {
        ppppcStack_184 = (char ****)0x0;
        ppppcStack_188 = (char ****)0x3e8;
        ppppuStack_16c = (undefined4 ****)((int)ppppuVar16 >> 0x1f);
        uVar19 = __allmul(iStack_134,iStack_134 >> 0x1f);
        ppppcStack_184 = (char ****)ppppuStack_16c;
        ppppcStack_188 = (char ****)ppppuVar16;
        ppppuStack_13c = (undefined4 ****)__alldiv(uVar19);
        ppppuStack_16c = (undefined4 ****)((int)ppppuStack_13c >> 0x1f);
      }
      else {
        ppppuStack_13c = (undefined4 ****)((iStack_134 * 1000) / (int)ppppuVar16);
      }
    }
  }
LAB_0077e169:
  ppppuVar16 = ppppuStack_138;
  if (*(char *)(iVar4 + 0x4c) == '\0') {
    ppppuStack_158 = (undefined4 ****)-(int)ppppuStack_138;
  }
  else {
    ppppuStack_158 = ppppuStack_138;
  }
  ppppuStack_170 = &ppppcStack_184;
  ppppcStack_184 = (char ****)ppppuStack_158;
  ppppcStack_188 = (char ****)appppuStack_150[0];
  FUN_0077cc30(uStack_164);
  ppppcStack_184 = (char ****)ppppuStack_13c;
  ppppuStack_170 = &ppppcStack_188;
  ppppcStack_188 = (char ****)ppppuStack_160;
  FUN_0077cab0(uStack_148);
  if (*(char *)(iVar4 + 0x4c) == '\0') {
    ppppuVar16 = (undefined4 ****)-(int)ppppuVar16;
  }
  ppppuStack_170 = &ppppcStack_184;
  ppppcStack_188 = (char ****)(uint)(0 < (int)ppppuStack_140);
  ppppcStack_184 = (char ****)ppppuVar16;
  ppppuStack_158 = ppppuVar16;
  FUN_0077ca20();
  if (*(char *)(iVar4 + 0x4c) == '\0') {
    piVar6 = *(int **)(iVar4 + 0x2c);
  }
  else {
    piVar6 = *(int **)(iVar4 + 0x28);
  }
  if (*(char *)((int)piVar6 + 0x4f) != '\0') {
    ppppcStack_184 = (char ****)0x77e21d;
    (**(code **)(*piVar6 + 0x104))();
  }
  ppppcStack_184 = (char ****)0xffffffff;
  ppppcStack_188 = (char ****)0x0;
  ppppuVar16 = (undefined4 ****)(*(int *)(iVar4 + 0x10) + 0x6c);
  FUN_00408ed0(ppppuVar16);
  ppppcStack_184 = (char ****)0x0;
  ppppcStack_188 = (char ****)ppppuVar16;
  FUN_00a5ecc0();
  iVar4 = *(int *)(iVar4 + 0x10);
  if (*(int *)(iVar4 + 0x8c) == 0) {
    ppppcStack_184 = (char ****)0x0;
    ppppcStack_188 = (char ****)&DAT_00ded94d;
    uStack_f4 = 0xf;
    uStack_f8 = 0;
    appppuStack_108[0] = (undefined4 ****)((uint)appppuStack_108[0] & 0xffffff00);
    FUN_00409350();
    ppppcVar13 = (char ****)appppuStack_108;
    uStack_c = 0xc;
    uVar17 = 4;
  }
  else {
    ppppcStack_188 = (char ****)(iVar4 + 0x88);
    uStack_110 = 0xf;
    uStack_114 = 0;
    appppuStack_124[0] = (undefined4 ****)((uint)appppuStack_124[0] & 0xffffff00);
    ppppuVar16 = (undefined4 ****)ppppcStack_188;
    do {
      cVar2 = *(char *)ppppuVar16;
      ppppuVar16 = (undefined4 ****)((int)ppppuVar16 + 1);
    } while (cVar2 != '\0');
    ppppcStack_184 = (char ****)((int)ppppuVar16 - (iVar4 + 0x89));
    FUN_00409350();
    ppppcStack_184 = (char ****)appppuStack_124;
    uStack_c = CONCAT31(uStack_c._1_3_,10);
    local_144 = 1;
    ppppcStack_188 = (char ****)0x77e2ae;
    ppppcVar13 = (char ****)FUN_00988fa0();
    uStack_c = 0xb;
    uVar17 = 3;
  }
  ppppcStack_184 = (char ****)0xffffffff;
  ppppcStack_188 = (char ****)0x0;
  local_144 = uVar17;
  FUN_00408ed0(ppppcVar13);
  ppppcStack_184 = (char ****)0x0;
  ppppcStack_188 = ppppcVar13;
  FUN_00a5ecc0();
  if ((uVar17 & 4) != 0) {
    uVar17 = uVar17 & 0xfffffffb;
    local_144 = uVar17;
    if (0xf < uStack_f4) {
      ppppcStack_184 = (char ****)appppuStack_108[0];
                    /* WARNING: Subroutine does not return */
      ppppcStack_188 = (char ****)&UNK_0077e353;
      FUN_00aae91b();
    }
    uStack_f4 = 0xf;
    uStack_f8 = 0;
    appppuStack_108[0] = (undefined4 ****)((uint)appppuStack_108[0] & 0xffffff00);
  }
  if ((uVar17 & 2) != 0) {
    uVar17 = uVar17 & 0xfffffffd;
    local_144 = uVar17;
    if (0xf < uStack_c8) {
      ppppcStack_184 = (char ****)appppuStack_dc[0];
                    /* WARNING: Subroutine does not return */
      ppppcStack_188 = (char ****)&UNK_0077e394;
      FUN_00aae91b();
    }
    uStack_c8 = 0xf;
    uStack_cc = 0;
    appppuStack_dc[0] = (undefined4 ****)((uint)appppuStack_dc[0] & 0xffffff00);
  }
  uStack_c = 8;
  if (((uVar17 & 1) != 0) && (uVar17 = uVar17 & 0xfffffffe, local_144 = uVar17, 0xf < uStack_110)) {
    ppppcStack_184 = (char ****)appppuStack_124[0];
                    /* WARNING: Subroutine does not return */
    ppppcStack_188 = (char ****)&UNK_0077e3df;
    FUN_00aae91b();
  }
  ppppcStack_184 = (char ****)0xffffffff;
  ppppcStack_188 = (char ****)0x0;
  FUN_00408ed0(appppuStack_a4);
  ppppcStack_184 = (char ****)0x0;
  ppppcStack_188 = (char ****)appppuStack_a4;
  FUN_00a5ecc0();
  if (iStack_128 == 0) {
    ppppcStack_184 = (char ****)0x0;
    ppppcStack_188 = (char ****)&DAT_00ded94d;
    uStack_f4 = 0xf;
    uStack_f8 = 0;
    appppuStack_108[0] = (undefined4 ****)((uint)appppuStack_108[0] & 0xffffff00);
    FUN_00409350();
    ppppcVar13 = (char ****)appppuStack_108;
    uStack_c = 0xf;
    uVar17 = uVar17 | 0x20;
  }
  else {
    pcVar14 = (char *)&uStack_12c;
    uStack_110 = 0xf;
    uStack_114 = 0;
    appppuStack_124[0] = (undefined4 ****)((uint)appppuStack_124[0] & 0xffffff00);
    do {
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    ppppcStack_184 = (char ****)(pcVar14 + -((int)&uStack_12c + 1));
    ppppcStack_188 = (char ****)&uStack_12c;
    FUN_00409350();
    ppppcStack_184 = (char ****)appppuStack_124;
    uStack_c = CONCAT31(uStack_c._1_3_,0xd);
    local_144 = uVar17 | 8;
    ppppcStack_188 = (char ****)0x77e46e;
    ppppcVar13 = (char ****)FUN_00988fa0();
    uStack_c = 0xe;
    uVar17 = uVar17 | 0x18;
  }
  ppppcStack_184 = (char ****)0xffffffff;
  ppppcStack_188 = (char ****)0x0;
  local_144 = uVar17;
  FUN_00408ed0(ppppcVar13);
  ppppcStack_184 = (char ****)0x0;
  ppppcStack_188 = ppppcVar13;
  FUN_00a5ecc0();
  if ((uVar17 & 0x20) != 0) {
    uVar17 = uVar17 & 0xffffffdf;
    if (0xf < uStack_f4) {
      ppppcStack_184 = (char ****)appppuStack_108[0];
                    /* WARNING: Subroutine does not return */
      ppppcStack_188 = (char ****)&UNK_0077e507;
      FUN_00aae91b();
    }
    uStack_f4 = 0xf;
    uStack_f8 = 0;
    appppuStack_108[0] = (undefined4 ****)((uint)appppuStack_108[0] & 0xffffff00);
  }
  if ((uVar17 & 0x10) != 0) {
    uVar17 = uVar17 & 0xffffffef;
    if (0xf < uStack_c8) {
      ppppcStack_184 = (char ****)appppuStack_dc[0];
                    /* WARNING: Subroutine does not return */
      ppppcStack_188 = (char ****)&UNK_0077e543;
      FUN_00aae91b();
    }
    uStack_c8 = 0xf;
    uStack_cc = 0;
    appppuStack_dc[0] = (undefined4 ****)((uint)appppuStack_dc[0] & 0xffffff00);
  }
  uStack_c = 8;
  if (((uVar17 & 8) != 0) && (0xf < uStack_110)) {
    ppppcStack_184 = (char ****)appppuStack_124[0];
                    /* WARNING: Subroutine does not return */
    ppppcStack_188 = (char ****)&UNK_0077e584;
    FUN_00aae91b();
  }
  ppppcStack_184 = (char ****)0xffffffff;
  ppppcStack_188 = (char ****)0x0;
  FUN_00408ed0(appppuStack_c0);
  ppppcStack_184 = (char ****)0x0;
  ppppcStack_188 = (char ****)appppuStack_c0;
  FUN_00a5ecc0();
  if (0xf < uStack_90) {
    ppppcStack_184 = (char ****)appppuStack_a4[0];
                    /* WARNING: Subroutine does not return */
    ppppcStack_188 = (char ****)&UNK_0077e5d0;
    FUN_00aae91b();
  }
  uStack_90 = 0xf;
  uStack_94 = 0;
  appppuStack_a4[0] = (undefined4 ****)((uint)appppuStack_a4[0] & 0xffffff00);
  if (uStack_ac < 0x10) {
    ExceptionList = local_14;
    return;
  }
  ppppcStack_184 = (char ****)appppuStack_c0[0];
                    /* WARNING: Subroutine does not return */
  ppppcStack_188 = (char ****)&UNK_0077e607;
  FUN_00aae91b();
}

