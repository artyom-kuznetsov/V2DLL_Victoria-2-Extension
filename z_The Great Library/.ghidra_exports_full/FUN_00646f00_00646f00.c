// FUN_00646f00 @ 00646f00 body=[[00646f00, 00647073] [00647077, 0064708e] [00647092, 006470a9] [006470ad, 006470c7] [006470cb, 006470ee] [006470f2, 00647118] [0064711c, 0064712f]]


void FUN_00646f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  undefined4 *unaff_EDI;
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
  undefined1 *in_stack_000000c4;
  undefined1 *in_stack_000000c8;
  undefined4 in_stack_000000cc;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d4;
  undefined4 in_stack_000000d8;
  undefined1 local_f8 [12];
  undefined4 uStack_ec;
  undefined4 *local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined1 local_dc [12];
  undefined4 uStack_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [12];
  undefined4 uStack_b4;
  undefined4 *local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined1 local_a4 [16];
  undefined4 local_94;
  undefined4 *local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 local_84 [12];
  undefined4 uStack_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 *puStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  uint uStack_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5eeb7;
  local_10 = ExceptionList;
  local_8 = 5;
  uStack_30 = in_stack_000000d8;
  puStack_34 = (undefined *)in_stack_000000d4;
  uStack_38 = in_stack_000000d0;
  uStack_3c = in_stack_000000cc;
  local_40 = 0x3f800000;
  puStack_44 = &local_24;
  local_48 = in_stack_000000c8;
  uStack_4c = in_stack_000000c4;
  in_stack_000000c8 = local_68;
  uStack_6c = 0xffffffff;
  local_70 = 0;
  local_74 = &stack0x000000a8;
  local_54 = 0xf;
  local_58 = 0;
  local_24 = 0;
  local_20 = 0;
  local_68[0] = 0;
  uStack_78 = 0x646f8a;
  ExceptionList = &local_10;
  FUN_00408ed0();
  in_stack_000000c4 = local_84;
  local_8._0_1_ = 6;
  uStack_88 = 0xffffffff;
  uStack_8c = 0;
  local_90 = &stack0x0000008c;
  local_70 = 0xf;
  local_74 = (undefined4 *)0x0;
  local_84[0] = 0;
  local_94 = 0x646fb0;
  FUN_00408ed0();
  local_8._0_1_ = 7;
  uStack_88 = in_stack_00000088;
  in_stack_00000088 = local_a4;
  uStack_a8 = 0xffffffff;
  local_ac = 0;
  local_b0 = &stack0x0000006c;
  local_90 = (undefined4 *)0xf;
  local_94 = 0;
  local_a4[0] = 0;
  uStack_b4 = 0x646fda;
  FUN_00408ed0();
  local_14 = local_c0;
  local_8._0_1_ = 8;
  uStack_c4 = 0xffffffff;
  local_ac = 0xf;
  local_b0 = (undefined4 *)0x0;
  local_c0[0] = 0;
  local_c8 = 0;
  local_cc = &stack0x00000050;
  uStack_d0 = 0x646ffa;
  FUN_00408ed0();
  local_18 = local_dc;
  local_8._0_1_ = 9;
  uStack_e0 = 0xffffffff;
  local_e4 = 0;
  local_e8 = &stack0x00000034;
  local_c8 = 0xf;
  local_cc = (undefined4 *)0x0;
  local_dc[0] = 0;
  uStack_ec = 0x64701a;
  FUN_00408ed0();
  local_1c = local_f8;
  local_8._0_1_ = 10;
  local_e4 = 0xf;
  local_e8 = (undefined4 *)0x0;
  local_f8[0] = 0;
  FUN_00408ed0(&param_6,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_009ee680(unaff_EDI,param_1,param_2,param_3,param_4,param_5);
  *unaff_EDI = CEU3Button::vftable;
  unaff_EDI[0x15] = CEU3Button::vftable;
  if (0xf < in_stack_0000002c) {
    uStack_30 = param_6;
                    /* WARNING: Subroutine does not return */
    puStack_34 = &UNK_00647074;
    FUN_00aae91b();
  }
  in_stack_0000002c = 0xf;
  in_stack_00000028 = 0;
  param_6 = param_6 & 0xffffff00;
  if (0xf < in_stack_00000048) {
    uStack_30 = in_stack_00000034;
                    /* WARNING: Subroutine does not return */
    puStack_34 = &UNK_0064708f;
    FUN_00aae91b();
  }
  in_stack_00000048 = 0xf;
  in_stack_00000044 = 0;
  in_stack_00000034 = in_stack_00000034 & 0xffffff00;
  if (0xf < in_stack_00000064) {
    uStack_30 = in_stack_00000050;
                    /* WARNING: Subroutine does not return */
    puStack_34 = &UNK_006470aa;
    FUN_00aae91b();
  }
  in_stack_00000064 = 0xf;
  in_stack_00000060 = 0;
  in_stack_00000050 = in_stack_00000050 & 0xffffff00;
  if (0xf < in_stack_00000080) {
    uStack_30 = in_stack_0000006c;
                    /* WARNING: Subroutine does not return */
    puStack_34 = &UNK_006470c8;
    FUN_00aae91b();
  }
  in_stack_00000080 = 0xf;
  in_stack_0000007c = 0;
  in_stack_0000006c = in_stack_0000006c & 0xffffff00;
  if (0xf < in_stack_000000a0) {
    uStack_30 = in_stack_0000008c;
                    /* WARNING: Subroutine does not return */
    puStack_34 = &UNK_006470ef;
    FUN_00aae91b();
  }
  in_stack_000000a0 = 0xf;
  in_stack_0000009c = 0;
  in_stack_0000008c = in_stack_0000008c & 0xffffff00;
  if (0xf < in_stack_000000bc) {
    uStack_30 = in_stack_000000a8;
                    /* WARNING: Subroutine does not return */
    puStack_34 = &UNK_00647119;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

