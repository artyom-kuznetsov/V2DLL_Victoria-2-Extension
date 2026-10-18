// FUN_00732a10 @ 00732a10 body=[[00732a10, 00732b82] [00732b86, 00732ba8] [00732bac, 00732bd5] [00732bd9, 00732c4f] [00732c53, 00732c7c] [00732c80, 00732cf7] [00732cfb, 00732db5] [00732db9, 00732e35] [00732e39, 00732eb8] [00732ebc, 00732f20] [00732f24, 00732f3a]]


void FUN_00732a10(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  int iVar8;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint auStack_50 [4];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b44380;
  pvStack_14 = ExceptionList;
  if (param_2 == '\0') {
    ExceptionList = &pvStack_14;
    if (*(char *)((int)*(int **)(in_ECX + 0x84) + 0x4f) != '\0') {
      ExceptionList = &pvStack_14;
      (**(code **)(**(int **)(in_ECX + 0x84) + 0x38))();
    }
    piVar7 = *(int **)(in_ECX + 0x80);
  }
  else {
    ExceptionList = &pvStack_14;
    if (*(char *)((int)*(int **)(in_ECX + 0x80) + 0x4f) != '\0') {
      ExceptionList = &pvStack_14;
      (**(code **)(**(int **)(in_ECX + 0x80) + 0x38))();
    }
    piVar7 = *(int **)(in_ECX + 0x84);
  }
  if (*(char *)((int)piVar7 + 0x4f) == '\0') {
    (**(code **)(*piVar7 + 0x34))();
  }
  uStack_58 = 0xf;
  uStack_5c = 0;
  uStack_6c = uStack_6c & 0xffffff00;
  if (param_1 == 0) {
    *(undefined4 *)(in_ECX + 0x78) = 0;
    *(undefined4 *)(in_ECX + 0x7c) = 0;
    FUN_00409350(&DAT_00ded974,1);
    iStack_c = 9;
    FUN_00408ed0(&uStack_6c,0,0xffffffff);
    FUN_00a5ecc0(&uStack_6c,0);
    iStack_c = -1;
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_6c);
    }
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x48))(1);
    uStack_64 = 0xf;
    uStack_68 = 0;
    uStack_78 = uStack_78 & 0xffffff00;
    FUN_00409350(&DAT_00ded974,1);
    uStack_18 = 10;
    FUN_00408ed0(&uStack_78,0,0xffffffff);
    FUN_00a5ecc0(&uStack_78,0);
    uStack_18 = 0xffffffff;
    if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_78);
    }
    uStack_80 = 0xf;
    uStack_84 = 0;
    uStack_94 = uStack_94 & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    uStack_18 = 0xb;
    FUN_00408ed0(&uStack_94,0,0xffffffff);
    FUN_00a5ecc0(&uStack_94,0);
    uVar1 = uStack_94;
    uVar4 = uStack_80;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(in_ECX + 0x78) = uVar6;
    FUN_00409350(&DAT_00ded94d,0);
    iStack_c = 0;
    uVar1 = *(uint *)(param_1 + 0x90);
    iVar2 = *(int *)(param_1 + 0x94);
    if ((uVar1 != 0) || (iVar2 != 0)) {
      iVar8 = DAT_01258a94;
      if (uVar1 < 0x1269) {
        iVar8 = DAT_01258a98;
      }
      uStack_90 = uVar1;
      iStack_8c = iVar2;
      if ((iVar8 != 0) && (uStack_90 = FUN_009c1d40(), uStack_90 != 0)) {
        uStack_74 = 0xf;
        uStack_78 = 0;
        uStack_88 = uStack_88 & 0xffffff00;
        FUN_00409350(&DAT_00ded950,1);
        iStack_c._0_1_ = 1;
        FUN_00974c50(*(undefined4 *)(uStack_90 + 0x6c));
        iStack_c._0_1_ = 2;
        uVar6 = FUN_00988f20(&uStack_88);
        iStack_c._0_1_ = 3;
        FUN_00448aa0(uVar6,0,0xffffffff);
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_50[0]);
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        auStack_50[0] = auStack_50[0] & 0xffffff00;
        if ((void *)0xf < pvStack_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_34);
        }
        iStack_c = (uint)iStack_c._1_3_ << 8;
        pvStack_20 = (void *)0xf;
        uStack_24 = 0;
        uStack_34 = uStack_34 & 0xffffff00;
        if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_88);
        }
      }
    }
    uVar6 = (**(code **)(**(int **)(param_1 + 0x88) + 0x18))(auStack_50);
    puStack_10._0_1_ = 4;
    uVar6 = FUN_00988f20(uVar6);
    puStack_10._0_1_ = 5;
    uStack_94 = *(uint *)(in_ECX + 0x88);
    FUN_00408ed0(uVar6,0,0xffffffff);
    FUN_00a5ecc0(uVar6,0);
    if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_38);
    }
    puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
    uStack_24 = 0xf;
    uStack_28 = 0;
    uStack_38 = uStack_38 & 0xffffff00;
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_54);
    }
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x48))
              (*(undefined4 *)(*(int *)(param_1 + 0x88) + 0x28));
    uVar6 = (**(code **)(**(int **)(param_1 + 0x48) + 0x1c))(&uStack_3c);
    uStack_18._0_1_ = 6;
    FUN_00408ed0(uVar6,0,0xffffffff);
    FUN_00a5ecc0(uVar6,0);
    uStack_18._0_1_ = 0;
    uVar5 = (undefined1)uStack_18;
    uStack_18._0_1_ = 0;
    if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_40);
    }
    if (param_2 == '\0') {
      uStack_80 = 0xf;
      uStack_84 = 0;
      uStack_94 = uStack_94 & 0xffffff00;
      uStack_18._0_1_ = uVar5;
      FUN_00409350(&DAT_00ded94d,0);
      uStack_18 = CONCAT31(uStack_18._1_3_,8);
      FUN_00408ed0(&uStack_94,0,0xffffffff);
      FUN_00a5ecc0(&uStack_94,0);
      uVar3 = uStack_94;
      uStack_2c = uStack_80;
    }
    else {
      uVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + 0x16c) + 0x18))(&uStack_40);
      uStack_18 = CONCAT31(uStack_18._1_3_,7);
      FUN_00408ed0(uVar6,0,0xffffffff);
      FUN_00a5ecc0(uVar6,0);
      uVar3 = uStack_40;
    }
    uVar1 = uStack_78;
    uVar4 = uStack_64;
    if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar3);
    }
  }
  if (uVar4 < 0x10) {
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uVar1);
}

