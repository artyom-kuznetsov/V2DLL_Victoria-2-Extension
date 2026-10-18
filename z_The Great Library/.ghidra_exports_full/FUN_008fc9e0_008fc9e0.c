// FUN_008fc9e0 @ 008fc9e0 body=[[008fc9e0, 008fca4f] [008fca53, 008fcad8] [008fcadc, 008fcafc] [008fcb00, 008fcb90] [008fcb94, 008fcbb3] [008fcbb7, 008fcc26] [008fcc2a, 008fcc44] [008fcc48, 008fccbd] [008fccc1, 008fcd46] [008fcd4a, 008fcd6a] [008fcd6e, 008fcdfe] [008fce02, 008fce21] [008fce25, 008fce94] [008fce98, 008fceb2] [008fceb6, 008fcee9] [008fceed, 008fcf01]]


undefined4 FUN_008fc9e0(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined8 uStack_9c;
  uint *puStack_94;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [2];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [2];
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b657e9;
  local_10 = ExceptionList;
  local_14 = 0;
  if ((char)param_3 == '\0') {
    puStack_94 = (uint *)0xc;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    uStack_9c = 0xe2f1f4008fcc97;
    ExceptionList = &local_10;
    FUN_00409350();
    puStack_94 = local_84;
    local_8 = 0xd;
    uStack_9c = CONCAT44(local_44,0x8fccab);
    FUN_009a8ee0();
    local_8._0_1_ = 0xf;
    if (0xf < local_70) {
      puStack_94 = (uint *)local_84[0];
      uStack_9c = CONCAT44(&UNK_008fccbe,(undefined4)uStack_9c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_94 = (uint *)0x4;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    uStack_9c = 0xdfbf14008fcce2;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    puStack_94 = local_30;
    uStack_9c = CONCAT44(0x8fccf4,(undefined4)uStack_9c);
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
    local_8._0_1_ = 0x11;
    uStack_9c = 0x40008fcd01;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x12;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      uStack_9c = CONCAT44(uVar2,local_44);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x11;
    uStack_9c = CONCAT44(&param_3,local_68);
    FUN_009e6810();
    if (0xf < local_1c) {
      uStack_9c = CONCAT44(local_30[0],&UNK_008fcd47);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xf;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      uStack_9c = CONCAT44(local_68[0],&UNK_008fcd6b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_9c = 0x300df7e90;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x13;
    param_3 = &uStack_9c;
    uStack_9c = *(undefined8 *)(in_ECX + 0x20);
    uVar2 = FUN_00988bb0(local_30,2);
    local_8._0_1_ = 0x14;
    uStack_9c = 0x40008fcdb5;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0x15;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      uStack_9c = CONCAT44(uVar2,local_44);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x14;
    uStack_9c = CONCAT44(&param_3,local_68);
    FUN_009e6810();
    if (0xf < local_1c) {
      uStack_9c = CONCAT44(local_30[0],&UNK_008fcdff);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xf;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      uStack_9c = CONCAT44(local_68[0],&UNK_008fce22);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_9c = 0x100dee2cc;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x16;
    uStack_9c = CONCAT44(0x8fce46,(undefined4)uStack_9c);
    iVar3 = FUN_00475500();
    uStack_9c = *(undefined8 *)(iVar3 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,0x17);
    uStack_9c = CONCAT44(local_68,0x8fce7b);
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_1c) {
      uStack_9c = CONCAT44(local_30[0],&UNK_008fce95);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_54) {
      uStack_9c = CONCAT44(local_68[0],&UNK_008fceb3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_8 = 0x18;
    uStack_9c = CONCAT44(0x8fced2,(undefined4)uStack_9c);
    FUN_009adb70();
    if (local_40 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    uStack_9c = CONCAT44(0x8fcee1,(undefined4)uStack_9c);
    FUN_009e6a80();
    local_24 = local_40;
  }
  else {
    puStack_94 = (uint *)0x10;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    uStack_9c = 0xe2f1e0008fca29;
    ExceptionList = &local_10;
    FUN_00409350();
    puStack_94 = local_68;
    local_8 = 1;
    uStack_9c = CONCAT44(local_28,0x8fca3d);
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_54) {
      puStack_94 = (uint *)local_68[0];
      uStack_9c = CONCAT44(&UNK_008fca50,(undefined4)uStack_9c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_94 = (uint *)0x4;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    uStack_9c = 0xdfbf14008fca74;
    FUN_00409350();
    local_8._0_1_ = 4;
    puStack_94 = local_4c;
    uStack_9c = CONCAT44(0x8fca86,(undefined4)uStack_9c);
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
    local_8._0_1_ = 5;
    uStack_9c = 0x40008fca93;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      uStack_9c = CONCAT44(uVar2,local_28);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    uStack_9c = CONCAT44(&param_3,local_84);
    FUN_009e6810();
    if (0xf < local_38) {
      uStack_9c = CONCAT44(local_4c[0],&UNK_008fcad9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_70) {
      uStack_9c = CONCAT44(local_84[0],&UNK_008fcafd);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_9c = 0x300df7e90;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 7;
    param_3 = &uStack_9c;
    uStack_9c = *(undefined8 *)(in_ECX + 0x20);
    uVar2 = FUN_00988bb0(local_4c,2);
    local_8._0_1_ = 8;
    uStack_9c = 0x40008fcb47;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 9;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      uStack_9c = CONCAT44(uVar2,local_28);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 8;
    uStack_9c = CONCAT44(&param_3,local_84);
    FUN_009e6810();
    if (0xf < local_38) {
      uStack_9c = CONCAT44(local_4c[0],&UNK_008fcb91);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_38 = 0xf;
    local_3c = 0;
    uVar1 = local_4c[0] >> 8;
    local_4c[0] = uVar1 << 8;
    if (0xf < local_70) {
      uStack_9c = CONCAT44(local_84[0],&UNK_008fcbb4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_9c = 0x100dee2cc;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = uVar1 << 8;
    FUN_00409350();
    local_8._0_1_ = 10;
    uStack_9c = CONCAT44(0x8fcbd8,(undefined4)uStack_9c);
    iVar3 = FUN_00475500();
    uStack_9c = *(undefined8 *)(iVar3 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,0xb);
    uStack_9c = CONCAT44(local_4c,0x8fcc0d);
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_70) {
      uStack_9c = CONCAT44(local_84[0],&UNK_008fcc27);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_38) {
      uStack_9c = CONCAT44(local_4c[0],&UNK_008fcc45);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_8 = 0xc;
    uStack_9c = CONCAT44(0x8fcc64,(undefined4)uStack_9c);
    FUN_009adb70();
    if (local_24 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    uStack_9c = CONCAT44(0x8fcc77,(undefined4)uStack_9c);
    FUN_009e6a80();
  }
  uStack_9c = CONCAT44(local_24,&UNK_008fceea);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

