// FUN_00407b10 @ 00407b10 body=[[00407b10, 00407d7a] [00407d7e, 00407efc] [00407f00, 004086f3] [004086f7, 004089dd] [004089e5, 00408a44] [00408a48, 00408a87]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00407b10(void)

{
  uint *puVar1;
  int **ppiVar2;
  int **ppiVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int unaff_EDI;
  int iStack_120;
  uint *puStack_11c;
  int *local_118;
  int local_114;
  int aiStack_110 [5];
  int *piStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_78;
  undefined1 auStack_74 [12];
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5c63e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_004bf300((*(int *)(unaff_EDI + 0x224) - *(int *)(unaff_EDI + 0x220)) / 0x58);
  local_114 = 0;
  if (0 < (*(int *)(unaff_EDI + 0x224) - *(int *)(unaff_EDI + 0x220)) / 0x58) {
    local_118 = (int *)0x0;
    do {
      puVar13 = (undefined4 *)(*(int *)(unaff_EDI + 0x220) + (int)local_118);
      (**(code **)(**(int **)(unaff_EDI + 0x1d0) + 0x40))();
      piVar5 = (int *)FUN_005c2ad0(puVar13 + 4);
      piVar5 = (int *)(**(code **)(*piVar5 + 0x48))();
      (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x10))(piVar5);
      piVar5[0x56] = puVar13[0xb];
      local_114 = (int)piVar5;
      FUN_00408b00();
      FUN_00408b00();
      uStack_8c = puVar13[0xc];
      uStack_84 = puVar13[0xd];
      uStack_88 = 0x3d99999a;
      uStack_80 = DAT_00f092fc;
      (**(code **)(*piVar5 + 0xa4))(&iStack_bc);
      (**(code **)(*piVar5 + 0x34))();
      (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x20))(piVar5);
      piStack_fc = piVar5 + 0x52;
      if ((piVar5[0x53] - *piStack_fc & 0xfffffff8U) == 0) {
        FUN_0043a750(puVar13);
      }
      else {
        FUN_00630060(piVar5[0x53],*puVar13,puVar13[1],puStack_11c);
      }
      FUN_0098dd90(piVar5);
      piVar6 = *(int **)(unaff_EDI + 0x14);
      if ((aiStack_110 < piVar6) && (*(int **)(unaff_EDI + 0x10) <= aiStack_110)) {
        iStack_120 = (int)aiStack_110 - (int)*(int **)(unaff_EDI + 0x10) >> 2;
        if (piVar6 == *(int **)(unaff_EDI + 0x18)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(unaff_EDI + 0x14) != (undefined4 *)0x0) {
          **(undefined4 **)(unaff_EDI + 0x14) =
               *(undefined4 *)(*(int *)(unaff_EDI + 0x10) + iStack_120 * 4);
        }
      }
      else {
        if (piVar6 == *(int **)(unaff_EDI + 0x18)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(unaff_EDI + 0x14) != (undefined4 *)0x0) {
          **(undefined4 **)(unaff_EDI + 0x14) = piVar5;
        }
      }
      *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + 4;
      if (puVar13[0x12] == 0) {
        piVar5 = *(int **)(unaff_EDI + 0x34);
        iStack_120 = 0;
        if ((&iStack_120 < piVar5) && (piVar6 = *(int **)(unaff_EDI + 0x30), piVar6 <= &iStack_120))
        {
          if (piVar5 == *(int **)(unaff_EDI + 0x38)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(unaff_EDI + 0x34) != (undefined4 *)0x0) {
            **(undefined4 **)(unaff_EDI + 0x34) =
                 *(undefined4 *)
                  (*(int *)(unaff_EDI + 0x30) + ((int)&iStack_120 - (int)piVar6 >> 2) * 4);
          }
        }
        else {
          if (piVar5 == *(int **)(unaff_EDI + 0x38)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(unaff_EDI + 0x34) != (undefined4 *)0x0) {
            **(undefined4 **)(unaff_EDI + 0x34) = 0;
          }
        }
        *(int *)(unaff_EDI + 0x34) = *(int *)(unaff_EDI + 0x34) + 4;
      }
      else {
        uStack_c0 = 0xf;
        uStack_c4 = 0;
        uStack_d4 = uStack_d4 & 0xffffff00;
        FUN_00409350("mi_text",7);
        uStack_c = 0;
        (**(code **)(**(int **)(unaff_EDI + 0x1d0) + 0x40))();
        piVar6 = (int *)FUN_005c2ad0(&uStack_d4);
        aiStack_110[0] = (**(code **)(*piVar6 + 0x48))();
        (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x10))(aiStack_110[0]);
        puStack_10 = (undefined1 *)0xffffffff;
        if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iStack_d8);
        }
        (**(code **)(*(int *)local_114 + 0xa4))(piVar5 + 0x15);
        (**(code **)(*local_118 + 0x34))();
        (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x20))(local_118);
        piVar6 = *(int **)(unaff_EDI + 0x34);
        if ((&iStack_120 < piVar6) && (*(int **)(unaff_EDI + 0x30) <= &iStack_120)) {
          iStack_d8 = (int)&iStack_120 - (int)*(int **)(unaff_EDI + 0x30) >> 2;
          if (piVar6 == *(int **)(unaff_EDI + 0x38)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(unaff_EDI + 0x34) != (undefined4 *)0x0) {
            **(undefined4 **)(unaff_EDI + 0x34) =
                 *(undefined4 *)(*(int *)(unaff_EDI + 0x30) + iStack_d8 * 4);
          }
        }
        else {
          if (piVar6 == *(int **)(unaff_EDI + 0x38)) {
            FUN_00a513f0();
          }
          if (*(int **)(unaff_EDI + 0x34) != (int *)0x0) {
            **(int **)(unaff_EDI + 0x34) = aiStack_110[0];
          }
        }
        *(int *)(unaff_EDI + 0x34) = *(int *)(unaff_EDI + 0x34) + 4;
        iStack_120 = puVar13[0x15];
        aiStack_110[1] = 0;
        aiStack_110[2] = 0;
        aiStack_110[3] = 0;
        uStack_c = 1;
        FUN_0043a750(piStack_fc);
        cVar4 = FUN_00406210(aiStack_110 + 1);
        if (cVar4 == '\0') {
          if (iStack_120 < 0) {
            iStack_120 = 5;
          }
          else {
            iStack_120 = iStack_120 + 5;
          }
        }
        else {
          iStack_120 = 5;
        }
        iVar14 = piVar5[0x4f];
        puStack_11c = *(uint **)(iVar14 + 0xc4);
        iStack_d8 = *(int *)(iVar14 + 0x8c);
        iVar7 = FUN_00973bd0(iVar14 + 0xa8);
        if (iVar7 == 0) {
          iVar7 = FUN_00973bd0(iVar14 + 0xa8);
        }
        FUN_00986c90(*piStack_fc,puVar13 + 0xe,iVar7,puStack_11c,aiStack_110 + 1,iStack_120);
        uStack_c = 0xffffffff;
        if (aiStack_110[1] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(aiStack_110[1]);
        }
        aiStack_110[1] = 0;
        aiStack_110[2] = 0;
        aiStack_110[3] = 0;
      }
      local_118 = local_118 + 0x16;
      local_114 = local_114 + 1;
    } while (local_114 < (*(int *)(unaff_EDI + 0x224) - *(int *)(unaff_EDI + 0x220)) / 0x58);
  }
  FUN_004bf300((*(int *)(unaff_EDI + 0x234) - *(int *)(unaff_EDI + 0x230)) / 0x58);
  local_114 = 0;
  if (0 < (*(int *)(unaff_EDI + 0x234) - *(int *)(unaff_EDI + 0x230)) / 0x58) {
    aiStack_110[1] = DAT_00f092fc;
    aiStack_110[2] = 0;
    aiStack_110[3] = 0;
    aiStack_110[4] = 0;
    uStack_e8 = 0;
    uStack_e4 = DAT_00f092fc;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = DAT_00f092fc;
    piStack_ec = (int *)0x0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = DAT_00f092fc;
    iStack_120 = 0;
    do {
      puVar13 = (undefined4 *)(*(int *)(unaff_EDI + 0x230) + iStack_120);
      (**(code **)(**(int **)(unaff_EDI + 0x1d0) + 0x40))();
      piVar5 = (int *)FUN_005c2ad0(puVar13 + 4);
      puVar8 = (uint *)(**(code **)(*piVar5 + 0x48))();
      (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x10))(puVar8);
      puVar8[0x56] = puVar13[0xb];
      puStack_11c = puVar8;
      FUN_00408b00();
      uStack_84 = puVar13[0xd];
      iStack_bc = aiStack_110[0];
      uStack_b8 = aiStack_110[1];
      uStack_b4 = aiStack_110[2];
      uStack_b0 = aiStack_110[3];
      piStack_ac = piStack_ec;
      uStack_a8 = uStack_e8;
      uStack_a4 = uStack_e4;
      uStack_a0 = uStack_e0;
      piStack_9c = piStack_fc;
      uStack_98 = uStack_f8;
      uStack_94 = uStack_f4;
      uStack_90 = uStack_f0;
      uStack_8c = puVar13[0xc];
      uStack_88 = 0x3d99999a;
      uStack_80 = DAT_00f092fc;
      (**(code **)(*puVar8 + 0xa4))(&iStack_bc);
      (**(code **)(*puVar8 + 0x34))();
      (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x20))(puVar8);
      if ((puVar8[0x53] - puVar8[0x52] & 0xfffffff8) == 0) {
        FUN_0043a750(puVar13);
      }
      else {
        puStack_11c = (uint *)*puVar13;
        FUN_00630060(puVar8[0x53],puStack_11c,puVar13[1],puStack_11c);
      }
      FUN_0098dd90(puVar8);
      ppiVar2 = *(int ***)(unaff_EDI + 0x24);
      if ((&local_118 < ppiVar2) && (ppiVar3 = *(int ***)(unaff_EDI + 0x20), ppiVar3 <= &local_118))
      {
        if (ppiVar2 == *(int ***)(unaff_EDI + 0x28)) {
          uVar9 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00408508;
          uVar9 = uVar9 + 1;
          uVar11 = (int)*(int ***)(unaff_EDI + 0x28) - (int)ppiVar3 >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            FUN_004bf300(uVar11);
          }
        }
        if (*(undefined4 **)(unaff_EDI + 0x24) != (undefined4 *)0x0) {
          **(undefined4 **)(unaff_EDI + 0x24) =
               *(undefined4 *)
                (*(int *)(unaff_EDI + 0x20) + ((int)&local_118 - (int)ppiVar3 >> 2) * 4);
        }
      }
      else {
        if (ppiVar2 == *(int ***)(unaff_EDI + 0x28)) {
          uVar9 = (int)ppiVar2 - *(int *)(unaff_EDI + 0x20) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00408508;
          uVar9 = uVar9 + 1;
          uVar11 = (int)*(int ***)(unaff_EDI + 0x28) - *(int *)(unaff_EDI + 0x20) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            FUN_004bf300(uVar11);
          }
        }
        if (*(undefined4 **)(unaff_EDI + 0x24) != (undefined4 *)0x0) {
          **(undefined4 **)(unaff_EDI + 0x24) = puVar8;
        }
      }
      *(int *)(unaff_EDI + 0x24) = *(int *)(unaff_EDI + 0x24) + 4;
      iStack_120 = iStack_120 + 0x58;
      local_114 = local_114 + 1;
    } while (local_114 < (*(int *)(unaff_EDI + 0x234) - *(int *)(unaff_EDI + 0x230)) / 0x58);
  }
  FUN_004bf300((*(int *)(unaff_EDI + 0x244) - *(int *)(unaff_EDI + 0x240)) / 0x34);
  local_114 = 0;
  if (0 < (*(int *)(unaff_EDI + 0x244) - *(int *)(unaff_EDI + 0x240)) / 0x34) {
    uStack_d4 = DAT_00f092fc;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_f8 = 0;
    uStack_f4 = DAT_00f092fc;
    uStack_f0 = 0;
    piStack_ec = (int *)0x0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = DAT_00f092fc;
    uStack_dc = 0;
    aiStack_110[1] = 0;
    aiStack_110[2] = 0;
    aiStack_110[3] = 0;
    aiStack_110[4] = DAT_00f092fc;
    iStack_120 = 0;
    do {
      iVar14 = *(int *)(unaff_EDI + 0x240) + iStack_120;
      (**(code **)(**(int **)(unaff_EDI + 0x1d0) + 0x40))();
      piVar5 = (int *)FUN_005c2ad0(iVar14 + 8);
      puVar8 = (uint *)(**(code **)(*piVar5 + 0x48))();
      (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x10))(puVar8);
      puVar8[0x51] = *(uint *)(iVar14 + 0x24);
      puStack_11c = puVar8;
      (**(code **)(*puVar8 + 0x34))();
      (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x20))(puVar8);
      FUN_00408b00();
      uStack_88 = *(undefined4 *)(iVar14 + 0x30);
      uStack_c0 = uStack_dc;
      iStack_bc = iStack_d8;
      uStack_b8 = uStack_d4;
      uStack_b4 = uStack_d0;
      uStack_b0 = aiStack_110[4];
      piStack_ac = piStack_fc;
      uStack_a8 = uStack_f8;
      uStack_a4 = uStack_f4;
      uStack_a0 = uStack_f0;
      piStack_9c = piStack_ec;
      uStack_98 = uStack_e8;
      uStack_94 = uStack_e4;
      uStack_90 = *(uint *)(iVar14 + 0x2c);
      uStack_8c = 0x3d99999a;
      uStack_84 = DAT_00f092fc;
      (**(code **)(*puVar8 + 0xa4))(&uStack_c0);
      FUN_00986af0();
      puVar8[0x72] = *(uint *)(iVar14 + 0x28);
      ppiVar2 = *(int ***)(unaff_EDI + 0x44);
      if ((&local_118 < ppiVar2) && (ppiVar3 = *(int ***)(unaff_EDI + 0x40), ppiVar3 <= &local_118))
      {
        if (ppiVar2 == *(int ***)(unaff_EDI + 0x48)) {
          uVar9 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00408508;
          uVar9 = uVar9 + 1;
          uVar11 = (int)*(int ***)(unaff_EDI + 0x48) - (int)ppiVar3 >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            FUN_004bf300(uVar11);
          }
        }
        if (*(undefined4 **)(unaff_EDI + 0x44) != (undefined4 *)0x0) {
          **(undefined4 **)(unaff_EDI + 0x44) =
               *(undefined4 *)
                (*(int *)(unaff_EDI + 0x40) + ((int)&local_118 - (int)ppiVar3 >> 2) * 4);
        }
      }
      else {
        if (ppiVar2 == *(int ***)(unaff_EDI + 0x48)) {
          uVar9 = (int)ppiVar2 - *(int *)(unaff_EDI + 0x40) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00408508;
          uVar9 = uVar9 + 1;
          uVar11 = (int)*(int ***)(unaff_EDI + 0x48) - *(int *)(unaff_EDI + 0x40) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            FUN_004bf300(uVar11);
          }
        }
        if (*(undefined4 **)(unaff_EDI + 0x44) != (undefined4 *)0x0) {
          **(undefined4 **)(unaff_EDI + 0x44) = puVar8;
        }
      }
      *(int *)(unaff_EDI + 0x44) = *(int *)(unaff_EDI + 0x44) + 4;
      iStack_120 = iStack_120 + 0x34;
      local_114 = local_114 + 1;
    } while (local_114 < (*(int *)(unaff_EDI + 0x244) - *(int *)(unaff_EDI + 0x240)) / 0x34);
  }
  local_114 = 0;
  if (0 < (*(int *)(unaff_EDI + 0x254) - *(int *)(unaff_EDI + 0x250)) / 0x34) {
    uStack_d4 = DAT_00f092fc;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_f8 = 0;
    uStack_f4 = DAT_00f092fc;
    uStack_f0 = 0;
    piStack_ec = (int *)0x0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = DAT_00f092fc;
    uStack_dc = 0;
    aiStack_110[1] = 0;
    aiStack_110[2] = 0;
    aiStack_110[3] = 0;
    aiStack_110[4] = DAT_00f092fc;
    iStack_120 = 0;
    do {
      iVar14 = *(int *)(unaff_EDI + 0x250) + iStack_120;
      uStack_60 = CONCAT44(uStack_60._4_4_,0xf);
      uStack_64 = 0;
      auStack_74[0] = 0;
      FUN_00409350("mi_text",7);
      uStack_c = 2;
      (**(code **)(**(int **)(unaff_EDI + 0x1d0) + 0x40))();
      piVar5 = (int *)FUN_005c2ad0(auStack_74);
      puVar8 = (uint *)(**(code **)(*piVar5 + 0x48))();
      (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x10))(puVar8);
      puStack_10 = (undefined1 *)0xffffffff;
      puStack_11c = puVar8;
      if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_78);
      }
      puVar8[0x51] = 0;
      uStack_68 = 0;
      uStack_78 = uStack_78 & 0xffffff00;
      uStack_64 = 0xf;
      (**(code **)(*puVar8 + 0x34))();
      (**(code **)(*(int *)(unaff_EDI + 0x50) + 0x20))(puVar8);
      FUN_00408b00();
      uStack_60 = CONCAT44(iStack_d8,uStack_dc);
      uStack_58 = CONCAT44(uStack_d0,uStack_d4);
      uStack_50 = CONCAT44(piStack_fc,aiStack_110[4]);
      uStack_48 = CONCAT44(uStack_f4,uStack_f8);
      uStack_40 = CONCAT44(piStack_ec,uStack_f0);
      uStack_38 = CONCAT44(uStack_e4,uStack_e8);
      _uStack_30 = CONCAT44(0x3d99999a,*(undefined4 *)(iVar14 + 0x2c));
      _uStack_28 = CONCAT44(DAT_00f092fc,*(undefined4 *)(iVar14 + 0x30));
      (**(code **)(*puVar8 + 0xa4))(&uStack_60);
      FUN_00986c90(iVar14,iVar14 + 8,0,*(undefined4 *)(iVar14 + 0x24),0,0);
      puVar12 = (uint *)(unaff_EDI + 0x40);
      puVar8[0x72] = *(uint *)(iVar14 + 0x28);
      ppiVar2 = *(int ***)(unaff_EDI + 0x44);
      if ((&local_118 < ppiVar2) && (ppiVar3 = (int **)*puVar12, ppiVar3 <= &local_118)) {
        puStack_11c = (uint *)((int)&local_118 - (int)ppiVar3 >> 2);
        if (ppiVar2 == *(int ***)(unaff_EDI + 0x48)) {
          uVar9 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00408508;
          uVar9 = uVar9 + 1;
          uVar11 = (int)*(int ***)(unaff_EDI + 0x48) - (int)ppiVar3 >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            FUN_004bf300(uVar11);
          }
        }
        if (*(undefined4 **)(unaff_EDI + 0x44) != (undefined4 *)0x0) {
          **(undefined4 **)(unaff_EDI + 0x44) = *(undefined4 *)(*puVar12 + (int)puStack_11c * 4);
        }
      }
      else {
        if (ppiVar2 == *(int ***)(unaff_EDI + 0x48)) {
          uVar9 = (int)((int)ppiVar2 - *puVar12) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_00408508:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          puStack_11c = (uint *)(uVar9 + 1);
          puVar12 = (uint *)((int)((int)*(int ***)(unaff_EDI + 0x48) - *puVar12) >> 2);
          if (puVar12 < puStack_11c) {
            if ((uint *)(0x3fffffff - ((uint)puVar12 >> 1)) < puVar12) {
              puVar12 = (uint *)0x0;
            }
            else {
              puVar12 = (uint *)((int)puVar12 + ((uint)puVar12 >> 1));
            }
            if (puVar12 < puStack_11c) {
              puVar12 = puStack_11c;
            }
            FUN_004bf300(puVar12);
          }
        }
        if (*(undefined4 **)(unaff_EDI + 0x44) != (undefined4 *)0x0) {
          **(undefined4 **)(unaff_EDI + 0x44) = puVar8;
        }
      }
      *(int *)(unaff_EDI + 0x44) = *(int *)(unaff_EDI + 0x44) + 4;
      iStack_120 = iStack_120 + 0x34;
      local_114 = local_114 + 1;
    } while (local_114 < (*(int *)(unaff_EDI + 0x254) - *(int *)(unaff_EDI + 0x250)) / 0x34);
  }
  if (*(int *)(unaff_EDI + 0x220) != *(int *)(unaff_EDI + 0x224)) {
    uVar10 = FUN_0040a4e0(*(int *)(unaff_EDI + 0x224),puStack_11c);
    FUN_0040a110(*(undefined4 *)(unaff_EDI + 0x224),puStack_11c);
    *(undefined4 *)(unaff_EDI + 0x224) = uVar10;
  }
  if (*(int *)(unaff_EDI + 0x230) != *(int *)(unaff_EDI + 0x234)) {
    uVar10 = FUN_0040a4e0(*(int *)(unaff_EDI + 0x234),puStack_11c);
    FUN_0040a110(*(undefined4 *)(unaff_EDI + 0x234),puStack_11c);
    *(undefined4 *)(unaff_EDI + 0x234) = uVar10;
  }
  if (*(int *)(unaff_EDI + 0x240) != *(int *)(unaff_EDI + 0x244)) {
    puStack_11c = (uint *)FUN_0040a550(*(int *)(unaff_EDI + 0x244),puStack_11c);
    puVar8 = *(uint **)(unaff_EDI + 0x244);
    if (puStack_11c != puVar8) {
      puVar12 = puStack_11c + 7;
      do {
        if (0xf < *puVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar12[-5]);
        }
        *puVar12 = 0xf;
        puVar12[-1] = 0;
        *(undefined1 *)(puVar12 + -5) = 0;
        puVar1 = puVar12 + 6;
        puVar12 = puVar12 + 0xd;
      } while (puVar1 != puVar8);
    }
    *(uint **)(unaff_EDI + 0x244) = puStack_11c;
  }
  if (*(int *)(unaff_EDI + 0x250) != *(int *)(unaff_EDI + 0x254)) {
    local_114 = FUN_0040a5b0(*(int *)(unaff_EDI + 0x254),puStack_11c);
    puVar8 = *(uint **)(unaff_EDI + 0x254);
    if ((uint *)local_114 != puVar8) {
      puVar12 = (uint *)(local_114 + 0x1c);
      do {
        if (0xf < *puVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar12[-5]);
        }
        *puVar12 = 0xf;
        puVar12[-1] = 0;
        *(undefined1 *)(puVar12 + -5) = 0;
        puVar1 = puVar12 + 6;
        puVar12 = puVar12 + 0xd;
      } while (puVar1 != puVar8);
    }
    *(int *)(unaff_EDI + 0x254) = local_114;
  }
  *(undefined1 *)(unaff_EDI + 0x21c) = 1;
  ExceptionList = pvStack_14;
  return;
}

