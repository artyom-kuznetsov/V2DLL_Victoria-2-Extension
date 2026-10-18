// FUN_00466360 @ 00466360 body=[[00466360, 004663bb] [004663bf, 004663df] [004663e3, 004663f4]]


bool FUN_00466360(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_EDX;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  if (in_EDX[1] - *in_EDX >> 4 <= param_1) {
    if (0xf < in_stack_0000001c) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_2);
    }
    return false;
  }
  iVar1 = *(int *)(*in_EDX + 4 + param_1 * 0x10);
  ExceptionList = &local_10;
  iVar2 = FUN_0045c080(iVar1,&param_2);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return iVar2 != iVar1;
}

