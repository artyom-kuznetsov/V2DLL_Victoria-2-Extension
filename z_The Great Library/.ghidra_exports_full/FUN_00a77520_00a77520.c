// FUN_00a77520 @ 00a77520 body=[[00a77520, 00a77ef8]]


uint FUN_00a77520(void)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_EDI;
  undefined2 in_FPUControlWord;
  float10 fVar9;
  float fVar10;
  uint uStack_38;
  float fStack_34;
  longlong lStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar9 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  fVar10 = (float)fVar9 - *(float *)(unaff_EDI + 0x14c);
  *(float *)(unaff_EDI + 0x14c) = (float)fVar9;
  uVar8 = (*(int *)(unaff_EDI + 0x194) - *(int *)(unaff_EDI + 400)) / 0x34;
  lStack_30 = CONCAT44(lStack_30._4_4_,uVar8);
  fStack_34 = fVar10;
  if ((*(int *)(unaff_EDI + 0x144) == 1) && (uStack_38 = 0, uVar8 != 0)) {
    do {
      iVar6 = uStack_38 * 0x34;
      pfVar2 = (float *)(*(int *)(unaff_EDI + 400) + iVar6);
      *pfVar2 = *pfVar2 + *(float *)(*(int *)(unaff_EDI + 400) + 0x10 + iVar6) * fVar10;
      pfVar2[1] = pfVar2[5] * fVar10 + pfVar2[1];
      pfVar2[2] = pfVar2[6] * fVar10 + pfVar2[2];
      iVar7 = iVar6 + *(int *)(unaff_EDI + 400);
      if ((DAT_00f17b54 < ABS(*(float *)(iVar6 + *(int *)(unaff_EDI + 400)))) ||
         ((0.8 < ABS(*(float *)(iVar7 + 4)) || (DAT_00f17898 < ABS(*(float *)(iVar7 + 8)))))) {
        uVar3 = FUN_00a78530(&uStack_38);
        FUN_004a34d0(unaff_EDI + 0x1ac,uVar3);
        iVar7 = *(int *)(unaff_EDI + 400);
        uStack_1c = 0xc47a0000;
        uStack_20 = 0;
        *(undefined8 *)(iVar7 + iVar6) = 0xc47a000000000000;
        uStack_18 = 0;
        *(undefined4 *)(iVar7 + 8 + iVar6) = 0;
        puVar4 = (undefined8 *)(iVar6 + 0x10 + *(int *)(unaff_EDI + 400));
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        uVar8 = (uint)lStack_30;
        fVar10 = fStack_34;
      }
      uStack_38 = uStack_38 + 1;
    } while (uStack_38 < uVar8);
  }
  uVar5 = *(uint *)(unaff_EDI + 0x144);
  if (((uVar5 == 5) || (uVar5 == 6)) && (uStack_38 = 0, uVar8 != 0)) {
    do {
      iVar7 = uStack_38 * 0x34;
      pfVar2 = (float *)(iVar7 + *(int *)(unaff_EDI + 400));
      *pfVar2 = *pfVar2 + fVar10 * *(float *)(iVar7 + 0x10 + *(int *)(unaff_EDI + 400));
      pfVar2[1] = pfVar2[5] * fVar10 + pfVar2[1];
      pfVar2[2] = pfVar2[6] * fVar10 + pfVar2[2];
      uVar5 = *(uint *)(unaff_EDI + 400);
      if (((0.3 < ABS(*(float *)(uVar5 + iVar7))) || (0.3 < ABS(*(float *)(uVar5 + 4 + iVar7)))) ||
         (0.3 < ABS(*(float *)(uVar5 + 8 + iVar7)))) {
        uVar3 = FUN_00a78530(&uStack_38);
        FUN_004a34d0(unaff_EDI + 0x1ac,uVar3);
        iVar6 = *(int *)(unaff_EDI + 400);
        uStack_10 = 0xc47a0000;
        uStack_14 = 0;
        *(undefined8 *)(iVar6 + iVar7) = 0xc47a000000000000;
        uStack_c = 0;
        *(undefined4 *)(iVar6 + 8 + iVar7) = 0;
        uVar5 = *(uint *)(unaff_EDI + 400);
        puVar4 = (undefined8 *)(iVar7 + 0x10 + uVar5);
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        uVar8 = (uint)lStack_30;
        fVar10 = fStack_34;
      }
      uStack_38 = uStack_38 + 1;
    } while (uStack_38 < uVar8);
  }
  if ((*(int *)(unaff_EDI + 0x144) == 2) && (uStack_38 = 0, uVar8 != 0)) {
    do {
      iVar7 = uStack_38 * 0x34;
      pfVar2 = (float *)(iVar7 + *(int *)(unaff_EDI + 400));
      *pfVar2 = *pfVar2 + *(float *)(iVar7 + 0x10 + *(int *)(unaff_EDI + 400)) * fVar10;
      pfVar2[1] = pfVar2[5] * fVar10 + pfVar2[1];
      pfVar2[2] = pfVar2[6] * fVar10 + pfVar2[2];
      uVar5 = *(uint *)(unaff_EDI + 400);
      fVar1 = *(float *)(unaff_EDI + 0x148);
      if ((fVar1 < ABS(*(float *)(uVar5 + iVar7))) ||
         ((fVar1 < ABS(*(float *)(uVar5 + 4 + iVar7)) ||
          (fVar1 < ABS(*(float *)(uVar5 + 8 + iVar7)))))) {
        uVar3 = FUN_00a78530(&uStack_38);
        FUN_004a34d0(unaff_EDI + 0x1ac,uVar3);
        iVar6 = *(int *)(unaff_EDI + 400);
        uStack_10 = 0xc47a0000;
        uStack_14 = 0;
        *(undefined8 *)(iVar6 + iVar7) = 0xc47a000000000000;
        uStack_c = 0;
        *(undefined4 *)(iVar6 + 8 + iVar7) = 0;
        uVar5 = *(uint *)(unaff_EDI + 400);
        puVar4 = (undefined8 *)(iVar7 + 0x10 + uVar5);
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        fVar10 = fStack_34;
      }
      uStack_38 = uStack_38 + 1;
      uVar8 = (uint)lStack_30;
    } while (uStack_38 < (uint)lStack_30);
  }
  if (*(int *)(unaff_EDI + 0x144) == 3) {
    if (uVar8 != 0) {
      iVar7 = 0;
      uVar5 = uVar8;
      do {
        pfVar2 = (float *)(*(int *)(unaff_EDI + 400) + iVar7);
        *pfVar2 = *(float *)(*(int *)(unaff_EDI + 400) + 0x10 + iVar7) * fVar10 + *pfVar2;
        pfVar2[1] = pfVar2[5] * fVar10 + pfVar2[1];
        pfVar2[2] = pfVar2[6] * fVar10 + pfVar2[2];
        fVar1 = *(float *)(unaff_EDI + 0x148);
        if (0.0 < fVar1) {
          puVar4 = (undefined8 *)(*(int *)(unaff_EDI + 400) + iVar7);
          if (((fVar1 * 0.05 < *(float *)(*(int *)(unaff_EDI + 400) + iVar7)) ||
              (fVar1 < *(float *)((int)puVar4 + 4))) || (fVar1 * 0.05 < *(float *)(puVar4 + 1))) {
            uStack_14 = 0;
            uStack_10 = 0;
            uStack_c = 0;
            *puVar4 = 0;
            *(undefined4 *)(puVar4 + 1) = 0;
          }
        }
        iVar7 = iVar7 + 0x34;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar9 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    uStack_38 = CONCAT22(uStack_38._2_2_,in_FPUControlWord);
    lStack_30 = (longlong)ROUND((fVar9 - (float10)*(float *)(unaff_EDI + 0x1a4)) * (float10)10.0);
    uVar5 = (uint)lStack_30 / 0x19;
    *(uint *)(unaff_EDI + 0x140) = (uint)lStack_30 % 0x19;
    fVar10 = fStack_34;
  }
  if (*(int *)(unaff_EDI + 0x144) == 4) {
    uVar5 = 0;
    if (uVar8 != 0) {
      lStack_30 = CONCAT44(lStack_30._4_4_,(float)(int)uVar8);
      iVar7 = 0;
      do {
        pfVar2 = (float *)(*(int *)(unaff_EDI + 400) + iVar7);
        *pfVar2 = *(float *)(*(int *)(unaff_EDI + 400) + 0x10 + iVar7) * fVar10 + *pfVar2;
        pfVar2[1] = pfVar2[5] * fVar10 + pfVar2[1];
        pfVar2[2] = pfVar2[6] * fVar10 + pfVar2[2];
        fVar1 = *(float *)(unaff_EDI + 0x148);
        if (0.0 < fVar1) {
          puVar4 = (undefined8 *)(*(int *)(unaff_EDI + 400) + iVar7);
          if (((fVar1 * 0.02 < ABS(*(float *)(*(int *)(unaff_EDI + 400) + iVar7))) ||
              (fVar1 < ABS(*(float *)((int)puVar4 + 4)))) ||
             (fVar1 * 0.02 < ABS(*(float *)(puVar4 + 1)))) {
            uStack_14 = 0;
            uStack_10 = 0;
            uStack_c = 0;
            *puVar4 = 0;
            *(undefined4 *)(puVar4 + 1) = 0;
          }
        }
        lStack_30 = CONCAT44(lStack_30._4_4_,uVar5);
        fVar1 = (float)(int)uVar5;
        if ((int)uVar5 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        if (*(float *)(unaff_EDI + 0x13c) * (float)(int)uVar8 < fVar1) {
          *(undefined4 *)(iVar7 + 4 + *(int *)(unaff_EDI + 400)) = 0xc61c4000;
        }
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + 0x34;
      } while (uVar5 < uVar8);
    }
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar9 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    lStack_30._0_4_ =
         (uint)(longlong)ROUND((fVar9 - (float10)*(float *)(unaff_EDI + 0x1a4)) * (float10)10.0);
    uVar5 = (uint)lStack_30 / 0x19;
    *(uint *)(unaff_EDI + 0x140) = (uint)lStack_30 % 0x19;
  }
  return uVar5;
}

