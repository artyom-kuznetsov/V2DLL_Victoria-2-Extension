// FUN_005f7b70 @ 005f7b70 body=[[005f7b70, 005f7bdb] [005f7bdf, 005f7c2b] [005f7c2f, 005f7cb6] [005f7cba, 005f7cf3] [005f7cf7, 005f7d5b] [005f7d5f, 005f7d93] [005f7d97, 005f7da4] [005f7da8, 005f7dc9] [005f7dcd, 005f7ddf]]


void FUN_005f7b70(void)

{
  int iVar1;
  undefined1 local_b0 [20];
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7102a;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("_instant",8);
  local_8 = 0;
  FUN_00988f20();
  local_8._0_1_ = 2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  local_18 = 0xf;
  local_48 = 0xf;
  FUN_00409350("_delayed",8);
  local_8._0_1_ = 3;
  FUN_00988f20();
  local_8._0_1_ = 5;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  FUN_00408ed0();
  FUN_009a8ee0(local_40,local_b0);
  local_8._0_1_ = 6;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 7;
  FUN_00408ed0();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_8._0_1_ = 8;
  FUN_009adb70();
  local_8._0_1_ = 5;
  if (local_3c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009a8ee0(local_40,local_78);
  local_8._0_1_ = 9;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 10;
  FUN_00408ed0();
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94 = local_94 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_009adb70();
  if (local_3c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

