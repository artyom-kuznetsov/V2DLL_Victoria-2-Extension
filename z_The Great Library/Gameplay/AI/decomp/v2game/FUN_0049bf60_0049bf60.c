// FUN_0049bf60 @ 0049bf60 body=[[0049bf60, 0049c0e3] [0049c0f0, 0049c23f] [0049c248, 0049c261] [0049c27d, 0049c2b6] [0049c2c0, 0049c439] [0049c440, 0049c574] [0049c578, 0049c678]]


void FUN_0049bf60(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  uint *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 ****ppppuVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  int *piVar14;
  int iVar15;
  undefined4 **ppuVar16;
  int iVar17;
  bool bVar18;
  undefined1 *puStack_fc;
  uint *puStack_f8;
  undefined4 **local_f4;
  undefined4 *puStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  int local_e4;
  undefined *local_e0;
  undefined1 *puStack_dc;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined4 ***local_64 [4];
  int local_54;
  uint local_50;
  undefined1 *local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  uint *local_20;
  undefined1 *local_1c;
  undefined4 **local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5b3be;
  local_10 = ExceptionList;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  puStack_dc = (undefined1 *)0x3c;
  local_8 = 0;
  local_e0 = (undefined *)0x49bf96;
  ExceptionList = &local_10;
  puVar6 = (uint *)FUN_00aae9af();
  local_8._0_1_ = 1;
  local_20 = puVar6;
  if (puVar6 == (uint *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    local_24 = (undefined1 *)&local_f4;
    puStack_f8 = (uint *)0x0;
    local_e0 = (undefined *)0xf;
    local_e4 = 0;
    puStack_fc = &DAT_00ded94d;
    local_f4 = (undefined4 **)((uint)local_f4 & 0xffffff00);
    FUN_00409350();
    puStack_f8 = (uint *)0x0;
    puStack_fc = (undefined1 *)(param_1 + 0x2068);
    piVar7 = (int *)FUN_00992740(puVar6);
  }
  local_8._0_1_ = 0;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 0;
  if (piVar7 != (int *)0x0) {
    puStack_dc = (undefined1 *)0x49bff4;
    puVar8 = (undefined1 *)(**(code **)(*piVar7 + 0x38))();
    puStack_dc = (undefined1 *)0x49c002;
    local_1c = puVar8;
    cVar5 = (**(code **)(*piVar7 + 0x24))();
    if ((cVar5 != '\0') && (0 < (int)puVar8)) {
      local_e0 = (undefined *)0x49c01a;
      puStack_dc = puVar8;
      local_e0 = (undefined *)FUN_00aad56b();
      local_e4 = 0x49c02b;
      puStack_dc = puVar8;
      local_18 = (undefined4 **)local_e0;
      (**(code **)(*piVar7 + 0xc))();
      local_e4 = 1;
      iStack_e8 = 0x49c035;
      (**(code **)*piVar7)();
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = (undefined4 ***)((uint)local_64[0] & 0xffffff00);
      iStack_e8 = 0;
      uStack_ec = 0x200;
      local_8._0_1_ = 2;
      puStack_f0 = (undefined4 *)0x49c054;
      FUN_00409640();
      ppuVar16 = local_18;
      local_54 = 0;
      ppppuVar9 = (undefined4 ****)local_64[0];
      if (local_50 < 0x10) {
        ppppuVar9 = local_64;
      }
      iVar15 = 0;
      *(undefined1 *)ppppuVar9 = 0;
      if (0 < (int)puVar8) {
        do {
          puStack_f0 = (undefined4 *)0x0;
          local_f4 = (undefined4 **)&DAT_00ded94d;
          puStack_f8 = (uint *)0x49c082;
          FUN_00409350();
          if (iVar15 < (int)puVar8) {
            while( true ) {
              cVar5 = *(char *)(iVar15 + (int)ppuVar16);
              iVar15 = iVar15 + 1;
              local_24 = (undefined1 *)CONCAT31(local_24._1_3_,cVar5);
              if (cVar5 == '#') break;
              if ((cVar5 == '\n') || ((int)puVar8 <= iVar15)) goto LAB_0049c0fc;
              local_6c = 0xf;
              local_70 = 0;
              local_80[0] = local_80[0] & 0xffffff00;
              puStack_f0 = (undefined4 *)local_24;
              local_f4 = (undefined4 **)0x1;
              local_8._0_1_ = 3;
              puStack_f8 = (uint *)0x49c0bd;
              FUN_00448860();
              puStack_f0 = (undefined4 *)0xffffffff;
              local_f4 = (undefined4 **)0x0;
              puStack_f8 = local_80;
              local_8._0_1_ = 4;
              puStack_fc = (undefined1 *)0x49c0d1;
              FUN_00448aa0();
              local_8._0_1_ = 2;
              if (0xf < local_6c) {
                puStack_f0 = (undefined4 *)local_80[0];
                    /* WARNING: Subroutine does not return */
                local_f4 = (undefined4 **)&UNK_0049c0e4;
                FUN_00aae91b();
              }
            }
            do {
              if ((int)puVar8 <= iVar15) break;
              pcVar12 = (char *)(iVar15 + (int)ppuVar16);
              iVar15 = iVar15 + 1;
            } while (*pcVar12 != '\n');
          }
LAB_0049c0fc:
          if (1 < local_54) {
            puStack_f0 = (undefined4 *)0x3b;
            local_f4 = &local_34;
            puStack_f8 = (uint *)0x49c114;
            FUN_00989510();
            if ((local_30 - (int)local_34) / 0x1c == 6) {
              local_8._0_1_ = 6;
              puStack_f0 = local_34;
              if (0xf < (uint)local_34[5]) {
                puStack_f0 = (undefined4 *)*local_34;
              }
              local_f4 = (undefined4 **)0x49c179;
              FUN_00aaf0c5();
              puStack_f0 = local_34 + 7;
              if (0xf < (uint)local_34[0xc]) {
                puStack_f0 = (undefined4 *)*puStack_f0;
              }
              local_f4 = (undefined4 **)0x49c195;
              FUN_00aaf0c5();
              puStack_f0 = (undefined4 *)0xffffffff;
              puStack_f8 = local_34 + 0xe;
              local_f4 = (undefined4 **)0x0;
              puStack_fc = (undefined1 *)0x49c1b4;
              FUN_00408ed0();
              puStack_f0 = local_34 + 0x15;
              if (0xf < (uint)local_34[0x1a]) {
                puStack_f0 = (undefined4 *)*puStack_f0;
              }
              local_f4 = (undefined4 **)0x49c1c7;
              FUN_00aaf0c5();
              puStack_f0 = local_34 + 0x1c;
              if (0xf < (uint)local_34[0x21]) {
                puStack_f0 = (undefined4 *)*puStack_f0;
              }
              local_f4 = (undefined4 **)0x49c1e3;
              FUN_00aaf0c5();
              puStack_f0 = (undefined4 *)0xffffffff;
              puStack_f8 = local_34 + 0x23;
              local_f4 = (undefined4 **)0x0;
              puStack_fc = (undefined1 *)0x49c204;
              FUN_00408ed0();
              puStack_f0 = (undefined4 *)0x49c212;
              FUN_004a3420();
              puStack_f0 = (undefined4 *)0x49c21d;
              FUN_0049c6c0();
              puVar8 = local_1c;
            }
            local_8._0_1_ = 2;
            if (local_34 != (undefined4 *)0x0) {
              puStack_f0 = (undefined4 *)0x49c237;
              FUN_00413860();
              puStack_f0 = local_34;
                    /* WARNING: Subroutine does not return */
              local_f4 = (undefined4 **)&UNK_0049c240;
              FUN_00aae91b();
            }
            local_34 = (undefined4 *)0x0;
            local_30 = 0;
            local_2c = 0;
            ppuVar16 = local_18;
          }
        } while (iVar15 < (int)puVar8);
      }
                    /* WARNING: Subroutine does not return */
      local_f4 = (undefined4 **)&UNK_0049c262;
      puStack_f0 = ppuVar16;
      FUN_00aae91b();
    }
    puStack_dc = (undefined1 *)0x1;
    local_e0 = (undefined *)0x49c287;
    (**(code **)*piVar7)();
    uVar4 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar4;
  puVar8 = (undefined1 *)((local_40 - local_44) / 0x48);
  if ((puVar8 != (undefined1 *)0x0) && (0 < (int)puVar8)) {
    piVar7 = (int *)(local_44 + 0x28);
    local_24 = puVar8;
    do {
      uVar2 = piVar7[-3];
      local_1c = (undefined1 *)0x0;
      pbVar11 = (byte *)(piVar7 + -8);
      pbVar10 = pbVar11;
      if (0xf < uVar2) {
        pbVar10 = *(byte **)pbVar11;
      }
      pcVar12 = "river";
      do {
        bVar1 = *pbVar10;
        bVar18 = bVar1 < (byte)*pcVar12;
        if (bVar1 != *pcVar12) {
LAB_0049c300:
          iVar15 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0049c305;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar18 = bVar1 < (byte)pcVar12[1];
        if (bVar1 != pcVar12[1]) goto LAB_0049c300;
        pbVar10 = pbVar10 + 2;
        pcVar12 = pcVar12 + 2;
      } while (bVar1 != 0);
      iVar15 = 0;
LAB_0049c305:
      if (iVar15 == 0) {
        local_1c = (undefined1 *)0x2;
      }
      else {
        pbVar10 = pbVar11;
        if (0xf < uVar2) {
          pbVar10 = *(byte **)pbVar11;
        }
        pbVar13 = &DAT_00dfc558;
        do {
          bVar1 = *pbVar10;
          bVar18 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_0049c345:
            iVar15 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_0049c34a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar18 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_0049c345;
          pbVar10 = pbVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar15 = 0;
LAB_0049c34a:
        if (iVar15 == 0) {
          local_1c = (undefined1 *)0x1;
        }
        else {
          pbVar10 = pbVar11;
          if (0xf < uVar2) {
            pbVar10 = *(byte **)pbVar11;
          }
          pcVar12 = "canal";
          do {
            bVar1 = *pbVar10;
            bVar18 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_0049c390:
              iVar15 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_0049c395;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar18 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_0049c390;
            pbVar10 = pbVar10 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar15 = 0;
LAB_0049c395:
          if (iVar15 == 0) {
            local_1c = (undefined1 *)0x3;
          }
          else {
            if (0xf < uVar2) {
              pbVar11 = *(byte **)pbVar11;
            }
            pcVar12 = "impassable";
            do {
              bVar1 = *pbVar11;
              bVar18 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_0049c3d2:
                iVar15 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                goto LAB_0049c3d7;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar11[1];
              bVar18 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_0049c3d2;
              pbVar11 = pbVar11 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            iVar15 = 0;
LAB_0049c3d7:
            if (iVar15 == 0) {
              local_1c = (undefined1 *)0x4;
            }
          }
        }
      }
      if ((-1 < piVar7[-10]) && (-1 < piVar7[-9])) {
        iVar15 = *(int *)(*(int *)(param_1 + 0x2aa4) + piVar7[-10] * 4);
        iVar3 = *(int *)(*(int *)(param_1 + 0x2aa4) + piVar7[-9] * 4);
        iVar17 = (*(int *)(iVar15 + 0xcc) - *(int *)(iVar15 + 200)) / 0x24;
        local_18 = (undefined4 **)0x0;
        if (0 < iVar17) {
          piVar14 = (int *)(*(int *)(iVar15 + 200) + 4);
LAB_0049c440:
          if (*piVar14 != piVar7[-9]) goto code_r0x0049c44b;
          iVar17 = 0;
          local_18 = (undefined4 **)0x0;
          do {
            if (*(int *)(iVar17 + 4 + *(int *)(iVar15 + 200)) == piVar7[-9]) {
              local_20 = (uint *)*piVar7;
              *(int *)(iVar17 + 8 + *(int *)(iVar15 + 200)) = piVar7[-1];
              *(undefined1 **)(iVar17 + *(int *)(iVar15 + 200)) = local_1c;
              *(uint **)(iVar17 + 0xc + *(int *)(iVar15 + 200)) = local_20;
            }
            local_18 = (undefined4 **)((int)local_18 + 1);
            iVar17 = iVar17 + 0x24;
          } while ((int)local_18 < (*(int *)(iVar15 + 0xcc) - *(int *)(iVar15 + 200)) / 0x24);
          iVar15 = 0;
          local_18 = (undefined4 **)0x0;
          if (0 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24) {
            do {
              if (*(int *)(iVar15 + 4 + *(int *)(iVar3 + 200)) == piVar7[-10]) {
                iVar17 = *piVar7;
                *(int *)(iVar15 + 8 + *(int *)(iVar3 + 200)) = piVar7[-1];
                *(undefined1 **)(iVar15 + *(int *)(iVar3 + 200)) = local_1c;
                *(int *)(iVar15 + 0xc + *(int *)(iVar3 + 200)) = iVar17;
              }
              local_18 = (undefined4 **)((int)local_18 + 1);
              iVar15 = iVar15 + 0x24;
            } while ((int)local_18 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24);
          }
          goto LAB_0049c50e;
        }
LAB_0049c456:
        puStack_f0 = (undefined4 *)*piVar7;
        local_f4 = (undefined4 **)piVar7[-1];
        puStack_f8 = (uint *)piVar7[-9];
        local_48 = (undefined1 *)&puStack_fc;
        puStack_fc = local_1c;
        uStack_ec = 0;
        iVar17 = (*(int *)(iVar3 + 0x7c) + *(int *)(iVar15 + 0x7c)) / 2;
        iVar15 = (*(int *)(iVar3 + 0x80) + *(int *)(iVar15 + 0x80)) / 2;
        iStack_e8 = iVar17;
        local_e4 = iVar15;
        local_20 = puStack_f8;
        local_18 = local_f4;
        FUN_004c3ee0();
        local_f4 = (undefined4 **)piVar7[-1];
        puStack_f8 = (uint *)piVar7[-10];
        puStack_f0 = (undefined4 *)*piVar7;
        local_48 = (undefined1 *)&puStack_fc;
        puStack_fc = local_1c;
        uStack_ec = 0;
        iStack_e8 = iVar17;
        local_e4 = iVar15;
        local_20 = puStack_f8;
        local_18 = local_f4;
        FUN_004c3ee0();
LAB_0049c50e:
        if (local_1c == (undefined1 *)0x1) {
          local_30 = piVar7[-10];
          local_2c = piVar7[-9];
          local_28 = piVar7[-1];
          puStack_dc = (undefined1 *)0x49c534;
          FUN_004bec00();
        }
        if (piVar7[-1] != 0) {
          *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2aa4) + piVar7[-1] * 4) + 0x1d) = 1;
        }
      }
      piVar7 = piVar7 + 0x12;
      local_24 = local_24 + -1;
    } while (local_24 != (undefined1 *)0x0);
  }
  iVar15 = local_44;
  if (local_44 == 0) {
    ExceptionList = local_10;
    return;
  }
  puStack_dc = (undefined1 *)param_1;
  local_e0 = (undefined *)0x49c56c;
  FUN_004a3b20();
  puStack_dc = (undefined1 *)iVar15;
                    /* WARNING: Subroutine does not return */
  local_e0 = &UNK_0049c575;
  FUN_00aae91b();
code_r0x0049c44b:
  local_18 = (undefined4 **)((int)local_18 + 1);
  piVar14 = piVar14 + 9;
  if (iVar17 <= (int)local_18) goto LAB_0049c456;
  goto LAB_0049c440;
}

