// FUN_00898900 @ 00898900 body=[[00898900, 0089896f] [00898973, 008989f8] [008989fc, 00898a1c] [00898a20, 00898ae9] [00898aed, 00898b17] [00898b1b, 00898b3a] [00898b3e, 00898b58] [00898b5c, 00898bae] [00898bb2, 00898bc9] [00898bcd, 00898be1]]


undefined4 FUN_00898900(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint in_stack_00000020;
  undefined8 uStack_d0;
  uint *puStack_c8;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 local_48;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b689a7;
  local_10 = ExceptionList;
  local_48 = 0;
  local_8 = 1;
  puStack_c8 = (uint *)0x19;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  uStack_d0 = 0xe2a4380089894c;
  ExceptionList = &local_10;
  FUN_00409350();
  puStack_c8 = local_80;
  local_8._0_1_ = 2;
  uStack_d0 = CONCAT44(local_44,0x89895d);
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_6c) {
    puStack_c8 = (uint *)local_80[0];
    uStack_d0 = CONCAT44(&UNK_00898970,(undefined4)uStack_d0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_c8 = (uint *)0x5;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  uStack_d0 = 0xe01a9800898994;
  FUN_00409350();
  local_8._0_1_ = 5;
  puStack_c8 = local_64;
  uStack_d0 = CONCAT44(0x8989a6,(undefined4)uStack_d0);
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x2c))();
  local_8._0_1_ = 6;
  uStack_d0 = 0x40008989b3;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    uStack_d0 = CONCAT44(uVar2,local_44);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
  uStack_d0 = CONCAT44(&local_14,local_30);
  FUN_009e6810();
  if (0xf < local_50) {
    uStack_d0 = CONCAT44(local_64[0],&UNK_008989f9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_50 = 0xf;
  local_54 = 0;
  uVar1 = local_64[0] >> 8;
  local_64[0] = uVar1 << 8;
  if (0xf < local_1c) {
    uStack_d0 = CONCAT44(local_30[0],&UNK_00898a1d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_d0 = 0x100df9644;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = uVar1 << 8;
  FUN_00409350();
  local_8._0_1_ = 8;
  uStack_d0 = 0xa00dff8f0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 9;
  local_14 = (undefined1 *)&uStack_d0;
  uStack_d0 = *(undefined8 *)(in_ECX + 0x20);
  FUN_00988bb0(local_b8,0);
  local_8._0_1_ = 10;
  uStack_d0 = CONCAT44(local_64,0x898a8d);
  uVar2 = FUN_00988f20();
  local_8._0_1_ = 0xb;
  uStack_d0 = 0x4000898a9a;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0xc;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    uStack_d0 = CONCAT44(uVar2,local_44);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0xb;
  uStack_d0 = CONCAT44(&local_14,local_30);
  FUN_009e6810();
  if (0xf < local_88) {
    uStack_d0 = CONCAT44(local_9c,&UNK_00898aea);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  if (0xf < local_a4) {
    uStack_d0 = CONCAT44(local_b8[0],&UNK_00898b18);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  if (0xf < local_1c) {
    uStack_d0 = CONCAT44(local_30[0],&UNK_00898b3b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_50) {
    uStack_d0 = CONCAT44(local_64[0],&UNK_00898b59);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_d0 = CONCAT44(0x898b61,(undefined4)uStack_d0);
  iVar3 = FUN_00475500();
  uStack_d0 = *(undefined8 *)(iVar3 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  local_48 = 1;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  uStack_d0 = CONCAT44(0x898b97,(undefined4)uStack_d0);
  FUN_009adb70();
  if (local_40 != 0) {
    uStack_d0 = CONCAT44(0x898ba6,(undefined4)uStack_d0);
    FUN_009e6a80();
    uStack_d0 = CONCAT44(local_40,&UNK_00898baf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (0xf < in_stack_00000020) {
    uStack_d0 = CONCAT44(param_3,&UNK_00898bca);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

