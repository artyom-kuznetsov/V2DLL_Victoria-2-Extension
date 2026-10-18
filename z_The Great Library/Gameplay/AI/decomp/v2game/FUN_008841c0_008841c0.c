// FUN_008841c0 @ 008841c0 body=[[008841c0, 0088422d] [00884231, 008842b2] [008842b6, 008842c7] [008842cb, 00884343] [00884347, 00884358] [0088435c, 00884404] [00884408, 00884426] [0088442a, 0088447c] [00884480, 00884497] [0088449b, 008844af]]


undefined4 FUN_008841c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint in_stack_00000020;
  undefined8 local_98;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b696ac;
  local_10 = ExceptionList;
  local_1c = 0;
  local_8 = 1;
  local_98 = 0x1100e29d60;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_98 = CONCAT44(local_4c,local_30);
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_38) {
    local_98 = CONCAT44(local_4c[0],&UNK_0088422e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_98 = 0x400e29d74;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350();
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  local_8._0_1_ = 6;
  local_98 = 0x4000884266;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_98 = CONCAT44(local_84,local_30);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
  local_98 = CONCAT44(&local_14,local_68);
  FUN_009e6810();
  if (0xf < local_70) {
    local_98 = CONCAT44(local_84[0],&UNK_008842b3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  if (0xf < local_54) {
    local_98 = CONCAT44(local_68[0],&UNK_008842c8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_98 = 0x200e29d7c;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350();
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  local_8._0_1_ = 9;
  local_98 = 0x40008842f7;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 10;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_98 = CONCAT44(local_84,local_30);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 9;
  local_98 = CONCAT44(&local_14,local_68);
  FUN_009e6810();
  if (0xf < local_70) {
    local_98 = CONCAT44(local_84[0],&UNK_00884344);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  if (0xf < local_54) {
    local_98 = CONCAT44(local_68[0],&UNK_00884359);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_98._4_4_ = 10;
  local_98._0_4_ = "PERCENTAGE";
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350();
  local_14 = (undefined1 *)&local_98;
  local_8._0_1_ = 0xb;
  local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(local_18 + 0x28));
  local_98 = __allmul(*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 0x2c),0x320000,0);
  local_98 = local_98 >> 0xf;
  uVar1 = FUN_00988bb0(local_84,0);
  local_8._0_1_ = 0xc;
  local_98 = 0x40008843bb;
  local_18 = FUN_00aae9af();
  local_8._0_1_ = 0xd;
  if (local_18 == 0) {
    local_18 = 0;
  }
  else {
    local_98 = CONCAT44(uVar1,local_30);
    local_18 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0xc;
  local_98 = CONCAT44(&local_18,local_68);
  FUN_009e6810();
  if (0xf < local_70) {
    local_98 = CONCAT44(local_84[0],&UNK_00884405);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_54) {
    local_98 = CONCAT44(local_68[0],&UNK_00884427);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_98 = CONCAT44(0x88442f,(char *)local_98);
  iVar2 = FUN_00475500();
  local_98 = *(undefined8 *)(iVar2 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
  local_1c = 1;
  local_8 = CONCAT31(local_8._1_3_,0xe);
  local_98 = CONCAT44(0x884465,(char *)local_98);
  FUN_009adb70();
  if (local_2c != 0) {
    local_98 = CONCAT44(0x884474,(char *)local_98);
    FUN_009e6a80();
    local_98 = CONCAT44(local_2c,&UNK_0088447d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (0xf < in_stack_00000020) {
    local_98 = CONCAT44(param_3,&UNK_00884498);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

