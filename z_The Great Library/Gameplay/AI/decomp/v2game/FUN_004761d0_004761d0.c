// FUN_004761d0 @ 004761d0 body=[[004761d0, 00476245] [00476249, 00476268] [0047626c, 0047627c]]


void FUN_004761d0(undefined4 param_1,uint param_2)

{
  undefined4 *in_ECX;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint in_stack_00000038;
  undefined1 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d210;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *in_ECX = param_1;
  FUN_00408ed0(&param_2,0,0xffffffff);
  FUN_00408ed0(&stack0x00000024,0,0xffffffff);
  in_ECX[0xf] = in_stack_00000044;
  in_ECX[0x10] = in_stack_00000048;
  *(undefined1 *)(in_ECX + 0x11) = in_stack_00000040;
  in_ECX[0x12] = in_stack_0000004c;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = param_2 & 0xffffff00;
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000024);
  }
  ExceptionList = local_10;
  return;
}

