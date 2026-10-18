// FUN_009fa580 @ 009fa580 body=[[009fa580, 009fa5eb] [009fa5ef, 009fa600]]


void FUN_009fa580(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    FUN_009a8b10();
    *(undefined1 *)(param_1 + 0xe4) = 1;
    if (in_ECX == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = in_ECX + 0x7c;
    }
    (**(code **)(*(int *)(param_1 + 0x54) + 4))(iVar1);
    (**(code **)(*(int *)(in_ECX + 0x58) + 0x18))(&param_2,param_1);
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return;
}

