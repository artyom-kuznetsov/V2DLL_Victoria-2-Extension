// FUN_006cf1c0 @ 006cf1c0 body=[[006cf1c0, 006cf288] [006cf28c, 006cf308] [006cf30c, 006cf382] [006cf386, 006cf3a4] [006cf3a8, 006cf448] [006cf44c, 006cf46c] [006cf470, 006cf545] [006cf549, 006cf568] [006cf56c, 006cf583] [006cf587, 006cf5a2] [006cf5a6, 006cf679] [006cf67d, 006cf69c] [006cf6a0, 006cf6ba] [006cf6be, 006cf6d9] [006cf6dd, 006cf7a6] [006cf7aa, 006cf7c8] [006cf7cc, 006cf89b] [006cf89f, 006cf8b9] [006cf8bd, 006cf8d1]]


undefined4 * FUN_006cf1c0(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint **ppuVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  uint **ppuStack_d8;
  undefined8 uStack_d4;
  uint **ppuStack_cc;
  uint **ppuStack_c8;
  undefined *puStack_c4;
  uint **ppuStack_c0;
  uint *puStack_bc;
  undefined4 uStack_b8;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  char **local_8c;
  undefined4 local_7c;
  uint local_78;
  char local_70 [4];
  char **local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined4 *local_50;
  char **local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int *local_30;
  char **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba63af;
  local_10 = ExceptionList;
  uStack_b8 = 0xc;
  puStack_bc = (uint *)0xe0d6f4;
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  ppuStack_c0 = (uint **)0x6cf20e;
  ExceptionList = &local_10;
  FUN_00409350();
  piVar4 = DAT_01258a80;
  local_8 = 0;
  uStack_b8 = 0x6cf229;
  uStack_b8 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  puStack_bc = local_a8;
  ppuStack_c0 = (uint **)0x6cf26d;
  uVar3 = (**(code **)(*piVar4 + 0x2c))();
  param_1[8] = uVar3;
  local_8._0_1_ = 6;
  if (0xf < local_94) {
    ppuStack_c0 = (uint **)local_a8[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = &UNK_006cf289;
    FUN_00aae91b();
  }
  ppuStack_c0 = (uint **)0x4;
  param_1[10] = param_2;
  puStack_c4 = &DAT_00e0d704;
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  *param_1 = CRebelFactionItem::vftable;
  param_1[7] = CRebelFactionItem::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char **)((uint)local_2c[0] & 0xffffff00);
  ppuStack_c8 = (uint **)0x6cf2ce;
  FUN_00409350();
  local_8._0_1_ = 7;
  ppuStack_c0 = (uint **)local_2c;
  puStack_c4 = (undefined *)0x6cf2e0;
  piVar4 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))();
  puStack_c4 = *(undefined **)(*(int *)(param_1[10] + 0x30) + 0x128);
  ppuStack_c8 = (uint **)0x6cf2f6;
  (**(code **)(*piVar4 + 0x48))();
  local_8._0_1_ = 6;
  if (0xf < local_18) {
    ppuStack_c8 = (uint **)local_2c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_cc = (uint **)&UNK_006cf309;
    FUN_00aae91b();
  }
  ppuStack_c8 = (uint **)0x4;
  ppuStack_cc = (uint **)&DAT_00df09f4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char **)((uint)local_2c[0] & 0xffffff00);
  uStack_d4._4_4_ = (char ***)0x6cf324;
  FUN_00409350();
  local_8._0_1_ = 8;
  ppuStack_c8 = (uint **)param_1[10];
  piVar4 = (int *)param_1[8];
  ppuStack_cc = (uint **)0x6cf33a;
  uVar3 = FUN_0041a080();
  local_8._0_1_ = 9;
  ppuStack_c8 = (uint **)local_2c;
  ppuStack_cc = (uint **)0x6cf34e;
  (**(code **)(*piVar4 + 0x3c))();
  ppuStack_cc = (uint **)0xffffffff;
  uStack_d4._4_4_ = (char ***)0x0;
  ppuStack_d8 = (uint **)0x6cf360;
  uStack_d4._0_4_ = (char *)uVar3;
  FUN_00408ed0();
  ppuStack_cc = (uint **)0x0;
  uStack_d4._0_4_ = (char *)0x6cf370;
  uStack_d4._4_4_ = (char ***)uVar3;
  FUN_00a5ecc0();
  if (0xf < local_38) {
    ppuStack_cc = (uint **)local_4c[0];
                    /* WARNING: Subroutine does not return */
    uStack_d4._4_4_ = (char ***)&UNK_006cf383;
    FUN_00aae91b();
  }
  local_8._0_1_ = 6;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = (char **)((uint)local_4c[0] & 0xffffff00);
  if (0xf < local_18) {
    ppuStack_cc = (uint **)local_2c[0];
                    /* WARNING: Subroutine does not return */
    uStack_d4._4_4_ = (char ***)&UNK_006cf3a5;
    FUN_00aae91b();
  }
  ppuStack_cc = (uint **)0x4;
  uStack_d4._4_4_ = (char ***)&DAT_00e0d70c;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char **)((uint)local_2c[0] & 0xffffff00);
  uStack_d4._0_4_ = (char *)0x6cf3c4;
  FUN_00409350();
  local_8._0_1_ = 10;
  piVar4 = (int *)param_1[8];
  piVar5 = *(int **)(param_1[10] + 0xa4);
  ppuStack_d8 = (uint **)0x0;
  if (piVar5 != (int *)0x0) {
    ppuStack_d8 = (uint **)0x0;
    do {
      iVar7 = *piVar5;
      piVar5 = (int *)piVar5[2];
      ppuStack_d8 = (uint **)((int)ppuStack_d8 + *(int *)(iVar7 + 0x58));
    } while (piVar5 != (int *)0x0);
  }
  ppuStack_cc = (uint **)0x0;
  uStack_d4._4_4_ = (char ***)&DAT_00ded94d;
  uStack_d4._0_4_ = &DAT_00ded94d;
  ppuVar6 = (uint **)FUN_009c99e0();
  local_8._0_1_ = 0xb;
  ppuStack_cc = (uint **)local_2c;
  uStack_d4._4_4_ = (char ***)0x6cf418;
  (**(code **)(*piVar4 + 0x3c))();
  uStack_d4._4_4_ = (char ***)0xffffffff;
  uStack_d4._0_4_ = (char *)0x0;
  ppuStack_d8 = ppuVar6;
  FUN_00408ed0();
  uStack_d4._4_4_ = (char ***)0x0;
  ppuStack_d8 = (uint **)0x6cf43a;
  uStack_d4._0_4_ = (char *)ppuVar6;
  FUN_00a5ecc0();
  if (0xf < local_38) {
    uStack_d4._4_4_ = (char ***)local_4c[0];
                    /* WARNING: Subroutine does not return */
    uStack_d4._0_4_ = &UNK_006cf449;
    FUN_00aae91b();
  }
  local_8._0_1_ = 6;
  local_38 = 0xf;
  local_3c = 0;
  uVar2 = (uint)local_4c[0] >> 8;
  local_4c[0] = (char **)(uVar2 << 8);
  if (0xf < local_18) {
    uStack_d4._4_4_ = (char ***)local_2c[0];
                    /* WARNING: Subroutine does not return */
    uStack_d4._0_4_ = &UNK_006cf46d;
    FUN_00aae91b();
  }
  uStack_d4._4_4_ = (char ***)0x1;
  uStack_d4._0_4_ = &DAT_00df9644;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = (char **)(uVar2 << 8);
  ppuStack_d8 = (uint **)0x6cf488;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  uStack_d4._4_4_ = (char ***)0xc;
  uStack_d4._0_4_ = "organization";
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char **)((uint)local_2c[0] & 0xffffff00);
  ppuStack_d8 = (uint **)0x6cf4a4;
  FUN_00409350();
  local_30 = (int *)&uStack_d4;
  local_8._0_1_ = 0xd;
  piVar4 = (int *)param_1[8];
  ppuStack_d8 = (uint **)0x0;
  uStack_d4 = __allmul(*(undefined4 *)(param_1[10] + 0xb8),*(undefined4 *)(param_1[10] + 0xbc));
  uStack_d4 = uStack_d4 >> 0xf;
  ppuStack_d8 = (uint **)0x1;
  FUN_00988bb0();
  uStack_d4._4_4_ = local_4c;
  local_8._0_1_ = 0xe;
  uStack_d4._0_4_ = (char *)0x6cf4fe;
  ppuVar6 = (uint **)FUN_00988f20();
  local_8._0_1_ = 0xf;
  uStack_d4._4_4_ = local_2c;
  uStack_d4._0_4_ = (char *)0x6cf512;
  (**(code **)(*piVar4 + 0x3c))();
  uStack_d4._0_4_ = (char *)0xffffffff;
  ppuStack_d8 = (uint **)0x0;
  FUN_00408ed0();
  uStack_d4._0_4_ = (char *)0x0;
  ppuStack_d8 = ppuVar6;
  FUN_00a5ecc0();
  if (0xf < local_78) {
    uStack_d4._0_4_ = (char *)local_8c;
                    /* WARNING: Subroutine does not return */
    ppuStack_d8 = (uint **)&UNK_006cf546;
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = (char **)((uint)local_8c & 0xffffff00);
  if (0xf < local_58) {
    uStack_d4._0_4_ = (char *)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_d8 = (uint **)&UNK_006cf569;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_18) {
    uStack_d4._0_4_ = (char *)local_2c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_d8 = (uint **)&UNK_006cf584;
    FUN_00aae91b();
  }
  local_8._0_1_ = 6;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char **)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_38) {
    uStack_d4._0_4_ = (char *)local_4c[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_d8 = (uint **)&UNK_006cf5a3;
    FUN_00aae91b();
  }
  uStack_d4._0_4_ = (char *)0x1;
  ppuStack_d8 = (uint **)&DAT_00df9644;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = (char **)((uint)local_4c[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 0x10;
  uStack_d4._0_4_ = (char *)0xb;
  ppuStack_d8 = (uint **)0xe0d724;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char **)((uint)local_2c[0] & 0xffffff00);
  FUN_00409350();
  uStack_d4._0_4_ = (char *)0x1;
  local_30 = (int *)&ppuStack_d8;
  local_8._0_1_ = 0x11;
  piVar4 = (int *)param_1[8];
  FUN_004e9130();
  __allmul();
  ppuStack_d8 = (uint **)__alldiv();
  FUN_00988a50();
  uStack_d4._0_4_ = (char *)local_4c;
  local_8._0_1_ = 0x12;
  ppuStack_d8 = (uint **)0x6cf635;
  uVar3 = FUN_00988f20();
  local_8._0_1_ = 0x13;
  uStack_d4._0_4_ = (char *)local_2c;
  ppuStack_d8 = (uint **)0x6cf649;
  (**(code **)(*piVar4 + 0x3c))();
  ppuStack_d8 = (uint **)0xffffffff;
  FUN_00408ed0(uVar3);
  ppuStack_d8 = (uint **)0x0;
  FUN_00a5ecc0();
  if (local_58 < 0x10) {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
    if (0xf < local_78) {
      ppuStack_d8 = (uint **)local_8c;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = (char **)((uint)local_8c & 0xffffff00);
    if (0xf < local_18) {
      ppuStack_d8 = (uint **)local_2c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 6;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (char **)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_38) {
      ppuStack_d8 = (uint **)local_4c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppuStack_d8 = (uint **)0xe;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (char **)((uint)local_4c[0] & 0xffffff00);
    FUN_00409350();
    ppuStack_d8 = (uint **)0x0;
    local_50 = (undefined4 *)&stack0xffffff24;
    local_8._0_1_ = 0x14;
    iVar7 = param_1[10];
    local_30 = (int *)param_1[8];
    lVar11 = __allmul(*(undefined4 *)(iVar7 + 0xb8),*(undefined4 *)(iVar7 + 0xbc),0x1f40000,0);
    iVar7 = FUN_004e9360(iVar7);
    uVar3 = __alldiv((longlong)(iVar7 * 1000) *
                     (longlong)
                     (int)((uint)(lVar11 >> 0xf) >> 0xf |
                          (int)((ulonglong)(lVar11 >> 0xf) >> 0x20) << 0x11),1000,0);
    *local_50 = uVar3;
    uVar3 = FUN_00988a50(local_6c);
    local_8._0_1_ = 0x15;
    ppuStack_d8 = (uint **)local_4c;
    (**(code **)(*local_30 + 0x3c))();
    FUN_00408ed0(uVar3,0);
    FUN_00a5ecc0(uVar3);
    if (local_58 < 0x10) {
      local_8._0_1_ = 6;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (char **)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = (char **)((uint)local_4c[0] & 0xffffff00);
      FUN_00409350("brigades_active");
      local_8._0_1_ = 0x16;
      local_30 = (int *)param_1[8];
      iVar7 = *(int *)(param_1[10] + 0xa4);
      param_2 = 0;
      while (iVar7 != 0) {
        iVar7 = *(int *)(iVar7 + 8);
        iVar8 = FUN_00965930();
        param_2 = param_2 + iVar8;
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (char **)((uint)local_2c[0] & 0xffffff00);
      local_8._0_1_ = 0x17;
      pcVar9 = __itoa(param_2,local_70,10);
      pcVar10 = pcVar9;
      do {
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar9);
      local_8 = CONCAT31(local_8._1_3_,0x18);
      (**(code **)(*local_30 + 0x3c))();
      FUN_00408ed0();
      FUN_00a5ecc0(local_2c,0);
      if (local_18 < 0x10) {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (char **)((uint)local_2c[0] & 0xffffff00);
        if (local_38 < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppuStack_d8 = (uint **)local_6c[0];
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

