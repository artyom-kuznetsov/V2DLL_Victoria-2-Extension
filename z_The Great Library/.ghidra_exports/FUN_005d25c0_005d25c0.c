// FUN_005d25c0 @ 005d25c0  (requested 005D25C0, first bytes: 55 8B EC 83 E4 F8 64 A1)


undefined4 FUN_005d25c0(int *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  void **ppvVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iStack_190;
  code *pcStack_18c;
  undefined1 auStack_188 [108];
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int local_f8;
  int local_f4;
  undefined1 *local_f0;
  undefined8 local_ec;
  float fStack_e4;
  undefined1 *local_e0;
  int local_dc;
  float fStack_d8;
  undefined1 auStack_c0 [28];
  undefined1 auStack_a4 [28];
  undefined1 auStack_88 [56];
  undefined1 auStack_50 [60];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb934c;
  local_14 = ExceptionList;
  if (param_1[0x10] < 1) {
    return 0;
  }
  local_ec = CONCAT44(local_ec._4_4_,*(int *)(DAT_012588e8 + 0xb0c));
  if (*(int *)(DAT_012588e8 + 0xb0c) < param_1[0x2a]) {
    return 0;
  }
  iVar6 = param_1[0x3b];
  ppvVar3 = &local_14;
  if (iVar6 < 1) goto LAB_005d388b;
  piVar12 = (int *)param_1[0x39];
  if (*piVar12 == *(int *)(param_1[0x37] + 0x58)) {
    if (piVar12 == (int *)0x0) {
      param_1[0x3e] = 0;
      return 0;
    }
    if ((char)param_1[0x3c] != '\0') {
      *(undefined1 *)(piVar12 + 3) = 1;
      param_1[0x3e] = 0;
      return 0;
    }
    iVar6 = piVar12[2];
    ExceptionList = &local_14;
    param_1[0x39] = iVar6;
    if (iVar6 == 0) {
      param_1[0x3a] = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 4) = 0;
    }
    uStack_110 = CONCAT44(piVar12,&UNK_005d266b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppvVar3 = &local_14;
  if (iVar6 < 1) goto LAB_005d388b;
  if (iVar6 < 1) {
    local_f8 = 0;
    local_f4 = 0;
  }
  else {
    local_f8 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)param_1[0x39] * 4);
    local_f4 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)param_1[0x3a] * 4);
  }
  uStack_110 = CONCAT44(&local_e0,param_1);
  uStack_118 = CONCAT44(0x5d26d8,(undefined4)uStack_118);
  ExceptionList = &local_14;
  FUN_005d1570();
  uStack_110 = CONCAT44(0x5d26e3,(undefined4)uStack_110);
  FUN_005d1750();
  param_1[0x3e] = (int)(local_e0 + param_1[0x3e]);
  if (param_1[0x3e] < 0) {
    param_1[0x3e] = 0;
  }
  if (param_1[0x1d] != 0) {
    if (param_1[0x3e] <= (int)local_f0) {
      ExceptionList = local_14;
      return 0;
    }
LAB_005d270c:
    param_1[0x3e] = (int)local_f0;
    ExceptionList = local_14;
    return 0;
  }
  param_1[0x22] = 0;
  iVar6 = (int)local_f0 >> 0x1f;
  if (param_1[0x4e] < 1) {
    if ((int)local_f0 < param_1[0x3e]) {
      param_1[0x40] = 100;
    }
    else {
      if (local_f0 == (undefined1 *)0x0) {
        iVar9 = -1;
      }
      else if (local_e0 + 0x189373 < (undefined1 *)0x39580e) {
        iVar9 = ((int)local_e0 * 1000) / (int)local_f0;
      }
      else {
        uStack_110 = 1000;
        uStack_118 = (longlong)(int)local_e0;
        local_e0 = local_f0;
        uStack_11c = 0x5d287f;
        local_dc = iVar6;
        uStack_118 = __allmul();
        uStack_110 = CONCAT44(local_dc,local_e0);
        uStack_11c = 0x5d2890;
        iVar9 = __alldiv();
        local_dc = iVar9 >> 0x1f;
      }
      uStack_110 = 100000;
      uStack_118 = (longlong)iVar9;
      uStack_11c = 0x5d28a4;
      uStack_118 = __allmul();
      uStack_110 = 1000;
      uStack_11c = 0x5d28b2;
      iVar9 = __alldiv();
      param_1[0x40] = param_1[0x40] + iVar9 / 1000;
    }
  }
  else if ((int)local_f0 < param_1[0x3e]) {
    uStack_110 = CONCAT44(0x5d2758,(undefined4)uStack_110);
    uVar5 = (**(code **)(**(int **)param_1[0x4c] + 0x68))();
    local_e0 = (undefined1 *)(100 - ((uVar5 & 0xffff) + 100) % 100);
    uStack_110 = CONCAT44(local_e0,0x5d277c);
    FUN_00819210();
    param_1[0x40] = (int)(local_e0 + param_1[0x40]);
  }
  else {
    if (local_f0 == (undefined1 *)0x0) {
      iVar9 = -1;
    }
    else if (local_e0 + 0x189373 < (undefined1 *)0x39580e) {
      iVar9 = ((int)local_e0 * 1000) / (int)local_f0;
    }
    else {
      uStack_110 = 1000;
      uStack_118 = (longlong)(int)local_e0;
      uStack_11c = 0x5d27c9;
      local_dc = iVar6;
      uStack_118 = __allmul();
      uStack_110 = CONCAT44(local_dc,local_f0);
      uStack_11c = 0x5d27d6;
      iVar9 = __alldiv();
      local_dc = iVar9 >> 0x1f;
    }
    uStack_110 = 100000;
    uStack_118 = (longlong)iVar9;
    uStack_11c = 0x5d27ea;
    uStack_118 = __allmul();
    uStack_110 = 1000;
    uStack_11c = 0x5d27f8;
    iVar9 = __alldiv();
    uStack_110 = CONCAT44(iVar9 / 1000,0x5d2819);
    FUN_00819210();
    param_1[0x40] = param_1[0x40] + iVar9 / 1000;
  }
  if (local_f0 == (undefined1 *)0x0) {
    iVar6 = -1;
  }
  else {
    iVar9 = param_1[0x3e];
    if ((iVar9 < -0x189373) || (0x20c49a < iVar9)) {
      uStack_110 = 1000;
      uStack_118 = (longlong)iVar9;
      uStack_11c = 0x5d290f;
      local_dc = iVar6;
      uStack_118 = __allmul();
      uStack_110 = CONCAT44(local_dc,local_f0);
      uStack_11c = 0x5d291c;
      iVar6 = __alldiv();
      local_dc = iVar6 >> 0x1f;
    }
    else {
      iVar6 = (iVar9 * 1000) / (int)local_f0;
    }
  }
  uStack_110 = 100000;
  uStack_118 = (longlong)iVar6;
  uStack_11c = 0x5d2930;
  uStack_118 = __allmul();
  uStack_110 = 1000;
  uStack_11c = 0x5d293e;
  iVar6 = __alldiv();
  param_1[0x3f] = iVar6 / 1000;
  if (100 < iVar6 / 1000) {
    param_1[0x3f] = 100;
  }
  uStack_110 = CONCAT44(local_f8,0x5d2972);
  uVar13 = FUN_005cbde0();
  if ((char)uVar13 != '\0') {
    ExceptionList = local_14;
    return 0;
  }
  local_e0 = *(undefined1 **)((int)((ulonglong)uVar13 >> 0x20) + 0x58);
  uStack_110 = CONCAT44(local_e0,0x5d2992);
  cVar4 = FUN_004c3e90();
  if (cVar4 == '\0') {
LAB_005d2996:
    uStack_110 = CONCAT44(0x5d299d,(undefined4)uStack_110);
    FUN_005d1890();
    ExceptionList = local_14;
    return 0;
  }
  uStack_110 = CONCAT44(local_e0,0x5d29ae);
  FUN_004c3f30();
  uStack_110 = CONCAT44(0x5d29c1,(undefined4)uStack_110);
  cVar4 = FUN_005b9690();
  if (cVar4 != '\0') {
    uStack_110 = CONCAT44(0x5d29cc,(undefined4)uStack_110);
    FUN_005d1890();
    ppvVar3 = ExceptionList;
    goto LAB_005d388b;
  }
  ppvVar3 = ExceptionList;
  if (param_1[0x3e] < (int)local_f0) goto LAB_005d388b;
  if ((int)(undefined1 *)local_ec < param_1[0x2b]) goto LAB_005d270c;
  iVar6 = param_1[0x39];
  if (iVar6 != 0) {
    if ((char)param_1[0x3c] == '\0') {
      iVar9 = *(int *)(iVar6 + 8);
      param_1[0x39] = iVar9;
      if (iVar9 == 0) {
        param_1[0x3a] = 0;
      }
      else {
        *(undefined4 *)(iVar9 + 4) = 0;
      }
      uStack_110 = CONCAT44(iVar6,&UNK_005d2a2d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined1 *)(iVar6 + 0xc) = 1;
  }
  param_1[0x3e] = param_1[0x3e] - (int)local_f0;
  param_1[0x40] = 0;
  if (param_1[0x4e] != 0) {
    uStack_110 = CONCAT44(param_1 + 0x4c,param_1);
    param_1[0x3f] = 0;
    uStack_118 = CONCAT44(0x5d2a61,(undefined4)uStack_118);
    FUN_005d4540();
    param_1[0x50] = 0;
  }
  if (param_1[0x3b] < 1) {
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  local_f0 = (undefined1 *)0x0;
  uStack_110 = CONCAT44(0x5d2a83,(undefined4)uStack_110);
  cVar4 = (**(code **)(*param_1 + 0x38))();
  if (cVar4 != '\0') {
    uStack_110 = CONCAT44(0x5d2a90,(undefined4)uStack_110);
    iVar6 = (**(code **)(*param_1 + 0x2c))();
    if (*(int *)(iVar6 + 0x1b4) != 0) {
      uStack_110 = CONCAT44(local_f8,0x5d2aa9);
      cVar4 = (**(code **)(*param_1 + 0x84))();
      if (cVar4 != '\0') {
        pcVar1 = *(code **)(*param_1 + 0x2c);
        param_1[0x38] = 0;
        uStack_110 = CONCAT44(0x5d2abc,(undefined4)uStack_110);
        iVar6 = (*pcVar1)();
        local_f0 = *(undefined1 **)(iVar6 + 0x1b4);
        uStack_110 = CONCAT44(0x5d2acf,(undefined4)uStack_110);
        iVar6 = (**(code **)(*param_1 + 0x2c))();
        uStack_110 = CONCAT44(*(undefined4 *)(iVar6 + 0x1b4),0x5d2add);
        FUN_005d78d0();
      }
    }
  }
  uStack_110 = CONCAT44(0x5d2aee,(undefined4)uStack_110);
  cVar4 = (**(code **)(*param_1 + 0x38))();
  if (((cVar4 != '\0') && (*(char *)(*(int *)(local_f8 + 0x5c) + 0x2a) == '\0')) &&
     (*(int *)(local_f8 + 0x58) == *(int *)(local_f4 + 0x58))) {
    puVar7 = *(undefined4 **)(local_f8 + 0xec);
    if (puVar7 != (undefined4 *)0x0) {
      do {
        piVar12 = (int *)*puVar7;
        puVar7 = (undefined4 *)puVar7[2];
        uStack_110 = CONCAT44(0x5d2b39,(undefined4)uStack_110);
        cVar4 = (**(code **)(*piVar12 + 0x3c))();
        if (cVar4 != '\0') {
          uStack_110 = CONCAT44(0x5d2b46,(undefined4)uStack_110);
          (**(code **)(*piVar12 + 0x30))();
          uStack_110 = CONCAT44(0x5d2b4f,(undefined4)uStack_110);
          cVar4 = FUN_005d77a0();
          if (cVar4 != '\0') {
            uStack_110 = CONCAT44(0x5d2b70,(undefined4)uStack_110);
            iVar6 = (**(code **)(*piVar12 + 0x30))();
            if (iVar6 == 0) break;
            uStack_110 = CONCAT44(0x5d2b81,(undefined4)uStack_110);
            cVar4 = FUN_005d77a0();
            if (cVar4 == '\0') break;
            uStack_110 = CONCAT44(local_f8,iVar6);
            uStack_118 = CONCAT44(param_1,0x5d2b95);
            FUN_005d3980();
            goto LAB_005d2c6f;
          }
        }
        if (puVar7 == (undefined4 *)0x0) {
          uStack_110 = CONCAT44(0x5d2b62,(undefined4)uStack_110);
          FUN_005d1890();
          ExceptionList = local_14;
          return 0;
        }
      } while( true );
    }
    goto LAB_005d2996;
  }
  uStack_110 = CONCAT44(local_f8,0x5d2ba7);
  cVar4 = (**(code **)(*param_1 + 0x84))();
  if (cVar4 == '\0') {
    uStack_110 = CONCAT44(0x5d2bb2,(undefined4)uStack_110);
    FUN_005d1890();
    if (local_f0 != (undefined1 *)0x0) {
      uStack_110 = CONCAT44(0x5d2bc7,(undefined4)uStack_110);
      FUN_005d7810();
    }
  }
  else {
    param_1[0x38] = param_1[0x37];
    uStack_110 = CONCAT44(local_f8,0x5d2be0);
    FUN_005cb2c0();
    uStack_110 = CONCAT44(0x5d2be9,(undefined4)uStack_110);
    cVar4 = (**(code **)(*param_1 + 0x3c))();
    if ((cVar4 != '\0') && (*(char *)(*(int *)(param_1[0x37] + 0x5c) + 0x2a) != '\0')) {
      uStack_110 = CONCAT44(0x5d2c05,(undefined4)uStack_110);
      iVar6 = (**(code **)(*param_1 + 0x30))();
      *(undefined4 *)(iVar6 + 0x1b8) = 0;
    }
    uStack_110 = CONCAT44(DAT_012588e8 + 0xab4,0x5d2c25);
    FUN_005b57a0();
    uStack_110 = CONCAT44(0x5d2c2e,(undefined4)uStack_110);
    cVar4 = (**(code **)(*param_1 + 0x38))();
    if (cVar4 == '\0') {
      uStack_110 = CONCAT44(0x5d2c4f,(undefined4)uStack_110);
      cVar4 = (**(code **)(*param_1 + 0x40))();
      if (cVar4 == '\0') {
        uStack_110 = CONCAT44(0x5d2c5c,(undefined4)uStack_110);
        uVar8 = (**(code **)(*param_1 + 0x30))();
        uStack_110 = CONCAT44(uVar8,&LAB_009e6d30);
        uStack_118 = CONCAT44(0x5d2c6c,(undefined4)uStack_118);
        FUN_00859ef0();
      }
    }
    else {
      uStack_110 = CONCAT44(0x5d2c3b,(undefined4)uStack_110);
      uVar8 = (**(code **)(*param_1 + 0x2c))();
      uStack_110 = CONCAT44(uVar8,&LAB_0057e9e0);
      uStack_118 = CONCAT44(0x5d2c48,(undefined4)uStack_118);
      FUN_00859ef0();
    }
  }
LAB_005d2c6f:
  if (param_1[0x1d] == 0) {
    if (param_1[0x3b] < 1) {
      if (param_1[0x31] == *(int *)(DAT_012588e8 + 0xb60)) {
        uStack_110 = CONCAT44(0x5d2ca7,(undefined4)uStack_110);
        cVar4 = (**(code **)(*param_1 + 0x38))();
        if (cVar4 == '\0') {
          uStack_110 = CONCAT44(0x5d2cb4,(undefined4)uStack_110);
          cVar4 = (**(code **)(*param_1 + 0x3c))();
          if (cVar4 == '\0') goto LAB_005d35c2;
        }
        uStack_110 = CONCAT44(*(undefined4 *)
                               (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                              0x5d2ce3);
        local_ec._0_4_ = (undefined1 *)*(undefined4 *)(DAT_012588e8 + 0xb5c);
        puVar7 = (undefined4 *)FUN_005061e0();
        uStack_110 = CONCAT44(0x5d2cf3,(undefined4)uStack_110);
        FUN_009885d0();
        uStack_c = 0x19;
        uStack_110 = CONCAT44(0x5d2d0c,(undefined4)uStack_110);
        FUN_009885d0();
        uStack_c._0_1_ = 0x1a;
        uStack_110 = CONCAT44(0x5d2d19,(undefined4)uStack_110);
        FUN_006a4f40();
        uStack_110 = CONCAT44(auStack_c0,auStack_a4);
        uStack_118 = CONCAT44(0x5d2d28,(undefined4)uStack_118);
        uVar8 = FUN_00424ce0();
        uStack_110 = CONCAT44(uVar8,&local_e0);
        uStack_c._0_1_ = 0x1b;
        uStack_118 = CONCAT44(auStack_88,0x5d2d41);
        iVar9 = FUN_00424aa0();
        uStack_c._0_1_ = 0x1c;
        iVar6 = puVar7[1];
        uStack_110 = 0x44005d2d5b;
        puVar10 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0x1d;
        uVar2 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0x1d;
        local_ec._0_4_ = puVar10;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar2;
        }
        else {
          uStack_110 = 0xffffffff00000000;
          *(undefined4 *)(puVar10 + 0x14) = 0xf;
          *(undefined4 *)(puVar10 + 0x10) = 0;
          *puVar10 = 0;
          uStack_118 = CONCAT44(iVar9,0x5d2d91);
          FUN_00408ed0();
          uStack_c._0_1_ = 0x1e;
          uStack_110 = 0xffffffff00000000;
          *(undefined4 *)(puVar10 + 0x30) = 0xf;
          *(undefined4 *)(puVar10 + 0x2c) = 0;
          puVar10[0x1c] = 0;
          uStack_118 = CONCAT44(iVar9 + 0x1c,0x5d2dbe);
          FUN_00408ed0();
          *(int *)(puVar10 + 0x38) = iVar6;
          *(undefined4 *)(puVar10 + 0x3c) = 0;
          puVar10[0x40] = 0;
        }
        iVar9 = puVar7[2];
        puVar7[1] = puVar10;
        puVar7[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *puVar7 = puVar10;
        }
        else {
          *(undefined1 **)(iVar6 + 0x3c) = puVar10;
        }
        uStack_110 = CONCAT44(0x5d2dfb,(undefined4)uStack_110);
        FUN_00a39a80();
        uStack_110 = CONCAT44(0x5d2e04,(undefined4)uStack_110);
        FUN_00408ad0();
        uStack_110 = CONCAT44(0x5d2e0d,(undefined4)uStack_110);
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        uStack_110 = CONCAT44(0x5d2e21,(undefined4)uStack_110);
        FUN_00408ad0();
        uStack_110 = CONCAT44(0x5d2e2a,(undefined4)uStack_110);
        cVar4 = (**(code **)(*param_1 + 0x38))();
        if (cVar4 == '\0') {
          uStack_110 = CONCAT44(0x5d2fba,(undefined4)uStack_110);
          cVar4 = (**(code **)(*param_1 + 0x3c))();
          if (cVar4 == '\0') {
            uStack_110 = CONCAT44(0x5d3131,(undefined4)uStack_110);
            FUN_009885d0();
            uStack_c = 0x2d;
            uStack_110 = CONCAT44(0x5d314d,(undefined4)uStack_110);
            FUN_009885d0();
            uStack_110 = CONCAT44(auStack_c0,&local_e0);
            uStack_c._0_1_ = 0x2e;
            uStack_118 = CONCAT44(0x5d3164,(undefined4)uStack_118);
            local_ec._0_4_ = (undefined1 *)FUN_009a8ee0();
            uStack_c._0_1_ = 0x2f;
            uStack_110 = CONCAT44(0x5d3175,(undefined4)uStack_110);
            iVar6 = FUN_00475500();
            uStack_118 = *(undefined8 *)(iVar6 + 0x6c);
            uStack_110 = *(undefined8 *)(iVar6 + 0x74);
            uStack_11c = 0x5d319a;
            uVar8 = FUN_009a9880();
            uStack_110 = CONCAT44(uVar8,auStack_88);
            uStack_c._0_1_ = 0x30;
            uStack_118 = CONCAT44(auStack_50,0x5d31b8);
            iVar9 = FUN_00424aa0();
            uStack_c._0_1_ = 0x31;
            iVar6 = puVar7[1];
            uStack_110 = 0x44005d31d2;
            puVar10 = (undefined1 *)FUN_00aae9af();
            local_ec = CONCAT44(local_ec._4_4_,puVar10);
            uStack_c._0_1_ = 0x32;
            uVar2 = (undefined1)uStack_c;
            uStack_c._0_1_ = 0x32;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = (undefined1 *)0x0;
              uStack_c._0_1_ = uVar2;
            }
            else {
              uStack_110 = 0xffffffff00000000;
              *(undefined4 *)(puVar10 + 0x14) = 0xf;
              *(undefined4 *)(puVar10 + 0x10) = 0;
              *puVar10 = 0;
              uStack_118 = CONCAT44(iVar9,0x5d3208);
              FUN_00408ed0();
              uStack_c._0_1_ = 0x33;
              uStack_110 = 0xffffffff00000000;
              *(undefined4 *)(puVar10 + 0x30) = 0xf;
              *(undefined4 *)(puVar10 + 0x2c) = 0;
              puVar10[0x1c] = 0;
              uStack_118 = CONCAT44(iVar9 + 0x1c,0x5d3235);
              FUN_00408ed0();
              *(int *)(puVar10 + 0x38) = iVar6;
              *(undefined4 *)(puVar10 + 0x3c) = 0;
              puVar10[0x40] = 0;
            }
            iVar9 = puVar7[2];
            puVar7[1] = puVar10;
            puVar7[2] = iVar9 + 1;
            if (iVar9 == 0) {
              *puVar7 = puVar10;
            }
            else {
              *(undefined1 **)(iVar6 + 0x3c) = puVar10;
            }
            uStack_110 = CONCAT44(0x5d3272,(undefined4)uStack_110);
            FUN_00a39a80();
            uStack_110 = CONCAT44(0x5d327b,(undefined4)uStack_110);
            FUN_00408ad0();
            uStack_c = CONCAT31(uStack_c._1_3_,0x2e);
          }
          else {
            uStack_110 = CONCAT44(0x5d2fd0,(undefined4)uStack_110);
            FUN_009885d0();
            uStack_c = 0x26;
            uStack_110 = CONCAT44(0x5d2fec,(undefined4)uStack_110);
            FUN_009885d0();
            uStack_110 = CONCAT44(auStack_c0,&local_e0);
            uStack_c._0_1_ = 0x27;
            uStack_118 = CONCAT44(0x5d3003,(undefined4)uStack_118);
            local_ec._0_4_ = (undefined1 *)FUN_009a8ee0();
            uStack_c._0_1_ = 0x28;
            uStack_110 = CONCAT44(0x5d3014,(undefined4)uStack_110);
            iVar6 = FUN_00475500();
            uStack_118 = *(undefined8 *)(iVar6 + 0x6c);
            uStack_110 = *(undefined8 *)(iVar6 + 0x74);
            uStack_11c = 0x5d3039;
            uVar8 = FUN_009a9880();
            uStack_110 = CONCAT44(uVar8,auStack_88);
            uStack_c._0_1_ = 0x29;
            uStack_118 = CONCAT44(auStack_50,0x5d3057);
            iVar9 = FUN_00424aa0();
            uStack_c._0_1_ = 0x2a;
            iVar6 = puVar7[1];
            uStack_110 = 0x44005d3071;
            puVar10 = (undefined1 *)FUN_00aae9af();
            local_ec = CONCAT44(local_ec._4_4_,puVar10);
            uStack_c._0_1_ = 0x2b;
            uVar2 = (undefined1)uStack_c;
            uStack_c._0_1_ = 0x2b;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = (undefined1 *)0x0;
              uStack_c._0_1_ = uVar2;
            }
            else {
              uStack_110 = 0xffffffff00000000;
              *(undefined4 *)(puVar10 + 0x14) = 0xf;
              *(undefined4 *)(puVar10 + 0x10) = 0;
              *puVar10 = 0;
              uStack_118 = CONCAT44(iVar9,0x5d30a7);
              FUN_00408ed0();
              uStack_c._0_1_ = 0x2c;
              uStack_110 = 0xffffffff00000000;
              *(undefined4 *)(puVar10 + 0x30) = 0xf;
              *(undefined4 *)(puVar10 + 0x2c) = 0;
              puVar10[0x1c] = 0;
              uStack_118 = CONCAT44(iVar9 + 0x1c,0x5d30d4);
              FUN_00408ed0();
              *(int *)(puVar10 + 0x38) = iVar6;
              *(undefined4 *)(puVar10 + 0x3c) = 0;
              puVar10[0x40] = 0;
            }
            iVar9 = puVar7[2];
            puVar7[1] = puVar10;
            puVar7[2] = iVar9 + 1;
            if (iVar9 == 0) {
              *puVar7 = puVar10;
            }
            else {
              *(undefined1 **)(iVar6 + 0x3c) = puVar10;
            }
            uStack_110 = CONCAT44(0x5d3111,(undefined4)uStack_110);
            FUN_00a39a80();
            uStack_110 = CONCAT44(0x5d311a,(undefined4)uStack_110);
            FUN_00408ad0();
            uStack_c = CONCAT31(uStack_c._1_3_,0x27);
          }
          uStack_110 = CONCAT44(&local_e0,0x5d328d);
          FUN_009a9740();
          uStack_110 = CONCAT44(0x5d3299,(undefined4)uStack_110);
          FUN_00408ad0();
        }
        else {
          uStack_110 = CONCAT44(0x5d2e43,(undefined4)uStack_110);
          FUN_009885d0();
          uStack_c = 0x1f;
          uStack_110 = CONCAT44(0x5d2e5c,(undefined4)uStack_110);
          FUN_009885d0();
          uStack_110 = CONCAT44(auStack_88,&local_e0);
          uStack_c._0_1_ = 0x20;
          uStack_118 = CONCAT44(0x5d2e76,(undefined4)uStack_118);
          local_ec._0_4_ = (undefined1 *)FUN_009a8ee0();
          uStack_c._0_1_ = 0x21;
          uStack_110 = CONCAT44(0x5d2e87,(undefined4)uStack_110);
          iVar6 = FUN_00475500();
          uStack_118 = *(undefined8 *)(iVar6 + 0x6c);
          uStack_110 = *(undefined8 *)(iVar6 + 0x74);
          uStack_11c = 0x5d2eac;
          uVar8 = FUN_009a9880();
          uStack_110 = CONCAT44(uVar8,auStack_c0);
          uStack_c._0_1_ = 0x22;
          uStack_118 = CONCAT44(auStack_50,0x5d2ec7);
          iVar9 = FUN_00424aa0();
          uStack_c._0_1_ = 0x23;
          iVar6 = puVar7[1];
          uStack_110 = 0x44005d2ee1;
          puVar10 = (undefined1 *)FUN_00aae9af();
          local_ec = CONCAT44(local_ec._4_4_,puVar10);
          uStack_c._0_1_ = 0x24;
          uVar2 = (undefined1)uStack_c;
          uStack_c._0_1_ = 0x24;
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = (undefined1 *)0x0;
            uStack_c._0_1_ = uVar2;
          }
          else {
            uStack_110 = 0xffffffff00000000;
            *(undefined4 *)(puVar10 + 0x14) = 0xf;
            *(undefined4 *)(puVar10 + 0x10) = 0;
            *puVar10 = 0;
            uStack_118 = CONCAT44(iVar9,0x5d2f17);
            FUN_00408ed0();
            uStack_c._0_1_ = 0x25;
            uStack_110 = 0xffffffff00000000;
            *(undefined4 *)(puVar10 + 0x30) = 0xf;
            *(undefined4 *)(puVar10 + 0x2c) = 0;
            puVar10[0x1c] = 0;
            uStack_118 = CONCAT44(iVar9 + 0x1c,0x5d2f44);
            FUN_00408ed0();
            *(int *)(puVar10 + 0x38) = iVar6;
            *(undefined4 *)(puVar10 + 0x3c) = 0;
            puVar10[0x40] = 0;
          }
          iVar9 = puVar7[2];
          puVar7[1] = puVar10;
          puVar7[2] = iVar9 + 1;
          if (iVar9 == 0) {
            *puVar7 = puVar10;
          }
          else {
            *(undefined1 **)(iVar6 + 0x3c) = puVar10;
          }
          uStack_110 = CONCAT44(0x5d2f81,(undefined4)uStack_110);
          FUN_00a39a80();
          uStack_110 = CONCAT44(0x5d2f8a,(undefined4)uStack_110);
          FUN_00408ad0();
          uStack_c = CONCAT31(uStack_c._1_3_,0x20);
          uStack_110 = CONCAT44(&local_e0,0x5d2f9c);
          FUN_009a9740();
          uStack_110 = CONCAT44(0x5d2fa5,(undefined4)uStack_110);
          FUN_00408ad0();
        }
        uStack_c = 0xffffffff;
        uStack_110 = CONCAT44(0x5d32ad,(undefined4)uStack_110);
        FUN_00408ad0();
        uStack_110 = CONCAT44(0x5d32be,(undefined4)uStack_110);
        FUN_009885d0();
        uStack_c = 0x34;
        uStack_110 = CONCAT44(0x5d32d2,(undefined4)uStack_110);
        uVar8 = (**(code **)(*param_1 + 0x20))();
        uStack_110 = CONCAT44(uVar8,auStack_88);
        uStack_118 = CONCAT44(auStack_50,0x5d32e3);
        iVar9 = FUN_00424aa0();
        uStack_c._0_1_ = 0x35;
        iVar6 = puVar7[1];
        uStack_110 = 0x44005d32fd;
        puVar10 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0x36;
        uVar2 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0x36;
        local_ec._0_4_ = puVar10;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar2;
        }
        else {
          uStack_110 = 0xffffffff00000000;
          *(undefined4 *)(puVar10 + 0x14) = 0xf;
          *(undefined4 *)(puVar10 + 0x10) = 0;
          *puVar10 = 0;
          uStack_118 = CONCAT44(iVar9,0x5d3333);
          FUN_00408ed0();
          uStack_c._0_1_ = 0x37;
          uStack_110 = 0xffffffff00000000;
          *(undefined4 *)(puVar10 + 0x30) = 0xf;
          *(undefined4 *)(puVar10 + 0x2c) = 0;
          puVar10[0x1c] = 0;
          uStack_118 = CONCAT44(iVar9 + 0x1c,0x5d3360);
          FUN_00408ed0();
          *(int *)(puVar10 + 0x38) = iVar6;
          *(undefined4 *)(puVar10 + 0x3c) = 0;
          puVar10[0x40] = 0;
        }
        iVar9 = puVar7[2];
        puVar7[1] = puVar10;
        puVar7[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *puVar7 = puVar10;
        }
        else {
          *(undefined1 **)(iVar6 + 0x3c) = puVar10;
        }
        uStack_110 = CONCAT44(0x5d339d,(undefined4)uStack_110);
        FUN_00a39a80();
        uStack_c = 0xffffffff;
        uStack_110 = CONCAT44(0x5d33b4,(undefined4)uStack_110);
        FUN_00408ad0();
        uStack_110 = CONCAT44(0x5d33c2,(undefined4)uStack_110);
        FUN_009885d0();
        uStack_c = 0x38;
        uStack_110 = CONCAT44(auStack_88,0x5d33e2);
        uVar8 = (**(code **)(*(int *)param_1[0x37] + 0x1c))();
        uStack_110 = CONCAT44(uVar8,auStack_c0);
        uStack_c._0_1_ = 0x39;
        uStack_118 = CONCAT44(auStack_50,0x5d33fb);
        iVar9 = FUN_00424aa0();
        uStack_c._0_1_ = 0x3a;
        iVar6 = puVar7[1];
        uStack_110 = 0x44005d3415;
        puVar10 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0x3b;
        uVar2 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0x3b;
        local_ec._0_4_ = puVar10;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar2;
        }
        else {
          uStack_110 = 0xffffffff00000000;
          *(undefined4 *)(puVar10 + 0x14) = 0xf;
          *(undefined4 *)(puVar10 + 0x10) = 0;
          *puVar10 = 0;
          uStack_118 = CONCAT44(iVar9,0x5d344b);
          FUN_00408ed0();
          uStack_c._0_1_ = 0x3c;
          uStack_110 = 0xffffffff00000000;
          *(undefined4 *)(puVar10 + 0x30) = 0xf;
          *(undefined4 *)(puVar10 + 0x2c) = 0;
          puVar10[0x1c] = 0;
          uStack_118 = CONCAT44(iVar9 + 0x1c,0x5d3478);
          FUN_00408ed0();
          *(int *)(puVar10 + 0x38) = iVar6;
          *(undefined4 *)(puVar10 + 0x3c) = 0;
          puVar10[0x40] = 0;
        }
        iVar9 = puVar7[2];
        puVar7[1] = puVar10;
        puVar7[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *puVar7 = puVar10;
        }
        else {
          *(undefined1 **)(iVar6 + 0x3c) = puVar10;
        }
        uStack_110 = CONCAT44(0x5d34b5,(undefined4)uStack_110);
        FUN_00a39a80();
        uStack_110 = CONCAT44(0x5d34c1,(undefined4)uStack_110);
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        uStack_110 = CONCAT44(0x5d34d5,(undefined4)uStack_110);
        FUN_00408ad0();
        uStack_110 = CONCAT44(0x5d34e3,(undefined4)uStack_110);
        FUN_009885d0();
        uStack_c = 0x3d;
        uStack_110 = CONCAT44(0x5d34ff,(undefined4)uStack_110);
        FUN_009885d0();
        uStack_c._0_1_ = 0x3e;
        iStack_190 = param_1[4];
        local_ec = CONCAT44(local_ec._4_4_,auStack_188);
        local_e0 = (undefined1 *)&iStack_190;
        pcStack_18c = (code *)param_1[5];
        uVar8 = *(undefined4 *)(DAT_012588e8 + 0xb60);
        iVar6 = param_1[0x37];
        uVar17 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        uVar16 = *(undefined4 *)(DAT_012588e8 + 0xb60);
        uVar15 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        uVar14 = 0;
        puVar10 = auStack_a4;
        FUN_006a4f40(puVar7,iVar6,puVar10,0,uVar15,uVar16,uVar17,uVar8);
        uVar11 = FUN_006a55b0();
        FUN_006a7ed0(auStack_188,uVar11,puVar7,iVar6,puVar10,uVar14,uVar15,uVar16,uVar17,uVar8);
        pcStack_18c = FUN_006a57a0;
        uStack_c._0_1_ = 0x3f;
        iStack_190 = 0x5d358c;
        iStack_190 = FUN_006a4f40();
        uVar8 = FUN_006a4f40();
        uStack_c = CONCAT31(uStack_c._1_3_,0x3e);
        FUN_004e9540(uVar8);
        uStack_110 = CONCAT44(0x5d35ac,(undefined4)uStack_110);
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        uStack_110 = CONCAT44(0x5d35c0,(undefined4)uStack_110);
        FUN_00408ad0();
      }
LAB_005d35c2:
      if (param_1[0x42] != 0) {
        if (param_1[0x43] != 0) {
          uStack_110 = CONCAT44(0x5d35e4,(undefined4)uStack_110);
          FUN_009885d0();
          uStack_c = 0x40;
          uStack_110 = ZEXT48(auStack_a4);
          uStack_118 = CONCAT44(0x5d3603,(undefined4)uStack_118);
          (**(code **)(*(int *)param_1[0x43] + 0x124))();
          uStack_c = 0xffffffff;
          uStack_110 = CONCAT44(0x5d3615,(undefined4)uStack_110);
          FUN_00408ad0();
        }
        uStack_110 = CONCAT44(0x5d361e,(undefined4)uStack_110);
        (**(code **)(*param_1 + 0x3c))();
        uStack_110 = CONCAT44(0x5d3636,(undefined4)uStack_110);
        FUN_005d3950();
        uStack_110 = CONCAT44(0x5d363f,(undefined4)uStack_110);
        cVar4 = (**(code **)(*param_1 + 0x3c))();
        if ((cVar4 == '\0') || (*(char *)(*(int *)(param_1[0x37] + 0x5c) + 0x2a) == '\0')) {
          iVar6 = 0;
          uStack_110 = CONCAT44(0x5d365d,(undefined4)uStack_110);
          cVar4 = (**(code **)(*param_1 + 0x40))();
          if (cVar4 != '\0') {
            iVar6 = 4;
          }
          if ((int *)param_1[0x43] != (int *)0x0) {
            local_ec = *(undefined8 *)(*(int *)(param_1[0x37] + 0x5c) + 0x100 + iVar6 * 0xc);
            fStack_e4 = *(float *)(*(int *)(param_1[0x37] + 0x5c) + iVar6 * 0xc + 0x108);
            uStack_110 = CONCAT44(&local_ec,0x5d36a8);
            (**(code **)(*(int *)param_1[0x43] + 0x168))();
          }
        }
        if (((char)param_1[1] != '\0') && (param_1[0x44] != 0)) {
          uStack_110 = CONCAT44(0x5d36c7,(undefined4)uStack_110);
          cVar4 = (**(code **)(*param_1 + 0x3c))();
          if ((cVar4 == '\0') ||
             (iVar6 = *(int *)(param_1[0x37] + 0x5c), *(char *)(iVar6 + 0x2a) == '\0')) {
            uStack_110 = CONCAT44(0x5d3796,(undefined4)uStack_110);
            (**(code **)(*param_1 + 0x40))();
            if ((int *)param_1[0x43] != (int *)0x0) {
              iVar6 = *(int *)param_1[0x43];
              uStack_110 = CONCAT44(*(undefined4 *)(param_1[0x37] + 0x5c),0x5d37c5);
              uVar8 = FUN_004c6aa0();
              uStack_110 = CONCAT44(uVar8,0x5d37d0);
              (**(code **)(iVar6 + 0x168))();
            }
            uStack_110 = CONCAT44(0x5d37dd,(undefined4)uStack_110);
            cVar4 = (**(code **)(*(int *)param_1[0x44] + 0x3c))();
            if (cVar4 == '\0') {
              uStack_110 = CONCAT44(0x5d37ee,(undefined4)uStack_110);
              (**(code **)(*(int *)param_1[0x44] + 0x34))();
            }
            iVar6 = *(int *)param_1[0x44];
            uStack_110 = CONCAT44(*(undefined4 *)(param_1[0x37] + 0x5c),0x5d380d);
            uVar8 = FUN_004c6aa0();
            uStack_110 = CONCAT44(uVar8,0x5d3818);
            (**(code **)(iVar6 + 0x168))();
          }
          else {
            local_ec = CONCAT44(local_ec._4_4_,(float)*(int *)(iVar6 + 0x74));
            fStack_e4 = (float)*(int *)(iVar6 + 0x78);
            uStack_110 = CONCAT44(iVar6,0x5d3706);
            iVar6 = FUN_004c4570();
            local_e0 = (undefined1 *)(*(float *)(iVar6 + 8) - (float)(undefined1 *)local_ec);
            local_dc = 0;
            uStack_110._4_4_ = &local_e0;
            fStack_d8 = *(float *)(iVar6 + 0xc) - fStack_e4;
            uStack_110._0_4_ = 0x5d3762;
            (**(code **)(*(int *)param_1[0x44] + 0x168))();
            uStack_110 = CONCAT44(uStack_110._4_4_,0x5d376f);
            cVar4 = (**(code **)(*(int *)param_1[0x44] + 0x3c))();
            if (cVar4 != '\0') {
              uStack_110 = CONCAT44(0x5d3784,(undefined4)uStack_110);
              (**(code **)(*(int *)param_1[0x44] + 0x38))();
            }
          }
        }
        uStack_110 = CONCAT44(param_1,*(undefined4 *)(param_1[0x37] + 0x5c));
        uStack_118 = CONCAT44(0x5d382a,(undefined4)uStack_118);
        FUN_004c8580();
      }
      uStack_110 = CONCAT44(param_1,0x5d3830);
      FUN_005d57a0();
      param_1[0x50] = 0;
      param_1[0x3f] = 0;
      param_1[0x40] = 0;
    }
    else if (param_1[0x42] != 0) {
      uStack_110 = CONCAT44(0x5d3853,(undefined4)uStack_110);
      FUN_005d4420();
    }
  }
  uStack_110 = CONCAT44(0x5d385c,(undefined4)uStack_110);
  cVar4 = (**(code **)(*param_1 + 0x38))();
  if ((cVar4 != '\0') || (*(char *)(*(int *)(param_1[0x37] + 0x5c) + 0xd9) == '\0')) {
    uStack_110 = CONCAT44(&local_ec,param_1);
    uStack_118 = CONCAT44(0x5d387c,(undefined4)uStack_118);
    FUN_005d0670();
  }
  ppvVar3 = ExceptionList;
  if (0 < param_1[0x3b]) {
    uStack_110 = CONCAT44(0x5d388b,(undefined4)uStack_110);
    FUN_005d1e60();
    ppvVar3 = ExceptionList;
  }
LAB_005d388b:
  ExceptionList = ppvVar3;
  if (0 < param_1[0x4e]) {
    uStack_110 = CONCAT44(&local_e0,param_1);
    local_ec = CONCAT44(local_ec._4_4_,(float)param_1[0x3e] / 1000.0);
    uStack_118 = CONCAT44(0x5d38c0,(undefined4)uStack_118);
    piVar12 = (int *)FUN_005d5680();
    *(float *)(*(int *)param_1[0x4c] + 0x160) =
         (float)(undefined1 *)local_ec / ((float)*piVar12 / 1000.0);
  }
  if ((0 < param_1[0x3b]) && (param_1[0x1d] == 0)) {
    uStack_110 = CONCAT44(0x5d391e,(undefined4)uStack_110);
    FUN_005d1750();
    if ((int)(undefined1 *)local_ec <= param_1[0x3e]) {
      ExceptionList = local_14;
      return 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}

