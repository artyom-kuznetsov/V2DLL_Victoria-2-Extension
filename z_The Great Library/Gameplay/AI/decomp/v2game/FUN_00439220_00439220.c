// FUN_00439220 @ 00439220 body=[[00439220, 00439288] [0043928c, 00439361] [00439365, 00439383] [00439387, 004393dc] [004393e0, 004393f4]]


undefined4 FUN_00439220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  ulonglong uVar3;
  undefined8 local_94;
  undefined4 local_80;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b62cee;
  local_10 = ExceptionList;
  local_18 = 0;
  local_94 = 0xa00df7f28;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_94 = CONCAT44(local_48,local_2c);
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  if (0xf < local_34) {
    local_94 = CONCAT44(local_48[0],&UNK_00439289);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0x300df7e90;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  local_94 = CONCAT44(param_3,param_2);
  uVar3 = __allmul(*(undefined4 *)(in_ECX + 0x48 + DAT_00f0973c * 8),
                   *(undefined4 *)(in_ECX + 0x4c + DAT_00f0973c * 8));
  local_14 = (undefined1 *)&local_94;
  local_94 = (longlong)uVar3 >> 0xf;
  local_94 = __alldiv((int)(uVar3 & 0x7fffffff8000),
                      (int)((longlong)uVar3 >> 0x2f) << 0xf |
                      (uint)((uVar3 & 0x7fffffff8000) >> 0x20),DAT_00f0aac8,DAT_00f0aacc);
  uVar1 = FUN_00988b20();
  local_8._0_1_ = 5;
  local_94 = 0x4000439318;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 6;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_94 = CONCAT44(uVar1,local_2c);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  local_94 = CONCAT44(&local_14,local_64);
  FUN_009e6810();
  if (0xf < local_6c) {
    local_94 = CONCAT44(local_80,&UNK_00439362);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_50) {
    local_94 = CONCAT44(local_64[0],&UNK_00439384);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = CONCAT44(0x43938c,(undefined4)local_94);
  iVar2 = FUN_00475500();
  local_94 = *(undefined8 *)(iVar2 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
  local_18 = 1;
  local_8 = 7;
  local_94 = CONCAT44(0x4393c5,(undefined4)local_94);
  FUN_009adb70();
  if (local_28 != 0) {
    local_94 = CONCAT44(0x4393d4,(undefined4)local_94);
    FUN_009e6a80();
    local_94 = CONCAT44(local_28,&UNK_004393dd);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

