// FUN_0040df60 @ 0040df60 body=[[0040df60, 0040dfdb] [0040dfdf, 0040e263] [0040e267, 0040e2fc] [0040e300, 0040e342] [0040e346, 0040e36a] [0040e36e, 0040e3fa] [0040e3fe, 0040e43c] [0040e440, 0040e464] [0040e468, 0040e49b] [0040e4b4, 0040e549] [0040e54d, 0040e586]]


void FUN_0040df60(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  undefined4 ******ppppppuVar6;
  undefined1 auStack_dc [4];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined *puStack_d0;
  undefined4 *****pppppuStack_cc;
  uint *puStack_c8;
  undefined4 *****pppppuStack_c4;
  undefined1 auStack_b4 [4];
  undefined1 *local_b0;
  int local_ac;
  undefined4 ****local_a8 [4];
  int iStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 auStack_8c [2];
  undefined4 uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined1 auStack_70 [12];
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int aiStack_54 [7];
  undefined4 *****local_38 [4];
  int iStack_28;
  uint uStack_24;
  int iStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9cbae;
  local_14 = ExceptionList;
  local_b0 = (undefined1 *)0x0;
  if (*(char *)(in_ECX + 0x39c) == '\0') {
    if (*(char *)(in_ECX + 0x39d) == '\0') {
      return;
    }
    iVar3 = *(int *)(in_ECX + 0x390);
    ExceptionList = &local_14;
    if (((iVar3 != 0) && (ExceptionList = &local_14, *(char *)(iVar3 + 0x1f0) != '\0')) &&
       (ExceptionList = &local_14, *(int *)(iVar3 + 0x218) == *(int *)(in_ECX + 0x3a4))) {
      pppppuStack_c4 = local_a8;
      puStack_c8 = (uint *)0x40e4fd;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x78) + 0x54) + 0x4c))();
      uStack_c = 0x15;
      if (iStack_98 != 0) {
        iVar3 = *(int *)(in_ECX + 0x390);
        pppppuStack_c4 = (undefined4 *****)0xffffffff;
        puStack_c8 = (uint *)0x0;
        pppppuStack_cc = local_a8;
        puStack_d0 = (undefined *)0x40e527;
        FUN_00408ed0();
        *(undefined1 *)(iVar3 + 0x21c) = 1;
      }
      uStack_c = 0xffffffff;
      if (0xf < uStack_94) {
        pppppuStack_c4 = (undefined4 *****)local_a8[0];
                    /* WARNING: Subroutine does not return */
        puStack_c8 = (uint *)&UNK_0040e54a;
        FUN_00aae91b();
      }
      uStack_94 = 0xf;
      iStack_98 = 0;
      local_a8[0] = (undefined4 ****)((uint)local_a8[0] & 0xffffff00);
    }
    uStack_c = 0xffffffff;
    *(undefined1 *)(in_ECX + 0x39d) = 0;
    puStack_c8 = (uint *)0x40e56b;
    FUN_0040f040();
    pppppuStack_c4 = (undefined4 *****)0x40e572;
    FUN_0040f4d0();
    ExceptionList = local_14;
    return;
  }
  pppppuStack_c4 = local_38;
  puStack_c8 = (uint *)0x40dfb3;
  ExceptionList = &local_14;
  local_ac = in_ECX;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x78) + 0x54) + 0x4c))();
  pppppuStack_c4 = (undefined4 *****)auStack_8c;
  uStack_c._0_1_ = 0;
  uStack_c._1_3_ = 0;
  puStack_c8 = (uint *)0x40dfcb;
  FUN_00989330();
  if (0xf < uStack_78) {
    pppppuStack_c4 = (undefined4 *****)auStack_8c[0];
                    /* WARNING: Subroutine does not return */
    puStack_c8 = (uint *)&UNK_0040dfdc;
    FUN_00aae91b();
  }
  if (iStack_28 == 0) goto LAB_0040e481;
  iVar3 = 0;
  if (0 < iStack_28) {
    do {
      ppppppuVar6 = (undefined4 ******)local_38[0];
      if (uStack_24 < 0x10) {
        ppppppuVar6 = local_38;
      }
      if (*(char *)((int)ppppppuVar6 + iVar3) < '\0') goto LAB_0040e1d7;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_28);
  }
  pppppuStack_c4 = (undefined4 *****)0x1;
  puStack_c8 = (uint *)&DAT_00dedc78;
  pppppuStack_cc = local_38;
  puStack_d0 = (undefined *)0x40e035;
  iVar3 = FUN_005484e0();
  if (iVar3 == -1) {
    pppppuStack_c4 = (undefined4 *****)0x1;
    puStack_c8 = (uint *)&DAT_00dedc68;
    pppppuStack_cc = local_38;
    puStack_d0 = (undefined *)0x40e054;
    iVar3 = FUN_005484e0();
    if (iVar3 == -1) {
      pppppuStack_c4 = (undefined4 *****)auStack_b4;
      auStack_b4[0] = 0x2e;
      puStack_c8 = (uint *)0x40e075;
      iVar3 = FUN_0098a0d0();
      if (iVar3 < 1) {
LAB_0040e0ad:
        bVar1 = true;
      }
      else {
        pppppuStack_c4 = (undefined4 *****)iStack_28;
        puStack_c8 = (uint *)0x40e093;
        FUN_009895f0();
        local_b0 = (undefined1 *)0x2;
        pppppuStack_c4 = (undefined4 *****)0x40e0a5;
        cVar2 = FUN_0040b360();
        if (cVar2 == '\0') goto LAB_0040e0ad;
        bVar1 = false;
      }
      if (((uint)local_b0 & 2) != 0) {
        pppppuStack_c4 = (undefined4 *****)0x40e0bf;
        FUN_00408ad0();
      }
      if (bVar1) {
        pppppuStack_c4 = (undefined4 *****)0x4;
        puStack_c8 = (uint *)&DAT_00dedcbc;
        pppppuStack_cc = (undefined4 ******)0x40e0d6;
        FUN_00448740();
      }
      pppppuStack_c4 = (undefined4 *****)0x40e0e4;
      FUN_009885d0();
      iVar3 = local_ac;
      uStack_c._0_1_ = 0xd;
      pppppuStack_c4 = (undefined4 *****)aiStack_54;
      puStack_c8 = (uint *)0x40e0fc;
      FUN_00412f30();
      uStack_c._0_1_ = 0xe;
      puStack_c8 = (uint *)0x40e112;
      pppppuStack_c4 = (undefined4 *****)auStack_70;
      FUN_00988f20();
      pppppuStack_c4 = local_38;
      uStack_c._0_1_ = 0xf;
      puStack_c8 = (uint *)0x40e12d;
      FUN_00988f20();
      pppppuStack_c4 = (undefined4 *****)0x40e136;
      FUN_00408ad0();
      pppppuStack_c4 = (undefined4 *****)0x40e13f;
      FUN_00408ad0();
      uStack_c._0_1_ = 0x13;
      pppppuStack_c4 = (undefined4 *****)0x40e150;
      FUN_00408ad0();
      pppppuStack_c4 = (undefined4 *****)0x40e157;
      cVar2 = FUN_00991930();
      if (cVar2 == '\0') {
        pppppuStack_c4 = (undefined4 *****)0x40e1c9;
        FUN_0040e620();
        pppppuStack_c4 = (undefined4 *****)0x40e1d2;
        FUN_00408ad0();
      }
      else {
        pppppuStack_c4 = (undefined4 *****)0x8c;
        puStack_c8 = (uint *)0x40e165;
        iVar4 = FUN_00aae9af();
        uStack_c._0_1_ = 0x14;
        local_ac = iVar4;
        if (iVar4 == 0) {
          pppppuStack_c4 = (undefined4 *****)0x0;
        }
        else {
          local_b0 = auStack_dc;
          FUN_00401320();
          pppppuStack_c4 = (undefined4 *****)FUN_0040b460(iVar4,*(undefined4 *)(iVar3 + 0x80),iVar3)
          ;
        }
        uStack_c._0_1_ = 0x13;
        puStack_c8 = (uint *)0x40e1b0;
        FUN_006480e0();
        pppppuStack_c4 = (undefined4 *****)0x40e1b9;
        FUN_00408ad0();
      }
      goto LAB_0040e481;
    }
  }
LAB_0040e1d7:
  pppppuStack_c4 = (undefined4 *****)0x68;
  puStack_c8 = (uint *)0x40e1de;
  iVar3 = FUN_00aae9af();
  uStack_c._0_1_ = 1;
  iStack_1c = iVar3;
  if (iVar3 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    pppppuStack_c4 = (undefined4 *****)0x11;
    puStack_c8 = (uint *)0xdedc7c;
    uStack_94 = 0xf;
    iStack_98 = 0;
    local_a8[0] = (undefined4 ****)((uint)local_a8[0] & 0xffffff00);
    pppppuStack_cc = (undefined4 *****)0x40e21c;
    FUN_00409350();
    pppppuStack_c4 = local_a8;
    uStack_c = CONCAT31(uStack_c._1_3_,2);
    local_b0 = (undefined1 *)0x1;
    pppppuStack_cc = (undefined4 ******)0x40e23d;
    puStack_c8 = (uint *)iVar3;
    piVar5 = (int *)FUN_00640680();
  }
  uStack_c = 0;
  if (((uint)local_b0 & 1) != 0) {
    if (0xf < uStack_94) {
      pppppuStack_c4 = (undefined4 *****)local_a8[0];
                    /* WARNING: Subroutine does not return */
      puStack_c8 = (uint *)&UNK_0040e264;
      FUN_00aae91b();
    }
    uStack_94 = 0xf;
    iStack_98 = 0;
    local_a8[0] = (undefined4 ****)((uint)local_a8[0] & 0xffffff00);
  }
  pppppuStack_c4 = (undefined4 *****)0x13;
  puStack_c8 = (uint *)0xdedc90;
  uStack_5c = 0xf;
  uStack_60 = 0;
  auStack_70[0] = 0;
  pppppuStack_cc = (undefined4 *****)0x40e291;
  FUN_00409350();
  pppppuStack_c4 = (undefined4 *****)auStack_70;
  puStack_c8 = (uint *)aiStack_54;
  uStack_c._0_1_ = 4;
  pppppuStack_cc = (undefined4 *****)0x40e2a8;
  FUN_009a8ee0();
  uStack_c._0_1_ = 5;
  pppppuStack_c4 = (undefined4 *****)0x40e2b7;
  iVar3 = FUN_00475500();
  puStack_d0 = (undefined *)*(undefined8 *)(iVar3 + 0x6c);
  pppppuStack_cc = (undefined4 *****)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20);
  puStack_c8 = (uint *)*(undefined8 *)(iVar3 + 0x74);
  pppppuStack_c4 = (undefined4 *****)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
  uStack_d4 = 0x40e2da;
  pppppuStack_c4 = (undefined4 *****)FUN_009a9880();
  uStack_c._0_1_ = 6;
  puStack_c8 = (uint *)0x40e2ec;
  (**(code **)(*piVar5 + 0x3c))();
  if (0xf < uStack_7c) {
    puStack_c8 = (uint *)uStack_90;
                    /* WARNING: Subroutine does not return */
    pppppuStack_cc = (undefined4 *****)&UNK_0040e2fd;
    FUN_00aae91b();
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  puStack_10._0_1_ = 7;
  puStack_c8 = (uint *)0x40e326;
  FUN_009adb70();
  if (aiStack_54[0] != 0) {
    puStack_c8 = (uint *)0x40e339;
    FUN_009e6a80();
    puStack_c8 = (uint *)aiStack_54[0];
                    /* WARNING: Subroutine does not return */
    pppppuStack_cc = (undefined4 *****)&UNK_0040e343;
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 0;
  aiStack_54[0] = 0;
  aiStack_54[1] = 0;
  aiStack_54[2] = 0;
  if (0xf < uStack_60) {
    puStack_c8 = (uint *)uStack_74;
                    /* WARNING: Subroutine does not return */
    pppppuStack_cc = (undefined4 *****)&UNK_0040e36b;
    FUN_00aae91b();
  }
  puStack_c8 = (uint *)0x14;
  pppppuStack_cc = (undefined4 *****)0xdedca4;
  uStack_60 = 0xf;
  uStack_64 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  puStack_d0 = (undefined *)0x40e38f;
  FUN_00409350();
  puStack_c8 = &uStack_74;
  pppppuStack_cc = (undefined4 *****)&iStack_58;
  puStack_10._0_1_ = 8;
  puStack_d0 = (undefined *)0x40e3a6;
  FUN_009a8ee0();
  puStack_10._0_1_ = 9;
  puStack_c8 = (uint *)0x40e3b5;
  iVar3 = FUN_00475500();
  uStack_d4 = (undefined4)*(undefined8 *)(iVar3 + 0x6c);
  puStack_d0 = (undefined *)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20);
  pppppuStack_cc = (undefined4 *****)*(undefined8 *)(iVar3 + 0x74);
  puStack_c8 = (uint *)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
  uStack_d8 = 0x40e3d8;
  puStack_c8 = (uint *)FUN_009a9880();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,10);
  pppppuStack_cc = (undefined4 *****)0x40e3ea;
  (**(code **)(*piVar5 + 0x40))();
  if (0xf < uStack_80) {
    pppppuStack_cc = (undefined4 *****)uStack_94;
                    /* WARNING: Subroutine does not return */
    puStack_d0 = &UNK_0040e3fb;
    FUN_00aae91b();
  }
  uStack_80 = 0xf;
  uStack_84 = 0;
  uStack_94 = uStack_94 & 0xffffff00;
  local_14._0_1_ = 0xb;
  pppppuStack_cc = (undefined4 *****)0x40e422;
  FUN_009adb70();
  if (iStack_58 != 0) {
    pppppuStack_cc = (undefined4 *****)0x40e433;
    FUN_009e6a80();
    pppppuStack_cc = (undefined4 *****)iStack_58;
                    /* WARNING: Subroutine does not return */
    puStack_d0 = &UNK_0040e43d;
    FUN_00aae91b();
  }
  local_14 = (void *)((uint)local_14._1_3_ << 8);
  iStack_58 = 0;
  aiStack_54[0] = 0;
  aiStack_54[1] = 0;
  if (0xf < uStack_64) {
    pppppuStack_cc = (undefined4 *****)uStack_78;
                    /* WARNING: Subroutine does not return */
    puStack_d0 = &UNK_0040e465;
    FUN_00aae91b();
  }
  pppppuStack_cc = (undefined4 ******)0x40e471;
  (**(code **)(*piVar5 + 0x28))();
  puStack_c8 = (uint *)0x40e481;
  pppppuStack_c4 = (undefined4 *****)piVar5;
  FUN_006480e0();
LAB_0040e481:
  if (uStack_24 < 0x10) {
    ExceptionList = local_14;
    return;
  }
  pppppuStack_c4 = local_38[0];
                    /* WARNING: Subroutine does not return */
  puStack_c8 = (uint *)&UNK_0040e49c;
  FUN_00aae91b();
}

