// FUN_00911be0 @ 00911be0  (requested 00911BE0, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Removing unreachable block (ram,0x009121ec) */
/* WARNING: Removing unreachable block (ram,0x00912069) */
/* WARNING: Removing unreachable block (ram,0x0091230b) */
/* WARNING: Removing unreachable block (ram,0x00911f2a) */

undefined4 FUN_00911be0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uStack_114;
  uint auStack_10c [4];
  undefined4 uStack_fc;
  uint uStack_f8;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_dc;
  int iStack_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  uint uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_ac;
  undefined4 uStack_9c;
  uint uStack_98;
  uint uStack_90;
  int iStack_80;
  uint uStack_7c;
  undefined1 uStack_74;
  int iStack_64;
  undefined4 uStack_60;
  undefined1 uStack_58;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb4e22;
  pvStack_14 = ExceptionList;
  local_c4 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + param_1[3] * 4);
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  (**(code **)(*param_1 + 0x94))();
  pvStack_14._0_1_ = 1;
  iVar2 = (iStack_d8 - iStack_dc) / 0x1c;
  if (iVar2 == 0) {
    FUN_00409350();
    pvStack_14._0_1_ = 2;
    (**(code **)(*param_1 + 0x24))();
    pvStack_14._0_1_ = 3;
    FUN_00988f20();
    pvStack_14._0_1_ = 4;
    FUN_009a8ee0();
    pvStack_14._0_1_ = 5;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    pvStack_14._0_1_ = 6;
    FUN_00408ed0();
    if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_98 = 0xf;
    uStack_9c = 0;
    uStack_ac = uStack_ac & 0xffffff00;
    pvStack_14._0_1_ = 7;
    FUN_009adb70();
    if (iStack_ec != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_ec = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    uStack_c8 = uStack_c8 & 0xffffff00;
    if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    auStack_10c[0] = auStack_10c[0] & 0xffffff00;
LAB_00912063:
    uStack_114 = 0xf;
    pvStack_14._0_1_ = 1;
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    uStack_f8 = 0xf;
    uStack_fc = 0;
  }
  else if (iVar2 == 2) {
    uStack_114 = 0xf;
    FUN_00409350();
    pvStack_14._0_1_ = 8;
    (**(code **)(*param_1 + 0x24))();
    pvStack_14._0_1_ = 9;
    FUN_00988f20();
    pvStack_14._0_1_ = 10;
    FUN_0055d590();
    pvStack_14._0_1_ = 0xb;
    FUN_00408ed0();
    if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_f8 = 0xf;
    uStack_fc = 0;
    auStack_10c[0] = auStack_10c[0] & 0xffffff00;
    if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    uStack_c8 = uStack_c8 & 0xffffff00;
    if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14._0_1_ = 1;
    uStack_98 = 0xf;
    uStack_9c = 0;
    uStack_ac = uStack_ac & 0xffffff00;
  }
  else {
    if (iVar2 == 4) {
      FUN_00409350();
      pvStack_14._0_1_ = 0xc;
      (**(code **)(*param_1 + 0x24))();
      pvStack_14._0_1_ = 0xd;
      uVar3 = FUN_00988f20();
      pvStack_14._0_1_ = 0xe;
      FUN_00928600(auStack_10c,uVar3);
      pvStack_14._0_1_ = 0xf;
      FUN_00408ed0();
      if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_f8 = 0xf;
      uStack_fc = 0;
      auStack_10c[0] = auStack_10c[0] & 0xffffff00;
      if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      uStack_c8 = uStack_c8 & 0xffffff00;
      if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_98 = 0xf;
      uStack_9c = 0;
      uStack_ac = uStack_ac & 0xffffff00;
      goto LAB_00912063;
    }
    if (iVar2 == 6) {
      FUN_009885d0();
      pvStack_14._0_1_ = 0x10;
      (**(code **)(*param_1 + 0x24))();
      pvStack_14._0_1_ = 0x11;
      uVar3 = FUN_00988f20();
      pvStack_14._0_1_ = 0x12;
      FUN_00928720(auStack_10c,uVar3,iStack_dc + 0x1c,iStack_dc + 0x54);
      pvStack_14._0_1_ = 0x13;
      FUN_00408ed0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      pvStack_14._0_1_ = 1;
      FUN_00408ad0();
    }
  }
  if (param_1[3] == param_1[5]) {
    FUN_00409350();
    pvStack_14._0_1_ = 0x14;
    FUN_009a8ee0();
    pvStack_14._0_1_ = 0x15;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x16);
    FUN_009adb70();
    if (iStack_ec != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_ec = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    if (uStack_7c < 0x10) {
      uStack_7c = 0xf;
      iStack_80 = 0;
      uStack_90 = uStack_90 & 0xffffff00;
      if (iStack_dc == 0) {
        ExceptionList = pvStack_1c;
        return param_2;
      }
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  cVar1 = (**(code **)(*param_1 + 100))();
  if ((cVar1 != '\0') && (*(char *)(local_cc + 0x31) == '\0')) {
    FUN_00409350();
    pvStack_14._0_1_ = 0x17;
    FUN_009a8ee0();
    pvStack_14._0_1_ = 0x18;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    pvStack_14._0_1_ = 0x17;
    FUN_009a9740();
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_7c = 0xf;
    iStack_80 = 0;
    uStack_90 = uStack_90 & 0xffffff00;
    goto LAB_00912e4d;
  }
  cVar1 = (**(code **)(*param_1 + 100))();
  if ((cVar1 != '\0') &&
     (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[5] * 4) + 0x31) != '\0')) {
    FUN_009885d0();
    pvStack_14._0_1_ = 0x19;
    FUN_009a8ee0();
    pvStack_14._0_1_ = 0x1a;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    pvStack_14._0_1_ = 0x19;
    FUN_009a9740();
    if (0xf < uStack_114) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_7c = 0xf;
    iStack_80 = 0;
    uStack_90 = uStack_90 & 0xffffff00;
    goto LAB_00912e4d;
  }
  cVar1 = (**(code **)(*param_1 + 100))();
  if ((cVar1 == '\0') ||
     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[3] * 4) + 0xbe8) +
                       param_1[5] * 4) + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c))) {
    cVar1 = (**(code **)(*param_1 + 0x68))();
    if ((cVar1 == '\0') ||
       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[3] * 4) + 0xbe8) +
                         param_1[5] * 4) + 0x34) == 0)) {
      cVar1 = (**(code **)(*param_1 + 0x70))();
      if (((cVar1 == '\0') || (cVar1 = FUN_00516430(), cVar1 == '\0')) || (param_1[9] != 0)) {
        cVar1 = (**(code **)(*param_1 + 0x74))();
        if (cVar1 == '\0') {
LAB_0091275e:
          cVar1 = (**(code **)(*param_1 + 0x78))();
          if (cVar1 == '\0') {
LAB_00912825:
            cVar1 = (**(code **)(*param_1 + 0x7c))();
            if (cVar1 != '\0') {
              iVar2 = *(int *)(DAT_012587e4 + 4);
              iVar4 = *(int *)(iVar2 + param_1[5] * 4);
              if ((((*(char *)(iVar4 + 0xcf5) != '\0') || (*(char *)(iVar4 + 0xcf4) != '\0')) &&
                  (*(char *)(*(int *)(iVar2 + param_1[5] * 4) + 0xcf4) != '\0')) &&
                 (*(int *)(*(int *)(iVar2 + param_1[5] * 4) + 0xcfc) != param_1[3])) {
                FUN_009885d0();
                uVar5 = 0x24;
                pvStack_14._0_1_ = 0x24;
                FUN_009a8ee0();
                pvStack_14._0_1_ = 0x25;
                goto LAB_0091271d;
              }
            }
          }
          else {
            iVar2 = *(int *)(DAT_012587e4 + 4);
            iVar4 = *(int *)(iVar2 + param_1[5] * 4);
            if (((*(char *)(iVar4 + 0xcf5) == '\0') && (*(char *)(iVar4 + 0xcf4) == '\0')) ||
               (*(char *)(*(int *)(iVar2 + param_1[5] * 4) + 0xcf4) != '\0')) goto LAB_00912825;
            if (*(int *)(*(int *)(iVar2 + param_1[5] * 4) + 0xcfc) != param_1[3]) {
              FUN_009885d0();
              uVar5 = 0x22;
              pvStack_14._0_1_ = 0x22;
              FUN_009a8ee0();
              pvStack_14._0_1_ = 0x23;
              goto LAB_0091271d;
            }
          }
          uStack_44 = 0xf;
          iStack_48 = 0;
          uStack_58 = 0;
          pvStack_14._0_1_ = 0x26;
          iVar2 = (**(code **)(*param_1 + 0x54))();
          cVar1 = (**(code **)(*param_1 + 0x60))();
          if ((cVar1 == '\0') && (iVar2 != 0x15b)) {
            iVar4 = 100000;
            if (DAT_01258a08 == 0) {
              iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                         param_1[3] * 4) + 0xbe8) + param_1[5] * 4)
                              + 0x48);
            }
            if (iVar4 < *(int *)(*(int *)(DAT_012586dc + 0x30) + iVar2 * 4)) {
              FUN_00988a50();
              pvStack_14._0_1_ = 0x27;
              FUN_009311d0();
              uVar3 = FUN_00988a50();
              pvStack_14._0_1_ = 0x28;
              FUN_0043ec10(auStack_10c,"CURRENT",uVar3);
              pvStack_14._0_1_ = 0x29;
            }
            else {
              FUN_009311d0();
              FUN_00988a50();
              pvStack_14._0_1_ = 0x2a;
              uVar3 = FUN_00988a50();
              pvStack_14._0_1_ = 0x2b;
              FUN_0043ec10(auStack_10c,"NEEDED",uVar3);
              pvStack_14._0_1_ = 0x2c;
            }
            FUN_00408ed0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
          }
          uStack_60 = 0xf;
          iStack_64 = 0;
          uStack_74 = 0;
          pvStack_14._0_1_ = 0x2d;
          iVar2 = (**(code **)(*param_1 + 0x50))();
          if (iVar2 != 0x15b) {
            iVar4 = 5000;
            if (DAT_0125873e == '\0') {
              iVar4 = *(int *)(local_cc + 0x65c);
            }
            if (iVar4 < *(int *)(*(int *)(DAT_012586dc + 0x30) + iVar2 * 4)) {
              FUN_00988a50();
              pvStack_14._0_1_ = 0x2e;
              FUN_0051b810();
              uVar3 = FUN_00988a50();
              pvStack_14._0_1_ = 0x2f;
              FUN_0043ec10(auStack_10c,"CURRENT",uVar3);
              pvStack_14._0_1_ = 0x30;
            }
            else {
              FUN_0051b810();
              FUN_00988a50();
              pvStack_14._0_1_ = 0x31;
              uVar3 = FUN_00988a50();
              pvStack_14._0_1_ = 0x32;
              FUN_0043ec10(auStack_10c,"NEEDED",uVar3);
              pvStack_14._0_1_ = 0x33;
            }
            FUN_00408ed0();
            FUN_00408ad0();
            FUN_00408ad0();
            pvStack_14._0_1_ = 0x2d;
            FUN_00408ad0();
          }
          if (iStack_80 == 0) {
            uStack_28 = 0xf;
            uStack_2c = 0;
            uStack_3c = 0;
            pvStack_14._0_1_ = 0x36;
            if (iStack_48 != 0) {
              FUN_00448aa0();
            }
            if (iStack_64 != 0) {
              FUN_00448aa0();
            }
            cVar1 = (**(code **)(*param_1 + 0x6c))();
            if (((cVar1 == '\0') &&
                (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[5] * 4) + 0x208) != 0)) &&
               (iVar2 = (**(code **)(*param_1 + 0x20))(), iVar2 != 0x8cb)) {
              FUN_00448740();
              FUN_006153a0();
              pvStack_14._0_1_ = 0x37;
              uVar3 = FUN_0055dd40();
              pvStack_14._0_1_ = 0x38;
              FUN_0043ec10(auStack_10c,"COUNTRY",uVar3);
              pvStack_14._0_1_ = 0x39;
              FUN_00448aa0();
              FUN_00408ad0();
              FUN_00408ad0();
              pvStack_14._0_1_ = 0x36;
              FUN_00408ad0();
            }
            FUN_00401320();
            FUN_00408ad0();
          }
          else {
            if (iStack_64 != 0) {
              FUN_00988fa0();
              pvStack_14._0_1_ = 0x34;
              FUN_00448aa0();
              pvStack_14._0_1_ = 0x2d;
              FUN_00408ad0();
            }
            if (iStack_48 != 0) {
              FUN_00988fa0();
              pvStack_14._0_1_ = 0x35;
              FUN_00448aa0();
              pvStack_14._0_1_ = 0x2d;
              FUN_00408ad0();
            }
            FUN_00401320();
          }
          FUN_00408ad0();
        }
        else {
          iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[3] * 4);
          if (((*(char *)(iVar2 + 0xcf5) == '\0') && (*(char *)(iVar2 + 0xcf4) == '\0')) ||
             (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[3] * 4) + 0xcfc) == param_1[5])
             ) goto LAB_0091275e;
          FUN_009885d0();
          uVar5 = 0x20;
          pvStack_14._0_1_ = 0x20;
          FUN_009a8ee0();
          pvStack_14._0_1_ = 0x21;
LAB_0091271d:
          iVar2 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
          pvStack_14._0_1_ = uVar5;
          FUN_009a9740();
        }
      }
      else {
        FUN_0043b700();
        pvStack_14._0_1_ = 0x1f;
        FUN_0042c180();
      }
    }
    else {
      FUN_009885d0();
      pvStack_14._0_1_ = 0x1d;
      FUN_009a8ee0();
      pvStack_14._0_1_ = 0x1e;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
      pvStack_14._0_1_ = 0x1d;
      FUN_009a9740();
    }
  }
  else {
    FUN_0043acd0();
    pvStack_14._0_1_ = 0x1b;
    uVar3 = FUN_0055dd40();
    pvStack_14._0_1_ = 0x1c;
    FUN_0043ec10(param_2,"COUNTRY",uVar3);
    FUN_00408ad0();
  }
  FUN_00408ad0();
  FUN_00408ad0();
LAB_00912e4d:
  FUN_0040b3c0();
  ExceptionList = pvStack_1c;
  return param_2;
}

