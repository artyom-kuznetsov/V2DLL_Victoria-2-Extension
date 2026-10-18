// FUN_00a03390 @ 00a03390 body=[[00a03390, 00a0346f] [00a03473, 00a034b1] [00a034b5, 00a034cc] [00a034d0, 00a034e7] [00a034eb, 00a034ff]]


undefined4 * FUN_00a03390(undefined4 *param_1,uint param_2)

{
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint in_stack_00000028;
  undefined4 in_stack_00000038;
  uint in_stack_0000003c;
  undefined4 in_stack_00000044;
  uint in_stack_00000058;
  undefined1 local_8c [12];
  undefined4 uStack_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  uint *puStack_54;
  undefined1 *puStack_50;
  uint uStack_4c;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5619b;
  local_10 = ExceptionList;
  uStack_4c = 0;
  puStack_50 = (undefined1 *)0x0;
  puStack_54 = (uint *)0x1;
  local_14 = local_70;
  local_8 = 2;
  uStack_74 = 0xffffffff;
  local_78 = 0;
  local_7c = &stack0x00000044;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = 0;
  uStack_80 = 0xa033df;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_18 = local_8c;
  local_8._0_1_ = 3;
  local_78 = 0xf;
  local_7c = (undefined4 *)0x0;
  local_8c[0] = 0;
  FUN_00408ed0(&stack0x00000028,0,0xffffffff);
  local_8._0_1_ = 2;
  FUN_009fa9f0(param_1,0xe1);
  local_8._0_1_ = 4;
  uStack_4c = 0;
  puStack_50 = &DAT_00ded94d;
  *param_1 = &PTR_FUN_00e3e7f0;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  puStack_54 = (uint *)0xa0342f;
  FUN_00409350();
  local_8._0_1_ = 5;
  param_1[0x1d] = 0;
  param_1[0x1e] = DAT_01268fec;
  param_1[0x1f] = DAT_01268ff0;
  uStack_4c = 0xffffffff;
  puStack_50 = (undefined1 *)0x0;
  puStack_54 = local_3c;
  param_1[0x25] = 0xf;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  uStack_58 = 0xa03461;
  FUN_00408ed0();
  if (0xf < local_28) {
    uStack_4c = local_3c[0];
                    /* WARNING: Subroutine does not return */
    puStack_50 = &UNK_00a03470;
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  uStack_4c = 0xffffffff;
  local_8 = CONCAT31(local_8._1_3_,6);
  puStack_50 = (undefined1 *)0x0;
  puStack_54 = &param_2;
  param_1[0x2c] = 0xf;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  uStack_58 = 0xa0349a;
  FUN_00408ed0();
  param_1[0x2e] = in_stack_00000024;
  if (0xf < in_stack_0000001c) {
    uStack_4c = param_2;
                    /* WARNING: Subroutine does not return */
    puStack_50 = &UNK_00a034b2;
    FUN_00aae91b();
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = param_2 & 0xffffff00;
  if (0xf < in_stack_0000003c) {
    uStack_4c = in_stack_00000028;
                    /* WARNING: Subroutine does not return */
    puStack_50 = &UNK_00a034cd;
    FUN_00aae91b();
  }
  in_stack_0000003c = 0xf;
  in_stack_00000038 = 0;
  in_stack_00000028 = in_stack_00000028 & 0xffffff00;
  if (0xf < in_stack_00000058) {
    uStack_4c = in_stack_00000044;
                    /* WARNING: Subroutine does not return */
    puStack_50 = &UNK_00a034e8;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

