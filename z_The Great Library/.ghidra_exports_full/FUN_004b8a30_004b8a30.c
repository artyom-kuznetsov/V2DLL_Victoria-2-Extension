// FUN_004b8a30 @ 004b8a30 body=[[004b8a30, 004b8a4e] [004b8a52, 004b8a6f] [004b8a73, 004b8a76]]


void FUN_004b8a30(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  undefined4 in_ECX;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint in_stack_00000038;
  
  *(undefined4 *)(in_EAX + 0x40) = in_ECX;
  *(undefined4 *)(in_EAX + 0x44) = param_1;
  *(undefined1 *)(in_EAX + 0x48) = 1;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000024);
  }
  return;
}

