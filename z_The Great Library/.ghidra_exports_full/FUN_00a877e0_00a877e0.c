// FUN_00a877e0 @ 00a877e0 body=[[00a877e0, 00a87829] [00a8782d, 00a8783f]]


float10 FUN_00a877e0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  float10 fVar2;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 4) + 4))(&param_1);
  fVar2 = (float10)(**(code **)(*piVar1 + 0x10))();
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return (float10)(float)fVar2;
}

