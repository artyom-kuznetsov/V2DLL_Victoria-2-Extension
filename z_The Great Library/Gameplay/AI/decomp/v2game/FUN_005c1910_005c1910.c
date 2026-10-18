// FUN_005c1910 @ 005c1910 body=[[005c1910, 005c19b6] [005c19ba, 005c19d4] [005c19d8, 005c19f2] [005c19f6, 005c1a0a]]


undefined1 * FUN_005c1910(undefined1 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined *local_80;
  uint *puStack_7c;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45f61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  puStack_7c = (uint *)0x1;
  local_80 = &DAT_00df9644;
  local_14 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  puStack_7c = (uint *)0x0;
  local_18 = (undefined1 *)&local_80;
  local_8 = 1;
  local_80 = *(undefined **)(in_ECX + 0x3c);
  FUN_00988a50(local_6c);
  puStack_7c = local_34;
  local_8._0_1_ = 2;
  local_80 = (undefined *)0x5c1995;
  uVar1 = FUN_00988f20();
  puStack_7c = (uint *)0xffffffff;
  local_80 = (undefined *)0x0;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00408ed0(uVar1);
  if (0xf < local_3c) {
    puStack_7c = (uint *)local_50;
                    /* WARNING: Subroutine does not return */
    local_80 = &UNK_005c19b7;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_58) {
    puStack_7c = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
    local_80 = &UNK_005c19d5;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_20) {
    puStack_7c = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
    local_80 = &UNK_005c19f3;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

