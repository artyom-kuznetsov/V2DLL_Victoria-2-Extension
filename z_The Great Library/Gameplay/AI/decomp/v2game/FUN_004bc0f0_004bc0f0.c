// FUN_004bc0f0 @ 004bc0f0 body=[[004bc0f0, 004bc1f1] [004bc1f5, 004bc730] [004bc734, 004bc751] [004bc755, 004bc780] [004bc784, 004bc7a9] [004bc7b2, 004bc808] [004bc810, 004bcad0]]


/* WARNING: Removing unreachable block (ram,0x004bcaad) */

undefined1 * FUN_004bc0f0(undefined8 *param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined8 local_e8;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [4];
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  int *local_60;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_24;
  undefined4 local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_3;
  puVar3 = param_2;
  puVar12 = (undefined1 *)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b826cc;
  local_10 = ExceptionList;
  param_3 = (int *)0x0;
  if (*(char *)(*(int *)((int)param_1 + 0x5c) + 0x2a) == '\0') {
    ExceptionList = &local_10;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    local_e8 = 0xded94d;
    *param_2 = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return puVar3;
  }
  if (*(int *)((int)param_1 + 300) != 0) {
    local_e8 = 0x1000dfd0a4;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_e8 = CONCAT44(local_5c,local_90);
    local_8 = 0;
    FUN_009a8ee0();
    local_8._0_1_ = 1;
    local_e8 = CONCAT44(0x4bc19e,(undefined4)local_e8);
    iVar6 = FUN_00475500();
    puVar12 = param_2;
    local_e8 = *(undefined8 *)(iVar6 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,2);
    local_e8 = CONCAT44(0x4bc1cf,(undefined4)local_e8);
    FUN_009adb70();
    if (local_8c != 0) {
      local_e8 = CONCAT44(0x4bc1e6,(undefined4)local_e8);
      FUN_009e6a80();
      local_e8 = CONCAT44(local_8c,&UNK_004bc1f2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    if (local_48 < 0x10) {
      ExceptionList = local_10;
      return puVar12;
    }
    local_e8 = CONCAT44(local_5c[0],0x4bcab9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = &local_10;
  if ((*(int *)((int)param_1 + 0x164) != 0) &&
     (ExceptionList = &local_10, **(int **)((int)param_1 + 0x15c) != 0)) {
    local_e8 = CONCAT44(0x4bc230,(undefined4)local_e8);
    ExceptionList = &local_10;
    cVar5 = FUN_004cb190();
    if (cVar5 != '\0') {
      local_e8 = CONCAT44(0x4bc23d,(undefined4)local_e8);
      cVar5 = FUN_004cb420();
      if (cVar5 == '\0') {
        local_e8 = CONCAT44(local_40,0x4bc24f);
        uVar7 = FUN_009888f0();
        local_8 = 3;
        goto LAB_004bc260;
      }
    }
  }
  local_20 = *puVar4;
  local_e8 = CONCAT44(0x4bc293,(undefined4)local_e8);
  iVar6 = FUN_005379e0();
  if (iVar6 != 1) {
    local_20 = *puVar4;
    local_e8 = CONCAT44(0x4bc2ac,(undefined4)local_e8);
    iVar6 = FUN_005379e0();
    if (iVar6 != 0) {
      local_e8 = CONCAT44(0x4bc2bd,(undefined4)local_e8);
      FUN_009885d0();
      local_e8 = CONCAT44(local_40,local_90);
      local_8 = 4;
      FUN_009a8ee0();
      local_8._0_1_ = 5;
      local_e8 = CONCAT44(0x4bc2df,(undefined4)local_e8);
      iVar6 = FUN_00475500();
      puVar12 = param_2;
      local_e8 = *(undefined8 *)(iVar6 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
      local_8 = CONCAT31(local_8._1_3_,4);
      local_e8 = CONCAT44(local_90,0x4bc310);
      FUN_009a9740();
      local_e8 = CONCAT44(0x4bc318,(undefined4)local_e8);
      FUN_00408ad0();
      ExceptionList = local_10;
      return puVar12;
    }
  }
  if ((*(int *)(puVar12 + 0x164) != 0) && (iVar6 = **(int **)(puVar12 + 0x15c), iVar6 != 0)) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == iVar6)) {
LAB_004bc351:
      puVar12 = param_2;
      local_e8 = CONCAT44(param_2,0x4bc35f);
      FUN_00475d50();
      ExceptionList = local_10;
      return puVar12;
    }
    local_20 = *puVar4;
    local_e8 = CONCAT44(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + puVar4[1] * 4),0x4bc37e);
    cVar5 = FUN_005395a0();
    if (cVar5 != '\0') goto LAB_004bc351;
    local_e8 = CONCAT44(0x4bc38e,(undefined4)local_e8);
    FUN_004cb3c0();
    puVar12 = (undefined1 *)param_1;
    if (*(int *)(iVar6 + 0x80) == 0) {
      param_3 = (int *)((int)param_3 +
                       (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x10c) / 1000) * 0x18);
      if (*(int *)(DAT_012588e8 + 0xb0c) < (int)param_3) {
        local_e8 = CONCAT44(local_40,&param_3);
        uVar7 = FUN_0043acd0();
        local_8 = 6;
LAB_004bc260:
        puVar12 = param_2;
        local_e8 = CONCAT44(uVar7,param_2);
        FUN_0042c180();
        local_e8 = CONCAT44(0x4bc275,(undefined4)local_e8);
        FUN_00408ad0();
        ExceptionList = local_10;
        return puVar12;
      }
    }
    else {
      param_3 = (int *)((int)param_3 +
                       (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x108) / 1000) * 0x18);
      if (*(int *)(DAT_012588e8 + 0xb0c) < (int)param_3) {
        local_e8 = CONCAT44(local_40,&param_3);
        uVar7 = FUN_0043acd0();
        local_8 = 7;
        goto LAB_004bc260;
      }
    }
  }
  local_8 = 8;
  local_20 = *puVar4;
  iVar6 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar4[1] * 4) + 0xbcc);
  if (*(int *)(puVar12 + 0x1a4) * 1000 < *(int *)(iVar6 + 0x294) + *(int *)(iVar6 + 0x54)) {
    local_e8 = CONCAT44(0x4bc4c8,(undefined4)local_e8);
    FUN_009885d0();
    local_8._0_1_ = 9;
    local_20 = *puVar4;
    iVar6 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar4[1] * 4) + 0xbcc);
    param_3 = (int *)((int)&local_e8 + 4);
    local_e8 = CONCAT44(*(int *)(iVar6 + 0x54) + *(int *)(iVar6 + 0x294),local_98);
    uVar7 = FUN_00988970();
    local_8._0_1_ = 10;
    local_e8 = CONCAT44(local_5c,0x4bc520);
    uVar8 = FUN_009888f0();
    local_e8 = CONCAT44(uVar7,&DAT_00dfd13c);
    local_8._0_1_ = 0xb;
    FUN_0043ec10(local_b4,&DAT_00dfd144,uVar8);
    local_8._0_1_ = 0xc;
    local_e8 = CONCAT44(local_40,0x4bc556);
    FUN_00988f20();
    local_e8 = 0xffffffff00000000;
    local_8._0_1_ = 0xd;
    FUN_00448aa0();
    local_e8 = CONCAT44(0x4bc571,(undefined4)local_e8);
    FUN_00408ad0();
    local_e8 = CONCAT44(0x4bc57c,(undefined4)local_e8);
    FUN_00408ad0();
    local_e8 = CONCAT44(0x4bc584,(undefined4)local_e8);
    FUN_00408ad0();
    local_e8 = CONCAT44(0x4bc58f,(undefined4)local_e8);
    FUN_00408ad0();
    local_8._0_1_ = 8;
    local_e8 = CONCAT44(0x4bc59b,(undefined4)local_e8);
    FUN_00408ad0();
    local_e8 = CONCAT44(0x4bc5a8,(undefined4)local_e8);
    FUN_009885d0();
    local_8._0_1_ = 0xe;
    local_20 = *puVar4;
    local_e8 = CONCAT44(local_40,local_7c);
    FUN_005467e0();
    local_e8 = 0xffffffff00000000;
    local_8._0_1_ = 0xf;
    FUN_00448aa0();
    local_e8 = CONCAT44(0x4bc5e9,(undefined4)local_e8);
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,8);
    local_e8 = CONCAT44(0x4bc5f4,(undefined4)local_e8);
    FUN_00408ad0();
  }
  iVar6 = *(int *)(puVar12 + 0x5c);
  iVar1 = (*(int *)(iVar6 + 0xcc) - *(int *)(iVar6 + 200)) / 0x24;
  param_3 = (int *)((uint)param_3 & 0xffffff);
  if (0 < iVar1) {
    local_18 = *(int *)(DAT_012588e8 + 0xacc);
    iVar11 = 0;
    local_14 = iVar1;
    do {
      if (*(int *)(*(int *)(local_18 + *(int *)(*(int *)(iVar6 + 200) + 4 + iVar11) * 4) + 300) ==
          puVar4[1]) {
        param_3 = (int *)CONCAT13(1,param_3._0_3_);
      }
      iVar11 = iVar11 + 0x24;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_14 = 0;
    if (param_3._3_1_ != '\0') goto LAB_004bca7e;
  }
  if (*(int *)(puVar12 + 0x158) == 0) {
    local_e8 = 0x100dee2cc;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    local_e8 = 0x1c00dfd164;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350();
    local_e8 = CONCAT44(local_5c,local_90);
    local_8._0_1_ = 0x11;
    FUN_009a8ee0();
    local_8._0_1_ = 0x12;
    local_e8 = CONCAT44(0x4bc6d6,(undefined4)local_e8);
    iVar6 = FUN_00475500();
    local_e8 = *(undefined8 *)(iVar6 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
    local_8._0_1_ = 0x13;
    local_e8 = CONCAT44(local_b4,0x4bc70d);
    FUN_00988f20();
    local_e8 = 0xffffffff00000000;
    local_8._0_1_ = 0x14;
    FUN_00448aa0();
    if (0xf < local_68) {
      local_e8 = CONCAT44(local_7c[0],&UNK_004bc731);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_2c) {
      local_e8 = CONCAT44(local_40[0],&UNK_004bc752);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    local_8._0_1_ = 0x11;
    local_e8 = CONCAT44(local_90,0x4bc76e);
    FUN_009a9740();
    if (0xf < local_48) {
      local_e8 = CONCAT44(local_5c[0],&UNK_004bc781);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,8);
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    if (0xf < local_a0) {
      local_e8 = CONCAT44(local_b4[0],&UNK_004bc7aa);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_004bca7e;
  }
  local_20 = *puVar4;
  local_18 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar4[1] * 4) + 0x10c);
  param_3 = (int *)0x0;
  if ((*(int *)(puVar12 + 300) == 0) && (*(char *)(iVar6 + 0x2a) != '\0')) {
    local_20 = *puVar4;
    piVar9 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar4[1] * 4) + 0xa38);
    local_14 = 0x5f5dd18;
    if (piVar9 == (int *)0x0) goto LAB_004bc885;
    do {
      piVar2 = (int *)*piVar9;
      local_60 = (int *)piVar9[2];
      if (((char)piVar2[0x5c] == '\0') && (piVar2[0x4d] == piVar2[0x4b])) {
        local_e8 = CONCAT44(piVar2[0x16],&local_24);
        FUN_00456700();
        puVar12 = local_24;
        if (0 < (int)local_24) {
          local_e8 = CONCAT44(0x4bc864,(undefined4)local_e8);
          piVar9 = (int *)FUN_004dbb10();
          if ((int)puVar12 - *piVar9 < local_14) {
            param_3 = piVar2;
            local_14 = (int)puVar12 - *piVar9;
          }
        }
      }
      piVar9 = local_60;
    } while (local_60 != (int *)0x0);
    if (param_3 == (int *)0x0) goto LAB_004bc885;
    local_e8 = CONCAT44(0x4bc952,(undefined4)local_e8);
    FUN_004dbb10();
    piVar9 = param_3;
    local_e8 = CONCAT44(param_3[0x16],&param_1);
    FUN_00456700();
    local_e8 = ZEXT48(param_1);
    if (param_1 == (undefined8 *)local_24 || (int)param_1 - (int)local_24 < 0) {
      param_1 = &local_e8;
      uVar7 = FUN_00988a50();
      param_1 = &local_e8;
      local_8._0_1_ = 0x1a;
      local_e8 = ZEXT48(local_24);
      uVar8 = FUN_00988a50();
      local_8._0_1_ = 0x1b;
      local_e8 = CONCAT44(local_7c,0x4bc9bb);
      uVar10 = (**(code **)(*piVar9 + 0x1c))();
      local_e8 = CONCAT44(uVar7,&DAT_00dfd184);
      local_8._0_1_ = 0x1c;
      FUN_0043e9a0(local_40,&DAT_00df85c0,uVar10,&DAT_00dfd18c,uVar8);
      local_8 = CONCAT31(local_8._1_3_,0x1d);
    }
    else {
      param_1 = &local_e8;
      uVar7 = FUN_00988a50();
      param_1 = &local_e8;
      local_8._0_1_ = 0x1e;
      local_e8 = ZEXT48(local_24);
      uVar8 = FUN_00988a50();
      local_8._0_1_ = 0x1f;
      local_e8 = CONCAT44(local_7c,0x4bca1c);
      uVar10 = (**(code **)(*piVar9 + 0x1c))();
      local_e8 = CONCAT44(uVar7,&DAT_00dfd184);
      local_8._0_1_ = 0x20;
      FUN_0043e9a0(local_40,&DAT_00df85c0,uVar10,&DAT_00dfd18c,uVar8);
      local_8 = CONCAT31(local_8._1_3_,0x21);
    }
    local_e8 = 0xffffffff00000000;
    FUN_00448aa0();
    local_e8 = CONCAT44(0x4bca5f,(undefined4)local_e8);
    FUN_00408ad0();
    local_e8 = CONCAT44(0x4bca67,(undefined4)local_e8);
    FUN_00408ad0();
    local_e8 = CONCAT44(0x4bca72,(undefined4)local_e8);
    FUN_00408ad0();
  }
  else {
LAB_004bc885:
    local_e8 = CONCAT44(0x4bc892,(undefined4)local_e8);
    FUN_009885d0();
    local_8._0_1_ = 0x15;
    local_e8 = CONCAT44(0x4bc8a3,(undefined4)local_e8);
    FUN_009885d0();
    local_e8 = CONCAT44(local_40,local_90);
    local_8._0_1_ = 0x16;
    FUN_009a8ee0();
    local_8._0_1_ = 0x17;
    local_e8 = CONCAT44(0x4bc8c2,(undefined4)local_e8);
    iVar6 = FUN_00475500();
    local_e8 = *(undefined8 *)(iVar6 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
    local_8._0_1_ = 0x18;
    local_e8 = CONCAT44(local_7c,0x4bc8f9);
    FUN_00988f20();
    local_e8 = 0xffffffff00000000;
    local_8._0_1_ = 0x19;
    FUN_00448aa0();
    local_e8 = CONCAT44(0x4bc914,(undefined4)local_e8);
    FUN_00408ad0();
    local_e8 = CONCAT44(0x4bc91c,(undefined4)local_e8);
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x16);
    local_e8 = CONCAT44(local_90,0x4bc92b);
    FUN_009a9740();
    local_e8 = CONCAT44(0x4bc933,(undefined4)local_e8);
    FUN_00408ad0();
  }
  local_8 = CONCAT31(local_8._1_3_,8);
  local_e8 = CONCAT44(0x4bca7e,(undefined4)local_e8);
  FUN_00408ad0();
LAB_004bca7e:
  puVar12 = param_2;
  local_e8 = 0xffffffff00000000;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0();
  ExceptionList = local_10;
  return puVar12;
}

