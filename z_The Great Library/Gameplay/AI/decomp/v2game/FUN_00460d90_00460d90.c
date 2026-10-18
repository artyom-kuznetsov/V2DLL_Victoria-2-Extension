// FUN_00460d90 @ 00460d90 body=[[00460d90, 00460e99] [00460e9d, 00460ebc] [00460ec0, 00460ee6] [00460eea, 00460f1d] [00460f21, 00460f3d] [00460f41, 00460f54]]


void FUN_00460d90(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5bc60;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_7c = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_74 = 0;
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_00992240(param_2,&local_7c,&DAT_00dfa554);
  local_80 = ((int)local_78 - (int)local_7c) / 0x1c;
  puVar1 = local_7c;
  if (0 < local_80) {
    do {
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dedc68,1);
      local_c._0_1_ = 1;
      FUN_00988f20(local_6c);
      local_c._0_1_ = 2;
      FUN_00988f20(puVar1);
      local_c._0_1_ = 3;
      FUN_00460f60(param_1);
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34);
      }
      local_c._0_1_ = 0;
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_80 = local_80 + -1;
      puVar1 = puVar1 + 7;
    } while (local_80 != 0);
  }
  puVar1 = local_7c;
  if (local_7c == (undefined4 *)0x0) {
    ExceptionList = local_14;
    return;
  }
  while( true ) {
    if (puVar1 == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_7c);
    }
    if (0xf < (uint)puVar1[5]) break;
    puVar1[5] = 0xf;
    puVar1[4] = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1 = puVar1 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar1);
}

