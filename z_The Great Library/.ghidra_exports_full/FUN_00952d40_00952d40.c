// FUN_00952d40 @ 00952d40 body=[[00952d40, 00952e75] [00952e79, 00952e98] [00952e9c, 00952eb3] [00952eb7, 00952ece] [00952ed2, 00952eef] [00952ef3, 00952f05]]


void FUN_00952d40(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_a4 [20];
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6503e;
  local_10 = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_10;
    if (*(int *)(param_1 + 0x10) != 0) {
      ExceptionList = &local_10;
      FUN_00448740();
    }
    FUN_009c9110(local_a4);
    local_8 = 0;
    local_18 = *(undefined4 *)(in_ECX + 0x18);
    FUN_00969ed0(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x1c) * 4) + 0x12e8);
    FUN_00988bb0(local_6c,2);
    local_8._0_1_ = 1;
    local_18 = *(undefined4 *)(in_ECX + 0x18);
    uVar1 = FUN_00988a50(local_50);
    local_8._0_1_ = 2;
    FUN_0043ec10(local_34,&DAT_00e35c2c,uVar1);
    local_8._0_1_ = 3;
    uVar1 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00448aa0(uVar1);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}

