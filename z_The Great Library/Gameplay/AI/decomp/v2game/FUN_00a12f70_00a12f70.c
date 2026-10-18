// FUN_00a12f70 @ 00a12f70 body=[[00a12f70, 00a13074] [00a13078, 00a13300]]


void FUN_00a12f70(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  undefined *puStack_130;
  undefined ***pppuStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  undefined4 uStack_120;
  char *pcStack_11c;
  char *pcStack_118;
  undefined4 uStack_114;
  uint uStack_f8;
  undefined1 local_f4 [16];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_78 [18];
  void *pvStack_30;
  void *pvStack_2c;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b61112;
  pvStack_14 = ExceptionList;
  uStack_114 = 0xd;
  pcStack_118 = "largefile.cpp";
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = 0;
  pcStack_11c = "h\x01\x03";
  ExceptionList = &pvStack_14;
  FUN_00409350();
  uStack_114 = 0x301;
  pcStack_11c = local_f4;
  pcStack_118 = (char *)0x25;
  local_c = 0;
  uStack_120 = 0xa12fd4;
  uVar1 = FUN_004015b0();
  uStack_114 = 0;
  pcStack_118 = (char *)0x19;
  pcStack_11c = "CStartFileTransfer Name: ";
  local_c = CONCAT31(local_c._1_3_,1);
  iStack_124 = 0xa12fef;
  uStack_120 = uVar1;
  FUN_00987d50();
  iStack_124 = in_ECX + 0x74;
  if (0xf < *(uint *)(in_ECX + 0x88)) {
    iStack_124 = *(int *)iStack_124;
  }
  pppuStack_12c = (undefined ***)0xa13005;
  uStack_128 = uVar1;
  puStack_130 = (undefined *)FUN_00418e30();
  uStack_128 = *(undefined4 *)(in_ECX + 0x40);
  pppuStack_12c = (undefined ***)0xdfdc4c;
  iStack_124 = uStack_128;
  uStack_128 = FUN_00418e30();
  pppuStack_12c = (undefined ***)0xa13021;
  pppuStack_12c = (undefined ***)FUN_00455470();
  puStack_130 = (undefined *)0xa13027;
  FUN_00401280();
  pppuStack_12c = appuStack_78;
  uStack_24 = uStack_24 & 0xffffff00;
  puStack_130 = (undefined *)0xa1303f;
  FUN_00987ac0();
  pppuStack_12c = appuStack_78;
  appuStack_78[0] = std::ios_base::vftable;
  puStack_130 = (undefined *)0xa13057;
  FUN_00aad52d();
  iVar4 = DAT_01258a98;
  iVar3 = DAT_01258a94;
  uStack_24 = 0xffffffff;
  if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
    puStack_130 = &UNK_00a13075;
    FUN_00aae91b();
  }
  pcStack_118 = *(char **)(in_ECX + 0x48);
  uStack_114 = *(undefined4 *)(in_ECX + 0x4c);
  if (pcStack_118 < 0x1269) {
    if (DAT_01258a98 == 0) goto LAB_00a130d0;
    pppuStack_12c = (undefined ***)0xa130ce;
    iVar2 = FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_00a130d0:
    iVar2 = 0;
  }
  else {
    pppuStack_12c = (undefined ***)0xa130bd;
    iVar2 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 0x44) = iVar2;
  if (iVar2 == 0) {
    if (*(int *)(in_ECX + 0x3c) == 0) {
      pppuStack_12c = (undefined ***)0xdc;
      puStack_130 = (undefined *)0xa131f7;
      iVar3 = FUN_00aae9af();
      uStack_24 = 2;
      if (iVar3 != 0) {
        puStack_130 = *(undefined **)(in_ECX + 0x48);
        pcStack_118 = (char *)&puStack_130;
        pppuStack_12c = *(undefined ****)(in_ECX + 0x4c);
        piVar5 = (int *)FUN_00a140e0();
        goto LAB_00a13273;
      }
    }
    else {
      pppuStack_12c = (undefined ***)0xf4;
      puStack_130 = (undefined *)0xa13238;
      pcStack_118 = (char *)FUN_00aae9af();
      uStack_24 = 3;
      if (pcStack_118 != (char *)0x0) {
        pppuStack_12c = *(undefined ****)(in_ECX + 0x6c);
        puStack_130 = *(undefined **)(in_ECX + 0x4c);
        piVar5 = (int *)FUN_00a14a70();
        goto LAB_00a13273;
      }
    }
    piVar5 = (int *)0x0;
LAB_00a13273:
    uStack_24 = 0xffffffff;
    uStack_114 = DAT_00f0d84c;
    pcStack_118 = (char *)DAT_00f0d848;
    iVar3 = DAT_01258a94;
    if (DAT_00f0d848 < 0x1269) {
      iVar3 = DAT_01258a98;
    }
    if (iVar3 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      pppuStack_12c = (undefined ***)0xa132b1;
      piVar6 = (int *)FUN_009c1d40();
    }
    iVar3 = *piVar5;
    pppuStack_12c = (undefined ***)0xa132c0;
    pppuStack_12c = (undefined ***)(**(code **)(*piVar6 + 0x28))();
    puStack_130 = (undefined *)0xa132c8;
    (**(code **)(iVar3 + 0x20))();
    iVar3 = *(int *)(in_ECX + 0x70);
    pppuStack_12c = (undefined ***)0xffffffff;
    puStack_130 = (undefined *)0x0;
    FUN_00408ed0();
    piVar5[0x2c] = iVar3;
    pppuStack_12c = (undefined ***)0xa132ec;
    FUN_00a14720();
    ExceptionList = pvStack_2c;
    return;
  }
  pcStack_118 = *(char **)(in_ECX + 0x48);
  uStack_114 = *(undefined4 *)(in_ECX + 0x4c);
  if (pcStack_118 < 0x1269) {
    if (iVar4 == 0) goto LAB_00a13118;
    pppuStack_12c = (undefined ***)0xa13114;
    iVar3 = FUN_009c1d40();
  }
  else if (iVar3 == 0) {
LAB_00a13118:
    iVar3 = 0;
  }
  else {
    pppuStack_12c = (undefined ***)0xa13101;
    iVar3 = FUN_009c1d40();
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x70);
  pppuStack_12c = (undefined ***)0xffffffff;
  puStack_130 = (undefined *)0x0;
  FUN_00408ed0();
  *(undefined4 *)(iVar3 + 0xb0) = uVar1;
  iVar3 = DAT_01258a94;
  pcStack_118 = *(char **)(in_ECX + 0x48);
  uStack_114 = *(undefined4 *)(in_ECX + 0x4c);
  if (pcStack_118 < 0x1269) {
    if (DAT_01258a98 != 0) {
      pppuStack_12c = (undefined ***)0xa13177;
      iVar4 = FUN_009c1d40();
      goto LAB_00a1317d;
    }
  }
  else if (DAT_01258a94 != 0) {
    pppuStack_12c = (undefined ***)0xa13160;
    iVar4 = FUN_009c1d40();
    goto LAB_00a1317d;
  }
  iVar4 = 0;
LAB_00a1317d:
  *(undefined4 *)(iVar4 + 0x7c) = *(undefined4 *)(in_ECX + 0x40);
  pcStack_118 = (char *)DAT_00f0d848;
  uStack_114 = DAT_00f0d84c;
  iVar2 = DAT_01258a98;
  if (0x1268 < DAT_00f0d848) {
    iVar2 = iVar3;
  }
  if (iVar2 != 0) {
    pppuStack_12c = (undefined ***)0xa131c0;
    piVar5 = (int *)FUN_009c1d40();
    if (piVar5 != (int *)0x0) {
      puStack_130 = (undefined *)0xa131d2;
      pppuStack_12c = (undefined ***)iVar4;
      (**(code **)(*piVar5 + 0x24))();
      ExceptionList = pvStack_30;
      return;
    }
  }
  ExceptionList = pvStack_2c;
  return;
}

