// FUN_009f3c60 @ 009f3c60 body=[[009f3c60, 009f3d43] [009f3d47, 009f3d5a]]


undefined4 * FUN_009f3c60(undefined4 *param_1,undefined4 param_2)

{
  int unaff_EDI;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5d6be;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = in_stack_00000024;
  param_1[3] = in_stack_00000028;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 1;
  FUN_009c1390(&stack0x00000024);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  DAT_013f0924 = DAT_013f0924 + 1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xc] = &PTR_FUN_00e3d0b0;
  *param_1 = &PTR_FUN_00e3d0d0;
  param_1[0xc] = &PTR_LAB_00e3d0f0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x12] = unaff_EDI;
  if (unaff_EDI != 0) {
    *(undefined4 *)(unaff_EDI + 0xa0) = 0xfa;
  }
  param_1[0x13] = 0xffff0005;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 0x41200000;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

