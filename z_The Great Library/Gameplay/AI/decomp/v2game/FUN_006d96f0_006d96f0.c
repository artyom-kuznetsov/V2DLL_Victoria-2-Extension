// FUN_006d96f0 @ 006d96f0 body=[[006d96f0, 006d979f] [006d97a3, 006d9804] [006d9808, 006d9861] [006d9865, 006d9933] [006d9937, 006d996a] [006d996e, 006d9989] [006d998d, 006d99af] [006d99b3, 006d99fe] [006d9a02, 006d9ad8] [006d9adc, 006d9b06] [006d9b0a, 006d9b2b] [006d9b2f, 006d9b83] [006d9b8c, 006d9bcf] [006d9bd3, 006d9c2f] [006d9c33, 006d9c84] [006d9c88, 006d9cef] [006d9cf3, 006d9db1] [006d9db5, 006d9e37] [006d9e3b, 006d9e5c] [006d9e60, 006d9f2d] [006d9f31, 006d9f5b] [006d9f5f, 006d9f80] [006d9f84, 006d9fcf] [006d9fd8, 006da0a6] [006da0aa, 006da0dd] [006da0e1, 006da0fc] [006da100, 006da120] [006da124, 006da8b1] [006da8b5, 006da914] [006da918, 006da92a]]


void FUN_006d96f0(uint **param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint **ppuVar8;
  uint **ppuStack_e0;
  uint **ppuStack_dc;
  char *pcStack_d8;
  undefined8 uStack_d4;
  uint *puStack_cc;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  int local_9c;
  undefined4 local_98;
  undefined1 *local_94;
  int *local_90;
  char **local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [2];
  char *local_68;
  int local_64;
  undefined4 local_60;
  uint local_5c;
  char local_52;
  char local_51;
  char **local_50 [4];
  undefined4 local_40;
  uint local_3c;
  char **local_34 [4];
  undefined4 local_24;
  uint local_20;
  char local_15;
  char local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba6121;
  local_10 = ExceptionList;
  local_98 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_9c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_14[0] = '\0';
  local_52 = '\0';
  local_51 = '\0';
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (*(char *)(local_9c + 0x12d0) == '\0') {
    puStack_cc = (uint *)0x14;
    local_5c = 0xf;
    uStack_d4 = 0xe0e0f0006d9ba0;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 3;
    puStack_cc = local_70;
    uStack_d4 = CONCAT44(0x6d9bb8,(char **)uStack_d4);
    piVar3 = (int *)(**(code **)(*param_1[0x13] + 0x6c))();
    local_8 = 0xffffffff;
    if (0xf < local_5c) {
      uStack_d4 = CONCAT44(local_70[0],&UNK_006d9bd0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_d4 = 0x1c00e0d5a4;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    pcStack_d8 = (char *)0x6d9bf4;
    FUN_00409350();
    iVar1 = local_9c;
    uStack_d4 = CONCAT44(&local_15,local_34);
    pcStack_d8 = (char *)(local_9c + 0x880);
    local_8 = 4;
    ppuStack_e0 = param_1;
    ppuStack_dc = (uint **)piVar3;
    FUN_006da930();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
      uStack_d4 = CONCAT44(local_34[0],&UNK_006d9c30);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_d4 = 0x1c00e0d584;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    pcStack_d8 = (char *)0x6d9c4f;
    FUN_00409350();
    uStack_d4 = CONCAT44(&local_15,local_34);
    pcStack_d8 = (char *)(iVar1 + 0x870);
    local_8 = 5;
    ppuStack_e0 = param_1;
    ppuStack_dc = (uint **)piVar3;
    FUN_006da930();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
      uStack_d4 = CONCAT44(local_34[0],&UNK_006d9c85);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_d4 = 0x1100e0dbb8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    pcStack_d8 = (char *)0x6d9ca4;
    FUN_00409350();
    local_8 = 6;
    uStack_d4 = CONCAT44(iVar1,0x6d9cb1);
    local_14[0] = FUN_00541b90();
    uStack_d4._4_4_ = local_34;
    uStack_d4._0_4_ = (char **)0x6d9cc1;
    piVar7 = (int *)(**(code **)(*piVar3 + 0x34))();
    if (local_14[0] == '\0') {
      pcVar4 = *(code **)(*piVar7 + 0xbc);
    }
    else {
      pcVar4 = *(code **)(*piVar7 + 0xb8);
    }
    uStack_d4._0_4_ = (char **)0x6d9cda;
    (*pcVar4)();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
      uStack_d4 = CONCAT44(uStack_d4._4_4_,local_34[0]);
                    /* WARNING: Subroutine does not return */
      pcStack_d8 = &UNK_006d9cf0;
      FUN_00aae91b();
    }
    uStack_d4._0_4_ = (char **)0xc;
    pcStack_d8 = "civ_progress";
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    ppuStack_dc = (uint **)0x6d9d0f;
    FUN_00409350();
    local_8 = 7;
    uStack_d4 = CONCAT44(uStack_d4._4_4_,local_34);
    pcStack_d8 = (char *)0x6d9d23;
    local_90 = (int *)(**(code **)(*piVar3 + 0x44))();
    local_94 = *(undefined1 **)(*(int *)(iVar1 + 0xa60) + 0x378);
    pcStack_d8 = (char *)0x47c35040;
    ppuStack_dc = (uint **)0x6d9d4e;
    FUN_00401000();
    pcStack_d8 = (char *)0x6d9d56;
    iVar5 = FUN_00b31c00();
    pcStack_d8 = (char *)0x0;
    ppuStack_dc = (uint **)0x3e8;
    ppuStack_e0 = (uint **)((ulonglong)((longlong)iVar5 * (longlong)(int)local_94) >> 0x20);
    iVar5 = __alldiv((int)((longlong)iVar5 * (longlong)(int)local_94));
    local_94 = (undefined1 *)*local_90;
    pcStack_d8 = (char *)(iVar5 / 1000);
    ppuStack_dc = (uint **)0x6d9d9c;
    (**(code **)(local_94 + 0x48))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
      ppuStack_dc = (uint **)local_34[0];
                    /* WARNING: Subroutine does not return */
      ppuStack_e0 = (uint **)&UNK_006d9db2;
      FUN_00aae91b();
    }
    ppuStack_dc = (uint **)0x13;
    ppuStack_e0 = (uint **)0xe0db7c;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    ppuStack_dc = (uint **)0x1;
    local_94 = (undefined1 *)&ppuStack_e0;
    local_8 = 8;
    ppuStack_e0 = *(uint ***)(iVar1 + 0xe3c);
    uVar6 = FUN_00988a50(local_50);
    local_8 = CONCAT31(local_8._1_3_,9);
    ppuStack_dc = (uint **)local_34;
    ppuStack_e0 = (uint **)0x6d9e07;
    (**(code **)(*piVar3 + 0x3c))();
    uStack_d4 = 0xffffffff00000000;
    ppuStack_dc = (uint **)0x6d9e18;
    pcStack_d8 = (char *)uVar6;
    FUN_00408ed0();
    uStack_d4 = (ulonglong)uVar6;
    pcStack_d8 = (char *)0x6d9e25;
    FUN_00a5ecc0();
    if (0xf < local_3c) {
      uStack_d4 = CONCAT44(local_50[0],&UNK_006d9e38);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
    ppuVar8 = param_1;
    if (0xf < local_20) {
      uStack_d4 = CONCAT44(local_34[0],&UNK_006d9e5d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
LAB_006d9e68:
    local_8 = 0xffffffff;
    uStack_d4 = 0x2200e0df64;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
    pcStack_d8 = (char *)0x6d9e80;
    FUN_00409350();
    local_8 = 0x16;
    uStack_d4 = 0x1500e0df2c;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    pcStack_d8 = (char *)0x6d9e9f;
    FUN_00409350();
    uStack_d4 = CONCAT44(local_50,&local_68);
    local_8._0_1_ = 0x17;
    pcStack_d8 = (char *)0x6d9eb0;
    param_1 = (uint **)FUN_009a8ee0();
    local_8._0_1_ = 0x18;
    uStack_d4 = CONCAT44(0x6d9ebc,(char **)uStack_d4);
    iVar1 = FUN_00475500();
    ppuStack_dc = (uint **)*(undefined8 *)(iVar1 + 0x6c);
    pcStack_d8 = (char *)((ulonglong)*(undefined8 *)(iVar1 + 0x6c) >> 0x20);
    uStack_d4 = *(undefined8 *)(iVar1 + 0x74);
    ppuStack_e0 = (uint **)0x6d9ee2;
    uVar2 = FUN_009a9880();
    local_8._0_1_ = 0x19;
    uStack_d4._4_4_ = local_34;
    uStack_d4._0_4_ = (char **)0x6d9ef6;
    param_1 = (uint **)(**(code **)(*ppuVar8[0x13] + 0x3c))();
    uStack_d4._0_4_ = (char **)0xffffffff;
    pcStack_d8 = (char *)0x0;
    ppuStack_e0 = (uint **)0x6d9f08;
    ppuStack_dc = (uint **)uVar2;
    FUN_00408ed0();
    uStack_d4 = ZEXT48(uStack_d4._4_4_) << 0x20;
    ppuStack_dc = (uint **)0x6d9f18;
    pcStack_d8 = (char *)uVar2;
    FUN_00a5ecc0();
    if (0xf < local_78) {
      uStack_d4 = CONCAT44(uStack_d4._4_4_,local_8c[0]);
                    /* WARNING: Subroutine does not return */
      pcStack_d8 = &UNK_006d9f2e;
      FUN_00aae91b();
    }
    uStack_d4._0_4_ = &local_68;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = (char **)((uint)local_8c[0] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,0x17);
    pcStack_d8 = (char *)0x6d9f4e;
    FUN_009a9740();
    if (0xf < local_20) {
      uStack_d4 = CONCAT44(uStack_d4._4_4_,local_34[0]);
                    /* WARNING: Subroutine does not return */
      pcStack_d8 = &UNK_006d9f5c;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    if (0xf < local_3c) {
      uStack_d4 = CONCAT44(uStack_d4._4_4_,local_50[0]);
                    /* WARNING: Subroutine does not return */
      pcStack_d8 = &UNK_006d9f81;
      FUN_00aae91b();
    }
    uStack_d4._0_4_ = (char **)0x6d9f94;
    FUN_009885d0();
    local_8 = 0x1a;
    uStack_d4 = CONCAT44(uStack_d4._4_4_,local_8c);
    pcStack_d8 = (char *)0x6d9fa8;
    piVar3 = (int *)(**(code **)(*ppuVar8[0x13] + 0x44))();
    pcStack_d8 = (char *)0x2;
    ppuStack_dc = (uint **)0x6d9fb3;
    (**(code **)(*piVar3 + 0x48))();
    local_8 = 0xffffffff;
    if (0xf < local_78) {
      ppuStack_dc = (uint **)local_8c[0];
                    /* WARNING: Subroutine does not return */
      ppuStack_e0 = (uint **)&UNK_006d9fd0;
      FUN_00aae91b();
    }
  }
  else {
    puStack_cc = (uint *)0xe;
    local_5c = 0xf;
    uStack_d4 = 0xe0e1e0006d9770;
    ExceptionList = &local_10;
    FUN_00409350();
    ppuVar8 = param_1;
    local_8 = 0;
    puStack_cc = local_70;
    uStack_d4 = CONCAT44(0x6d9784,(char **)uStack_d4);
    local_90 = (int *)(**(code **)(*param_1[0x13] + 0x6c))();
    local_8 = 0xffffffff;
    if (0xf < local_5c) {
      uStack_d4 = CONCAT44(local_70[0],&UNK_006d97a0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_d4 = 0x1a00e0d5c4;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    pcStack_d8 = (char *)0x6d97c4;
    FUN_00409350();
    uStack_d4 = CONCAT44(local_14,local_34);
    pcStack_d8 = (char *)(local_9c + 0x850);
    ppuStack_dc = (uint **)local_90;
    ppuStack_e0 = ppuVar8;
    local_8 = 1;
    local_15 = FUN_006da930();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
      uStack_d4 = CONCAT44(local_34[0],&UNK_006d9805);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_d4 = 0x1d00e0d5e0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    pcStack_d8 = (char *)0x6d9820;
    FUN_00409350();
    uStack_d4 = CONCAT44(&local_52,local_34);
    pcStack_d8 = (char *)(local_9c + 0x860);
    ppuStack_dc = (uint **)local_90;
    ppuStack_e0 = ppuVar8;
    local_8 = 2;
    local_51 = FUN_006da930();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
      uStack_d4 = CONCAT44(local_34[0],&UNK_006d9862);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_15 == '\0') {
      if (local_14[0] == '\0') goto LAB_006d9e68;
      uStack_d4 = 0x2200e0e204;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (char **)((uint)local_50[0]._1_3_ << 8);
      pcStack_d8 = (char *)0x6d9ff9;
      FUN_00409350();
      local_8 = 0x10;
      uStack_d4 = 0x1500e0df2c;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
      pcStack_d8 = (char *)0x6da018;
      FUN_00409350();
      uStack_d4 = CONCAT44(local_50,&local_68);
      local_8._0_1_ = 0x11;
      pcStack_d8 = (char *)0x6da029;
      local_94 = (undefined1 *)FUN_009a8ee0();
      local_8._0_1_ = 0x12;
      uStack_d4 = CONCAT44(0x6da038,(char **)uStack_d4);
      iVar1 = FUN_00475500();
      ppuStack_dc = (uint **)*(undefined8 *)(iVar1 + 0x6c);
      pcStack_d8 = (char *)((ulonglong)*(undefined8 *)(iVar1 + 0x6c) >> 0x20);
      uStack_d4 = *(undefined8 *)(iVar1 + 0x74);
      ppuStack_e0 = (uint **)0x6da061;
      uVar2 = FUN_009a9880();
      local_8._0_1_ = 0x13;
      uStack_d4._4_4_ = local_34;
      uStack_d4._0_4_ = (char **)0x6da077;
      (**(code **)(*ppuVar8[0x13] + 0x3c))();
      uStack_d4._0_4_ = (char **)0xffffffff;
      pcStack_d8 = (char *)0x0;
      ppuStack_e0 = (uint **)0x6da088;
      ppuStack_dc = (uint **)uVar2;
      FUN_00408ed0();
      uStack_d4 = ZEXT48(uStack_d4._4_4_) << 0x20;
      ppuStack_dc = (uint **)0x6da095;
      pcStack_d8 = (char *)uVar2;
      FUN_00a5ecc0();
      if (0xf < local_78) {
        uStack_d4 = CONCAT44(uStack_d4._4_4_,local_8c[0]);
                    /* WARNING: Subroutine does not return */
        pcStack_d8 = &UNK_006da0a7;
        FUN_00aae91b();
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = (char **)((uint)local_8c[0] & 0xffffff00);
      local_8 = CONCAT31(local_8._1_3_,0x14);
      uStack_d4._0_4_ = (char **)0x6da0c6;
      FUN_009adb70();
      if (local_64 != 0) {
        uStack_d4._0_4_ = (char **)0x6da0d5;
        FUN_009e6a80();
        uStack_d4 = CONCAT44(uStack_d4._4_4_,local_64);
                    /* WARNING: Subroutine does not return */
        pcStack_d8 = &UNK_006da0de;
        FUN_00aae91b();
      }
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      if (0xf < local_20) {
        uStack_d4 = CONCAT44(uStack_d4._4_4_,local_34[0]);
                    /* WARNING: Subroutine does not return */
        pcStack_d8 = &UNK_006da0fd;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
      if (0xf < local_3c) {
        uStack_d4 = CONCAT44(uStack_d4._4_4_,local_50[0]);
                    /* WARNING: Subroutine does not return */
        pcStack_d8 = &UNK_006da121;
        FUN_00aae91b();
      }
      uStack_d4._0_4_ = (char **)0x13;
      pcStack_d8 = "social_reforms_bock";
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
      ppuStack_dc = (uint **)0x6da140;
      FUN_00409350();
      local_8 = 0x15;
      uStack_d4 = CONCAT44(uStack_d4._4_4_,local_50);
      pcStack_d8 = (char *)0x6da158;
      piVar3 = (int *)(**(code **)(*param_1[0x13] + 0x44))();
      pcStack_d8 = (char *)0x1;
      ppuStack_dc = (uint **)0x6da163;
      (**(code **)(*piVar3 + 0x48))();
    }
    else {
      uStack_d4 = 0x1e00e0df44;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (char **)((uint)local_50[0]._1_3_ << 8);
      pcStack_d8 = (char *)0x6d9886;
      FUN_00409350();
      local_8 = 10;
      uStack_d4 = 0x1500e0df2c;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
      pcStack_d8 = (char *)0x6d98a5;
      FUN_00409350();
      uStack_d4 = CONCAT44(local_50,&local_68);
      local_8._0_1_ = 0xb;
      pcStack_d8 = (char *)0x6d98b6;
      local_94 = (undefined1 *)FUN_009a8ee0();
      local_8._0_1_ = 0xc;
      uStack_d4 = CONCAT44(0x6d98c5,(char **)uStack_d4);
      iVar1 = FUN_00475500();
      ppuStack_dc = (uint **)*(undefined8 *)(iVar1 + 0x6c);
      pcStack_d8 = (char *)((ulonglong)*(undefined8 *)(iVar1 + 0x6c) >> 0x20);
      uStack_d4 = *(undefined8 *)(iVar1 + 0x74);
      ppuStack_e0 = (uint **)0x6d98ee;
      uVar2 = FUN_009a9880();
      local_8._0_1_ = 0xd;
      uStack_d4._4_4_ = local_34;
      uStack_d4._0_4_ = (char **)0x6d9904;
      (**(code **)(*ppuVar8[0x13] + 0x3c))();
      uStack_d4._0_4_ = (char **)0xffffffff;
      pcStack_d8 = (char *)0x0;
      ppuStack_e0 = (uint **)0x6d9915;
      ppuStack_dc = (uint **)uVar2;
      FUN_00408ed0();
      uStack_d4 = ZEXT48(uStack_d4._4_4_) << 0x20;
      ppuStack_dc = (uint **)0x6d9922;
      pcStack_d8 = (char *)uVar2;
      FUN_00a5ecc0();
      if (0xf < local_78) {
        uStack_d4 = CONCAT44(uStack_d4._4_4_,local_8c[0]);
                    /* WARNING: Subroutine does not return */
        pcStack_d8 = &UNK_006d9934;
        FUN_00aae91b();
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = (char **)((uint)local_8c[0] & 0xffffff00);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      uStack_d4._0_4_ = (char **)0x6d9953;
      FUN_009adb70();
      if (local_64 != 0) {
        uStack_d4._0_4_ = (char **)0x6d9962;
        FUN_009e6a80();
        uStack_d4 = CONCAT44(uStack_d4._4_4_,local_64);
                    /* WARNING: Subroutine does not return */
        pcStack_d8 = &UNK_006d996b;
        FUN_00aae91b();
      }
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      if (0xf < local_20) {
        uStack_d4 = CONCAT44(uStack_d4._4_4_,local_34[0]);
                    /* WARNING: Subroutine does not return */
        pcStack_d8 = &UNK_006d998a;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
      if (0xf < local_3c) {
        uStack_d4 = CONCAT44(uStack_d4._4_4_,local_50[0]);
                    /* WARNING: Subroutine does not return */
        pcStack_d8 = &UNK_006d99b0;
        FUN_00aae91b();
      }
      uStack_d4._0_4_ = (char **)0x13;
      pcStack_d8 = "social_reforms_bock";
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
      ppuStack_dc = (uint **)0x6d99cb;
      FUN_00409350();
      local_8 = 0xf;
      uStack_d4 = CONCAT44(uStack_d4._4_4_,local_50);
      pcStack_d8 = (char *)0x6d99df;
      piVar3 = (int *)(**(code **)(*param_1[0x13] + 0x44))();
      pcStack_d8 = (char *)0x1;
      ppuStack_dc = (uint **)0x6d99ea;
      (**(code **)(*piVar3 + 0x48))();
    }
    local_8 = 0xffffffff;
    ppuVar8 = param_1;
    if (0xf < local_3c) {
      ppuStack_dc = (uint **)local_50[0];
                    /* WARNING: Subroutine does not return */
      ppuStack_e0 = (uint **)&UNK_006d99ff;
      FUN_00aae91b();
    }
  }
  local_8 = 0xffffffff;
  if (local_51 == '\0') {
    if (local_52 == '\0') {
      ppuStack_dc = (uint **)0x6da278;
      FUN_009885d0();
      local_8 = 0x25;
      ppuStack_dc = (uint **)0x6da28f;
      FUN_009885d0();
      ppuStack_dc = (uint **)local_50;
      ppuStack_e0 = (uint **)&local_68;
      local_8._0_1_ = 0x26;
      param_1 = (uint **)FUN_009a8ee0();
      local_8._0_1_ = 0x27;
      ppuStack_dc = (uint **)0x6da2ac;
      iVar1 = FUN_00475500();
      ppuStack_e0 = (uint **)*(undefined8 *)(iVar1 + 0x74);
      ppuStack_dc = (uint **)((ulonglong)*(undefined8 *)(iVar1 + 0x74) >> 0x20);
      uVar2 = FUN_009a9880((int)*(undefined8 *)(iVar1 + 0x6c),
                           (int)((ulonglong)*(undefined8 *)(iVar1 + 0x6c) >> 0x20));
      local_8._0_1_ = 0x28;
      ppuStack_dc = (uint **)local_8c;
      ppuStack_e0 = (uint **)0x6da2e6;
      param_1 = (uint **)(**(code **)(*ppuVar8[0x13] + 0x3c))();
      ppuStack_e0 = (uint **)0xffffffff;
      FUN_00408ed0(uVar2,0);
      ppuStack_e0 = (uint **)0x0;
      FUN_00a5ecc0(uVar2);
      ppuStack_e0 = (uint **)0x6da310;
      FUN_00408ad0();
      ppuStack_e0 = (uint **)&local_68;
      local_8 = CONCAT31(local_8._1_3_,0x26);
      FUN_009a9740();
      ppuStack_e0 = (uint **)0x6da328;
      FUN_00408ad0();
      local_8 = 0xffffffff;
      ppuStack_e0 = (uint **)0x6da337;
      FUN_00408ad0();
      ppuStack_e0 = (uint **)0x6da347;
      FUN_009885d0();
      local_8 = 0x29;
      ppuStack_e0 = (uint **)local_8c;
      piVar3 = (int *)(**(code **)(*ppuVar8[0x13] + 0x44))();
      uVar2 = 2;
    }
    else {
      ppuStack_dc = (uint **)0x6da184;
      FUN_009885d0();
      local_8 = 0x20;
      ppuStack_dc = (uint **)0x6da19b;
      FUN_009885d0();
      ppuStack_dc = (uint **)local_50;
      ppuStack_e0 = (uint **)&local_68;
      local_8._0_1_ = 0x21;
      param_1 = (uint **)FUN_009a8ee0();
      local_8._0_1_ = 0x22;
      ppuStack_dc = (uint **)0x6da1b8;
      iVar1 = FUN_00475500();
      ppuStack_e0 = (uint **)*(undefined8 *)(iVar1 + 0x74);
      ppuStack_dc = (uint **)((ulonglong)*(undefined8 *)(iVar1 + 0x74) >> 0x20);
      uVar2 = FUN_009a9880((int)*(undefined8 *)(iVar1 + 0x6c),
                           (int)((ulonglong)*(undefined8 *)(iVar1 + 0x6c) >> 0x20));
      local_8._0_1_ = 0x23;
      ppuStack_dc = (uint **)local_8c;
      ppuStack_e0 = (uint **)0x6da1f2;
      param_1 = (uint **)(**(code **)(*ppuVar8[0x13] + 0x3c))();
      ppuStack_e0 = (uint **)0xffffffff;
      FUN_00408ed0(uVar2,0);
      ppuStack_e0 = (uint **)0x0;
      FUN_00a5ecc0(uVar2);
      ppuStack_e0 = (uint **)0x6da21c;
      FUN_00408ad0();
      ppuStack_e0 = (uint **)&local_68;
      local_8 = CONCAT31(local_8._1_3_,0x21);
      FUN_009a9740();
      ppuStack_e0 = (uint **)0x6da234;
      FUN_00408ad0();
      local_8 = 0xffffffff;
      ppuStack_e0 = (uint **)0x6da243;
      FUN_00408ad0();
      ppuStack_e0 = (uint **)0x6da253;
      FUN_009885d0();
      local_8 = 0x24;
      ppuStack_e0 = (uint **)local_8c;
      piVar3 = (int *)(**(code **)(*ppuVar8[0x13] + 0x44))();
      uVar2 = 1;
    }
    (**(code **)(*piVar3 + 0x48))(uVar2);
    local_8 = 0xffffffff;
    FUN_00408ad0();
  }
  else {
    ppuStack_dc = (uint **)0x21;
    ppuStack_e0 = (uint **)0xe0dfc0;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 0x1b;
    ppuStack_dc = (uint **)0x18;
    ppuStack_e0 = (uint **)0xe0dfa4;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    ppuStack_dc = (uint **)local_50;
    ppuStack_e0 = (uint **)&local_68;
    local_8._0_1_ = 0x1c;
    param_1 = (uint **)FUN_009a8ee0();
    local_8._0_1_ = 0x1d;
    ppuStack_dc = (uint **)0x6d9a67;
    iVar1 = FUN_00475500();
    ppuStack_e0 = (uint **)*(undefined8 *)(iVar1 + 0x74);
    ppuStack_dc = (uint **)((ulonglong)*(undefined8 *)(iVar1 + 0x74) >> 0x20);
    uVar2 = FUN_009a9880((int)*(undefined8 *)(iVar1 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar1 + 0x6c) >> 0x20));
    local_8._0_1_ = 0x1e;
    ppuStack_dc = (uint **)local_34;
    ppuStack_e0 = (uint **)0x6d9aa1;
    param_1 = (uint **)(**(code **)(*ppuVar8[0x13] + 0x3c))();
    ppuStack_e0 = (uint **)0xffffffff;
    FUN_00408ed0(uVar2,0);
    ppuStack_e0 = (uint **)0x0;
    FUN_00a5ecc0(uVar2);
    if (0xf < local_78) {
      ppuStack_e0 = (uint **)local_8c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppuStack_e0 = (uint **)&local_68;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = (char **)((uint)local_8c[0] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    FUN_009a9740();
    if (0xf < local_20) {
      ppuStack_e0 = (uint **)local_34[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    if (0xf < local_3c) {
      ppuStack_e0 = (uint **)local_50[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppuStack_e0 = (uint **)0x16;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
    FUN_00409350("political_reforms_bock");
    local_8 = 0x1f;
    ppuStack_e0 = (uint **)local_50;
    piVar3 = (int *)(**(code **)(*ppuVar8[0x13] + 0x44))();
    (**(code **)(*piVar3 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
  }
  if (ppuVar8[0xb5] != (uint *)0x0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = (char **)((uint)local_50[0] & 0xffffff00);
    FUN_00409350("reforms_window",0xe);
    local_8 = 0x3f;
    iVar1 = (**(code **)(*ppuVar8[0x13] + 0x6c))(local_50);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    FUN_00409350("unciv_reforms_window",0x14);
    local_8 = 0x40;
    iVar1 = (**(code **)(*ppuVar8[0x13] + 0x6c))(local_b8);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
    if (local_a4 < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_b8[0]);
  }
  if (*(char *)(local_9c + 0x12d0) != '\0') {
    FUN_009885d0();
    local_8 = 0x2a;
    iVar1 = (**(code **)(*ppuVar8[0x13] + 0x6c))(local_8c);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x2b;
    iVar1 = (**(code **)(*ppuVar8[0x13] + 0x6c))(local_8c);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  }
  FUN_009885d0();
  local_8 = 0x2c;
  iVar1 = (**(code **)(*ppuVar8[0x13] + 0x6c))(local_8c);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  local_8 = 0xffffffff;
  FUN_00408ad0();
  FUN_009885d0();
  local_8 = 0x2d;
  iVar1 = (**(code **)(*ppuVar8[0x13] + 0x6c))(local_8c);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
  local_8 = 0xffffffff;
  FUN_00408ad0();
  FUN_009885d0();
  local_8 = 0x2e;
  piVar3 = (int *)(**(code **)(*ppuVar8[0x13] + 0x6c))(local_8c);
  local_8 = 0xffffffff;
  FUN_00408ad0();
  iVar1 = local_9c;
  FUN_00542bc0(local_9c,&local_94);
  FUN_00543470(iVar1,&param_1);
  if (param_1 == (uint **)0x0) {
    FUN_009885d0();
    local_8 = 0x2f;
    piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_50);
    (**(code **)(*piVar7 + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x30;
    piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_50);
    (**(code **)(*piVar7 + 0x38))();
  }
  else {
    if ((int)param_1 < 1) {
      FUN_009885d0();
      local_8 = 0x34;
      piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_50);
      (**(code **)(*piVar7 + 0x34))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x35;
      piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_34);
      (**(code **)(*piVar7 + 0x34))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x36;
      piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_70);
      uVar2 = 2;
    }
    else {
      FUN_009885d0();
      local_8 = 0x31;
      piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_50);
      (**(code **)(*piVar7 + 0x34))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x32;
      piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_34);
      (**(code **)(*piVar7 + 0x34))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x33;
      piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_70);
      uVar2 = 1;
    }
    (**(code **)(*piVar7 + 0x48))(uVar2);
  }
  local_8 = 0xffffffff;
  FUN_00408ad0();
  if (local_94 != (undefined1 *)0x0) {
    if ((int)local_94 < 1) {
      FUN_009885d0();
      local_8 = 0x3c;
      piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_50);
      (**(code **)(*piVar7 + 0x34))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x3d;
      piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_34);
      (**(code **)(*piVar7 + 0x34))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x3e;
      piVar3 = (int *)(**(code **)(*piVar3 + 0x44))(local_70);
      (**(code **)(*piVar3 + 0x48))(2);
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    }
    FUN_009885d0();
    local_8 = 0x39;
    piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_50);
    (**(code **)(*piVar7 + 0x34))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x3a;
    piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_34);
    (**(code **)(*piVar7 + 0x34))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x3b;
    piVar3 = (int *)(**(code **)(*piVar3 + 0x44))(local_70);
    (**(code **)(*piVar3 + 0x48))(1);
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  }
  FUN_009885d0();
  local_8 = 0x37;
  piVar7 = (int *)(**(code **)(*piVar3 + 0x44))(local_50);
  (**(code **)(*piVar7 + 0x38))();
  local_8 = 0xffffffff;
  FUN_00408ad0();
  FUN_009885d0();
  local_8 = 0x38;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x44))(local_34);
  (**(code **)(*piVar3 + 0x38))();
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

