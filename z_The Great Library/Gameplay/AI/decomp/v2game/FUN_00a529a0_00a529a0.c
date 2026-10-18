// FUN_00a529a0 @ 00a529a0 body=[[00a529a0, 00a52aed] [00a52af1, 00a52b19] [00a52b1d, 00a52b8d] [00a52b91, 00a52bb7] [00a52bbb, 00a52c95] [00a52c99, 00a52e0e] [00a52e12, 00a52ed5] [00a52ed9, 00a52ef9] [00a52efd, 00a52f37] [00a52f3b, 00a52f51]]


void FUN_00a529a0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 uVar4;
  char cVar5;
  byte ****ppppbVar6;
  int iVar7;
  undefined1 *in_ECX;
  undefined4 uVar8;
  byte *pbVar9;
  bool bVar10;
  undefined4 local_404 [2];
  undefined4 uStack_3fc;
  int iStack_3f8;
  undefined ***local_3f4;
  uint *local_3f0;
  byte ***pppbStack_3ec;
  undefined4 local_3d8;
  undefined **local_3d4 [4];
  undefined4 local_3c4;
  uint local_3c0;
  undefined1 *local_3b8;
  uint local_3b4 [4];
  undefined4 local_3a4;
  uint local_3a0;
  undefined4 *local_398;
  byte ***local_394 [4];
  undefined4 local_384;
  uint local_380;
  undefined **local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined1 local_368;
  undefined1 local_364;
  undefined4 *local_35c;
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b60f1c;
  local_14 = ExceptionList;
  uVar8 = 0;
  ExceptionList = &local_14;
  *(undefined4 *)(in_ECX + 0x1cc) = 0;
  *(undefined4 *)(in_ECX + 0x1d8) = 0;
  uVar2 = *(undefined4 *)(param_1 + 100);
  pppbStack_3ec = (byte ***)0xffffffff;
  *(int *)(in_ECX + 0x44) = param_1 + 0x158;
  local_3f0 = (uint *)0x0;
  local_3f4 = (undefined ***)(in_ECX + 0x1a4);
  *(undefined4 *)(in_ECX + 0xfc) = uVar2;
  local_380 = 0xf;
  local_384 = 0;
  local_394[0] = (byte ***)((uint)local_394[0] & 0xffffff00);
  iStack_3f8 = 0xa52a0f;
  local_3b8 = in_ECX;
  FUN_00408ed0();
  local_c = 0;
  ppppbVar6 = (byte ****)local_394[0];
  if (local_380 < 0x10) {
    ppppbVar6 = local_394;
  }
  pbVar9 = &DAT_00ded94d;
  do {
    bVar1 = *(byte *)ppppbVar6;
    bVar10 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_00a52a50:
      iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00a52a55;
    }
    if (bVar1 == 0) break;
    bVar1 = *(byte *)((int)ppppbVar6 + 1);
    bVar10 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_00a52a50;
    ppppbVar6 = (byte ****)((int)ppppbVar6 + 2);
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_00a52a55:
  if (iVar7 == 0) goto LAB_00a52f2c;
  pppbStack_3ec = (byte ***)0x1;
  local_3f0 = (uint *)&DAT_00e0b438;
  local_3a0 = 0xf;
  local_3a4 = 0;
  local_3b4[0] = local_3b4[0] & 0xffffff00;
  local_3f4 = (undefined ***)0xa52a81;
  FUN_00409350();
  local_c._0_1_ = 1;
  if (DAT_00f20c18 == (int *)0x0) {
    pppbStack_3ec = (byte ***)0x4;
    local_3f0 = (uint *)0xa52a99;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  piVar3 = DAT_00f20c18;
  pppbStack_3ec = (byte ***)local_3b4;
  local_3f0 = (uint *)0xa52ac5;
  pppbStack_3ec = (byte ***)FUN_00988f20();
  local_c._0_1_ = 2;
  local_3f0 = (uint *)0xa52ad9;
  cVar5 = (**(code **)(*piVar3 + 0x24))();
  if (0xf < local_3c0) {
    pppbStack_3ec = (byte ***)local_3d4[0];
                    /* WARNING: Subroutine does not return */
    local_3f0 = (uint *)&UNK_00a52aee;
    FUN_00aae91b();
  }
  local_c._0_1_ = 0;
  uVar4 = (undefined1)local_c;
  local_c._0_1_ = 0;
  local_3c0 = 0xf;
  local_3c4 = 0;
  local_3d4[0] = (undefined **)((uint)local_3d4[0] & 0xffffff00);
  if (0xf < local_3a0) {
    pppbStack_3ec = (byte ***)local_3b4[0];
                    /* WARNING: Subroutine does not return */
    local_3f0 = (uint *)&UNK_00a52b1a;
    FUN_00aae91b();
  }
  if (cVar5 == '\0') {
    pppbStack_3ec = (byte ***)0x5058;
    local_3f0 = (uint *)0xa52cb0;
    local_c._0_1_ = uVar4;
    iVar7 = FUN_00aae9af();
    local_c._0_1_ = 10;
    if (iVar7 == 0) {
      local_3d8 = 0;
    }
    else {
      local_398 = local_404;
      local_3f0 = (uint *)0xf;
      local_3f4 = (undefined ***)0x0;
      local_404[0]._0_1_ = 0;
      FUN_00409350(&DAT_00ded94d,0);
      local_3d8 = FUN_009dc380(iVar7,local_394);
    }
    local_c._0_1_ = 0;
    pppbStack_3ec = (byte ***)0xf;
    local_3f0 = (uint *)0xded978;
    local_3c0 = 0xf;
    local_3c4 = 0;
    local_3d4[0] = (undefined **)((uint)local_3d4[0] & 0xffffff00);
    local_3f4 = (undefined ***)0xa52d21;
    FUN_00409350();
    pppbStack_3ec = (byte ***)0x114;
    local_c._0_1_ = 0xb;
    local_3f0 = (uint *)0xa52d33;
    local_35c = (undefined4 *)FUN_00aae9af();
    local_c._0_1_ = 0xc;
    local_398 = local_35c;
    if (local_35c == (undefined4 *)0x0) {
      local_35c = (undefined4 *)0x0;
    }
    else {
      *local_35c = &PTR_FUN_00e37c30;
      local_35c[1] = local_3d8;
      *(undefined2 *)(local_35c + 0x44) = 0x100;
      pppbStack_3ec = (byte ***)0xa52d65;
      FUN_00990100();
      *local_35c = &PTR_FUN_00e37c3c;
      in_ECX = local_3b8;
    }
    local_378 = &PTR_FUN_00e38524;
    local_374 = 0;
    local_370 = 0;
    local_36c = 0;
    local_368 = 0;
    local_c._0_1_ = 0xd;
    pppbStack_3ec = (byte ***)0xffffffff;
    local_3f0 = (uint *)0x0;
    local_3f4 = local_3d4;
    local_364 = 0;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    iStack_3f8 = 0xa52dd2;
    FUN_00408ed0();
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 1;
    local_1c = 0;
    local_c._0_1_ = 0xf;
    if (0xf < local_3c0) {
      pppbStack_3ec = (byte ***)local_3d4[0];
                    /* WARNING: Subroutine does not return */
      local_3f0 = (uint *)&UNK_00a52e0f;
      FUN_00aae91b();
    }
LAB_00a52e16:
    local_3c0 = 0xf;
    pppbStack_3ec = &local_378;
    local_3c4 = 0;
    local_3d4[0] = (undefined **)((uint)local_3d4[0] & 0xffffff00);
    local_3f0 = (uint *)0xa52e28;
    FUN_009a1440();
    pppbStack_3ec = &local_378;
    local_3f0 = (uint *)0xa52e3e;
    (**(code **)(*(int *)(in_ECX + 0x108) + 0xc))();
    local_3f0 = (uint *)0xa52e44;
    FUN_00a53160();
    local_c._0_1_ = 0;
    pppbStack_3ec = (byte ***)0xa52e54;
    FUN_009a0dc0();
    uVar4 = (undefined1)local_c;
  }
  else {
    pppbStack_3ec = (byte ***)0x1;
    local_3f0 = (uint *)&DAT_00e0b438;
    local_3a0 = 0xf;
    local_3a4 = 0;
    local_3b4[0] = local_3b4[0] & 0xffffff00;
    local_3f4 = (undefined ***)0xa52b43;
    FUN_00409350();
    pppbStack_3ec = (byte ***)local_3b4;
    local_c._0_1_ = 3;
    local_3f0 = (uint *)0xa52b5d;
    pppbStack_3ec = (byte ***)FUN_00988f20();
    local_3f0 = (uint *)(in_ECX + 0x108);
    local_c._0_1_ = 4;
    local_3f4 = (undefined ***)0xa52b72;
    cVar5 = FUN_00a83740();
    if (0xf < local_3c0) {
      pppbStack_3ec = (byte ***)local_3d4[0];
                    /* WARNING: Subroutine does not return */
      local_3f0 = (uint *)&UNK_00a52b8e;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 0;
    local_3c0 = 0xf;
    local_3c4 = 0;
    local_3d4[0] = (undefined **)((uint)local_3d4[0] & 0xffffff00);
    if (0xf < local_3a0) {
      pppbStack_3ec = (byte ***)local_3b4[0];
                    /* WARNING: Subroutine does not return */
      local_3f0 = (uint *)&UNK_00a52bb8;
      FUN_00aae91b();
    }
    if (cVar5 == '\0') {
      pppbStack_3ec = (byte ***)0x5058;
      local_3f0 = (uint *)0xa52bcf;
      iVar7 = FUN_00aae9af();
      local_c._0_1_ = 5;
      if (iVar7 != 0) {
        local_3b8 = (undefined1 *)local_404;
        FUN_009885d0();
        FUN_009dc380(iVar7,local_394);
      }
      local_c._0_1_ = 0;
      pppbStack_3ec = (byte ***)0xf;
      local_3f0 = (uint *)0xded978;
      local_3c0 = 0xf;
      local_3c4 = 0;
      local_3d4[0] = (undefined **)((uint)local_3d4[0] & 0xffffff00);
      local_3f4 = (undefined ***)0xa52c31;
      FUN_00409350();
      pppbStack_3ec = (byte ***)0x114;
      local_c._0_1_ = 6;
      local_3f0 = (uint *)0xa52c43;
      pppbStack_3ec = (byte ***)FUN_00aae9af();
      local_c._0_1_ = 7;
      local_3b8 = (undefined1 *)pppbStack_3ec;
      if (pppbStack_3ec == (byte ***)0x0) {
        local_3f0 = (uint *)0x0;
      }
      else {
        local_3f0 = (uint *)0xa52c60;
        local_3f0 = (uint *)FUN_00990900();
      }
      pppbStack_3ec = (byte ***)0x1;
      local_3f4 = &local_378;
      local_c._0_1_ = 6;
      iStack_3f8 = 0xa52c7d;
      FUN_009a0bf0();
      local_c._0_1_ = 9;
      if (0xf < local_3c0) {
        pppbStack_3ec = (byte ***)local_3d4[0];
                    /* WARNING: Subroutine does not return */
        local_3f0 = (uint *)&UNK_00a52c96;
        FUN_00aae91b();
      }
      goto LAB_00a52e16;
    }
  }
  local_c._0_1_ = uVar4;
  pppbStack_3ec = (byte ***)0x4;
  local_3f0 = (uint *)&DAT_00e417c4;
  local_3a0 = 0xf;
  local_3a4 = 0;
  local_3b4[0] = local_3b4[0] & 0xffffff00;
  local_3f4 = (undefined ***)0xa52e74;
  FUN_00409350();
  local_c._0_1_ = 0x10;
  pppbStack_3ec = (byte ***)0x12;
  local_3f0 = (uint *)0xe417f0;
  local_3c0 = 0xf;
  local_3c4 = 0;
  local_3d4[0] = (undefined **)((uint)local_3d4[0] & 0xffffff00);
  local_3f4 = (undefined ***)0xa52e9c;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,0x11);
  pppbStack_3ec = *(byte ****)(*(int *)(in_ECX + 0xe4) + 100);
  local_3f0 = local_3b4;
  local_3f4 = local_3d4;
  iStack_3f8 = *(int *)(in_ECX + 0xe4) + 0x6bcfc;
  uStack_3fc = 0xa52ec3;
  iVar7 = FUN_009be510();
  if (0xf < local_3c0) {
    pppbStack_3ec = (byte ***)local_3d4[0];
                    /* WARNING: Subroutine does not return */
    local_3f0 = (uint *)&UNK_00a52ed6;
    FUN_00aae91b();
  }
  local_3c0 = 0xf;
  local_3c4 = 0;
  local_3d4[0] = (undefined **)((uint)local_3d4[0] & 0xffffff00);
  if (0xf < local_3a0) {
    pppbStack_3ec = (byte ***)local_3b4[0];
                    /* WARNING: Subroutine does not return */
    local_3f0 = (uint *)&UNK_00a52efa;
    FUN_00aae91b();
  }
  local_3a0 = 0xf;
  local_3a4 = 0;
  local_3b4[0] = local_3b4[0] & 0xffffff00;
  if (iVar7 != 0) {
    uVar8 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xe4) + 0x6bd00) + -4 + iVar7 * 4);
  }
  *(undefined4 *)(in_ECX + 0x1dc) = uVar8;
LAB_00a52f2c:
  if (local_380 < 0x10) {
    ExceptionList = local_14;
    return;
  }
  pppbStack_3ec = local_394[0];
                    /* WARNING: Subroutine does not return */
  local_3f0 = (uint *)&UNK_00a52f38;
  FUN_00aae91b();
}

