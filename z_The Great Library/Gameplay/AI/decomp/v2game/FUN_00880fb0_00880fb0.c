// FUN_00880fb0 @ 00880fb0 body=[[00880fb0, 0088105e] [00881062, 0088113a] [0088113e, 00881168] [0088116c, 00881191] [00881195, 008811b4] [008811b8, 008811d2] [008811d6, 00881228] [0088122c, 00881243] [00881247, 0088125b]]


/* WARNING: Removing unreachable block (ram,0x008811ca) */

undefined4 FUN_00880fb0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  uint in_stack_00000020;
  uint local_c4;
  uint local_a8;
  uint local_8c;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b88617;
  local_10 = ExceptionList;
  local_30 = 0;
  local_8 = 1;
  local_18 = *(undefined4 *)(in_ECX + 0x20);
  local_14 = *(undefined4 *)(in_ECX + 0x24);
  if (*(char *)(in_ECX + 0x28) != '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4) +
                             0xe64) + 0x50);
    local_18 = *(undefined4 *)(iVar1 + 0x1c);
    local_14 = *(undefined4 *)(iVar1 + 0x20);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("TAG_CHANGE",10);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_2c,local_68);
  local_8._0_1_ = 4;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 5;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e03350,3);
  local_8._0_1_ = 6;
  FUN_0055dd40();
  local_8._0_1_ = 7;
  FUN_00988fa0();
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8._0_1_ = 9;
  param_2 = FUN_00aae9af();
  local_8._0_1_ = 10;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_009a9ce0();
  }
  local_8._0_1_ = 9;
  FUN_009e6810(local_4c,&param_2);
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_30 = 1;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_009adb70();
  if (local_28 == 0) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

