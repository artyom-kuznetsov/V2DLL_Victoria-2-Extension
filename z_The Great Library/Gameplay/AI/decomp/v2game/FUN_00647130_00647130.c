// FUN_00647130 @ 00647130 body=[[00647130, 00647278] [0064727c, 00647293] [00647297, 006472ae] [006472b2, 006472cc] [006472d0, 006472f3] [006472f7, 0064731d] [00647321, 00647334]]


void FUN_00647130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000cc;
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  undefined4 uStack_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_34;
  undefined *puStack_30;
  uint uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5a234;
  local_10 = ExceptionList;
  local_8 = 5;
  uStack_2c = in_stack_000000cc;
  puStack_30 = (undefined *)in_stack_000000c8;
  uStack_34 = in_stack_000000c4;
  in_stack_000000c4 = local_50;
  uStack_54 = 0xffffffff;
  local_58 = 0;
  local_5c = &stack0x000000a8;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = 0;
  uStack_60 = 0x647192;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8._0_1_ = 6;
  uStack_70 = 0xffffffff;
  uStack_74 = 0;
  local_78 = &stack0x0000008c;
  local_58 = 0xf;
  local_5c = (undefined4 *)0x0;
  local_6c = 0;
  local_7c = 0x6471b5;
  FUN_00408ed0();
  local_8._0_1_ = 7;
  uStack_70 = in_stack_00000088;
  in_stack_00000088 = local_8c;
  local_78 = (undefined4 *)0xf;
  local_7c = 0;
  local_8c[0] = 0;
  FUN_00408ed0();
  local_8._0_1_ = 8;
  FUN_00408ed0();
  local_8._0_1_ = 9;
  FUN_00408ed0();
  local_8._0_1_ = 10;
  FUN_00408ed0(&param_6,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_009a7a40(unaff_EDI,param_1,param_2,param_3,param_4,param_5);
  *unaff_EDI = CEU3CheckBox::vftable;
  unaff_EDI[0x15] = CEU3CheckBox::vftable;
  if (0xf < in_stack_0000002c) {
    uStack_2c = param_6;
                    /* WARNING: Subroutine does not return */
    puStack_30 = &UNK_00647279;
    FUN_00aae91b();
  }
  in_stack_0000002c = 0xf;
  in_stack_00000028 = 0;
  param_6 = param_6 & 0xffffff00;
  if (0xf < in_stack_00000048) {
    uStack_2c = in_stack_00000034;
                    /* WARNING: Subroutine does not return */
    puStack_30 = &UNK_00647294;
    FUN_00aae91b();
  }
  in_stack_00000048 = 0xf;
  in_stack_00000044 = 0;
  in_stack_00000034 = in_stack_00000034 & 0xffffff00;
  if (0xf < in_stack_00000064) {
    uStack_2c = in_stack_00000050;
                    /* WARNING: Subroutine does not return */
    puStack_30 = &UNK_006472af;
    FUN_00aae91b();
  }
  in_stack_00000064 = 0xf;
  in_stack_00000060 = 0;
  in_stack_00000050 = in_stack_00000050 & 0xffffff00;
  if (0xf < in_stack_00000080) {
    uStack_2c = in_stack_0000006c;
                    /* WARNING: Subroutine does not return */
    puStack_30 = &UNK_006472cd;
    FUN_00aae91b();
  }
  in_stack_00000080 = 0xf;
  in_stack_0000007c = 0;
  in_stack_0000006c = in_stack_0000006c & 0xffffff00;
  if (0xf < in_stack_000000a0) {
    uStack_2c = in_stack_0000008c;
                    /* WARNING: Subroutine does not return */
    puStack_30 = &UNK_006472f4;
    FUN_00aae91b();
  }
  in_stack_000000a0 = 0xf;
  in_stack_0000009c = 0;
  in_stack_0000008c = in_stack_0000008c & 0xffffff00;
  if (0xf < in_stack_000000bc) {
    uStack_2c = in_stack_000000a8;
                    /* WARNING: Subroutine does not return */
    puStack_30 = &UNK_0064731e;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

