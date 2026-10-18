// FUN_00b02d30 @ 00b02d30 body=[[00b02d30, 00b02ee6] [00b02ef0, 00b036b8]]


void FUN_00b02d30(int param_1,float param_2)

{
  float *pfVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  void *pvVar9;
  ushort uVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  int in_ECX;
  uint uVar14;
  int *piVar15;
  int iStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int local_a8;
  float fStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined2 uStack_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined2 local_84;
  uint uStack_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined2 local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined2 uStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  void *pvStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b38d5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_8c = *(int *)(param_1 + 0x84);
  local_90 = 0;
  local_84 = 1;
  local_a8 = in_ECX;
  local_88 = local_8c;
  if (local_8c != 0) {
    local_90 = (*(code *)PTR_FUN_00f01b08)
                         (local_8c << 6,1,4,2,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffff00);
  }
  local_78 = *(int *)(param_1 + 0x84);
  local_4 = 0;
  local_7c = 0;
  local_70 = 1;
  local_74 = local_78;
  if (local_78 != 0) {
    local_7c = (*(code *)PTR_FUN_00f01b08)(local_78 << 6,1,4,2,0,0xffffffff);
  }
  iStack_9c = *(int *)(param_1 + 0x84);
  local_4._0_1_ = 1;
  iStack_a0 = 0;
  uStack_94 = 1;
  iStack_98 = iStack_9c;
  if (iStack_9c != 0) {
    iStack_a0 = (*(code *)PTR_FUN_00f01b08)(iStack_9c << 6,1,4,2,0,0xffffffff);
  }
  iStack_60 = *(int *)(param_1 + 0x84);
  local_4._0_1_ = 2;
  iStack_64 = 0;
  uStack_58 = 1;
  iStack_5c = iStack_60;
  if (iStack_60 != 0) {
    iStack_64 = (*(code *)PTR_FUN_00f01b08)(iStack_60 << 6,1,4,2,0,0xffffffff);
  }
  local_4._0_1_ = 3;
  FUN_00b03a80(*(undefined4 *)(param_1 + 0x84),1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00ad61b0(&local_90);
  FUN_00ad6210(&local_90,&local_7c);
  uStack_80 = *(uint *)(in_ECX + 0x48);
  uStack_c8 = 0;
  if (uStack_80 == 0) {
LAB_00b03608:
    FUN_00b01180();
    local_4._0_1_ = 3;
    if (pvStack_1c != (void *)0x0) {
      (*(code *)PTR__free_00f01b10)(pvStack_1c);
    }
    local_4._0_1_ = 2;
    if (iStack_64 != 0) {
      (*(code *)PTR__free_00f01b10)(iStack_64);
    }
    local_4._0_1_ = 1;
    if (iStack_a0 != 0) {
      (*(code *)PTR__free_00f01b10)(iStack_a0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_7c != 0) {
      (*(code *)PTR__free_00f01b10)(local_7c);
    }
    local_4 = 0xffffffff;
    if (local_90 != 0) {
      (*(code *)PTR__free_00f01b10)(local_90);
    }
    ExceptionList = local_c;
    return;
  }
LAB_00b02ef0:
  piVar6 = *(int **)(*(int *)(in_ECX + 0x44) + uStack_c8 * 4);
  uVar11 = 0;
  if (*(uint *)(param_1 + 0x84) != 0) {
    piVar15 = *(int **)(param_1 + 0x80);
    do {
      if (*(int *)(*piVar15 + 0x10) == piVar6[0x19]) {
        piVar15 = (int *)(*(int **)(param_1 + 0x80))[uVar11];
        if (piVar15 != (int *)0x0) {
          iVar7 = *piVar15;
          iStack_6c = iVar7;
          FUN_00ae0640(&local_90);
          pvVar9 = pvStack_1c;
          FID_conflict__memcpy
                    (pvStack_1c,*(void **)(param_1 + 0x1c),*(int *)(param_1 + 0x84) * 0x38);
          fStack_ec = 0.0;
          fStack_ac = 0.0;
          pfVar1 = (float *)((int)pvVar9 + iVar7 * 0x38);
          iStack_68 = iVar7 << 6;
          goto LAB_00b02fb5;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      piVar15 = piVar15 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x84));
  }
  piVar6[0x18] = 0x7f7fffff;
  in_ECX = local_a8;
  goto LAB_00b035f4;
  while( true ) {
    iVar7 = iStack_6c;
    pfVar1[4] = *pfVar13;
    pfVar1[5] = pfVar13[1];
    pfVar1[6] = pfVar13[2];
    pfVar1[7] = pfVar13[3];
    FUN_00ad5410(iStack_6c,pvStack_1c,iStack_68 + iStack_a0);
    FUN_00ad6210(&iStack_a0,&iStack_64);
    in_ECX = local_a8;
    fStack_a4 = 0.0;
    FUN_00b010c0(iVar7,&iStack_64,&local_7c,param_1,&fStack_a4);
    if (fStack_ac < fStack_a4) {
      fStack_ac = fStack_a4;
    }
    fStack_ec = fStack_ec + param_2;
    if (*(float *)(in_ECX + 0x28) <= fStack_ec) break;
LAB_00b02fb5:
    piVar15 = (int *)piVar6[1];
    if (piVar15 == (int *)0x0) {
      pfVar13 = &fStack_54;
      fStack_54 = (float)piVar6[4];
      iStack_50 = piVar6[5];
      iStack_4c = piVar6[6];
    }
    else {
      uVar10 = FUN_00b03860(fStack_ec,piVar15);
      uVar11 = (uint)uVar10;
      if (uVar10 == 0xffff) {
        if (*(ushort *)(piVar15 + 1) == 0) {
          pfVar13 = &fStack_b8;
        }
        else {
          pfVar12 = (float *)(*piVar15 + -0x10 + (uint)*(ushort *)(piVar15 + 1) * 0x10);
LAB_00b02ff8:
          fStack_b8 = *pfVar12;
          fStack_b4 = pfVar12[1];
          pfVar13 = &fStack_b8;
          fStack_b0 = pfVar12[2];
        }
      }
      else {
        if ((int)(*(ushort *)(piVar15 + 1) - 1) < (int)(uVar11 + 1)) {
          pfVar12 = (float *)(*piVar15 + -0x10 + (uint)*(ushort *)(piVar15 + 1) * 0x10);
          goto LAB_00b02ff8;
        }
        iVar7 = *piVar15;
        (**(code **)(*(int *)piVar15[2] + 4))
                  (&fStack_b8,uVar11,
                   (fStack_ec - *(float *)(iVar7 + 0xc + uVar11 * 0x10)) /
                   (*(float *)(iVar7 + 0x1c + uVar11 * 0x10) -
                   *(float *)(iVar7 + 0xc + uVar11 * 0x10)));
        pfVar13 = &fStack_b8;
      }
    }
    pfVar1[0xb] = *pfVar13;
    pfVar1[0xc] = pfVar13[1];
    pfVar1[0xd] = pfVar13[2];
    piVar15 = (int *)*piVar6;
    if (piVar15 == (int *)0x0) {
      pfVar13 = &fStack_3c;
      fStack_3c = (float)(int)(short)piVar6[2] * 3.051851e-05;
      fStack_38 = (float)(int)*(short *)((int)piVar6 + 10) * 3.051851e-05;
      fStack_34 = (float)(int)(short)piVar6[3] * 3.051851e-05;
      fStack_30 = (float)(int)*(short *)((int)piVar6 + 0xe) * 3.051851e-05;
    }
    else {
      uVar10 = FUN_00b03970(fStack_ec,piVar15);
      uVar11 = (uint)uVar10;
      if (uVar10 == 0xffff) {
        uVar10 = *(ushort *)(piVar15 + 1);
        if (uVar10 == 0) {
          pfVar13 = &fStack_d8;
          fStack_d8 = 0.0;
          fStack_d4 = 0.0;
          fStack_d0 = 0.0;
          fStack_cc = 1.0;
        }
        else {
          sVar2 = *(short *)(*piVar15 + -0xc + (uint)uVar10 * 0xc);
          iVar7 = *piVar15 + -0xc + (uint)uVar10 * 0xc;
          sVar3 = *(short *)(iVar7 + 2);
          sVar4 = *(short *)(iVar7 + 4);
          sVar5 = *(short *)(iVar7 + 6);
LAB_00b03139:
          iStack_f0 = (int)sVar5;
          pfVar13 = &fStack_d8;
          fStack_d8 = (float)(int)sVar2 * 3.051851e-05;
          fStack_d4 = (float)(int)sVar3 * 3.051851e-05;
          fStack_d0 = (float)(int)sVar4 * 3.051851e-05;
          fStack_cc = (float)iStack_f0 * 3.051851e-05;
        }
      }
      else {
        uVar14 = (uint)*(ushort *)(piVar15 + 1);
        if ((int)(uVar14 - 1) < (int)(uVar11 + 1)) {
          sVar2 = *(short *)(*piVar15 + -0xc + uVar14 * 0xc);
          iVar7 = *piVar15 + -0xc + uVar14 * 0xc;
          sVar3 = *(short *)(iVar7 + 2);
          sVar4 = *(short *)(iVar7 + 4);
          sVar5 = *(short *)(iVar7 + 6);
          goto LAB_00b03139;
        }
        iVar7 = *piVar15 + uVar11 * 0xc;
        (**(code **)(*(int *)piVar15[2] + 4))
                  (&fStack_d8,uVar11,
                   (fStack_ec - *(float *)(*piVar15 + 8 + uVar11 * 0xc)) /
                   (*(float *)(iVar7 + 0x14) - *(float *)(iVar7 + 8)));
        pfVar13 = &fStack_d8;
      }
    }
    *pfVar1 = *pfVar13;
    pfVar1[1] = pfVar13[1];
    pfVar1[2] = pfVar13[2];
    pfVar1[3] = pfVar13[3];
    piVar15 = (int *)piVar6[0x17];
    if (piVar15 == (int *)0x0) {
      pfVar13 = &fStack_48;
      fStack_48 = (float)piVar6[0x10];
      iStack_44 = piVar6[0x11];
      iStack_40 = piVar6[0x12];
    }
    else {
      uVar10 = FUN_00b03860(fStack_ec,piVar15);
      uVar11 = (uint)uVar10;
      if (uVar10 == 0xffff) {
        if (*(ushort *)(piVar15 + 1) == 0) {
          pfVar13 = &fStack_c4;
        }
        else {
          pfVar12 = (float *)(*piVar15 + -0x10 + (uint)*(ushort *)(piVar15 + 1) * 0x10);
LAB_00b032b8:
          fStack_c4 = *pfVar12;
          fStack_c0 = pfVar12[1];
          pfVar13 = &fStack_c4;
          fStack_bc = pfVar12[2];
        }
      }
      else {
        if ((int)(*(ushort *)(piVar15 + 1) - 1) < (int)(uVar11 + 1)) {
          pfVar12 = (float *)(*piVar15 + -0x10 + (uint)*(ushort *)(piVar15 + 1) * 0x10);
          goto LAB_00b032b8;
        }
        iVar7 = *piVar15;
        (**(code **)(*(int *)piVar15[2] + 4))
                  (&fStack_c4,uVar11,
                   (fStack_ec - *(float *)(iVar7 + 0xc + uVar11 * 0x10)) /
                   (*(float *)(iVar7 + 0x1c + uVar11 * 0x10) -
                   *(float *)(iVar7 + 0xc + uVar11 * 0x10)));
        pfVar13 = &fStack_c4;
      }
    }
    pfVar1[8] = *pfVar13;
    pfVar1[9] = pfVar13[1];
    pfVar1[10] = pfVar13[2];
    piVar15 = (int *)piVar6[0x16];
    if (piVar15 == (int *)0x0) {
      pfVar13 = &fStack_2c;
      fStack_2c = (float)(int)(short)piVar6[0xc] * 3.051851e-05;
      fStack_28 = (float)(int)*(short *)((int)piVar6 + 0x32) * 3.051851e-05;
      fStack_24 = (float)(int)(short)piVar6[0xd] * 3.051851e-05;
      fStack_20 = (float)(int)*(short *)((int)piVar6 + 0x36) * 3.051851e-05;
    }
    else {
      uVar10 = FUN_00b03970(fStack_ec,piVar15);
      uVar11 = (uint)uVar10;
      if (uVar10 == 0xffff) {
        uVar10 = *(ushort *)(piVar15 + 1);
        if (uVar10 == 0) {
          pfVar13 = &fStack_e8;
          fStack_e8 = 0.0;
          fStack_e4 = 0.0;
          fStack_e0 = 0.0;
          fStack_dc = 1.0;
        }
        else {
          sVar2 = *(short *)(*piVar15 + -0xc + (uint)uVar10 * 0xc);
          iVar7 = *piVar15 + -0xc + (uint)uVar10 * 0xc;
          sVar3 = *(short *)(iVar7 + 2);
          sVar4 = *(short *)(iVar7 + 4);
          sVar5 = *(short *)(iVar7 + 6);
LAB_00b033fd:
          iStack_f0 = (int)sVar5;
          pfVar13 = &fStack_e8;
          fStack_e8 = (float)(int)sVar2 * 3.051851e-05;
          fStack_e4 = (float)(int)sVar3 * 3.051851e-05;
          fStack_e0 = (float)(int)sVar4 * 3.051851e-05;
          fStack_dc = (float)iStack_f0 * 3.051851e-05;
        }
      }
      else {
        uVar14 = (uint)*(ushort *)(piVar15 + 1);
        if ((int)(uVar14 - 1) < (int)(uVar11 + 1)) {
          sVar2 = *(short *)(*piVar15 + -0xc + uVar14 * 0xc);
          iVar7 = *piVar15 + -0xc + uVar14 * 0xc;
          sVar3 = *(short *)(iVar7 + 2);
          sVar4 = *(short *)(iVar7 + 4);
          sVar5 = *(short *)(iVar7 + 6);
          goto LAB_00b033fd;
        }
        iVar7 = *piVar15 + uVar11 * 0xc;
        (**(code **)(*(int *)piVar15[2] + 4))
                  (&fStack_e8,uVar11,
                   (fStack_ec - *(float *)(*piVar15 + 8 + uVar11 * 0xc)) /
                   (*(float *)(iVar7 + 0x14) - *(float *)(iVar7 + 8)));
        pfVar13 = &fStack_e8;
      }
    }
  }
  fVar8 = fStack_ac;
  if ((fStack_ac <= 0.001) && ((*piVar6 != 0 || (fVar8 = 0.0, piVar6[0x17] != 0)))) {
    fVar8 = -1.0;
  }
  *(float *)(*(int *)(*(int *)(in_ECX + 0x44) + uStack_c8 * 4) + 0x60) = fVar8;
LAB_00b035f4:
  uStack_c8 = uStack_c8 + 1;
  if (uStack_80 <= uStack_c8) goto LAB_00b03608;
  goto LAB_00b02ef0;
}

