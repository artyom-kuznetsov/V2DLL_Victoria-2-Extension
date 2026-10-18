// FUN_0081af00 @ 0081af00 body=[[0081af00, 0081af96] [0081af9a, 0081b022] [0081b026, 0081b03a]]


undefined4 * FUN_0081af00(undefined4 *param_1,undefined4 param_2)

{
  int in_ECX;
  uint in_stack_0000001c;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b42dec;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  local_8._0_1_ = 1;
  *param_1 = CChatBuffer::CWriteToChatBuffer::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00408ed0(&param_2,0,0xffffffff);
  local_8._0_1_ = 2;
  param_1[0xf] = 0;
  param_1[0x10] = DAT_01268fec;
  param_1[0x11] = DAT_01268ff0;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(local_2c,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x25] = 0xf;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00408ed0(&param_2,0,0xffffffff);
  param_1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  param_1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  param_1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  FUN_00408ed0(in_ECX + 0x48,0,0xffffffff);
  FUN_00408ed0(in_ECX + 100,0,0xffffffff);
  FUN_00408ed0(in_ECX + 0x80,0,0xffffffff);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

