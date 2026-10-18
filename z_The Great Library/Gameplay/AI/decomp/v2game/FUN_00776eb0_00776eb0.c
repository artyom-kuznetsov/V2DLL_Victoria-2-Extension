// FUN_00776eb0 @ 00776eb0 body=[[00776eb0, 00776f63] [00776f67, 00776f91] [00776f95, 00777083] [00777087, 007771fa] [007771fe, 0077722c] [00777230, 0077725e] [00777262, 00777290] [00777294, 007772c2] [007772c6, 007772ee] [007772f2, 00777322] [00777326, 007773ec] [007773f0, 00777464]]


void FUN_00776eb0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  int iStack_13c;
  undefined4 uStack_138;
  uint uStack_12c;
  undefined1 auStack_128 [4];
  uint local_124;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 local_114;
  undefined4 local_110;
  uint auStack_10c [3];
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e4;
  undefined1 local_dc [8];
  uint uStack_d4;
  uint uStack_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  uint uStack_98;
  uint uStack_90;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_74;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_58;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_3c;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_20;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b89c82;
  pvStack_14 = ExceptionList;
  local_110 = 0xf;
  local_114 = 0;
  local_124 = local_124 & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350("multiplayer_list",0x10);
  local_c = 0;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = 0;
  FUN_00409350("multiplayer",0xb);
  local_c = CONCAT31(local_c._1_3_,1);
  piVar6 = (int *)local_dc;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x26c) + 0x6c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))(auStack_128);
  if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_e4);
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  uStack_e4 = uStack_e4 & 0xffffff00;
  if (0xf < uStack_118) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_12c);
  }
  uStack_118 = 0xf;
  uStack_11c = 0;
  uStack_12c = uStack_12c & 0xffffff00;
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
  piVar1 = (int *)*puVar2;
  do {
    if (piVar1 == (int *)0x0) {
      ExceptionList = pvStack_1c;
      return;
    }
    if (*(int *)(*piVar1 + 0x44) == *(int *)(param_1 + 0x1c)) {
      piVar1 = *(int **)(*piVar1 + 0x20);
      uStack_118 = 0xf;
      uStack_11c = 0;
      uStack_12c = uStack_12c & 0xffffff00;
      FUN_00409350("player_shield",0xd);
      pvStack_14 = (void *)0x2;
      local_110 = *(undefined4 *)(param_1 + 0x20);
      auStack_10c[0] = *(uint *)(param_1 + 0x24);
      iVar3 = (**(code **)(*piVar1 + 0x34))(&uStack_12c);
      (**(code **)(**(int **)(iVar3 + 0xa0) + 0x14c))(local_110);
      piVar1 = (int *)(**(int **)(iVar3 + 0xa0) + 0x150);
      uVar4 = FUN_0052fc10();
      (*(code *)*piVar1)(uVar4);
      uStack_20 = 0xffffffff;
      if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_138);
      }
      iVar3 = *piVar6;
      uVar4 = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(iVar3 + 0x4c) = uVar4;
      uStack_a4 = 0xf;
      uStack_a8 = 0;
      uStack_b8 = uStack_b8 & 0xffffff00;
      FUN_00409350(&DAT_00df09f4,4);
      uStack_20 = 3;
      uStack_f8 = 0xf;
      uStack_fc = 0;
      auStack_10c[0] = auStack_10c[0] & 0xffffff00;
      FUN_00409350(&DAT_00defdfc,1);
      uStack_20._0_1_ = 4;
      local_114 = *(undefined4 *)(param_1 + 0x20);
      local_110 = *(undefined4 *)(param_1 + 0x24);
      uVar4 = FUN_0055dd40();
      uStack_20._0_1_ = 5;
      uStack_c0 = 0xf;
      uStack_c4 = 0;
      uStack_d4 = uStack_d4 & 0xffffff00;
      FUN_00409350(&DAT_00dfbfa4,2);
      uStack_20._0_1_ = 6;
      FUN_00988f20(&uStack_d4);
      uStack_20._0_1_ = 7;
      FUN_00988f20(uVar4);
      uStack_20._0_1_ = 8;
      uVar4 = FUN_00988f20(auStack_10c);
      uStack_20 = CONCAT31(uStack_20._1_3_,9);
      (**(code **)(*piVar1 + 0x3c))(&uStack_b8);
      FUN_00408ed0(uVar4,0,0xffffffff);
      FUN_00a5ecc0(uVar4,0);
      if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_90);
      }
      uStack_7c = 0xf;
      uStack_80 = 0;
      uStack_90 = uStack_90 & 0xffffff00;
      if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_58);
      }
      uStack_44 = 0xf;
      uStack_48 = 0;
      uStack_58 = uStack_58 & 0xffffff00;
      if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_74);
      }
      uStack_60 = 0xf;
      uStack_64 = 0;
      uStack_74 = uStack_74 & 0xffffff00;
      if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c8);
      }
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      local_c8 = local_c8 & 0xffffff00;
      if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_3c);
      }
      uStack_28 = 0xf;
      uStack_2c = 0;
      uStack_3c = uStack_3c & 0xffffff00;
      if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_100);
      }
      pvStack_14 = (void *)0xffffffff;
      uStack_ec = 0xf;
      uStack_f0 = 0;
      uStack_100 = uStack_100 & 0xffffff00;
      if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_ac);
      }
      uStack_98 = 0xf;
      uStack_9c = 0;
      uStack_ac = uStack_ac & 0xffffff00;
      if (*(int *)(param_1 + 0x1c) == *(int *)(iStack_13c + 0x2e0)) {
        if ((*(int *)(iStack_13c + 0x5ec) != 0) &&
           (*(int *)(param_1 + 0x24) != *(int *)(iStack_13c + 0x5ec))) {
          iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iStack_13c + 0x5ec) * 4);
          for (piVar5 = *(int **)(iVar3 + 0x9d8);
              (*(int **)(iVar3 + 0x9d8) <= piVar5 && (piVar5 < *(int **)(iVar3 + 0x9dc)));
              piVar5 = piVar5 + 1) {
            *(undefined1 *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4) + 0xc) = 0;
          }
        }
        *(undefined4 *)(iStack_13c + 0x5e8) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(iStack_13c + 0x5ec) = *(undefined4 *)(param_1 + 0x24);
        iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x24) * 4);
        for (piVar5 = *(int **)(iVar3 + 0x9d8);
            (*(int **)(iVar3 + 0x9d8) <= piVar5 && (piVar5 < *(int **)(iVar3 + 0x9dc)));
            piVar5 = piVar5 + 1) {
          *(undefined1 *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4) + 0xc) = 1;
        }
        (**(code **)(**(int **)(iStack_13c + -8) + 0x38))();
        FUN_00819830();
      }
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

