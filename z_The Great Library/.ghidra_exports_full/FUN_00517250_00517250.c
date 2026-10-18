// FUN_00517250 @ 00517250 body=[[00517250, 0051771b] [0051771f, 00517741] [00517745, 00517768] [0051776c, 005177a3] [005177a7, 00517898] [0051789c, 0051795e] [00517962, 00517995] [00517999, 005179bf] [005179c3, 005179d9]]


/* WARNING: Removing unreachable block (ram,0x0051798c) */

void FUN_00517250(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_170 [112];
  undefined4 uStack_100;
  uint *puStack_fc;
  char *pcStack_f8;
  int *local_f4;
  int local_dc;
  uint auStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  piVar4 = DAT_012587e4;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9ca9f;
  local_14 = ExceptionList;
  iVar12 = *(int *)(DAT_012588e8 + 0xb60);
  bVar3 = false;
  local_dc = 0;
  ExceptionList = &local_14;
  if (0 < *DAT_012587e4) {
    do {
      iVar1 = *(int *)(*(int *)(piVar4[1] + local_dc * 4) + 0x20);
      iVar8 = *(int *)(param_1 + 0x20);
      if ((iVar1 != iVar8) &&
         (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + iVar1 * 4) + 0xbe8) + iVar8 * 4) +
                  0x34) == 0)) {
        piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + iVar1 * 4) + 0xbe8) +
                                   iVar8 * 4) + 0x20);
        if (piVar2 != (int *)0x0) {
          for (local_f4 = *(int **)(DAT_012588e8 + 0xa84);
              (local_f4 != (int *)0x0 && ((int *)*local_f4 != piVar2));
              local_f4 = (int *)local_f4[2]) {
          }
          pcStack_f8 = (char *)0x517339;
          FUN_005f2ae0();
          local_f4 = (int *)0x517342;
          (**(code **)(*piVar2 + 0x2c))();
          local_f4 = (int *)0x1;
          pcStack_f8 = (char *)0x51734c;
          (**(code **)*piVar2)();
          if (iVar1 == iVar12) {
            bVar3 = true;
          }
        }
        piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + iVar1 * 4) + 0xbe8) +
                                   *(int *)(param_1 + 0x20) * 4) + 0x24);
        if (piVar2 != (int *)0x0) {
          for (local_f4 = *(int **)(DAT_012588e8 + 0xa84);
              (local_f4 != (int *)0x0 && ((int *)*local_f4 != piVar2));
              local_f4 = (int *)local_f4[2]) {
          }
          pcStack_f8 = (char *)0x5173a4;
          FUN_005f2ae0();
          local_f4 = (int *)0x5173ad;
          (**(code **)(*piVar2 + 0x2c))();
          local_f4 = (int *)0x1;
          pcStack_f8 = (char *)0x5173b7;
          (**(code **)*piVar2)();
          if (iVar1 == iVar12) {
            bVar3 = true;
          }
        }
        if (*(int *)(param_1 + 0x142c) != 0) {
          if (*(int *)(param_1 + 0x142c) == *(int *)(DAT_012588e8 + 0xb60)) {
            bVar3 = true;
          }
          local_f4 = *(int **)(DAT_012587e4[1] + *(int *)(param_1 + 0x142c) * 4);
          pcStack_f8 = (char *)0x517410;
          FUN_00533f20();
        }
        iVar8 = *(int *)(param_1 + 0x141c);
        iVar7 = *(int *)(param_1 + 0x1418);
        if (iVar7 != iVar8) {
          do {
            if (*(int *)(iVar7 + 4) == iVar1) break;
            iVar7 = iVar7 + 8;
          } while (iVar7 != iVar8);
          if (iVar7 != iVar8) {
            if (iVar1 == *(int *)(DAT_012588e8 + 0xb60)) {
              bVar3 = true;
            }
            local_f4 = (int *)param_1;
            pcStack_f8 = (char *)0x51744c;
            FUN_00533f20();
          }
        }
        local_f4 = (int *)0x517469;
        FUN_0092d620();
        iVar8 = *(int *)(*(int *)(param_1 + 0xbe8) + iVar1 * 4);
        if (*(int *)(iVar8 + 0x40) != 2) {
          *(undefined4 *)(iVar8 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        }
        *(undefined4 *)(iVar8 + 0x40) = 2;
        iVar8 = *(int *)(DAT_012587e4[1] + iVar1 * 4);
        iVar7 = *(int *)(*(int *)(iVar8 + 0xbe8) + *(int *)(param_1 + 0x20) * 4);
        if ((*(char *)(*(int *)(DAT_012587e4[1] + *(int *)(iVar7 + 0xc) * 4) + 0x31) == '\0') &&
           (2 < *(int *)(iVar7 + 0x40))) {
          bVar3 = true;
        }
        iVar8 = *(int *)(*(int *)(iVar8 + 0xbe8) + *(int *)(param_1 + 0x20) * 4);
        if (*(int *)(iVar8 + 0x40) != 2) {
          *(undefined4 *)(iVar8 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        }
        iVar5 = DAT_01258a08;
        piVar2 = DAT_012587e4;
        *(undefined4 *)(iVar8 + 0x40) = 2;
        iVar7 = DAT_012586dc;
        iVar8 = *(int *)(piVar2[1] + iVar1 * 4);
        if (iVar5 == 0) {
          iVar14 = *(int *)(*(int *)(*(int *)(iVar8 + 0xbe8) + *(int *)(param_1 + 0x20) * 4) + 0x48)
          ;
        }
        else {
          iVar14 = 100000;
        }
        if (iVar14 != 0) {
          iVar8 = *(int *)(*(int *)(iVar8 + 0xbe8) + *(int *)(param_1 + 0x20) * 4);
          iVar15 = 0;
          *(undefined4 *)(iVar8 + 0x48) = 0;
          iVar14 = *(int *)(*(int *)(iVar7 + 0x30) + 0x404);
          if (iVar14 < 0) {
            iVar15 = -iVar14;
            *(int *)(iVar8 + 0x48) = iVar14;
          }
          *(int *)(iVar8 + 0x4c) = iVar15;
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0xbe8) + iVar1 * 4);
        iVar8 = 100000;
        if (iVar5 == 0) {
          iVar8 = *(int *)(iVar1 + 0x48);
        }
        if (iVar8 != 0) {
          *(undefined4 *)(iVar1 + 0x48) = 0;
          iVar8 = *(int *)(*(int *)(iVar7 + 0x30) + 0x404);
          if (iVar8 < 0) {
            *(int *)(iVar1 + 0x4c) = -iVar8;
            *(int *)(iVar1 + 0x48) = iVar8;
          }
          else {
            *(undefined4 *)(iVar1 + 0x4c) = 0;
          }
        }
      }
      local_dc = local_dc + 1;
    } while (local_dc < *piVar4);
    if (bVar3) {
      local_f4 = *(int **)(DAT_012587e4[1] + *(int *)(DAT_012588e8 + 0xb60) * 4);
      pcStack_f8 = (char *)0x5175d1;
      puVar9 = (undefined4 *)FUN_005061e0();
      local_f4 = (int *)0x5;
      pcStack_f8 = "ACTOR";
      uStack_58 = 0xf;
      uStack_5c = 0;
      auStack_6c[0] = auStack_6c[0] & 0xffffff00;
      puStack_fc = (uint *)0x517602;
      FUN_00409350();
      uStack_c = 0;
      local_f4 = (int *)0x517617;
      puVar10 = (uint *)FUN_004f97a0();
      local_f4 = (int *)0xffffffff;
      uStack_c._0_1_ = 1;
      pcStack_f8 = (char *)0x0;
      puStack_fc = auStack_6c;
      uStack_90 = 0xf;
      uStack_94 = 0;
      auStack_a4[0] = auStack_a4[0] & 0xffffff00;
      uStack_100 = 0x517646;
      FUN_00408ed0();
      local_f4 = (int *)0xffffffff;
      uStack_c._0_1_ = 2;
      pcStack_f8 = (char *)0x0;
      uStack_74 = 0xf;
      uStack_78 = 0;
      auStack_88[0] = auStack_88[0] & 0xffffff00;
      uStack_100 = 0x517672;
      puStack_fc = puVar10;
      FUN_00408ed0();
      uStack_c._0_1_ = 3;
      iVar12 = puVar9[1];
      local_f4 = (int *)0x44;
      pcStack_f8 = (char *)0x517688;
      puVar11 = (undefined1 *)FUN_00aae9af();
      uStack_c._0_1_ = 4;
      uVar6 = (undefined1)uStack_c;
      uStack_c._0_1_ = 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = (undefined1 *)0x0;
        uStack_c._0_1_ = uVar6;
      }
      else {
        local_f4 = (int *)0xffffffff;
        pcStack_f8 = (char *)0x0;
        puStack_fc = auStack_a4;
        *(undefined4 *)(puVar11 + 0x14) = 0xf;
        *(undefined4 *)(puVar11 + 0x10) = 0;
        *puVar11 = 0;
        uStack_100 = 0x5176b9;
        FUN_00408ed0();
        local_f4 = (int *)0xffffffff;
        uStack_c._0_1_ = 5;
        pcStack_f8 = (char *)0x0;
        puStack_fc = auStack_88;
        *(undefined4 *)(puVar11 + 0x30) = 0xf;
        *(undefined4 *)(puVar11 + 0x2c) = 0;
        puVar11[0x1c] = 0;
        uStack_100 = 0x5176de;
        FUN_00408ed0();
        *(int *)(puVar11 + 0x38) = iVar12;
        *(undefined4 *)(puVar11 + 0x3c) = 0;
        puVar11[0x40] = 0;
      }
      iVar1 = puVar9[2];
      puVar9[1] = puVar11;
      puVar9[2] = iVar1 + 1;
      if (iVar1 == 0) {
        *puVar9 = puVar11;
      }
      else {
        *(undefined1 **)(iVar12 + 0x3c) = puVar11;
      }
      if (0xf < uStack_74) {
        local_f4 = (int *)auStack_88[0];
                    /* WARNING: Subroutine does not return */
        pcStack_f8 = &UNK_0051771c;
        FUN_00aae91b();
      }
      uStack_74 = 0xf;
      uStack_78 = 0;
      auStack_88[0] = auStack_88[0] & 0xffffff00;
      if (0xf < uStack_90) {
        local_f4 = (int *)auStack_a4[0];
                    /* WARNING: Subroutine does not return */
        pcStack_f8 = &UNK_00517742;
        FUN_00aae91b();
      }
      uStack_90 = 0xf;
      uStack_94 = 0;
      auStack_a4[0] = auStack_a4[0] & 0xffffff00;
      if (0xf < uStack_20) {
        local_f4 = (int *)uStack_34;
                    /* WARNING: Subroutine does not return */
        pcStack_f8 = &UNK_00517769;
        FUN_00aae91b();
      }
      uStack_c = 0xffffffff;
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      if (0xf < uStack_58) {
        local_f4 = (int *)auStack_6c[0];
                    /* WARNING: Subroutine does not return */
        pcStack_f8 = &UNK_005177a4;
        FUN_00aae91b();
      }
      local_f4 = (int *)0x0;
      pcStack_f8 = "";
      uStack_3c = 0xf;
      uStack_40 = 0;
      auStack_50[0] = auStack_50[0] & 0xffffff00;
      puStack_fc = (uint *)0x5177cf;
      FUN_00409350();
      uStack_c = 6;
      local_f4 = (int *)0xe;
      pcStack_f8 = "REVOLTALLIANCE";
      puStack_fc = (uint *)0x5177f7;
      FUN_00409350();
      uStack_c._0_1_ = 7;
      iVar12 = DAT_01262ef4;
      if (DAT_01262ef4 == 0) {
        iVar12 = FUN_00aae9af(0x44);
        uStack_c._0_1_ = 8;
        if (iVar12 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_006a4e30();
        }
        iVar1 = DAT_01262ef4;
        uStack_c = CONCAT31(uStack_c._1_3_,9);
        if ((iVar12 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
          FUN_006a4ea0(DAT_01262ef4);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar1);
        }
      }
      DAT_01262ef4 = iVar12;
      uStack_c._0_1_ = 7;
      uVar19 = *(undefined4 *)(param_1 + 0x20);
      uVar21 = 0;
      uVar20 = 0x2d2d2d;
      uVar18 = *(undefined4 *)(param_1 + 0x1c);
      uVar17 = 0;
      puVar10 = auStack_50;
      uVar16 = 0;
      uVar13 = FUN_006a55b0(puVar9,0,puVar10,0,uVar18,uVar19,0x2d2d2d,0);
      FUN_006a7ed0(auStack_170,uVar13,puVar9,uVar16,puVar10,uVar17,uVar18,uVar19,uVar20,uVar21);
      uStack_c._0_1_ = 10;
      iVar12 = DAT_01262ef4;
      if (DAT_01262ef4 == 0) {
        iVar12 = FUN_00aae9af();
        uStack_c._0_1_ = 0xb;
        if (iVar12 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_006a4e30();
        }
        uStack_c = CONCAT31(uStack_c._1_3_,0xc);
        if ((iVar12 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
          FUN_006a4ea0();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      DAT_01262ef4 = iVar12;
      uStack_c = CONCAT31(uStack_c._1_3_,7);
      FUN_0042bb30(DAT_01262ef4);
      if (0xf < uStack_3c) {
        local_f4 = (int *)auStack_50[0];
                    /* WARNING: Subroutine does not return */
        pcStack_f8 = &UNK_005179c0;
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = local_14;
  return;
}

