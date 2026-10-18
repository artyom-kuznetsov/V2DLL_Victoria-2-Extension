// FUN_006a37f0 @ 006a37f0 body=[[006a37f0, 006a38de] [006a38e2, 006a3918] [006a391c, 006a392e]]


undefined4 FUN_006a37f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  int in_stack_00000020;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b92998;
  local_8 = 0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while ((in_EDX != param_2 && (in_ECX != param_3))) {
    cVar2 = FUN_00698910();
    puVar1 = *(undefined4 **)(in_stack_00000020 + 4);
    if (cVar2 == '\0') {
      if (puVar1 < *(undefined4 **)(in_stack_00000020 + 8)) {
        *puVar1 = *in_EDX;
        *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
      }
      else {
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *in_EDX;
        }
        *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
        *(undefined4 *)(in_stack_00000020 + 8) = *(undefined4 *)(in_stack_00000020 + 4);
      }
      in_EDX = in_EDX + 1;
    }
    else if (puVar1 < *(undefined4 **)(in_stack_00000020 + 8)) {
      *puVar1 = *in_ECX;
      *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
      in_ECX = in_ECX + 1;
    }
    else {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *in_ECX;
      }
      *(int *)(in_stack_00000020 + 4) = *(int *)(in_stack_00000020 + 4) + 4;
      *(undefined4 *)(in_stack_00000020 + 8) = *(undefined4 *)(in_stack_00000020 + 4);
      in_ECX = in_ECX + 1;
    }
  }
  FUN_0098f4a0(in_EDX);
  if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_0098f4a0(in_ECX);
  if (param_4 == 0) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

