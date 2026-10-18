// FUN_00613aa0 @ 00613aa0 body=[[00613aa0, 00613b2d] [00613b31, 00613b83] [00613b87, 00613c2b] [00613c2f, 00613c9c] [00613ca0, 00613cff] [00613d03, 00613e65] [00613e69, 00613e8e] [00613e92, 00613ec2] [00613ec6, 00613f0b] [00613f13, 00613f41] [00613f4a, 00613f6b] [00613f6f, 00613fa2] [00613fab, 00613ffd] [00614001, 0061402f] [00614033, 00614047]]


/* WARNING: Removing unreachable block (ram,0x00613eb9) */
/* WARNING: Removing unreachable block (ram,0x00613c93) */
/* WARNING: Removing unreachable block (ram,0x00613cf6) */
/* WARNING: Removing unreachable block (ram,0x00613b7a) */

void FUN_00613aa0(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  char *pcVar3;
  int iVar4;
  int iStack_12c;
  int iStack_10c;
  int iStack_108;
  uint auStack_fc [4];
  undefined4 uStack_ec;
  uint uStack_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint uStack_a0;
  uint uStack_98;
  undefined4 uStack_88;
  uint uStack_84;
  uint uStack_80;
  char cStack_7c;
  uint uStack_78;
  undefined4 uStack_68;
  uint uStack_64;
  undefined **appuStack_5c [5];
  uint uStack_48;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_2c;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5a354;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x54) + 0x4c))();
  puStack_10 = (undefined1 *)0x0;
  FUN_00989330();
  puStack_10._0_1_ = 1;
  FUN_00408ed0();
  puStack_10._0_1_ = 0;
  if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00409350();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x54) + 0x40))();
  pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
  FUN_00614080();
  if (100 < *(int *)(iStack_12c + 0x3c)) {
    FUN_00614120();
  }
  *(undefined4 *)(iStack_12c + 0x44) = 0xffffffff;
  uStack_e8 = 0xf;
  uStack_ec = 0;
  auStack_fc[0] = auStack_fc[0] & 0xffffff00;
  FUN_00409350();
  pvStack_14._0_1_ = 3;
  FUN_00409350(&DAT_00df9640,1);
  FUN_00992740(appuStack_5c,auStack_fc,1);
  pvStack_14._0_1_ = 5;
  if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_e8 = 0xf;
  uStack_ec = 0;
  auStack_fc[0] = auStack_fc[0] & 0xffffff00;
  FUN_00993110();
  FUN_00409350();
  pvStack_14._0_1_ = 6;
  FUN_00993110();
  pvStack_14._0_1_ = 5;
  uVar2 = pvStack_14._0_1_;
  pvStack_14._0_1_ = 5;
  if (*(char *)(*(int *)(DAT_012588e8 + 0xb24) + 0x5c) == '\0') {
    pvStack_14._0_1_ = uVar2;
    FUN_00989510();
    pvStack_14._0_1_ = 8;
    FUN_00423b50();
    pvStack_14._0_1_ = 9;
    FUN_00989510();
    pvStack_14._0_1_ = 10;
    pcVar3 = &DAT_00df8514;
    if (cStack_7c == '\0') {
      pcVar3 = &DAT_00df8510;
    }
    uStack_bc = 0xf;
    uStack_c0 = 0;
    uStack_d0 = uStack_d0 & 0xffffff00;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    iVar4 = 0;
    if (0 < (iStack_108 - iStack_10c) / 0x1c) {
      do {
        pvStack_14._0_1_ = 0xb;
        FUN_00409350();
        pvStack_14._0_1_ = 0xc;
        FUN_00988f20();
        pvStack_14._0_1_ = 0xd;
        FUN_00988f20();
        pvStack_14._0_1_ = 0xe;
        FUN_006138f0();
        if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_e8 = 0xf;
        uStack_ec = 0;
        auStack_fc[0] = auStack_fc[0] & 0xffffff00;
        if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_84 = 0xf;
        uStack_88 = 0;
        uStack_98 = uStack_98 & 0xffffff00;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (iStack_108 - iStack_10c) / 0x1c);
    }
    pvStack_14._0_1_ = 0xb;
    if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_bc = 0xf;
    uStack_c0 = 0;
    uStack_d0 = uStack_d0 & 0xffffff00;
    if (iStack_10c != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_64 = 0xf;
    uStack_68 = 0;
    uStack_78 = uStack_78 & 0xffffff00;
    if (iStack_e0 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    appuStack_5c[0] = &PTR_FUN_00e37dc0;
    if (iStack_2c != 0) {
      PHYSFS_close();
      iStack_2c = 0;
    }
    appuStack_5c[0] = &PTR_FUN_00e3b540;
    if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_34 = 0xf;
    uStack_38 = 0;
    uStack_48 = uStack_48 & 0xffffff00;
  }
  else {
    FUN_00409350();
    pvStack_14._0_1_ = 7;
    FUN_006138f0();
    FUN_00992d60();
  }
  if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_1c;
  return;
}

