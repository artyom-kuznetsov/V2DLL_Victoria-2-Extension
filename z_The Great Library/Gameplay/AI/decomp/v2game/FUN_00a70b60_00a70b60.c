// FUN_00a70b60 @ 00a70b60 body=[[00a70b60, 00a70cbc] [00a70cc0, 00a70cd7] [00a70cdb, 00a70cf2] [00a70cf6, 00a70d10] [00a70d14, 00a70d37] [00a70d3b, 00a70d61] [00a70d65, 00a70d78]]


void FUN_00a70b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined4 *unaff_ESI;
  undefined4 in_stack_00000028;
  uint in_stack_0000002c;
  uint in_stack_00000034;
  undefined4 in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_00000050;
  undefined4 in_stack_00000060;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  undefined4 in_stack_0000007c;
  uint in_stack_00000080;
  undefined1 *in_stack_00000088;
  uint in_stack_0000008c;
  undefined4 in_stack_0000009c;
  uint in_stack_000000a0;
  undefined4 in_stack_000000a8;
  uint in_stack_000000bc;
  undefined1 local_100 [12];
  undefined4 uStack_f4;
  undefined4 *local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined1 local_e4 [12];
  undefined4 uStack_d8;
  undefined4 *local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [12];
  undefined4 uStack_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined1 local_ac [16];
  undefined4 local_9c;
  undefined4 *local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 uStack_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 *puStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined *puStack_3c;
  uint uStack_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b60e51;
  local_10 = ExceptionList;
  uStack_38 = 0;
  local_8 = 5;
  puStack_3c = (undefined *)0x0;
  uStack_40 = 0;
  uStack_44 = 0;
  local_48 = 0x3f800000;
  puStack_4c = &local_2c;
  local_50 = 0;
  uStack_54 = 4;
  local_14 = local_70;
  uStack_74 = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_78 = &DAT_00ded94d;
  local_2c = 0;
  local_28 = 0;
  local_70[0] = 0;
  local_7c = 0xa70bc4;
  ExceptionList = &local_10;
  FUN_00409350();
  local_18 = local_8c;
  local_8._0_1_ = 6;
  uStack_90 = 0xffffffff;
  uStack_94 = 0;
  local_98 = &stack0x000000a8;
  local_78 = (undefined1 *)0xf;
  local_7c = 0;
  local_8c[0] = 0;
  local_9c = 0xa70be7;
  FUN_00408ed0();
  local_8._0_1_ = 7;
  uStack_90 = in_stack_00000088;
  in_stack_00000088 = local_ac;
  uStack_b0 = 0xffffffff;
  local_b4 = 0;
  local_b8 = &stack0x0000006c;
  local_98 = (undefined4 *)0xf;
  local_9c = 0;
  local_ac[0] = 0;
  uStack_bc = 0xa70c11;
  FUN_00408ed0();
  local_1c = local_c8;
  local_8._0_1_ = 8;
  uStack_cc = 0xffffffff;
  local_d0 = 0;
  local_d4 = &stack0x00000050;
  local_b4 = 0xf;
  local_b8 = (undefined4 *)0x0;
  local_c8[0] = 0;
  uStack_d8 = 0xa70c31;
  FUN_00408ed0();
  local_20 = local_e4;
  local_8._0_1_ = 9;
  uStack_e8 = 0xffffffff;
  local_ec = 0;
  local_f0 = &stack0x00000034;
  local_d0 = 0xf;
  local_d4 = (undefined4 *)0x0;
  local_e4[0] = 0;
  uStack_f4 = 0xa70c51;
  FUN_00408ed0();
  local_24 = local_100;
  local_8._0_1_ = 10;
  local_ec = 0xf;
  local_f0 = (undefined4 *)0x0;
  local_100[0] = 0;
  FUN_00408ed0(&param_6,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_009ee680(unaff_ESI,param_1,param_2,param_3,param_4,param_5);
  *unaff_ESI = &PTR_FUN_00e42e70;
  unaff_ESI[0x15] = &PTR_LAB_00e42f98;
  unaff_ESI[0x58] = 0;
  unaff_ESI[0x59] = 0;
  unaff_ESI[0x5a] = 0;
  if (0xf < in_stack_0000002c) {
    uStack_38 = param_6;
                    /* WARNING: Subroutine does not return */
    puStack_3c = &UNK_00a70cbd;
    FUN_00aae91b();
  }
  in_stack_0000002c = 0xf;
  in_stack_00000028 = 0;
  param_6 = param_6 & 0xffffff00;
  if (0xf < in_stack_00000048) {
    uStack_38 = in_stack_00000034;
                    /* WARNING: Subroutine does not return */
    puStack_3c = &UNK_00a70cd8;
    FUN_00aae91b();
  }
  in_stack_00000048 = 0xf;
  in_stack_00000044 = 0;
  in_stack_00000034 = in_stack_00000034 & 0xffffff00;
  if (0xf < in_stack_00000064) {
    uStack_38 = in_stack_00000050;
                    /* WARNING: Subroutine does not return */
    puStack_3c = &UNK_00a70cf3;
    FUN_00aae91b();
  }
  in_stack_00000064 = 0xf;
  in_stack_00000060 = 0;
  in_stack_00000050 = in_stack_00000050 & 0xffffff00;
  if (0xf < in_stack_00000080) {
    uStack_38 = in_stack_0000006c;
                    /* WARNING: Subroutine does not return */
    puStack_3c = &UNK_00a70d11;
    FUN_00aae91b();
  }
  in_stack_00000080 = 0xf;
  in_stack_0000007c = 0;
  in_stack_0000006c = in_stack_0000006c & 0xffffff00;
  if (0xf < in_stack_000000a0) {
    uStack_38 = in_stack_0000008c;
                    /* WARNING: Subroutine does not return */
    puStack_3c = &UNK_00a70d38;
    FUN_00aae91b();
  }
  in_stack_000000a0 = 0xf;
  in_stack_0000009c = 0;
  in_stack_0000008c = in_stack_0000008c & 0xffffff00;
  if (0xf < in_stack_000000bc) {
    uStack_38 = in_stack_000000a8;
                    /* WARNING: Subroutine does not return */
    puStack_3c = &UNK_00a70d62;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

