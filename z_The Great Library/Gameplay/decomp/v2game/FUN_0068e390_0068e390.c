// FUN_0068e390 @ 0068e390  (requested 0068E390, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_0068e390(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  void **ppvVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_158 [112];
  undefined4 uStack_e8;
  uint *puStack_e4;
  char *pcStack_e0;
  uint uStack_dc;
  undefined4 local_b4;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  char local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar5 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b98c59;
  puVar1 = (undefined4 *)(DAT_012588e8 + 0xb5c);
  piVar2 = *(int **)(DAT_012588e8 + 0xb3c);
  ppvVar7 = &local_14;
  local_14 = ExceptionList;
  do {
    do {
      ExceptionList = ppvVar7;
      if (piVar2 == (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
      pcVar3 = (char *)*piVar2;
      piVar2 = (int *)piVar2[2];
      uStack_dc = 0x68e3ed;
      cVar8 = FUN_0093bd30();
      ppvVar7 = ExceptionList;
    } while (cVar8 == '\0');
    cVar8 = pcVar3[0xfc];
    if ((cVar8 == '\0') && (*(char *)(param_1 + 0xb94) != '\0')) {
      iVar12 = *(int *)(pcVar3 + 0x30);
      iVar4 = *(int *)(iVar5 + 0xb60);
      iVar9 = *(int *)(pcVar3 + 0x2c);
      if (iVar9 == iVar12) {
LAB_0068e440:
        iVar12 = *(int *)(pcVar3 + 0x40);
        iVar9 = *(int *)(pcVar3 + 0x3c);
        if (iVar9 != iVar12) {
          do {
            if (*(int *)(iVar9 + 4) == iVar4) break;
            iVar9 = iVar9 + 8;
          } while (iVar9 != iVar12);
          if (iVar9 != iVar12) goto LAB_0068e464;
        }
      }
      else {
        do {
          if (*(int *)(iVar9 + 4) == iVar4) break;
          iVar9 = iVar9 + 8;
        } while (iVar9 != iVar12);
        if (iVar9 == iVar12) goto LAB_0068e440;
LAB_0068e464:
        uStack_dc = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4);
        pcStack_e0 = (char *)0x68e47e;
        puVar10 = (undefined4 *)FUN_005061e0();
        uStack_dc = 3;
        pcStack_e0 = "WAR";
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        puStack_e4 = (uint *)0x68e4a6;
        FUN_00409350();
        uStack_dc = 0xffffffff;
        local_c = 0;
        pcStack_e0 = (char *)0x0;
        puStack_e4 = local_6c;
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = 0;
        uStack_e8 = 0x68e4da;
        FUN_00408ed0();
        uStack_dc = 0xffffffff;
        local_c._0_1_ = 1;
        pcStack_e0 = (char *)0x0;
        puStack_e4 = (uint *)(pcVar3 + 0x10);
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = '\0';
        uStack_e8 = 0x68e50e;
        FUN_00408ed0();
        local_c._0_1_ = 2;
        iVar12 = puVar10[1];
        uStack_dc = 0x44;
        pcStack_e0 = (char *)0x68e524;
        puVar11 = (undefined1 *)FUN_00aae9af();
        local_c._0_1_ = 3;
        uVar6 = (undefined1)local_c;
        local_c._0_1_ = 3;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = (undefined1 *)0x0;
          local_c._0_1_ = uVar6;
        }
        else {
          uStack_dc = 0xffffffff;
          pcStack_e0 = (char *)0x0;
          puStack_e4 = (uint *)local_50;
          *(undefined4 *)(puVar11 + 0x14) = 0xf;
          *(undefined4 *)(puVar11 + 0x10) = 0;
          *puVar11 = 0;
          uStack_e8 = 0x68e557;
          FUN_00408ed0();
          uStack_dc = 0xffffffff;
          local_c._0_1_ = 4;
          pcStack_e0 = (char *)0x0;
          puStack_e4 = (uint *)local_34;
          *(undefined4 *)(puVar11 + 0x30) = 0xf;
          *(undefined4 *)(puVar11 + 0x2c) = 0;
          puVar11[0x1c] = 0;
          uStack_e8 = 0x68e57e;
          FUN_00408ed0();
          *(int *)(puVar11 + 0x38) = iVar12;
          *(undefined4 *)(puVar11 + 0x3c) = 0;
          puVar11[0x40] = 0;
        }
        iVar4 = puVar10[2];
        puVar10[1] = puVar11;
        puVar10[2] = iVar4 + 1;
        if (iVar4 == 0) {
          *puVar10 = puVar11;
        }
        else {
          *(undefined1 **)(iVar12 + 0x3c) = puVar11;
        }
        uStack_dc = 0x68e5b6;
        FUN_00a39a80();
        local_c = 0xffffffff;
        if (0xf < local_58) {
          uStack_dc = local_6c[0];
                    /* WARNING: Subroutine does not return */
          pcStack_e0 = &UNK_0068e5d5;
          FUN_00aae91b();
        }
        uStack_dc = 0;
        pcStack_e0 = "";
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        puStack_e4 = (uint *)0x68e5f8;
        FUN_00409350();
        local_c = 5;
        uStack_dc = 0x12;
        pcStack_e0 = "WAR_GAIN_GW_STATUS";
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        puStack_e4 = (uint *)0x68e61f;
        FUN_00409350();
        local_c._0_1_ = 6;
        local_b4 = 0x2d2d2d;
        if (DAT_01262ef4 == 0) {
          iVar12 = FUN_00aae9af(0x44);
          local_c._0_1_ = 7;
          if (iVar12 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = FUN_006a4e30();
          }
          local_c._0_1_ = 6;
          FUN_006a59b0(uVar13);
        }
        uVar13 = *(undefined4 *)(iVar5 + 0xb60);
        uVar18 = *puVar1;
        uVar19 = 0;
        uVar17 = 0;
        puVar16 = local_a4;
        uVar15 = 0;
        uVar14 = FUN_006a55b0(puVar10,0,puVar16,0,uVar18,uVar13,0x2d2d2d,0);
        FUN_006a7ed0(auStack_158,uVar14,puVar10,uVar15,puVar16,uVar17,uVar18,uVar13,local_b4,uVar19)
        ;
        local_c._0_1_ = 8;
        uVar6 = (undefined1)local_c;
        local_c._0_1_ = 8;
        if (DAT_01262ef4 == 0) {
          iVar12 = FUN_00aae9af();
          local_c._0_1_ = 9;
          if (iVar12 != 0) {
            FUN_006a4e30();
          }
          local_c._0_1_ = 8;
          FUN_006a59b0();
          uVar6 = (undefined1)local_c;
        }
        local_c._0_1_ = uVar6;
        if (DAT_01262ef4 == 0) {
          iVar12 = FUN_00aae9af();
          local_c._0_1_ = 10;
          if (iVar12 != 0) {
            FUN_006a4e30();
          }
          local_c._0_1_ = 8;
          FUN_006a59b0();
        }
        local_c = CONCAT31(local_c._1_3_,6);
        FUN_004e9540(DAT_01262ef4);
        if (0xf < local_74) {
          uStack_dc = local_88;
                    /* WARNING: Subroutine does not return */
          pcStack_e0 = &UNK_0068e789;
          FUN_00aae91b();
        }
        local_c = 0xffffffff;
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        if (0xf < local_90) {
          uStack_dc = local_a4[0];
                    /* WARNING: Subroutine does not return */
          pcStack_e0 = &UNK_0068e7b8;
          FUN_00aae91b();
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
      }
    }
    pcVar3[0xfc] = *(char *)(param_1 + 0xb94);
    ppvVar7 = ExceptionList;
    if ((cVar8 == '\0') && (*(char *)(param_1 + 0xb94) != '\0')) {
      uStack_dc = 1;
      puStack_e4 = (uint *)0x68e7f4;
      pcStack_e0 = pcVar3;
      FUN_00931c30();
      ppvVar7 = ExceptionList;
    }
  } while( true );
}

