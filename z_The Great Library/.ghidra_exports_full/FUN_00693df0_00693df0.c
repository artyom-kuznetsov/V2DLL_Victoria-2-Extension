// FUN_00693df0 @ 00693df0 body=[[00693df0, 00693fcd] [00693fd1, 00694035] [00694039, 006940ec] [006940f0, 006941ae] [006941b2, 006942eb] [006942ef, 0069445c] [00694460, 006944b1] [006944b5, 00694507] [0069450b, 00694612] [00694616, 006946e4] [006946e8, 00694854] [00694858, 006948ae] [006948b2, 006949af] [006949b3, 006949fd] [00694a01, 00694b2b] [00694b2f, 00694b7c] [00694b80, 00694bd3] [00694bd7, 00694beb]]


/* WARNING: Removing unreachable block (ram,0x006941e7) */

undefined4 * FUN_00693df0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auStack_214 [96];
  undefined4 uStack_1b4;
  code *pcStack_1b0;
  undefined4 uStack_1ac;
  uint *puStack_1a8;
  undefined ***pppuStack_1a4;
  int *piStack_1a0;
  char *pcStack_19c;
  undefined ***pppuStack_198;
  char *pcStack_194;
  uint *puStack_190;
  undefined8 uStack_18c;
  undefined **local_e0 [18];
  uint local_98;
  undefined4 local_88;
  uint local_84;
  undefined4 local_7c;
  undefined4 local_78;
  int *local_74;
  undefined4 local_70;
  undefined4 local_68;
  int *local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  uint local_50 [3];
  int local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7f08e;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_00f0d8a0;
  param_1[3] = DAT_00f0d8a4;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  FUN_009c1390();
  local_8 = 1;
  param_1[0xc] = CSessionInfoObserver::vftable;
  *param_1 = CIngameLobby::vftable;
  param_1[0xc] = CIngameLobby::vftable;
  param_1[0xe] = param_3;
  param_1[0x10] = CChatMessageObserverGlue<CIngameLobby>::vftable;
  param_1[0x11] = param_1;
  param_1[0x12] = FUN_00696b10;
  param_1[0x13] = 0;
  param_1[0x14] = CTextBufferObserverGlue<CIngameLobby>::vftable;
  param_1[0x15] = param_1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = FUN_00697290;
  param_1[0x1b] = 0;
  uStack_18c = 0;
  puStack_190 = (uint *)0x0;
  pcStack_194 = (char *)0x0;
  pppuStack_198 = (undefined ***)0x0;
  pcStack_19c = (char *)0x0;
  piStack_1a0 = (int *)0x0;
  pppuStack_1a4 = (undefined ***)0x0;
  puStack_1a8 = (uint *)0x0;
  uStack_1ac = 0;
  pcStack_1b0 = (code *)0x0;
  uStack_1b4 = 0x693ed8;
  FUN_006987e0();
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  uStack_18c = 0;
  puStack_190 = (uint *)0x0;
  pcStack_194 = (char *)0x0;
  pppuStack_198 = (undefined ***)0x0;
  pcStack_19c = (char *)0x0;
  piStack_1a0 = (int *)0x0;
  pppuStack_1a4 = (undefined ***)0x0;
  puStack_1a8 = (uint *)0x0;
  uStack_1ac = 0;
  pcStack_1b0 = FUN_00697f20;
  uStack_1b4 = 0x693f20;
  FUN_006987e0();
  uStack_18c = 0;
  puStack_190 = (uint *)0x0;
  pcStack_194 = (char *)0x0;
  pppuStack_198 = (undefined ***)0x0;
  pcStack_19c = (char *)0x0;
  piStack_1a0 = (int *)0x0;
  pppuStack_1a4 = (undefined ***)0x0;
  puStack_1a8 = (uint *)0x0;
  uStack_1ac = 0;
  pcStack_1b0 = (code *)&LAB_00697fa0;
  uStack_1b4 = 0x693f48;
  FUN_006987e0();
  iVar6 = DAT_012588e8;
  local_8._0_1_ = 8;
  param_1[0x62] = param_2;
  param_1[0x30] = *(undefined4 *)(iVar6 + 0xb24);
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 9;
  piVar4 = (int *)(**(code **)(*(int *)param_1[0x30] + 0x34))();
  iVar6 = *piVar4;
  (**(code **)(*(int *)param_1[0x30] + 0x3c))();
  uVar5 = (**(code **)(iVar6 + 0x2c))();
  param_1[0xd] = uVar5;
  local_8._0_1_ = 8;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(*(int *)(param_1[0xd] + 0x18) + 0x38))();
  *(undefined4 *)(param_2 + 0x84) = 0x661;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 10;
  FUN_00408ed0();
  local_8._0_1_ = 8;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar6 = FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (iVar6 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00648af0(auStack_214);
    uVar5 = FUN_009ae5f0(iVar6);
  }
  local_8 = CONCAT31(local_8._1_3_,8);
  param_1[0x37] = uVar5;
  iVar7 = (**(code **)(*(int *)param_1[0x30] + 0x100))();
  iVar6 = param_1[0x37];
  *(undefined4 *)(iVar6 + 0x1c4) = *(undefined4 *)(iVar7 + 0x24);
  *(undefined4 *)(iVar6 + 0x1c8) = *(undefined4 *)(iVar7 + 0x28);
  *(undefined4 *)(iVar6 + 0x1cc) = *(undefined4 *)(iVar7 + 0x2c);
  *(undefined4 *)(iVar6 + 0x1d0) = *(undefined4 *)(iVar7 + 0x30);
  FUN_00408ed0();
  FUN_00679bf0();
  puVar11 = *(undefined4 **)(DAT_012588e8 + 0x18);
  do {
    if (puVar11 == (undefined4 *)0x0) {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      iVar6 = (**(code **)(*(int *)param_1[0xd] + 0x40))();
      (**(code **)(*(int *)(iVar6 + 0x54) + 4))();
      local_8._0_1_ = 8;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      (**(code **)(*(int *)param_1[0x37] + 4))();
      if (*(char *)(param_1[0x37] + 0x34) == '\0') {
        puVar11 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 0x23;
        if (puVar11 != (undefined4 *)0x0) {
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          uStack_18c = CONCAT44(0x694a6a,(undefined4 *)uStack_18c);
          FUN_00409350();
          local_8 = CONCAT31(local_8._1_3_,0x24);
          local_18 = 8;
          uStack_18c = CONCAT44(0x694a82,(undefined4 *)uStack_18c);
          FUN_009a8ee0();
          local_8 = 0x25;
          local_18 = 0x18;
          iVar6 = FUN_00475500();
          uStack_18c = *(undefined8 *)(iVar6 + 0x6c);
          puStack_190 = (uint *)0x694abe;
          uVar5 = FUN_009a9880();
          local_8 = 0x26;
          puVar11[1] = 0x18d;
          *puVar11 = &PTR_FUN_00e3cffc;
          puVar11[7] = 0xf;
          puVar11[6] = 0;
          local_18 = 0x38;
          *(undefined1 *)(puVar11 + 2) = 0;
          uStack_18c = CONCAT44(uVar5,0x694af7);
          FUN_00408ed0();
          *puVar11 = &PTR_FUN_00e3d020;
        }
        local_8 = 0x29;
        FUN_00696b10();
        if ((local_18 & 0x20) != 0) {
          local_18 = local_18 & 0xffffffdf;
          if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_84 = 0xf;
          local_88 = 0;
          local_98 = local_98 & 0xffffff00;
        }
        local_8 = 0x27;
        if ((local_18 & 0x10) != 0) {
          local_18 = local_18 & 0xffffffef;
          FUN_009a9740();
        }
        uVar9 = local_18 & 8;
      }
      else {
        uStack_18c = CONCAT44(0x694717,(undefined4 *)uStack_18c);
        (**(code **)(**(int **)(param_1[0x37] + 0x38) + 8))();
        uStack_18c._4_4_ = (uint *)param_1[0x37];
        uStack_18c._0_4_ = (undefined4 *)0x69472b;
        (**(code **)(*(int *)param_1[0x30] + 0x48))();
        uStack_18c._0_4_ = (undefined4 *)0x88;
        puStack_190 = (uint *)0x694735;
        puVar11 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 0x17;
        if (puVar11 == (undefined4 *)0x0) {
          uVar5 = 0;
        }
        else {
          pcStack_194 = *(char **)(param_1[0x37] + 0x6c);
          pppuStack_198 = (undefined ***)param_1[0x62];
          uStack_18c._0_4_ = param_1;
          puStack_190 = (uint *)0x1;
          piStack_1a0 = (int *)0x69475d;
          pcStack_19c = (char *)puVar11;
          uVar5 = FUN_0072c420();
        }
        local_8._0_1_ = 8;
        uStack_18c = CONCAT44(uStack_18c._4_4_,uVar5);
        puStack_190 = (uint *)0x694776;
        (**(code **)(**(int **)(param_1[0x37] + 0x38) + 0x18))();
        puStack_190 = (uint *)0xf;
        pcStack_194 = "ingamelobby.cpp";
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        pppuStack_198 = (undefined ***)0x694797;
        FUN_00409350();
        puStack_190 = (uint *)0x10002;
        pppuStack_198 = (undefined ***)local_34;
        pcStack_194 = (char *)0x88;
        local_8._0_1_ = 0x18;
        pcStack_19c = (char *)0x6947b4;
        FUN_004015b0();
        local_8._0_1_ = 0x19;
        puVar2 = *(uint **)(param_1[0x37] + 0x6c);
        puStack_190 = (uint *)DAT_012588e8;
        pcStack_194 = (char *)0x6947d5;
        puVar11 = (undefined4 *)FUN_0068b610();
        puStack_190 = (uint *)0x6947e1;
        pcStack_194 = (char *)FUN_00987d20();
        if (0xf < (uint)puVar11[5]) {
          puVar11 = (undefined4 *)*puVar11;
        }
        pppuStack_198 = (undefined ***)0x6947f0;
        puStack_190 = puVar11;
        pcStack_19c = (char *)FUN_00418e30();
        pppuStack_198 = (undefined ***)0xe0b0cc;
        piStack_1a0 = (int *)0x694803;
        puStack_190 = puVar2;
        pcStack_194 = (char *)FUN_00418e30();
        pppuStack_198 = (undefined ***)0x69480c;
        pppuStack_198 = (undefined ***)FUN_00447240();
        pcStack_19c = (char *)0x694812;
        FUN_00401280();
        pppuStack_198 = local_e0;
        local_8._0_1_ = 0x18;
        pcStack_19c = (char *)0x694825;
        FUN_00987ac0();
        pppuStack_198 = local_e0;
        local_e0[0] = std::ios_base::vftable;
        pcStack_19c = (char *)0x69483b;
        FUN_00aad52d();
        local_8._0_1_ = 8;
        if (0xf < local_20) {
          pppuStack_198 = (undefined ***)local_34[0];
                    /* WARNING: Subroutine does not return */
          pcStack_19c = &UNK_00694855;
          FUN_00aae91b();
        }
        pppuStack_198 = (undefined ***)0xc;
        pcStack_19c = "start_button";
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        piStack_1a0 = (int *)0x694879;
        FUN_00409350();
        local_8._0_1_ = 0x1a;
        pppuStack_198 = (undefined ***)local_34;
        pcStack_19c = (char *)0x69488b;
        iVar6 = (**(code **)(*(int *)param_1[0xd] + 0x34))();
        pcStack_19c = (char *)(param_1 + 0x3a);
        piStack_1a0 = (int *)0x69489d;
        (**(code **)(*(int *)(iVar6 + 0x54) + 4))();
        local_8._0_1_ = 8;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puVar11 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 0x1b;
        if (puVar11 != (undefined4 *)0x0) {
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          uStack_18c = CONCAT44(0x6948ee,(undefined4 *)uStack_18c);
          FUN_00409350();
          local_8 = CONCAT31(local_8._1_3_,0x1c);
          local_18 = 1;
          uStack_18c = CONCAT44(0x694906,(undefined4 *)uStack_18c);
          FUN_009a8ee0();
          local_8 = 0x1d;
          local_18 = 3;
          iVar6 = FUN_00475500();
          uStack_18c = *(undefined8 *)(iVar6 + 0x6c);
          puStack_190 = (uint *)0x694942;
          uVar5 = FUN_009a9880();
          local_8 = 0x1e;
          puVar11[1] = 0x18d;
          *puVar11 = &PTR_FUN_00e3cffc;
          puVar11[7] = 0xf;
          puVar11[6] = 0;
          local_18 = 7;
          *(undefined1 *)(puVar11 + 2) = 0;
          uStack_18c = CONCAT44(uVar5,0x69497b);
          FUN_00408ed0();
          *puVar11 = &PTR_FUN_00e3d020;
        }
        local_8 = 0x21;
        FUN_00696b10();
        if ((local_18 & 4) != 0) {
          local_18 = local_18 & 0xfffffffb;
          if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_84 = 0xf;
          local_88 = 0;
          local_98 = local_98 & 0xffffff00;
        }
        if ((local_18 & 2) != 0) {
          local_18 = local_18 & 0xfffffffd;
          local_8 = 0x22;
          FUN_009adb70();
          if (local_44 != 0) {
            FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
        }
        uVar9 = local_18 & 1;
      }
      if ((uVar9 != 0) && (0xf < local_20)) {
        local_8 = 8;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 8;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      uStack_18c = CONCAT44(0x694ba1,(undefined4 *)uStack_18c);
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x2a);
      iVar6 = (**(code **)(*(int *)param_1[0xd] + 0x34))();
      uStack_18c = CONCAT44(0x694bc5,(undefined4 *)uStack_18c);
      (**(code **)(*(int *)(iVar6 + 0x54) + 4))();
      if (local_20 < 0x10) {
        ExceptionList = local_10;
        return param_1;
      }
      uStack_18c = CONCAT44(local_34[0],&UNK_00694bd4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar6 = param_1[0x32];
    puVar8 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0xc;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar8 + 0x14) = 0xf;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      *puVar8 = 0;
      FUN_00408ed0();
      *(int *)(puVar8 + 0x1c) = iVar6;
      *(undefined4 *)(puVar8 + 0x20) = 0;
      puVar8[0x24] = 0;
    }
    local_8._0_1_ = 8;
    iVar7 = param_1[0x33];
    param_1[0x32] = puVar8;
    param_1[0x33] = iVar7 + 1;
    if (iVar7 == 0) {
      param_1[0x31] = puVar8;
    }
    else {
      *(undefined1 **)(iVar6 + 0x20) = puVar8;
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    local_74 = (int *)(**(code **)(*(int *)param_1[0xd] + 0x7c))();
    local_8._0_1_ = 8;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_60 = CONCAT31(local_60._1_3_,1);
    if (*(char *)(param_1[0x37] + 0x34) != '\0') {
      uVar9 = *(uint *)(param_1[0x62] + 0x10);
      uVar1 = puVar11[4];
      iVar6 = FUN_00414bd0();
      bVar12 = false;
      if (iVar6 == 0) {
        if (uVar1 < uVar9) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar1 != uVar9);
        }
        bVar12 = uVar9 == 0;
      }
      if (!bVar12) {
        local_60 = local_60 & 0xffffff00;
      }
    }
    iVar6 = FUN_00aae9af();
    local_8._0_1_ = 0xe;
    if (iVar6 == 0) {
      local_54 = (undefined4 *)0x0;
    }
    else {
      piVar4 = (int *)param_1[0x30];
      (**(code **)(*piVar4 + 0x3c))();
      (**(code **)(*piVar4 + 0x34))();
      uStack_18c = CONCAT44(0x69426b,(undefined4 *)uStack_18c);
      local_54 = (undefined4 *)FUN_00693b90();
    }
    local_8._0_1_ = 8;
    piVar4 = (int *)local_54[8];
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xf;
    (**(code **)(*piVar4 + 0x3c))();
    uStack_18c = CONCAT44(0x6942c8,(undefined4 *)uStack_18c);
    FUN_00408ed0();
    FUN_00a5ecc0();
    local_8._0_1_ = 8;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 8;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = puVar11[8];
    local_20 = 0xf;
    local_34[0] = local_34[0] & 0xffffff00;
    if (puVar11[9] == 0) {
      local_24 = 0;
      local_8._0_1_ = uVar3;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x11);
      local_64 = (int *)(DAT_012587e4 + 0x1a4);
      param_3 = 0;
      iVar6 = *(int *)(DAT_012587e4 + 0x1a8) - *local_64 >> 3;
      if (0 < iVar6) {
        do {
          uStack_18c = CONCAT44(0x6943c8,(undefined4 *)uStack_18c);
          iVar7 = __strnicmp("REB",(char *)(*local_64 + param_3 * 8),3);
          if (iVar7 == 0) {
            local_5c = *(undefined4 *)(*local_64 + param_3 * 8);
            local_58 = *(undefined4 *)(*local_64 + 4 + param_3 * 8);
            goto LAB_006943ed;
          }
          param_3 = param_3 + 1;
        } while (param_3 < iVar6);
      }
      local_70 = 0x2d2d2d;
      local_58 = 0;
      local_5c = 0x2d2d2d;
LAB_006943ed:
      iVar6 = (**(code **)(*piVar4 + 0x44))();
      (**(code **)(**(int **)(iVar6 + 0x94) + 0x14c))();
      iVar6 = **(int **)(iVar6 + 0x94);
      FUN_0052fc10();
    }
    else {
      local_24 = 0;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x10);
      local_7c = puVar11[8];
      local_78 = puVar11[9];
      iVar6 = (**(code **)(*piVar4 + 0x44))();
      (**(code **)(**(int **)(iVar6 + 0x94) + 0x14c))();
      iVar6 = **(int **)(iVar6 + 0x94);
      FUN_0052fc10();
    }
    uStack_18c = CONCAT44(0x694446,(undefined4 *)uStack_18c);
    (**(code **)(iVar6 + 0x150))();
    local_8._0_1_ = 8;
    if (0xf < local_20) {
      uStack_18c = CONCAT44(local_34[0],&UNK_0069445d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_18c = 0xd00e0b080;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_190 = (uint *)0x694481;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    uStack_18c._4_4_ = local_34;
    uStack_18c._0_4_ = (undefined4 *)0x694492;
    piVar10 = (int *)(**(code **)(*piVar4 + 0x44))();
    uStack_18c = CONCAT44(uStack_18c._4_4_,3);
    puStack_190 = (uint *)0x6944a0;
    (**(code **)(*piVar10 + 0xb4))();
    local_8._0_1_ = 8;
    if (0xf < local_20) {
      puStack_190 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      pcStack_194 = &UNK_006944b2;
      FUN_00aae91b();
    }
    puStack_190 = (uint *)0xb;
    pcStack_194 = "button_kick";
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    pppuStack_198 = (undefined ***)0x6944d6;
    FUN_00409350();
    local_8._0_1_ = 0x13;
    puStack_190 = local_34;
    pcStack_194 = (char *)0x6944e7;
    iVar6 = (**(code **)(*piVar4 + 0x34))();
    pcStack_194 = (char *)(param_1 + 0x1c);
    pppuStack_198 = (undefined ***)0x6944f6;
    (**(code **)(*(int *)(iVar6 + 0x54) + 4))();
    local_8._0_1_ = 8;
    if (0xf < local_20) {
      pppuStack_198 = (undefined ***)local_34[0];
                    /* WARNING: Subroutine does not return */
      pcStack_19c = &UNK_00694508;
      FUN_00aae91b();
    }
    pppuStack_198 = (undefined ***)0x1;
    pcStack_19c = (char *)local_54;
    piStack_1a0 = (int *)0x69451b;
    (**(code **)(*local_74 + 0x10))();
    piStack_1a0 = (int *)0xf;
    pppuStack_1a4 = (undefined ***)0xe0b09c;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    puStack_1a8 = (uint *)0x69453c;
    FUN_00409350();
    piStack_1a0 = (int *)0x10002;
    puStack_1a8 = local_50;
    pppuStack_1a4 = (undefined ***)0x6f;
    local_8._0_1_ = 0x14;
    uStack_1ac = 0x694556;
    FUN_004015b0();
    local_8 = CONCAT31(local_8._1_3_,0x15);
    piStack_1a0 = (int *)0x694569;
    pppuStack_1a4 = (undefined ***)FUN_00987d20();
    piStack_1a0 = puVar11;
    if (0xf < (uint)puVar11[5]) {
      piStack_1a0 = (int *)*puVar11;
    }
    puStack_1a8 = (uint *)0x69457b;
    uStack_1ac = FUN_00418e30();
    puStack_1a8 = (uint *)0xe0b090;
    pcStack_1b0 = (code *)0x694586;
    piVar4 = (int *)FUN_00418e30();
    pppuStack_1a4 = (undefined ***)0x694591;
    piStack_1a0 = piVar4;
    FUN_00408be0();
    uVar9 = 0;
    if ((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) {
      pppuStack_1a4 = (undefined ***)0x6945ac;
      iVar6 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))();
      if (iVar6 == -1) {
        uVar9 = 4;
      }
    }
    if (uVar9 != 0) {
      puStack_1a8 = (uint *)(*(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar9);
      if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
        puStack_1a8 = (uint *)((uint)puStack_1a8 | 4);
      }
      pppuStack_1a4 = (undefined ***)0x0;
      uStack_1ac = 0x6945d7;
      FUN_00401120();
    }
    pppuStack_1a4 = local_e0;
    local_8._0_1_ = 0x14;
    puStack_1a8 = (uint *)0x6945e7;
    FUN_00987ac0();
    pppuStack_1a4 = local_e0;
    local_e0[0] = std::ios_base::vftable;
    puStack_1a8 = (uint *)0x6945fd;
    FUN_00aad52d();
    local_8 = CONCAT31(local_8._1_3_,8);
    if (0xf < local_3c) {
      pppuStack_1a4 = (undefined ***)local_50[0];
                    /* WARNING: Subroutine does not return */
      puStack_1a8 = (uint *)&UNK_00694613;
      FUN_00aae91b();
    }
    puVar11 = (undefined4 *)puVar11[0xf];
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (DAT_00f20c18 == (int *)0x0) {
      pppuStack_1a4 = (undefined ***)0x4;
      puStack_1a8 = (uint *)0x694642;
      DAT_00f20c18 = (int *)FUN_00aae9af();
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    pppuStack_1a4 = (undefined ***)0x694679;
    piVar4 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
    param_1[0x36] = piVar4;
    pppuStack_1a4 = (undefined ***)0x694688;
    (**(code **)(*piVar4 + 4))();
  } while( true );
}

