// FUN_00844210 @ 00844210 body=[[00844210, 00844fe7] [00844ff0, 00845ac4]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00844210(int param_1,undefined4 param_2,uint ****param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint ***pppuVar12;
  uint ***pppuVar13;
  uint uVar14;
  int *piVar15;
  uint ****ppppuVar16;
  uint uVar17;
  uint **ppuVar18;
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar29;
  undefined8 local_100;
  uint ****ppppuStack_f8;
  uint ****local_f4;
  uint ****local_e4;
  char local_df;
  char local_de;
  char local_dd;
  int local_dc;
  uint **local_d8;
  uint ****local_d4;
  char local_cd;
  uint ****local_cc;
  uint **local_c8;
  uint ****local_c4;
  undefined8 local_c0;
  uint ****local_b4;
  undefined8 local_b0;
  uint ****local_a8;
  float local_a4;
  uint ***local_a0;
  int iStack_9c;
  uint ****local_94 [2];
  uint ***local_8c;
  float local_88;
  float local_84;
  undefined4 *local_80;
  undefined1 *local_7c;
  undefined4 local_78;
  int local_74;
  uint ***local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint ***local_60 [3];
  int local_54;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint ****local_3c;
  int local_38;
  
  local_c8 = *(uint ***)(param_1 + 0x34);
  local_80 = (undefined4 *)(param_1 + 0x34);
  iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)param_3 * 4);
  local_f4 = param_3;
  ppppuStack_f8 = (uint ****)param_2;
  local_100 = CONCAT44(0x844259,(undefined4)local_100);
  local_dc = iVar9;
  cVar7 = FUN_0085fa60();
  if (cVar7 == '\0') {
    return;
  }
  if (*(int *)(iVar1 + 0xcfc) != 0) {
    return;
  }
  local_c8 = *(uint ***)(iVar1 + 0x1428);
  if (*(int *)(iVar1 + 0x142c) == local_80[1]) {
    return;
  }
  if ((*(int *)(iVar1 + 0x142c) != 0) && (*(char *)(iVar9 + 0x31) == '\0')) {
    local_6c = *(int *)(iVar1 + 0x142c);
    local_f4 = (uint ****)0x8442d9;
    local_70 = (uint ***)local_c8;
    cVar7 = FUN_0042bb00();
    if (cVar7 != '\0') {
      return;
    }
  }
  local_f4 = (uint ****)(iVar9 + 0x12e8);
  ppppuStack_f8 = (uint ****)0x8442f4;
  FUN_00969f90();
  if (-1 < local_6c) {
    if (0 < local_6c) {
      return;
    }
    if ((uint **)0x28000 < local_70) {
      return;
    }
  }
  local_f4 = (uint ****)0x447a1fff;
  ppppuStack_f8 = (uint ****)0x844328;
  FUN_00401000();
  local_f4 = (uint ****)0x844330;
  iVar8 = FUN_00b31c00();
  ppppuVar16 = param_3;
  if (iVar8 <= *(int *)(iVar9 + 0x680)) {
    return;
  }
  local_c8 = (uint **)*local_80;
  local_70 = *(uint ****)
              (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_80[1] * 4) + 0xbe8) +
              (int)param_3 * 4);
  local_f4 = (uint ****)0x84436d;
  cVar7 = FUN_0092e270();
  if (cVar7 != '\0') {
    return;
  }
  local_cd = *(char *)((int)ppppuVar16 + *(int *)(iVar9 + 0xd08)) != '\0';
  if ((bool)local_cd) {
    if (*(char *)((int)ppppuVar16 + *(int *)(iVar9 + 0xd18)) == '\0') {
      return;
    }
  }
  else {
    local_f4 = &local_8c;
    ppppuStack_f8 = (uint ****)DAT_0125870c;
    local_100 = CONCAT44(0x8443bd,(undefined4)local_100);
    FUN_004a0e80();
    if ((int)local_8c / 1000 < 0x32) {
      local_cd = '\x01';
    }
    if (*(int *)(iVar9 + 0xdd0) < 1) {
      return;
    }
    ppppuVar16 = param_3;
    if (*(int *)(iVar1 + 0xdd0) < 1) {
      return;
    }
  }
  uVar6 = param_2;
  if (((*(char *)(iVar1 + 0xcf5) != '\0') || (*(char *)(iVar1 + 0xcf4) != '\0')) &&
     (local_c8 = *(uint ***)(iVar1 + 0xcf8),
     *(int *)(*(int *)(*(int *)(iVar9 + 0xbe8) + *(int *)(iVar1 + 0xcfc) * 4) + 0x20) != 0)) {
    return;
  }
  local_8c = (uint ***)((float)*(int *)(iVar1 + 0x1430) / 1000.0);
  ppppuStack_f8 = (uint ****)param_2;
  local_100 = CONCAT44(0x844489,(undefined4)local_100);
  local_f4 = ppppuVar16;
  local_68 = FUN_0085b8c0();
  ppppuStack_f8 = (uint ****)uVar6;
  local_100 = CONCAT44(0x8444a1,(undefined4)local_100);
  local_f4 = ppppuVar16;
  local_a4 = (float)FUN_0085b9b0();
  ppppuStack_f8 = (uint ****)uVar6;
  local_100 = CONCAT44(0x8444b6,(undefined4)local_100);
  local_f4 = ppppuVar16;
  local_88 = (float)FUN_0085b910();
  ppppuStack_f8 = (uint ****)uVar6;
  local_100 = CONCAT44(0x8444cb,(undefined4)local_100);
  local_f4 = ppppuVar16;
  local_7c = (undefined1 *)FUN_0085b880();
  local_f4 = (uint ****)0x8444d6;
  local_dd = FUN_00534a50();
  local_c8 = (uint **)*local_80;
  local_f4 = (uint ****)&param_2;
  local_84 = (float)*(int *)(*(int *)(*(int *)(local_dc + 0xbe8) + (int)param_3 * 4) + 0x3c) /
             1000.0;
  ppppuStack_f8 = (uint ****)local_80;
  local_100 = CONCAT44(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_80[1] * 4) + 0xbe8) +
                        (int)param_3 * 4),0x844538);
  local_de = FUN_0092ede0();
  iVar9 = local_dc;
  if (((local_dd == '\0') && (0 < (int)local_88)) && (local_68 < 1)) {
    return;
  }
  local_f4 = (uint ****)0x84456a;
  cVar7 = FUN_0085ffc0();
  if (cVar7 == '\0') {
    return;
  }
  local_94[0] = (uint ****)(iVar9 + 0x7b4);
  local_f4 = (uint ****)0x844581;
  iVar8 = FUN_005db9b0();
  if (iVar8 < 4) {
    return;
  }
  local_64 = DAT_012588e8;
  local_f4 = (uint ****)&local_a8;
  ppppuStack_f8 = (uint ****)&local_b4;
  local_b4 = (uint ****)0x0;
  local_a8 = (uint ****)0x0;
  local_100 = CONCAT44(local_94[0],0x8445b4);
  FUN_005dcbd0();
  local_f4 = (uint ****)&local_cc;
  ppppuStack_f8 = (uint ****)&local_e4;
  local_e4 = DAT_01317d64;
  local_cc = DAT_01317d64;
  local_100 = CONCAT44(iVar1 + 0x7b4,0x8445d7);
  FUN_005dcbd0();
  local_d8 = (uint **)((float)*(int *)(*(int *)(iVar1 + 0xbcc) + 0x70) / 1000.0 +
                      (float)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) / 1000.0);
  local_f4 = (uint ****)
             (((float)*(int *)(iVar9 + 0x14e0) *
               ((float)*(int *)(*(int *)(iVar9 + 0xbcc) + 0x70) / 1000.0 +
               (float)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) / 1000.0) * 0.4 + 0.0005) *
             1000.0);
  ppppuStack_f8 = (uint ****)0x8446c6;
  FUN_00401000();
  local_f4 = (uint ****)0x8446ce;
  iVar9 = FUN_00b31c00();
  local_f4 = (uint ****)
             (((float)*(int *)(iVar1 + 0x14e0) * (float)local_d8 * 0.4 + 0.0005) * 1000.0);
  ppppuStack_f8 = (uint ****)0x844723;
  FUN_00401000();
  local_f4 = (uint ****)0x84472b;
  local_d8 = (uint **)FUN_00b31c00();
  local_f4 = (uint ****)0x44bb9000;
  ppppuStack_f8 = (uint ****)0x844742;
  FUN_00401000();
  local_f4 = (uint ****)0x84474a;
  iVar8 = FUN_00b31c00();
  local_100 = (longlong)(iVar9 + (int)local_b4) * (longlong)iVar8;
  local_f4 = (uint ****)0x0;
  ppppuStack_f8 = (uint ****)0x3e8;
  local_b4 = (uint ****)__alldiv();
  local_100 = (longlong)((int)local_e4 + (int)local_d8) * (longlong)iVar8;
  local_f4 = (uint ****)0x0;
  ppppuStack_f8 = (uint ****)0x3e8;
  local_f4 = (uint ****)__alldiv();
  local_d8 = (uint **)&local_f4;
  ppppuStack_f8 = (uint ****)0x844797;
  local_e4 = local_f4;
  puVar10 = (undefined4 *)FUN_0043a5b0();
  local_d8 = (uint **)&local_f4;
  local_f4 = local_b4;
  ppppuStack_f8 = (uint ****)0x8447af;
  puVar11 = (uint *)FUN_0043a5b0();
  local_f4 = (uint ****)puVar10[1];
  ppppuStack_f8 = (uint ****)*puVar10;
  local_100 = CONCAT44(puVar11[1] << 0xf | *puVar11 >> 0x11,*puVar11 << 0xf);
  local_c0 = __alldiv();
  local_d8 = (uint **)&local_f4;
  local_f4 = local_cc;
  ppppuStack_f8 = (uint ****)0x8447ea;
  puVar10 = (undefined4 *)FUN_0043a5b0();
  local_d8 = (uint **)&local_f4;
  local_f4 = local_a8;
  ppppuStack_f8 = (uint ****)0x844805;
  puVar11 = (uint *)FUN_0043a5b0();
  local_f4 = (uint ****)puVar10[1];
  ppppuStack_f8 = (uint ****)*puVar10;
  local_100 = CONCAT44(puVar11[1] << 0xf | *puVar11 >> 0x11,*puVar11 << 0xf);
  local_b0 = __alldiv();
  local_df = local_cd;
  if (local_cd == '\0') {
LAB_00844868:
    local_f4 = (uint ****)0x6;
    ppppuStack_f8 = (uint ****)0x844873;
    iVar9 = FUN_005dc0a0();
    if (iVar9 < 4) {
      return;
    }
    local_d8 = (uint **)&local_f4;
    local_f4 = DAT_01317d08;
    ppppuStack_f8 = (uint ****)0x844897;
    FUN_0043a5b0();
    local_f4 = (uint ****)0x8448a0;
    cVar7 = FUN_0043a5e0();
    if (cVar7 != '\0') {
      return;
    }
  }
  else if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_dc + 0xbe4) * 4) +
                   0x16c) !=
           *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xbe4) * 4) + 0x16c))
  {
    local_df = '\0';
    goto LAB_00844868;
  }
  local_d8 = (uint **)&local_f4;
  if (local_dd == '\0') {
    local_f4 = DAT_01317d08;
    ppppuStack_f8 = (uint ****)0x8448c7;
    local_d8 = (uint **)&local_f4;
    FUN_0043a5b0();
    local_f4 = (uint ****)0x8448d0;
    cVar7 = FUN_0043a5e0();
    if (cVar7 != '\0') {
      return;
    }
  }
  else {
    local_f4 = DAT_01317cc4;
    ppppuStack_f8 = (uint ****)0x8448f2;
    FUN_0043a5b0();
    local_f4 = (uint ****)0x8448fb;
    cVar7 = FUN_0043a5e0();
    if (cVar7 != '\0') {
      return;
    }
  }
  local_94[0] = (uint ****)(local_dc + 0xd58);
  pppuVar12 = *local_94[0];
  uVar4 = local_c0;
  while ((pppuVar13 = pppuVar12, iVar9 = DAT_012587e4,
         local_c0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20), *local_94[0] <= pppuVar13 &&
         (pppuVar13 < local_94[0][1]))) {
    local_d4 = (uint ****)pppuVar13[1];
    local_d8 = *pppuVar13;
    local_a0 = pppuVar13 + 2;
    pppuVar12 = local_a0;
    if (local_d4 != param_3) {
      local_f4 = (uint ****)
                 ((((float)*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_d4 * 4
                                                     ) + 0xbcc) + 0x70) / 1000.0 +
                   (float)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) / 1000.0) *
                   (float)*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_d4 * 4) + 0x14e0
                                  ) * 0.4 + 0.0005) * 1000.0);
      local_c0._0_4_ = (uint ***)0x0;
      ppppuStack_f8 = (uint ****)0x844a04;
      local_c8 = local_d8;
      FUN_00401000();
      local_f4 = (uint ****)0x844a0c;
      pppuVar12 = (uint ***)FUN_00b31c00();
      local_c8 = *pppuVar13;
      local_f4 = (uint ****)&local_c0;
      ppppuStack_f8 = (uint ****)&local_b0;
      local_100 = CONCAT44(*(int *)(*(int *)(iVar9 + 4) + (int)pppuVar13[1] * 4) + 0x7b4,0x844a35);
      local_b0._0_4_ = pppuVar12;
      FUN_005dcbd0();
      local_f4 = (uint ****)0x844a44;
      cVar7 = FUN_0042bb00();
      iVar9 = DAT_01317d84;
      uVar4 = CONCAT44(local_c0._4_4_,(uint ***)local_c0);
      if (cVar7 == '\0') {
        local_b4 = (uint ****)((int)local_b4 + (int)(uint ***)local_b0);
        local_a8 = (uint ****)((int)local_a8 + (int)(uint ***)local_c0);
        pppuVar12 = local_a0;
      }
      else {
        ppppuVar16 = (uint ****)(DAT_01317d84 >> 0x1f);
        ppppuStack_f8 = (uint ****)DAT_01317d84;
        local_100 = (ulonglong)(int)(uint ***)local_b0;
        local_f4 = ppppuVar16;
        local_100 = __allmul();
        local_f4 = (uint ****)0x0;
        ppppuStack_f8 = (uint ****)0x3e8;
        local_b0._0_4_ = (uint ***)__alldiv();
        ppppuStack_f8 = (uint ****)iVar9;
        local_100 = (ulonglong)(int)(uint ***)local_c0;
        local_f4 = ppppuVar16;
        local_100 = __allmul();
        local_f4 = (uint ****)0x0;
        ppppuStack_f8 = (uint ****)0x3e8;
        iVar9 = __alldiv();
        uVar4 = CONCAT44(local_c0._4_4_,(uint ***)local_c0);
        local_b4 = (uint ****)((int)local_b4 + (int)(uint ***)local_b0);
        local_a8 = (uint ****)((int)local_a8 + iVar9);
        pppuVar12 = local_a0;
      }
    }
  }
  pppuVar12 = *(uint ****)(iVar1 + 0xd58);
  while ((pppuVar13 = pppuVar12, iVar9 = DAT_012587e4,
         local_c0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20),
         *(uint ****)(iVar1 + 0xd58) <= pppuVar13 && (pppuVar13 < *(uint ****)(iVar1 + 0xd5c)))) {
    local_d8 = *pppuVar13;
    local_d4 = (uint ****)pppuVar13[1];
    local_a0 = pppuVar13 + 2;
    pppuVar12 = local_a0;
    if (local_d4 != *(uint *****)(local_dc + 0x20)) {
      local_c8 = *pppuVar13;
      local_f4 = (uint ****)
                 ((((float)*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_d4 * 4
                                                     ) + 0xbcc) + 0x70) / 1000.0 +
                   (float)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) / 1000.0) *
                   (float)*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_d4 * 4) + 0x14e0
                                  ) * 0.4 + 0.0005) * 1000.0);
      local_c0._0_4_ = (uint ***)0x0;
      ppppuStack_f8 = (uint ****)0x844bbd;
      FUN_00401000();
      local_f4 = (uint ****)0x844bc5;
      pppuVar12 = (uint ***)FUN_00b31c00();
      local_c8 = *pppuVar13;
      local_f4 = (uint ****)&local_c0;
      ppppuStack_f8 = (uint ****)&local_b0;
      local_100 = CONCAT44(*(int *)(*(int *)(iVar9 + 4) + (int)pppuVar13[1] * 4) + 0x7b4,0x844bee);
      local_b0._0_4_ = pppuVar12;
      FUN_005dcbd0();
      local_f4 = (uint ****)0x844c00;
      cVar7 = FUN_0042bb00();
      iVar9 = DAT_01317d84;
      uVar4 = CONCAT44(local_c0._4_4_,(uint ***)local_c0);
      if (cVar7 == '\0') {
        local_e4 = (uint ****)((int)local_e4 + (int)(uint ***)local_b0);
        local_cc = (uint ****)((int)local_cc + (int)(uint ***)local_c0);
        pppuVar12 = local_a0;
      }
      else {
        ppppuVar16 = (uint ****)(DAT_01317d84 >> 0x1f);
        ppppuStack_f8 = (uint ****)DAT_01317d84;
        local_100 = (ulonglong)(int)(uint ***)local_b0;
        local_f4 = ppppuVar16;
        local_100 = __allmul();
        local_f4 = (uint ****)0x0;
        ppppuStack_f8 = (uint ****)0x3e8;
        local_b0._0_4_ = (uint ***)__alldiv();
        ppppuStack_f8 = (uint ****)iVar9;
        local_100 = (ulonglong)(int)(uint ***)local_c0;
        local_f4 = ppppuVar16;
        local_100 = __allmul();
        local_f4 = (uint ****)0x0;
        ppppuStack_f8 = (uint ****)0x3e8;
        iVar9 = __alldiv();
        uVar4 = CONCAT44(local_c0._4_4_,(uint ***)local_c0);
        local_e4 = (uint ****)((int)local_e4 + (int)(uint ***)local_b0);
        local_cc = (uint ****)((int)local_cc + iVar9);
        pppuVar12 = local_a0;
      }
    }
  }
  pppuVar12 = *(uint ****)(iVar1 + 0xda8);
  uVar5 = local_b0;
  while( true ) {
    pppuVar13 = pppuVar12;
    iVar9 = DAT_012587e4;
    local_b0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_c0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_c0 = uVar4;
    if ((pppuVar13 < *(uint ****)(iVar1 + 0xda8)) || (*(uint ****)(iVar1 + 0xdac) <= pppuVar13))
    break;
    ppuVar18 = pppuVar13[1];
    local_a0 = pppuVar13 + 2;
    pppuVar12 = local_a0;
    if (ppuVar18 != *(uint ***)(local_dc + 0x20)) {
      local_c8 = *pppuVar13;
      local_f4 = (uint ****)
                 ((((float)*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)ppuVar18 * 4
                                                     ) + 0xbcc) + 0x70) / 1000.0 +
                   (float)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) / 1000.0) *
                   (float)*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)ppuVar18 * 4) + 0x14e0
                                  ) * 0.4 + 0.0005) * 1000.0);
      local_b0._0_4_ = (uint ***)0x0;
      ppppuStack_f8 = (uint ****)0x844d77;
      FUN_00401000();
      local_f4 = (uint ****)0x844d7f;
      pppuVar12 = (uint ***)FUN_00b31c00();
      local_c8 = *pppuVar13;
      local_f4 = (uint ****)&local_b0;
      ppppuStack_f8 = (uint ****)&local_c0;
      local_100 = CONCAT44(*(int *)(*(int *)(iVar9 + 4) + (int)pppuVar13[1] * 4) + 0x7b4,0x844da8);
      local_c0._0_4_ = pppuVar12;
      FUN_005dcbd0();
      local_f4 = (uint ****)0x43fa4001;
      ppppuStack_f8 = (uint ****)0x844dbb;
      FUN_00401000();
      local_f4 = (uint ****)0x844dc3;
      iVar9 = FUN_00b31c00();
      local_100 = (longlong)iVar9 * (longlong)(int)(uint ***)local_c0;
      local_f4 = (uint ****)0x0;
      ppppuStack_f8 = (uint ****)0x3e8;
      iVar8 = __alldiv();
      local_100 = (longlong)iVar9 * (longlong)(int)(uint ***)local_b0;
      local_f4 = (uint ****)0x0;
      ppppuStack_f8 = (uint ****)0x3e8;
      iVar9 = __alldiv();
      uVar5 = CONCAT44(local_b0._4_4_,(uint ***)local_b0);
      uVar4 = CONCAT44(local_c0._4_4_,(uint ***)local_c0);
      local_e4 = (uint ****)((int)local_e4 - iVar8);
      local_cc = (uint ****)((int)local_cc - iVar9);
      pppuVar12 = local_a0;
    }
  }
  local_c8 = *(uint ***)(iVar1 + 0x1428);
  if (*(int *)(iVar1 + 0x142c) != 0) {
    if (((local_de == '\0') && (*(char *)(local_dc + 0x31) != '\0')) &&
       (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0x142c) * 4) + 0x31) !=
        '\0')) {
      return;
    }
    if (*(char *)(local_dc + 0x31) == '\0') {
      local_d4 = *(uint *****)(iVar1 + 0x142c);
      local_d8 = *(uint ***)(iVar1 + 0x1428);
      local_f4 = (uint ****)0x844e74;
      local_b0 = uVar5;
      cVar7 = FUN_0042bb00();
      if (cVar7 != '\0') {
        return;
      }
    }
    local_c8 = *(uint ***)(iVar1 + 0x1428);
    iVar9 = *(int *)(*(int *)(iVar9 + 4) + *(int *)(iVar1 + 0x142c) * 4);
    local_f4 = (uint ****)&local_b0;
    ppppuStack_f8 = (uint ****)&local_c0;
    local_c0._0_4_ = (uint ***)0x0;
    local_b0._0_4_ = (uint ***)0x0;
    local_100 = CONCAT44(iVar9 + 0x7b4,0x844eb0);
    FUN_005dcbd0();
    local_f4 = (uint ****)
               (((float)*(int *)(iVar9 + 0x14e0) *
                 ((float)*(int *)(*(int *)(iVar9 + 0xbcc) + 0x70) / 1000.0 +
                 (float)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) / 1000.0) * 0.4 + 0.0005) *
               1000.0);
    ppppuStack_f8 = (uint ****)0x844f50;
    FUN_00401000();
    local_f4 = (uint ****)0x844f58;
    iVar9 = FUN_00b31c00();
    local_d4 = *(uint *****)(iVar1 + 0x142c);
    iVar9 = (int)(uint ***)local_c0 + iVar9;
    local_d8 = *(uint ***)(iVar1 + 0x1428);
    local_f4 = (uint ****)0x844f81;
    cVar7 = FUN_0042bb00();
    pppuVar12 = (uint ***)local_b0;
    if (cVar7 == '\0') {
      local_e4 = (uint ****)((int)local_e4 + iVar9);
      local_cc = (uint ****)((int)local_cc + (int)(uint ***)local_b0);
    }
    local_d8 = *(uint ***)(iVar1 + 0x1428);
    local_d4 = *(uint *****)(iVar1 + 0x142c);
    local_f4 = (uint ****)0x844fb2;
    cVar7 = FUN_0042bb00();
    uVar4 = CONCAT44(local_c0._4_4_,(uint ***)local_c0);
    if (cVar7 != '\0') {
      local_b4 = (uint ****)((int)local_b4 - iVar9);
      local_a8 = (uint ****)((int)local_a8 - (int)pppuVar12);
      uVar4 = CONCAT44(local_c0._4_4_,(uint ***)local_c0);
    }
  }
  pppuVar12 = (uint ***)(*(int *)(local_64 + 0xbe4) - *(int *)(local_64 + 0xbe0) >> 2);
  local_d8 = (uint **)0x0;
  local_b0._0_4_ = pppuVar12;
  if (0 < (int)pppuVar12) {
    do {
      ppuVar18 = local_d8;
      iVar9 = *(int *)(*(int *)(local_64 + 0xbe0) + (int)local_d8 * 4);
      local_a0 = *(uint ****)(iVar9 + 0x1c);
      local_94[0] = *(uint *****)(iVar9 + 0x1c);
      iStack_9c = *(int *)(iVar9 + 0x20);
      iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + iStack_9c * 4);
      if ((iStack_9c != *(int *)(param_1 + 0x38)) &&
         (local_94[0] = *(uint *****)(iVar1 + 0x1428), iStack_9c != *(int *)(iVar1 + 0x142c))) {
        local_f4 = (uint ****)0x845054;
        local_c0 = uVar4;
        cVar7 = FUN_0042bb00();
        pppuVar12 = (uint ***)local_b0;
        uVar4 = local_c0;
        if (cVar7 == '\0') {
          local_f4 = (uint ****)0x84506d;
          cVar7 = FUN_009315a0();
          pppuVar12 = (uint ***)local_b0;
          uVar4 = local_c0;
          if ((cVar7 != '\0') && (*(char *)(iVar9 + 0x67c) == '\0')) {
            local_c0._0_4_ = (uint ***)0x0;
            local_94[0] = (uint ****)0x0;
            local_f4 = (uint ****)local_94;
            ppppuStack_f8 = (uint ****)&local_c0;
            local_100 = CONCAT44(iVar9 + 0x7b4,0x8450a2);
            FUN_005dcbd0();
            local_f4 = (uint ****)
                       (((float)*(int *)(iVar9 + 0x14e0) *
                         ((float)*(int *)(*(int *)(iVar9 + 0xbcc) + 0x70) / 1000.0 +
                         (float)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0xe0) / 1000.0) * 0.4 +
                        0.0005) * 1000.0);
            ppppuStack_f8 = (uint ****)0x845141;
            FUN_00401000();
            local_f4 = (uint ****)0x845149;
            iVar8 = FUN_00b31c00();
            iVar8 = (int)(uint ***)local_c0 + iVar8;
            local_f4 = (uint ****)0x84515d;
            cVar7 = FUN_0042bb00();
            iVar9 = DAT_01317d84;
            ppppuVar16 = local_94[0];
            if (cVar7 != '\0') {
              local_f4 = (uint ****)(DAT_01317d84 >> 0x1f);
              ppppuStack_f8 = (uint ****)DAT_01317d84;
              local_100 = (ulonglong)iVar8;
              local_c4 = local_f4;
              local_100 = __allmul();
              local_f4 = (uint ****)0x0;
              ppppuStack_f8 = (uint ****)0x3e8;
              iVar8 = __alldiv();
              local_f4 = local_c4;
              ppppuStack_f8 = (uint ****)iVar9;
              local_100 = (ulonglong)(int)local_94[0];
              local_100 = __allmul();
              local_f4 = (uint ****)0x0;
              ppppuStack_f8 = (uint ****)0x3e8;
              ppppuVar16 = (uint ****)__alldiv();
            }
            uVar4 = CONCAT44(local_c0._4_4_,(uint ***)local_c0);
            local_e4 = (uint ****)((int)local_e4 + iVar8);
            local_cc = (uint ****)((int)local_cc + (int)ppppuVar16);
            pppuVar12 = (uint ***)local_b0;
            ppuVar18 = local_d8;
          }
        }
      }
      local_d8 = (uint **)((int)ppuVar18 + 1);
    } while ((int)local_d8 < (int)pppuVar12);
  }
  if ((int)local_e4 < 1000) {
    local_e4 = (uint ****)0x3e8;
  }
  ppppuVar16 = local_e4;
  if ((int)local_cc < 1000) {
    local_cc = (uint ****)0x3e8;
  }
  local_c0 = uVar4;
  if (local_e4 == (uint ****)0x0) {
    local_d8 = (uint **)0xffffffff;
  }
  else if ((int)local_b4 + 0x189373U < 0x39580e) {
    local_d8 = (uint **)(((int)local_b4 * 1000) / (int)local_e4);
  }
  else {
    local_f4 = (uint ****)0x0;
    ppppuStack_f8 = (uint ****)0x3e8;
    local_c4 = (uint ****)((int)local_e4 >> 0x1f);
    local_100 = (ulonglong)(int)local_b4;
    local_100 = __allmul();
    local_f4 = local_c4;
    ppppuStack_f8 = ppppuVar16;
    local_d8 = (uint **)__alldiv();
    local_74 = (int)local_d8 >> 0x1f;
  }
  ppppuVar16 = local_cc;
  if (local_cc == (uint ****)0x0) {
    iVar9 = -1;
  }
  else if ((int)local_a8 + 0x189373U < 0x39580e) {
    iVar9 = ((int)local_a8 * 1000) / (int)local_cc;
  }
  else {
    local_f4 = (uint ****)0x0;
    ppppuStack_f8 = (uint ****)0x3e8;
    local_c4 = (uint ****)((int)local_cc >> 0x1f);
    local_100 = (ulonglong)(int)local_a8;
    local_100 = __allmul();
    local_f4 = local_c4;
    ppppuStack_f8 = ppppuVar16;
    iVar9 = __alldiv();
    local_74 = iVar9 >> 0x1f;
  }
  fVar19 = (float)(int)local_d8 / 1000.0;
  if (local_dd != '\0') {
    fVar19 = fVar19 + 0.5;
  }
  if (fVar19 < 1.1) {
    return;
  }
  fVar3 = (float)iVar9 / 1000.0;
  if (local_dd != '\0') {
    fVar3 = fVar3 + 0.5;
  }
  if ((local_df == '\0') && (fVar3 < 0.85)) {
    return;
  }
  local_d8 = (uint **)(fVar19 * 0.5);
  if (DAT_00f092fc <= (float)local_d8) {
    local_d8 = (uint **)DAT_00f092fc;
  }
  local_f4 = (uint ****)(iVar1 + 0x12e8);
  ppppuStack_f8 = (uint ****)0x845371;
  FUN_00969f90();
  local_f4 = (uint ****)0x0;
  ppppuStack_f8 = (uint ****)0x28000;
  local_100 = CONCAT44(iStack_9c,local_a0);
  lVar29 = __allmul();
  local_d8 = (uint **)(((float)local_d8 - 1.0) * 200.0 + 0.0 +
                      (float)((float10)(lVar29 >> 0xf) * (float10)3.0517578125e-05));
  local_88 = (float)local_d8 - (float)((int)((int)local_88 + ((int)local_88 >> 0x1f & 3U)) >> 2);
  local_a4 = local_88 + (float)((int)((int)local_a4 + ((int)local_a4 >> 0x1f & 3U)) >> 2) +
             (float)((int)(local_68 + (local_68 >> 0x1f & 3U)) >> 2);
  local_7c = (undefined1 *)((int)((int)local_7c + ((int)local_7c >> 0x1f & 3U)) >> 2);
  if ((local_dd == '\0') || (*(char *)(local_dc + 0x31) == '\0')) {
    dVar20 = (double)(float)local_8c * 2.0;
  }
  else {
    dVar20 = (double)(float)local_8c * 20.0;
  }
  iVar9 = *(int *)(*(int *)(local_dc + 0xe64) + 0x50);
  local_a0 = *(uint ****)(iVar9 + 0x1c);
  iStack_9c = *(undefined4 *)(iVar9 + 0x20);
  local_f4 = &local_a0;
  dVar20 = dVar20 + (double)(local_a4 + (float)(int)local_7c);
  auVar21._0_4_ = (uint ***)(float)dVar20;
  auVar21._4_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar21._8_8_ = 0;
  ppppuStack_f8 = (uint ****)0x8454b5;
  local_e4 = (uint ****)auVar21._0_4_;
  local_df = FUN_00848540();
  puVar10 = local_80;
  iVar9 = DAT_012587e4;
  if (0.0 < local_84) {
    auVar22._8_8_ = auVar21._8_8_;
    if (((local_df != '\0') &&
        (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_80[1] * 4) + 0x31) == '\0')) ||
       (dVar20 = (double)local_84, local_de != '\0')) {
      dVar20 = (double)local_84 * 0.5;
    }
    auVar22._0_8_ = (double)auVar21._0_4_ - dVar20;
    auVar21._4_12_ = auVar22._4_12_;
    auVar21._0_4_ = (uint ***)(float)auVar22._0_8_;
    local_e4 = (uint ****)auVar21._0_4_;
  }
  dVar20 = 100.0;
  if (local_dd == '\0') {
    if (local_de != '\0') goto LAB_008455f9;
    if (100.0 < local_84) {
      return;
    }
    if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_80[1] * 4) + 0x31) != '\0') ||
       (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)param_3 * 4) + 0x31) != '\0')) {
      local_78 = *local_80;
      local_f4 = (uint ****)0x845583;
      iVar8 = FUN_009311f0();
      if (iVar8 == 3) {
        auVar23._8_8_ = auVar21._8_8_;
        auVar23._0_8_ = (double)auVar21._0_4_ - dVar20;
        auVar21._4_12_ = auVar23._4_12_;
        auVar21._0_4_ = (uint ***)(float)auVar23._0_8_;
      }
      else if (iVar8 == 4) {
        return;
      }
    }
  }
  else if (local_de != '\0') goto LAB_008455f9;
  fVar19 = DAT_00f17898;
  if ((*(char *)(*(int *)(*(int *)(iVar9 + 4) + puVar10[1] * 4) + 0x12d0) != '\0') &&
     (*(char *)(iVar1 + 0x12d0) == '\0')) {
    fVar19 = 0.7;
  }
  auVar24._8_8_ = auVar21._8_8_;
  auVar24._0_8_ = (double)auVar21._0_4_ * (double)fVar19;
  auVar21._4_12_ = auVar24._4_12_;
  auVar21._0_4_ = (uint ***)(float)auVar24._0_8_;
  local_e4 = (uint ****)auVar21._0_4_;
LAB_008455f9:
  if (local_df != '\0') {
    auVar25._8_8_ = auVar21._8_8_;
    auVar25._0_8_ = (double)auVar21._0_4_ * 3.0;
    auVar21._4_12_ = auVar25._4_12_;
    auVar21._0_4_ = (uint ***)(float)auVar25._0_8_;
    local_e4 = (uint ****)auVar21._0_4_;
  }
  iVar9 = *(int *)(iVar9 + 4);
  local_78 = *puVar10;
  iVar8 = *(int *)(iVar1 + 0x1404);
  uVar14 = *(int *)(*(int *)(iVar9 + puVar10[1] * 4) + 0x1404) - iVar8;
  uVar17 = (int)uVar14 >> 0x1f;
  if ((int)((uVar14 ^ uVar17) - uVar17) < 8) {
    uVar14 = *(int *)(*(int *)(iVar9 + puVar10[1] * 4) + 0x1404) - iVar8;
    uVar17 = (int)uVar14 >> 0x1f;
    auVar26._8_8_ = auVar21._8_8_;
    auVar26._0_8_ = (double)auVar21._0_4_ * 1.100000023841858;
    auVar21._4_12_ = auVar26._4_12_;
    auVar21._0_4_ = (uint ***)(float)auVar26._0_8_;
    local_e4 = (uint ****)auVar21._0_4_;
    if ((int)((uVar14 ^ uVar17) - uVar17) < 4) {
      auVar27._0_8_ = (double)(float)auVar21._0_4_ * 1.2000000476837158;
      auVar27._8_8_ = auVar26._8_8_;
      auVar21._4_12_ = auVar27._4_12_;
      auVar21._0_4_ = (uint ***)(float)auVar27._0_8_;
      local_e4 = (uint ****)auVar21._0_4_;
    }
    local_78 = *puVar10;
    if (iVar8 < *(int *)(*(int *)(iVar9 + puVar10[1] * 4) + 0x1404)) {
      auVar28._8_8_ = auVar21._8_8_;
      auVar28._0_8_ = (double)auVar21._0_4_ * 1.2999999523162842;
      auVar21._4_12_ = auVar28._4_12_;
      auVar21._0_4_ = (uint ***)(float)auVar28._0_8_;
      local_e4 = (uint ****)auVar21._0_4_;
    }
  }
  ppppuVar16 = auVar21._0_4_;
  if (((*(byte *)(local_dc + 0x4b4) & 4) != 0) &&
     (0x19 < (*(int *)(iVar1 + 0xea0) + *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c)) / 1000)) {
    puVar2 = *(undefined4 **)(*(int *)(*(int *)(local_dc + 0xbe8) + (int)param_3 * 4) + 0x50);
    while (puVar2 != (undefined4 *)0x0) {
      local_f4 = (uint ****)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      ppppuStack_f8 = (uint ****)0x84570e;
      FUN_0092d400();
      local_f4 = (uint ****)0x845718;
      cVar7 = FUN_0090a800();
      ppppuVar16 = local_e4;
      if (cVar7 != '\0') {
        local_e4 = (uint ****)((float)local_e4 * 1.5);
        ppppuVar16 = local_e4;
      }
    }
  }
  iVar9 = local_dc;
  if (*(char *)(iVar1 + 0x31) != '\0') {
    if (*(int *)(local_dc + 0x1400) + 0x18 < *(int *)(DAT_012588e8 + 0xb0c)) {
      local_e4 = (uint ****)((float)ppppuVar16 * 3.0);
    }
    else if ((*(char *)(local_dc + 0x31) != '\0') && (local_de == '\0')) {
      return;
    }
  }
  local_f4 = (uint ****)0x845799;
  FUN_0094bd40();
  local_48 = *puVar10;
  local_44 = puVar10[1];
  local_40 = param_2;
  local_3c = param_3;
  if (local_df == '\0') {
    local_84 = (float)(*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24) - 10000);
  }
  else {
    local_84 = *(float *)(*(int *)(DAT_012586dc + 0x40) + 0x24);
  }
  local_f4 = (uint ****)0x0;
  ppppuStack_f8 = (uint ****)0x1;
  local_7c = (undefined1 *)&local_100;
  local_100 = (ulonglong)(uint)local_84;
  piVar15 = (int *)FUN_00845ad0(&local_84,iVar9,local_60,5000 < *(int *)(iVar9 + 0x1430));
  fVar19 = (float)*piVar15 / 1000.0;
  if (fVar19 <= 10.0) {
    return;
  }
  if (100.0 < fVar19) {
    fVar19 = DAT_00f14418;
  }
  ppuVar18 = local_70[0x14];
  local_e4 = (uint ****)((fVar19 / 100.0 + 1.0) * (float)local_e4);
  do {
    if (ppuVar18 == (uint **)0x0) {
      local_f4 = (uint ****)0x8458ce;
      cVar7 = FUN_0092eff0();
      if (cVar7 == '\0') {
        local_f4 = local_60;
        ppppuStack_f8 = (uint ****)0x8458e7;
        piVar15 = (int *)FUN_009500e0();
        fVar19 = ((float)*piVar15 / 1000.0 + (float)*(int *)(iVar9 + 0x1430) / 1000.0) /
                 ((float)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24) / 1000.0 - 5.0);
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        local_e4 = (uint ****)((1.0 - fVar19) * (float)local_e4);
      }
      break;
    }
    puVar11 = *ppuVar18;
    ppuVar18 = (uint **)ppuVar18[2];
  } while (puVar11[9] != *(uint *)(local_54 + 8));
  if (local_cd == '\0') {
    local_8c = (uint ***)(DAT_012588e8 + 0xacc);
    if (local_38 == 0) {
      local_94[0] = (uint ****)(*local_8c)[*(int *)(iVar1 + 0xbe4)];
    }
    else {
      local_94[0] = (uint ****)
                    (*local_8c)[*(int *)(*(int *)((int)(*local_8c)[local_38] + 0x188) + 0x268)];
    }
    if (local_94[0] != (uint ****)0x0) {
      piVar15 = *(int **)(iVar9 + 0x9d8);
      local_c0._0_4_ = (uint ***)0x0;
      pppuVar12 = (uint ***)0x0;
      uVar14 = 0;
      while ((*(int **)(local_dc + 0x9d8) <= piVar15 && (piVar15 < *(int **)(local_dc + 0x9dc)))) {
        uVar17 = (uint)(*local_8c)[*piVar15];
        piVar15 = piVar15 + 1;
        if (0 < *(int *)(*(int *)(*(int *)(uVar17 + 0x118) + DAT_01258720 * 4) + 0x20)) {
          local_f4 = local_94[0];
          local_100 = CONCAT44(&local_70,local_dc);
          ppppuStack_f8 = (uint ****)uVar17;
          FUN_004fb7d0();
          if ((uVar14 == 0) ||
             (pppuVar12 = (uint ***)local_c0, (int)local_70 < (int)(uint ***)local_c0)) {
            pppuVar12 = local_70;
            uVar14 = uVar17;
            local_c0._0_4_ = local_70;
          }
        }
      }
      if ((uVar14 != 0) && (0 < (int)pppuVar12)) {
        return;
      }
    }
  }
  return;
}

