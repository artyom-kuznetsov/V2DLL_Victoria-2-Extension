// FUN_0098f320 @ 0098f320 body=[[0098f320, 0098f37d] [0098f381, 0098f3fe] [0098f402, 0098f40e] [0098f412, 0098f418]]


void FUN_0098f320(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  int local_40 [4];
  undefined *local_30;
  int local_2c;
  int local_1c [5];
  undefined1 *local_8;
  
  if (in_ECX * 2 <= in_stack_0000001c) {
    do {
      local_2c = in_stack_00000020;
      iVar1 = in_EAX + in_ECX * 4;
      local_8 = (undefined1 *)local_40;
      in_EAX = iVar1 + in_ECX * 4;
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      local_30 = (undefined *)in_stack_00000018;
      iVar1 = FUN_0098f800(local_1c,iVar1,iVar1,in_EAX);
      in_stack_00000018 = *(undefined4 *)(iVar1 + 0x10);
      if (local_1c[0] != 0) {
        local_2c = local_1c[0];
                    /* WARNING: Subroutine does not return */
        local_30 = &UNK_0098f37e;
        FUN_00aae91b();
      }
      in_stack_0000001c = in_stack_0000001c + in_ECX * -2;
    } while (in_ECX * 2 <= in_stack_0000001c);
  }
  if (in_ECX < in_stack_0000001c) {
    local_2c = in_stack_00000020;
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_30 = (undefined *)in_stack_00000018;
    iVar1 = in_EAX + in_ECX * 4;
    FUN_0098f800(local_1c,iVar1,iVar1,param_1);
  }
  else {
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_30 = (undefined *)0x0;
    local_2c = in_stack_00000018;
    local_40[0] = in_EAX;
    FUN_0098f4a0();
  }
  if (local_1c[0] != 0) {
    local_2c = local_1c[0];
                    /* WARNING: Subroutine does not return */
    local_30 = &UNK_0098f3ff;
    FUN_00aae91b();
  }
  if (param_2 != 0) {
    local_2c = param_2;
                    /* WARNING: Subroutine does not return */
    local_30 = &UNK_0098f40f;
    FUN_00aae91b();
  }
  return;
}

