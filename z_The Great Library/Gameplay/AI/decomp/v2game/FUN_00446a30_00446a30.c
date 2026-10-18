// FUN_00446a30 @ 00446a30 body=[[00446a30, 00446c3c] [00446c40, 00446cb7] [00446cbb, 00446d22] [00446d30, 00446e41] [00446e45, 0044707c] [00447080, 004471a0]]


void FUN_00446a30(int param_1)

{
  int **ppiVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 **ppuVar8;
  int *piVar9;
  undefined1 **ppuStack_d0;
  int **ppiStack_cc;
  int iStack_bc;
  undefined1 *puStack_b8;
  int *piStack_b4;
  int local_b0;
  int *piStack_ac;
  int local_a8;
  undefined1 **ppuStack_a4;
  uint uStack_a0;
  int iStack_9c;
  undefined1 *puStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int *local_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint auStack_78 [4];
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_5c;
  int iStack_58;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  undefined1 *puStack_3c;
  uint uStack_38;
  undefined4 uStack_28;
  uint uStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar6 = DAT_012588e8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9fec8;
  local_14 = ExceptionList;
  if (*(char *)(param_1 + 0x44) == '\0') {
    local_a8 = DAT_012588e8;
    ExceptionList = &local_14;
    if (*(int *)(param_1 + 0x3c) < 1000) {
      iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xf4);
      ppiStack_cc = &local_8c;
      ppuStack_d0 = (undefined1 **)0x446a8e;
      ExceptionList = &local_14;
      piVar4 = (int *)FUN_004468a0();
      ppiStack_cc = (int **)0x0;
      ppuStack_d0 = (undefined1 **)0x3e8;
      iVar5 = __alldiv((longlong)*piVar4 * (longlong)iVar5);
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar5;
      if (*(int *)(param_1 + 0x3c) < 1000) {
        ExceptionList = local_14;
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = 1000;
      if (*(int *)(param_1 + 0x3c) < 1000) {
        ExceptionList = local_14;
        return;
      }
    }
    local_b0 = *(int *)(*(int *)(iVar6 + 0xacc) + *(int *)(param_1 + 8) * 4);
    piVar4 = *(int **)(local_b0 + 0xec);
    local_80 = *(undefined4 *)(*(int *)(iVar6 + 0xacc) + *(int *)(param_1 + 0xc) * 4);
    do {
      do {
        if (piVar4 == (int *)0x0) {
          ppiStack_cc = (int **)0x1b8;
          ppuStack_d0 = (undefined1 **)0x446b70;
          local_8c = (int *)FUN_00aae9af();
          piVar4 = (int *)0x0;
          uStack_c = 0;
          if (local_8c != (int *)0x0) {
            ppiStack_cc = (int **)0x446b8b;
            piVar4 = (int *)FUN_004460d0();
          }
          uStack_c = 0xffffffff;
          iStack_9c = DAT_00f096cc;
          ppiStack_cc = (int **)&uStack_a0;
          uStack_a0 = 0x28;
          ppuStack_d0 = (undefined1 **)0x446bc4;
          DAT_00f096cc = DAT_00f096cc + 1;
          piStack_ac = piVar4;
          (**(code **)(piVar4[2] + 0x18))();
          ppuStack_d0 = *(undefined1 ***)(*(int *)(param_1 + 0x40) + 0x20);
          FUN_005c93b0();
          ppuStack_d0 = (undefined1 **)piStack_ac[0x2c9];
          (**(code **)(*piVar4 + 0x6c))();
          FUN_005cb2c0();
          uVar7 = (**(code **)(*piVar4 + 0x3c))();
          ppuStack_d0 = (undefined1 **)(uVar7 & 0xff);
          ppiStack_cc = (int **)FUN_004f9d10(*(undefined4 *)(param_1 + 0x40),auStack_78);
          uStack_c = 3;
          ppuStack_d0 = (undefined1 **)0x446c25;
          FUN_005cdc70();
          uStack_c = 0xffffffff;
          if (0xf < uStack_64) {
            ppiStack_cc = (int **)auStack_78[0];
                    /* WARNING: Subroutine does not return */
            ppuStack_d0 = (undefined1 **)&UNK_00446c3d;
            FUN_00aae91b();
          }
          ppiStack_cc = (int **)0x446c4a;
          FUN_00513c80();
          goto LAB_00446c4e;
        }
        piVar9 = (int *)*piVar4;
        piVar4 = (int *)piVar4[2];
        ppiStack_cc = (int **)0x446af6;
        cVar3 = (**(code **)(*piVar9 + 0x38))();
      } while (((cVar3 == '\0') || (piVar9[0x1d] != 0)) || (piVar9[0x10] == 0));
      puStack_98 = *(undefined1 **)(param_1 + 0x18);
      uStack_94 = *(undefined4 *)(param_1 + 0x1c);
      iVar6 = DAT_01258a94;
      if (puStack_98 < (undefined1 *)0x1269) {
        iVar6 = DAT_01258a98;
      }
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        ppiStack_cc = (int **)0x446b34;
        iVar6 = FUN_009c1d40();
      }
    } while (((piVar9[0x33] != *(int *)(*(int *)(iVar6 + 100) + 300)) ||
             (*(int *)(*(int *)piVar9[0xe] + 0x30) == 0)) ||
            (piStack_ac = piVar9,
            *(char *)(*(int *)(*(int *)(*(int *)piVar9[0xe] + 0x30) + 0x68) + 0x42) != '\0'));
LAB_00446c4e:
    piVar4 = piStack_ac;
    ppiStack_cc = (int **)0x8;
    ppuStack_d0 = (undefined1 **)0xdf87f8;
    uStack_40 = 0xf;
    uStack_44 = 0;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
    FUN_00409350();
    uStack_c = 4;
    ppiStack_cc = (int **)0x446c89;
    FUN_005c1a10();
    ppiStack_cc = (int **)auStack_54;
    ppuStack_d0 = (undefined1 **)0x446c93;
    ppuVar8 = (undefined1 **)FUN_005c2ad0();
    uStack_c = 0xffffffff;
    ppuStack_a4 = ppuVar8;
    if (0xf < uStack_40) {
      ppiStack_cc = (int **)auStack_54[0];
                    /* WARNING: Subroutine does not return */
      ppuStack_d0 = (undefined1 **)&UNK_00446cb8;
      FUN_00aae91b();
    }
    uStack_40 = 0xf;
    uStack_44 = 0;
    auStack_54[0] = auStack_54[0] & 0xffffff00;
    local_a8 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      ppiStack_cc = (int **)0x3f000000;
      ppuStack_d0 = (undefined1 **)0x446d0a;
      FUN_00401000();
      ppiStack_cc = (int **)0x446d12;
      uStack_7c = FUN_00b31c00();
      do {
        ppiStack_cc = (int **)0x8c;
        ppuStack_d0 = (undefined1 **)0x446d3e;
        piVar4 = (int *)FUN_00aae9af();
        uStack_c = 5;
        local_8c = piVar4;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          ppuStack_d0 = (undefined1 **)0x446d5c;
          ppiStack_cc = (int **)piVar4;
          FUN_005be1a0();
          *piVar4 = (int)CRegiment::vftable;
        }
        uStack_c = 0xffffffff;
        iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0xbcc);
        puStack_b8 = (undefined1 *)0x0;
        if (((int)ppuVar8[9] < 3) || (ppuVar8[9][*(int *)(iVar6 + 0x2dc)] == '\0')) {
          ppiStack_cc = (int **)0x9;
          ppuStack_d0 = (undefined1 **)0xdf8804;
          uStack_64 = 0xf;
          uStack_68 = 0;
          auStack_78[0] = auStack_78[0] & 0xffffff00;
          FUN_00409350();
          uStack_c = 6;
          if (DAT_0125fdd8 == 0) {
            ppiStack_cc = (int **)0x1c;
            ppuStack_d0 = (undefined1 **)0x446de7;
            local_8c = (int *)FUN_00aae9af();
            uStack_c._0_1_ = 7;
            if (local_8c == (int *)0x0) {
              ppiStack_cc = (int **)0x0;
            }
            else {
              ppiStack_cc = (int **)0x446e01;
              ppiStack_cc = (int **)FUN_008b0060();
            }
            uStack_c = CONCAT31(uStack_c._1_3_,6);
            ppuStack_d0 = (undefined1 **)0x446e13;
            FUN_005c2810();
          }
          ppiStack_cc = (int **)auStack_78;
          ppuStack_d0 = (undefined1 **)0x446e22;
          ppuVar8 = (undefined1 **)FUN_005c2ad0();
          uStack_c = 0xffffffff;
          ppuStack_a4 = ppuVar8;
          if (0xf < uStack_64) {
            ppiStack_cc = (int **)auStack_78[0];
                    /* WARNING: Subroutine does not return */
            ppuStack_d0 = (undefined1 **)&UNK_00446e42;
            FUN_00aae91b();
          }
          uStack_64 = 0xf;
          uStack_68 = 0;
          auStack_78[0] = auStack_78[0] & 0xffffff00;
        }
        else {
          puStack_b8 = *(undefined1 **)(iVar6 + 0x48);
        }
        uStack_c = 0xffffffff;
        iStack_58 = DAT_00f096cc;
        ppiStack_cc = (int **)&uStack_5c;
        uStack_5c = 0x28;
        ppuStack_d0 = (undefined1 **)0x446e85;
        DAT_00f096cc = DAT_00f096cc + 1;
        (**(code **)(*piVar4 + 0x18))();
        ppuStack_d0 = &puStack_b8;
        puStack_b8 = (undefined1 *)0x0;
        FUN_004fa8b0(*(undefined4 *)(param_1 + 0x40),&puStack_3c,ppuVar8,uStack_84,0,0);
        puStack_10 = (undefined1 *)0x8;
        ppuStack_d0 = (undefined1 **)0x446ec1;
        cVar3 = (**(code **)(*piVar4 + 0x28))();
        if (cVar3 != '\0') {
          iStack_90 = piVar4[0x18];
          ppuStack_d0 = &puStack_3c;
          FUN_004f9be0();
        }
        ppuStack_d0 = (undefined1 **)0xffffffff;
        FUN_00408ed0(&puStack_3c,0);
        *(undefined2 *)(piVar4 + 0x22) = puStack_b8._0_2_;
        iVar6 = *(int *)(param_1 + 0x40);
        piVar4[0x18] = *(int *)(iVar6 + 0x1c);
        piVar4[0x19] = *(int *)(iVar6 + 0x20);
        ppuStack_d0 = ppuVar8;
        FUN_005c03c0();
        iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0xa60) + 0x388) + iStack_bc;
        piVar4[0xd] = iVar6;
        if (100000 < iVar6) {
          piVar4[0xd] = 100000;
        }
        ppuStack_d0 = (undefined1 **)0x0;
        (**(code **)(*piVar4 + 0x34))();
        if (iStack_90 < iStack_88) {
          iStack_90 = iStack_88;
        }
        piVar4[0x10] = iStack_90;
        piVar9 = (int *)(**(code **)(*piVar4 + 0x30))(&uStack_28);
        if (*piVar9 < piVar4[0xf]) {
          ppiStack_cc = (int **)0x0;
          ppuStack_d0 = &puStack_98;
          piVar9 = (int *)(**(code **)(*piVar4 + 0x30))();
          piVar4[0xf] = *piVar9;
        }
        if ((*(int *)(piVar4[0xe] + 0xb4) < piVar4[0x10]) && (DAT_00f09547 != '\0')) {
          piVar4[0x10] = *(int *)(piVar4[0xe] + 0xb4);
        }
        uStack_a0 = *(uint *)(param_1 + 0x18);
        iStack_9c = *(int *)(param_1 + 0x1c);
        iVar6 = DAT_01258a94;
        if (uStack_a0 < 0x1269) {
          iVar6 = DAT_01258a98;
        }
        if (iVar6 == 0) {
          puStack_b8 = (undefined1 *)0x0;
        }
        else {
          ppiStack_cc = (int **)0x446fdf;
          puStack_b8 = (undefined1 *)FUN_009c1d40();
        }
        puVar2 = puStack_b8;
        ppiVar1 = *(int ***)(puStack_b8 + 0x40);
        piStack_b4 = piVar4;
        if ((&piStack_b4 < ppiVar1) && (*(int ***)(puStack_b8 + 0x3c) <= &piStack_b4)) {
          local_8c = (int *)((int)&piStack_b4 - (int)*(int ***)(puStack_b8 + 0x3c) >> 2);
          if (ppiVar1 == *(int ***)(puStack_b8 + 0x44)) {
            ppiStack_cc = (int **)0x447019;
            FUN_00a513f0();
          }
          if (*(undefined4 **)(puVar2 + 0x40) != (undefined4 *)0x0) {
            **(undefined4 **)(puVar2 + 0x40) =
                 *(undefined4 *)(*(int *)(puVar2 + 0x3c) + (int)local_8c * 4);
          }
        }
        else {
          if (ppiVar1 == *(int ***)(puStack_b8 + 0x44)) {
            ppiStack_cc = (int **)0x44703d;
            FUN_00a513f0();
          }
          if (*(undefined4 **)(puVar2 + 0x40) != (undefined4 *)0x0) {
            **(undefined4 **)(puVar2 + 0x40) = piVar4;
          }
        }
        *(int *)(puVar2 + 0x40) = *(int *)(puVar2 + 0x40) + 4;
        piVar4[0xc] = (int)puStack_b8;
        ppuStack_d0 = (undefined1 **)0x44705b;
        ppiStack_cc = (int **)piVar4;
        FUN_005cb1d0();
        uStack_c = 0xffffffff;
        if (0xf < uStack_24) {
          ppiStack_cc = (int **)uStack_38;
                    /* WARNING: Subroutine does not return */
          ppuStack_d0 = (undefined1 **)&UNK_0044707d;
          FUN_00aae91b();
        }
        local_a8 = local_a8 + 1;
        uStack_24 = 0xf;
        uStack_28 = 0;
        uStack_38 = uStack_38 & 0xffffff00;
        ppuVar8 = ppuStack_a4;
        piVar4 = piStack_ac;
      } while (local_a8 < *(int *)(param_1 + 0x10));
    }
    uStack_c = 0xffffffff;
    ppuStack_d0 = (undefined1 **)0x4470ba;
    ppiStack_cc = (int **)piVar4;
    FUN_005c68c0();
    *(undefined1 *)(piVar4 + 0x2f) = 1;
    ppuStack_d0 = (undefined1 **)0x4470c7;
    ppiStack_cc = (int **)piVar4;
    FUN_005cae80();
    ppiStack_cc = (int **)local_b0;
    ppuStack_d0 = (undefined1 **)0x4470d3;
    FUN_005cb2c0();
    iVar6 = *(int *)(param_1 + 0x5c);
    if ((-1 < iVar6) &&
       (iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x1570),
       iVar6 < *(int *)(*(int *)(param_1 + 0x40) + 0x1574) - iVar5 >> 2)) {
      iVar6 = *(int *)(iVar5 + iVar6 * 4);
      ppiStack_cc = (int **)0x90;
      ppuStack_d0 = (undefined1 **)0x447107;
      puStack_98 = (undefined1 *)FUN_00aae9af();
      uStack_c = 9;
      if (puStack_98 == (undefined1 *)0x0) {
        local_b0 = 0;
      }
      else {
        ppiStack_cc = (int **)0x0;
        ppuStack_d0 = (undefined1 **)0x1;
        local_b0 = FUN_005de7d0(puStack_98,piVar4,*(undefined4 *)(iVar6 + 8),1,1);
      }
      uStack_c = 0xffffffff;
      ppiStack_cc = (int **)0x44715c;
      iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      ppiStack_cc = (int **)local_b0;
      ppuStack_d0 = (undefined1 **)0x44716b;
      (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))();
      ppuStack_d0 = (undefined1 **)piVar4[4];
      puStack_98 = (undefined1 *)&ppuStack_d0;
      ppiStack_cc = (int **)piVar4[5];
      FUN_00471580();
    }
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  ExceptionList = local_14;
  return;
}

