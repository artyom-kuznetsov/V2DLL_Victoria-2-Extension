// FUN_0098a450 @ 0098a450 body=[[0098a450, 0098a4b3]]


void FUN_0098a450(int *param_1)

{
  int *piVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41dc8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  cVar2 = thunk_FUN_00ab4d81();
  if (cVar2 == '\0') {
    FUN_00409590();
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return;
}

