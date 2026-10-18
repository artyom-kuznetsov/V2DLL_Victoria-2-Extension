// FUN_00772800 @ 00772800 body=[[00772800, 00772873] [00772877, 007729bb] [007729bf, 007729ef] [007729f3, 00772a1e] [00772a22, 00772a55] [00772a59, 00772afd] [00772b01, 00772b78] [00772b7c, 00772ba6] [00772baa, 00772bdf] [00772be9, 00772c13] [00772c1f, 00772c92] [00772c96, 00772cff] [00772d03, 00772df2] [00772df6, 00772ef8] [00772efc, 00773004] [00773008, 0077302c] [00773030, 007730a0] [007730b2, 007730bf] [007730c8, 00773107] [00773110, 00773183] [00773187, 007731bc] [007731c0, 007731d6]]


void FUN_00772800(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint in_ECX;
  undefined4 *puVar9;
  int iStack_12c;
  int local_124;
  int *piStack_120;
  int iStack_11c;
  int iStack_118;
  uint local_114;
  undefined1 auStack_110 [4];
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined1 auStack_f0 [4];
  undefined **ppuStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined **ppuStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint uStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  uint local_6c;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 auStack_34 [4];
  uint uStack_30;
  undefined1 uStack_28;
  void *pvStack_24;
  undefined1 uStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9444f;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  local_114 = in_ECX;
  uVar1 = FUN_0045e4e0(param_1);
  local_c = 0;
  FUN_00408ed0(uVar1,0,0xffffffff);
  local_c = 0xffffffff;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c);
  }
  iVar3 = *(int *)(param_1 + 0xa4);
  iVar2 = *(int *)(in_ECX + 0x30c);
  if ((iVar3 < iVar2) || (iVar2 = *(int *)(in_ECX + 0x310), iVar2 < iVar3)) {
    iVar3 = iVar2;
  }
  if ((DAT_012589ac == 0) || (DAT_012589ac == 1)) {
    local_124 = FUN_00aae9af(0x40);
    local_c = 1;
    if (local_124 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0072b670(local_124,iVar3);
    }
    local_c = 0xffffffff;
    iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar1);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_c = 2;
  uVar1 = FUN_0045e4e0(param_1);
  local_c._0_1_ = 3;
  uStack_74 = 0xf;
  uStack_78 = 0;
  uStack_88 = uStack_88 & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  local_c._0_1_ = 4;
  FUN_00988f20(uVar1);
  local_c._0_1_ = 5;
  FUN_00988f20(local_a4);
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_50);
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  uStack_50 = uStack_50 & 0xffffff00;
  if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_88);
  }
  uStack_74 = 0xf;
  uStack_78 = 0;
  uStack_88 = uStack_88 & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c);
  }
  local_58 = 0xf;
  uStack_5c = 0;
  local_6c = local_6c & 0xffffff00;
  local_c._0_1_ = 10;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4[0]);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (*(char *)(*(int *)(in_ECX + 0x278) + 0x67) != '\0') {
    uStack_c4 = 0x18d;
    ppuStack_c8 = &PTR_FUN_00e3cffc;
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    FUN_00408ed0(auStack_34,0,0xffffffff);
    ppuStack_c8 = &PTR_FUN_00e3d020;
    local_c._0_1_ = 0xb;
    FUN_00771510(&ppuStack_c8);
    local_c._0_1_ = 10;
    ppuStack_c8 = &PTR_FUN_00e3cffc;
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_c0);
    }
    uVar1 = FUN_0045e130(param_1);
    local_c._0_1_ = 0xc;
    uStack_e8 = 0x18d;
    ppuStack_ec = &PTR_FUN_00e3cffc;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    uStack_e4 = uStack_e4 & 0xffffff00;
    FUN_00408ed0(uVar1,0,0xffffffff);
    ppuStack_ec = &PTR_FUN_00e3d020;
    local_c._0_1_ = 0xd;
    FUN_00771510(&ppuStack_ec);
    ppuStack_ec = &PTR_FUN_00e3cffc;
    if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_e4);
    }
    local_c._0_1_ = 10;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    uStack_e4 = uStack_e4 & 0xffffff00;
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppuStack_c8);
    }
  }
  local_c._0_1_ = 10;
  for (puVar9 = *(undefined4 **)(in_ECX + 0x314); puVar9 != (undefined4 *)0x0;
      puVar9 = (undefined4 *)puVar9[2]) {
    (**(code **)(*(int *)*puVar9 + 0x38))();
    (**(code **)(*(int *)*puVar9 + 0x30))();
  }
  if (*(int *)(in_ECX + 0x314) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x314));
  }
  piVar7 = (int *)(in_ECX + 0x324);
  *(undefined4 *)(in_ECX + 0x314) = 0;
  *(undefined4 *)(in_ECX + 0x318) = 0;
  *(undefined4 *)(in_ECX + 0x31c) = 0;
  if (*piVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar7);
  }
  *piVar7 = 0;
  *(undefined4 *)(in_ECX + 0x328) = 0;
  *(undefined4 *)(in_ECX + 0x32c) = 0;
  FUN_0068ff00(param_1 + 0x94);
  uStack_f4 = 0xf;
  uStack_f8 = 0;
  uStack_108 = uStack_108 & 0xffffff00;
  FUN_00409350("shield_position",0xf);
  local_c = CONCAT31(local_c._1_3_,0xe);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
  (**(code **)(*piVar4 + 0x48))(&uStack_108);
  puStack_10._0_1_ = 10;
  if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_10c);
  }
  uStack_f8 = 0xf;
  uStack_fc = 0;
  uStack_10c = uStack_10c & 0xffffff00;
  uStack_dc = 0xf;
  uStack_e0 = 0;
  auStack_f0[0] = 0;
  FUN_00409350("shield_offset",0xd);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xf);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
  iVar3 = (**(code **)(*piVar4 + 0x48))(auStack_f0);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,10);
  if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_f4);
  }
  iVar2 = *(int *)(local_124 + 100);
  uStack_e0 = 0xf;
  uStack_e4 = 0;
  uStack_f4 = uStack_f4 & 0xffffff00;
  iVar5 = (**(code **)(**(int **)(in_ECX + 4) + 0x40))();
  iVar5 = *(int *)(iVar5 + 0x6b9bc);
  iVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0x40))();
  puVar9 = *(undefined4 **)(iVar6 + 0x6b9bc);
  iVar2 = (iVar2 + iVar5 / 2) - (*(int *)(iVar3 + 100) * *(int *)(in_ECX + 0x32c)) / 2;
  for (iVar5 = *piVar7; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
    uStack_fc = 0xf;
    uStack_100 = 0;
    auStack_110[0] = 0;
    FUN_00409350("shield",6);
    pvStack_14._0_1_ = 0x10;
    piVar7 = (int *)(**(code **)(**(int **)(iStack_11c + 4) + 0x34))();
    piVar7 = (int *)(**(code **)(*piVar7 + 0xc))(auStack_110);
    uStack_18 = 10;
    if (0xf < uStack_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_114);
    }
    uStack_100 = 0xf;
    uStack_104 = 0;
    local_114 = local_114 & 0xffffff00;
    (**(code **)(*piVar7 + 0x34))();
    (**(code **)(*piVar7 + 0x6c))();
    iStack_12c._0_2_ = (undefined2)iVar2;
    (**(code **)(*piVar7 + 200))(CONCAT22((undefined2)iStack_12c,(short)iVar3));
    (**(code **)(*(int *)piVar7[0x28] + 0x14c))(*(undefined4 *)(iVar5 + 4));
    puVar9 = (undefined4 *)(*(int *)piVar7[0x28] + 0x150);
    uVar1 = FUN_0052fc10();
    (*(code *)*puVar9)(uVar1);
    (**(code **)(piVar7[0x15] + 4))(iVar2 + 0x228);
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    uStack_e4 = uStack_e4 & 0xffffff00;
    FUN_00409350("gamesetup",9);
    uStack_28 = 0x11;
    (**(code **)(*piVar7 + 0x78))(&uStack_e4);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,10);
    if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_d0);
    }
    iStack_118 = *(int *)(iStack_11c + 0x318);
    puVar8 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = piVar7;
      puVar8[1] = iStack_118;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
    }
    iVar6 = *(int *)(iStack_11c + 0x31c);
    *(undefined4 **)(iStack_11c + 0x318) = puVar8;
    *(int *)(iStack_11c + 0x31c) = iVar6 + 1;
    if (iVar6 == 0) {
      *(undefined4 **)(iStack_11c + 0x314) = puVar8;
    }
    else {
      *(undefined4 **)(iStack_118 + 8) = puVar8;
    }
    iVar2 = iVar2 + *(int *)(iVar3 + 100);
  }
  uStack_fc = 0xf;
  uStack_100 = 0;
  auStack_110[0] = 0;
  FUN_00409350("bookmarks_list",0xe);
  pvStack_14._0_1_ = 0x12;
  uStack_e0 = 0xf;
  uStack_e4 = 0;
  uStack_f4 = uStack_f4 & 0xffffff00;
  FUN_00409350("bookmarks",9);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x13);
  piVar7 = (int *)(**(code **)(**(int **)(iStack_11c + 0x278) + 0x6c))(&uStack_f4);
  piVar7 = (int *)(**(code **)(*piVar7 + 0x7c))(&local_114);
  puVar8 = (undefined4 *)(**(code **)(*piVar7 + 0x2c))();
  piVar7 = (int *)*puVar8;
  if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_fc);
  }
  uStack_1c = 10;
  uStack_e8 = 0xf;
  ppuStack_ec = (undefined **)0x0;
  uStack_fc = uStack_fc & 0xffffff00;
  if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_118);
  }
  uStack_104 = 0xf;
  uStack_108 = 0;
  iStack_12c = 0;
  piStack_120 = DAT_01265438;
  do {
    if (piStack_120 == (int *)0x0) {
      piStack_120 = (int *)FUN_00aae9af(0x10);
      if (piStack_120 == (int *)0x0) {
        piStack_120 = (int *)0x0;
      }
      else {
        *piStack_120 = 0;
        piStack_120[1] = 0;
        piStack_120[2] = 0;
        *(undefined1 *)(piStack_120 + 3) = 0;
      }
      piVar4 = DAT_01265438;
      if ((piStack_120 != DAT_01265438) && (DAT_01265438 != (int *)0x0)) {
        iVar3 = *DAT_01265438;
        if (iVar3 != 0) {
          FUN_00753c40();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar3);
        }
        *DAT_01265438 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar4);
      }
      DAT_01265438 = piStack_120;
    }
    if (piStack_120[2] <= iStack_12c) {
      if ((DAT_012589ac == 1) || (DAT_012589ac == 0)) {
        for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
          uStack_c4 = 0xf;
          ppuStack_c8 = (undefined **)0x0;
          uStack_d8 = uStack_d8 & 0xffffff00;
          FUN_00409350("save_game",9);
          uStack_1c = 0x14;
          iVar3 = (**(code **)(**(int **)(*piVar7 + 0x20) + 0x48))(&uStack_d8);
          if ((*(char *)(iVar3 + 0xe4) == '\0') || (*(char *)(iVar3 + 0x142) != '\0')) {
            *(undefined4 *)(iVar3 + 0x6c) = 0;
            *(undefined4 *)(iVar3 + 0x10c) = 0;
          }
          uStack_1c = 10;
          if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_d8);
          }
        }
      }
      FUN_00777760(puVar9);
      FUN_0076d340(puVar9);
      if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_44);
      }
      ExceptionList = pvStack_24;
      return;
    }
    piVar7 = (int *)piVar7[2];
    iStack_12c = iStack_12c + 1;
  } while( true );
}

