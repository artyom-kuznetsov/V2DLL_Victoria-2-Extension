// FUN_0063f870 @ 0063f870 body=[[0063f870, 00640585]]


uint FUN_0063f870(int *param_1,int param_2,undefined4 *param_3,float param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined2 uVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  float afStack_14 [2];
  float fStack_c;
  
  if (*(char *)(*(uint *)(unaff_ESI + 0x308) + 0x6bca0) == '\0') {
    return *(uint *)(unaff_ESI + 0x308) & 0xffffff00;
  }
  piVar7 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x34))();
  *(undefined1 *)(unaff_ESI + 0x363) = 0;
  iVar8 = (**(code **)(*piVar7 + 0x68))();
  if (((iVar8 == 0) && (cVar6 = (**(code **)(*unaff_EDI + 0x34))(), cVar6 == '\0')) &&
     ((cVar6 = (**(code **)(*param_1 + 0x24))(0x26), cVar6 != '\0' ||
      (((cVar6 = (**(code **)(*param_1 + 0x24))(0x28), cVar6 != '\0' ||
        (cVar6 = (**(code **)(*param_1 + 0x24))(0x25), cVar6 != '\0')) ||
       (cVar6 = (**(code **)(*param_1 + 0x24))(0x27), cVar6 != '\0')))))) {
    *(undefined1 *)(unaff_ESI + 0x363) = 1;
  }
  *(undefined4 *)(unaff_ESI + 0x2f4) = 0;
  *(undefined4 *)(unaff_ESI + 0x2f8) = DAT_00f177d8;
  *(undefined4 *)(unaff_ESI + 0x2fc) = DAT_00f095b4;
  fVar1 = *(float *)(unaff_ESI + 0x348);
  *(int *)(unaff_ESI + 0x34c) = (int)*(float *)(unaff_ESI + 0x35c);
  iVar8 = FUN_00475500();
  uStack_38 = (*(float *)(iVar8 + 0x98) / 100.0) * (fVar1 / 60.0) * 0.8;
  if (0.2 < param_4) {
    param_4 = DAT_00f141cc;
  }
  piVar9 = (int *)FUN_00475500();
  fVar1 = (((float)piVar9[0x24] / 100.0) * param_4 * 12.0 * *(float *)(unaff_ESI + 0x348)) / 40.0;
  bVar11 = false;
  if ((*(char *)(unaff_ESI + 0x354) == '\0') || (param_5 != '\0')) {
LAB_0063fd82:
    if (*(char *)(unaff_ESI + 0x356) == '\0') {
      piVar9 = (int *)(**(code **)(*unaff_EDI + 0x34))();
      if ((char)piVar9 != '\0') {
        iVar8 = (**(code **)(*unaff_EDI + 0x4c))(auStack_1c);
        iVar8 = *(int *)(iVar8 + 4);
        piVar9 = (int *)(**(code **)(*unaff_EDI + 0x4c))(&fStack_28);
        fStack_2c = (float)*piVar9;
        fStack_28 = (float)iVar8;
        piVar9 = (int *)FUN_004a1ef0(DAT_0125870c,afStack_14,&fStack_2c);
        if (*(char *)(unaff_ESI + 0x362) == '\0') {
          piVar9 = *(int **)(unaff_ESI + 0x334);
          *(float *)(unaff_ESI + 0x36c) = afStack_14[0];
          *(undefined1 *)(unaff_ESI + 0x362) = 1;
          *(float *)(unaff_ESI + 0x370) = fStack_c;
          *(int **)(unaff_ESI + 0x364) = piVar9;
          *(undefined4 *)(unaff_ESI + 0x368) = *(undefined4 *)(unaff_ESI + 0x338);
        }
        else {
          *(float *)(unaff_ESI + 0x334) =
               *(float *)(unaff_ESI + 0x364) - (afStack_14[0] - *(float *)(unaff_ESI + 0x36c));
          fVar14 = *(float *)(unaff_ESI + 0x368) - (fStack_c - *(float *)(unaff_ESI + 0x370));
          fVar3 = *(float *)(unaff_ESI + 800);
          *(float *)(unaff_ESI + 0x338) = fVar14;
          fVar13 = fVar3;
          if (fVar3 < fVar14) {
            fVar13 = fVar14;
          }
          fVar2 = *(float *)(unaff_ESI + 0x314);
          if ((fVar2 <= fVar13) || (fVar2 = fVar14, fVar3 < fVar14)) {
            *(float *)(unaff_ESI + 0x338) = fVar2;
          }
          else {
            *(float *)(unaff_ESI + 0x338) = fVar3;
          }
        }
        goto LAB_0063ff13;
      }
      if (*(char *)(unaff_ESI + 0x362) != '\0') goto LAB_0063ff0c;
    }
    else {
LAB_0063ff0c:
      *(undefined1 *)(unaff_ESI + 0x362) = 0;
LAB_0063ff13:
      uVar10 = (undefined2)((uint)piVar9 >> 0x10);
      if (*(char *)(unaff_ESI + 0x362) != '\0') goto LAB_006402f5;
    }
    uVar10 = (undefined2)((uint)piVar9 >> 0x10);
    if (*(char *)(unaff_ESI + 0x356) == '\0') {
      if (((param_3 != (undefined4 *)0x0) &&
          (piVar9 = (int *)(**(code **)(*piVar7 + 0x68))(), piVar9 == (int *)0x0)) &&
         (piVar9 = (int *)(**(code **)(*unaff_EDI + 0x34))(), (char)piVar9 == '\0')) {
        piVar4 = (int *)*param_3;
        uStack_38 = (float)((uint)uStack_38 & 0xff000000);
        fVar3 = uStack_38;
        for (; uStack_38 = fVar3, piVar4 != (int *)0x0; piVar4 = (int *)piVar4[8]) {
          if ((piVar4[2] == 1) && ((*piVar4 != 0 || (piVar4[1] != 0)))) {
            cVar15 = '\0';
            cVar6 = (**(code **)(*param_1 + 0x24))();
            if (cVar6 != '\0') {
              if ((char)uStack_3c == '\0') {
                uVar5 = (uint)uStack_3c >> 8;
                uStack_3c = (float)CONCAT31((int3)uVar5,1);
                *(float *)(unaff_ESI + 0x338) = fVar3 * 6.0 + *(float *)(unaff_ESI + 0x338);
              }
              *(undefined1 *)(piVar4 + 6) = 1;
            }
            cVar6 = (**(code **)(*param_1 + 0x24))(0x28);
            if (cVar6 != '\0') {
              if ((char)((uint)unaff_EBX >> 8) == '\0') {
                unaff_EBX = (float)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                            CONCAT11(1,SUB41(unaff_EBX,0)));
                *(float *)(unaff_ESI + 0x338) = *(float *)(unaff_ESI + 0x338) - uStack_3c * 6.0;
              }
              *(undefined1 *)(piVar4 + 6) = 1;
            }
            cVar6 = (**(code **)(*param_1 + 0x24))(0x25);
            if (cVar6 != '\0') {
              if (cVar15 == '\0') {
                *(float *)(unaff_ESI + 0x334) = *(float *)(unaff_ESI + 0x334) - unaff_EBX * 6.0;
              }
              *(undefined1 *)(piVar4 + 6) = 1;
            }
            piVar9 = (int *)(**(code **)(*param_1 + 0x24))(0x27);
            if ((char)piVar9 != '\0') {
              uStack_38._2_1_ = (char)((uint)fVar3 >> 0x10);
              bVar11 = uStack_38._2_1_ == '\0';
              if (bVar11) {
                uStack_38 = (float)CONCAT13((char)((uint)fVar3 >> 0x18),0x10000);
                *(float *)(unaff_ESI + 0x334) = fVar1 * 6.0 + *(float *)(unaff_ESI + 0x334);
              }
              *(undefined1 *)(piVar4 + 6) = 1;
            }
          }
          fVar3 = uStack_38;
        }
      }
      if (param_5 != '\0') {
        if ((int *)piVar7[0x26] != (int *)0x0) {
          (**(code **)(*(int *)piVar7[0x26] + 0x44))();
          piVar9 = (int *)FUN_0040b360();
          if (((((char)piVar9 != '\0') || (piVar9 = (int *)FUN_0040b360(), (char)piVar9 != '\0')) ||
              ((piVar9 = (int *)FUN_0040b360(), (char)piVar9 != '\0' ||
               (((piVar9 = (int *)FUN_0040b360(), (char)piVar9 != '\0' ||
                 (piVar9 = (int *)FUN_0040b360(), (char)piVar9 != '\0')) ||
                (piVar9 = (int *)FUN_0040b360(), (char)piVar9 != '\0')))))) ||
             (piVar9 = (int *)FUN_0040b360(), (char)piVar9 != '\0')) goto LAB_00640294;
        }
        iVar8 = (**(code **)(*unaff_EDI + 0x4c))(auStack_1c);
        if (*(int *)(iVar8 + 4) < *(int *)(unaff_ESI + 0x328) + 6) {
          *(float *)(unaff_ESI + 0x338) = uStack_38 * 12.0 + *(float *)(unaff_ESI + 0x338);
        }
        iVar8 = (**(code **)(*unaff_EDI + 0x4c))(auStack_20);
        if (*(int *)(unaff_ESI + 0x330) + -6 < *(int *)(iVar8 + 4)) {
          *(float *)(unaff_ESI + 0x338) = *(float *)(unaff_ESI + 0x338) - uStack_3c * 12.0;
        }
        piVar7 = (int *)(**(code **)(*unaff_EDI + 0x4c))(auStack_24);
        if (*piVar7 < *(int *)(unaff_ESI + 0x324) + 6) {
          *(float *)(unaff_ESI + 0x334) = *(float *)(unaff_ESI + 0x334) - unaff_EBX * 12.0;
        }
        piVar9 = (int *)(**(code **)(*unaff_EDI + 0x4c))(&fStack_28);
        if (*(int *)(unaff_ESI + 0x32c) + -6 < *piVar9) {
          *(float *)(unaff_ESI + 0x334) = fVar1 * 12.0 + *(float *)(unaff_ESI + 0x334);
        }
      }
LAB_00640294:
      uVar10 = (undefined2)((uint)piVar9 >> 0x10);
      fVar1 = *(float *)(unaff_ESI + 0x338);
      fVar3 = *(float *)(unaff_ESI + 800);
      fVar14 = fVar3;
      if (fVar3 < fVar1) {
        fVar14 = fVar1;
      }
      fVar13 = *(float *)(unaff_ESI + 0x314);
      if ((fVar14 < fVar13) && (fVar13 = fVar1, fVar1 <= fVar3)) {
        fVar13 = fVar3;
      }
      *(float *)(unaff_ESI + 0x338) = fVar13;
    }
  }
  else {
    if (*(char *)(unaff_ESI + 0x355) == '\0') {
      iVar8 = (**(code **)(*unaff_EDI + 0x54))();
      piVar9 = (int *)0x0;
      if (iVar8 != 0) {
        iVar8 = (**(code **)(*unaff_EDI + 0x54))();
        if (0 < iVar8) {
          fVar3 = *(float *)(unaff_ESI + 0x344) - uStack_38 * 20.0 * 0.75;
          *(float *)(unaff_ESI + 0x344) = fVar3;
          if (fVar3 < (float)*(int *)(unaff_ESI + 0x34c)) {
            *(float *)(unaff_ESI + 0x344) = (float)*(int *)(unaff_ESI + 0x34c);
          }
        }
        iVar8 = (**(code **)(*unaff_EDI + 0x54))();
        if (iVar8 < 0) {
          fVar3 = uStack_38 * 20.0 * 1.5 + *(float *)(unaff_ESI + 0x344);
          *(float *)(unaff_ESI + 0x344) = fVar3;
          if ((float)*(int *)(unaff_ESI + 0x350) < fVar3) {
            *(float *)(unaff_ESI + 0x344) = (float)*(int *)(unaff_ESI + 0x350);
          }
        }
        iVar8 = (**(code **)(*unaff_EDI + 0x54))();
        if ((((iVar8 < 0) && (*(float *)(unaff_ESI + 0x344) < (float)*(int *)(unaff_ESI + 0x350)))
            || ((piVar9 = (int *)(**(code **)(*unaff_EDI + 0x54))(), 0 < (int)piVar9 &&
                ((float)*(int *)(unaff_ESI + 0x34c) < *(float *)(unaff_ESI + 0x344))))) &&
           ((((piVar9 = (int *)(**(code **)(*unaff_EDI + 0x4c))(&fStack_2c),
              *(int *)(unaff_ESI + 0x328) + 6 < piVar9[1] &&
              (piVar9 = (int *)(**(code **)(*unaff_EDI + 0x4c))(&fStack_2c),
              piVar9[1] < *(int *)(unaff_ESI + 0x330) + -6)) &&
             (piVar9 = (int *)(**(code **)(*unaff_EDI + 0x4c))(&fStack_2c),
             *(int *)(unaff_ESI + 0x324) + 6 < *piVar9)) &&
            (piVar9 = (int *)(**(code **)(*unaff_EDI + 0x4c))(&fStack_2c),
            *piVar9 < *(int *)(unaff_ESI + 0x32c) + -6)))) {
          uStack_3c = (float)CONCAT13(1,(undefined3)uStack_3c);
          iVar8 = (**(code **)(*unaff_EDI + 0x4c))(auStack_24);
          iVar8 = *(int *)(iVar8 + 4);
          piVar9 = (int *)(**(code **)(*unaff_EDI + 0x4c))(auStack_20);
          fStack_2c = (float)*piVar9;
          fStack_28 = (float)iVar8;
          FUN_004a1bb0(DAT_0125870c,afStack_14,&fStack_2c,0);
          piVar9 = *(int **)(unaff_ESI + 0x34c);
          fVar3 = fStack_c -
                  (1.0 - (*(float *)(unaff_ESI + 0x348) - (float)(int)piVar9) /
                         (float)(*(int *)(unaff_ESI + 0x350) - (int)piVar9)) *
                  (float)*(int *)(DAT_0125870c + 0x2ac0) * 0.02;
          fVar14 = 1.0 - (uStack_38 * 20.0) / *(float *)(unaff_ESI + 0x348);
          fVar13 = 0.0;
          if ((fVar14 < 0.0) || (fVar13 = DAT_00f092fc, DAT_00f092fc < fVar14)) {
            fVar14 = fVar13;
          }
          bVar11 = true;
          *(float *)(unaff_ESI + 0x334) =
               (*(float *)(unaff_ESI + 0x334) - afStack_14[0]) * fVar14 + afStack_14[0];
          *(float *)(unaff_ESI + 0x338) = (*(float *)(unaff_ESI + 0x338) - fVar3) * fVar14 + fVar3;
        }
      }
    }
    uVar10 = (undefined2)((uint)piVar9 >> 0x10);
    *(undefined1 *)(unaff_ESI + 0x354) = 0;
    if (!bVar11) goto LAB_0063fd82;
  }
LAB_006402f5:
  fVar1 = *(float *)(unaff_ESI + 0x33c);
  if ((fVar1 == *(float *)(unaff_ESI + 0x334)) &&
     (*(float *)(unaff_ESI + 0x340) == *(float *)(unaff_ESI + 0x338))) goto LAB_0064050c;
  fVar3 = (*(float *)(unaff_ESI + 0x334) - fVar1) * 0.197 + fVar1;
  *(float *)(unaff_ESI + 0x340) =
       (*(float *)(unaff_ESI + 0x338) - *(float *)(unaff_ESI + 0x340)) * 0.197 +
       *(float *)(unaff_ESI + 0x340);
  *(undefined1 *)(unaff_ESI + 0x360) = 1;
  *(float *)(unaff_ESI + 0x33c) = fVar3;
  if ((((float)param_2 < fVar1) || (fVar3 <= (float)param_2)) && ((fVar1 < 0.0 || (0.0 <= fVar3))))
  goto LAB_0064050c;
  if (*(char *)(unaff_ESI + 0x362) != '\0') {
    if (((float)param_2 < fVar1) || (fVar3 <= (float)param_2)) {
      if ((fVar1 < 0.0) ||
         (0.0 < *(float *)(unaff_ESI + 0x33c) || *(float *)(unaff_ESI + 0x33c) == 0.0))
      goto LAB_0064046c;
      fVar1 = (float)param_2 + *(float *)(unaff_ESI + 0x364);
    }
    else {
      fVar1 = *(float *)(unaff_ESI + 0x364) - (float)param_2;
    }
    *(float *)(unaff_ESI + 0x364) = fVar1;
  }
LAB_0064046c:
  if (0.0 <= *(float *)(unaff_ESI + 0x334)) {
    fVar12 = (float10)FUN_00b31cba();
    *(float *)(unaff_ESI + 0x334) = (float)fVar12;
    uVar10 = extraout_var;
  }
  else {
    *(float *)(unaff_ESI + 0x334) = (float)param_2 + *(float *)(unaff_ESI + 0x334);
  }
  if (0.0 <= *(float *)(unaff_ESI + 0x33c)) {
    fVar12 = (float10)FUN_00b31cba();
    *(float *)(unaff_ESI + 0x33c) = (float)fVar12;
    uVar10 = extraout_var_00;
  }
  else {
    *(float *)(unaff_ESI + 0x33c) = (float)param_2 + *(float *)(unaff_ESI + 0x33c);
  }
LAB_0064050c:
  fVar1 = *(float *)(unaff_ESI + 0x344);
  fVar3 = *(float *)(unaff_ESI + 0x348);
  if (fVar1 != fVar3) {
    fVar14 = (fVar1 - fVar3) * 0.197 + fVar3;
    *(undefined1 *)(unaff_ESI + 0x360) = 1;
    *(float *)(unaff_ESI + 0x348) = fVar14;
    *(undefined4 *)(unaff_ESI + 0x2e8) = 0;
    *(float *)(unaff_ESI + 0x2ec) = fVar14;
    *(undefined4 *)(unaff_ESI + 0x2f0) = 0;
  }
  *(undefined1 *)(unaff_ESI + 0x361) = *(undefined1 *)(unaff_ESI + 0x360);
  return CONCAT31(CONCAT21(uVar10,(fVar1 == fVar3) << 6 | (NAN(fVar1) || NAN(fVar3)) << 2 | 2U |
                                  fVar1 < fVar3),*(undefined1 *)(unaff_ESI + 0x360));
}

