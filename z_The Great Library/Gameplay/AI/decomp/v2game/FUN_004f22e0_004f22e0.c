// FUN_004f22e0 @ 004f22e0 body=[[004f22e0, 004f2358] [004f235c, 004f2414] [004f2418, 004f2436] [004f243a, 004f2485] [004f2489, 004f24d4] [004f24d8, 004f251c] [004f2520, 004f2546] [004f254a, 004f255e]]


undefined1 *
FUN_004f22e0(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_94;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00baf606;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_94 = 0x2400dfe1b4;
  local_14 = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350();
  local_94 = CONCAT44(local_48,local_2c);
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  if (0xf < local_34) {
    local_94 = CONCAT44(local_48[0],&UNK_004f2359);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0x400dfced8;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  local_18 = (undefined1 *)&local_94;
  local_8._0_1_ = 4;
  local_94 = __allmul(*(undefined4 *)(param_4 + 0x88),*(undefined4 *)(param_4 + 0x8c),param_5,
                      param_6);
  local_94 = local_94 >> 0xf;
  uVar1 = FUN_00988bb0(local_80,2);
  local_8._0_1_ = 5;
  local_94 = 0x40004f23cb;
  local_18 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 6;
  if (local_18 == (undefined1 *)0x0) {
    local_18 = (undefined1 *)0x0;
  }
  else {
    local_94 = CONCAT44(uVar1,local_2c);
    local_18 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  local_94 = CONCAT44(&local_18,local_64);
  FUN_009e6810();
  if (0xf < local_6c) {
    local_94 = CONCAT44(local_80[0],&UNK_004f2415);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_50) {
    local_94 = CONCAT44(local_64[0],&UNK_004f2437);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = CONCAT44(0x4f243f,(undefined4)local_94);
  iVar2 = FUN_00475500();
  local_94 = *(undefined8 *)(iVar2 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
  local_8._0_1_ = 7;
  local_94 = 0xffffffff00000000;
  FUN_00448aa0();
  local_8._0_1_ = 3;
  if (0xf < local_6c) {
    local_94 = CONCAT44(local_80[0],&UNK_004f2486);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = (undefined1 *)&local_94;
  local_94 = CONCAT44(param_6,param_5);
  FUN_004efad0(param_1,local_80,param_3,param_4,1);
  local_94 = 0xffffffff00000000;
  local_8._0_1_ = 8;
  FUN_00448aa0();
  local_8._0_1_ = 3;
  if (0xf < local_6c) {
    local_94 = CONCAT44(local_80[0],&UNK_004f24d5);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = CONCAT44(param_6,param_5);
  FUN_004efad0(param_1,local_80,param_3,param_4,2);
  local_94 = 0xffffffff00000000;
  local_8 = CONCAT31(local_8._1_3_,9);
  FUN_00448aa0();
  if (0xf < local_6c) {
    local_94 = CONCAT44(local_80[0],&UNK_004f251d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 10;
  local_94 = CONCAT44(0x4f252f,(undefined4)local_94);
  FUN_009adb70();
  if (local_28 != 0) {
    local_94 = CONCAT44(0x4f253e,(undefined4)local_94);
    FUN_009e6a80();
    local_94 = CONCAT44(local_28,&UNK_004f2547);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

