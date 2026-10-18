// FUN_0050e840 @ 0050e840 body=[[0050e840, 0050e890]]


void FUN_0050e840(void)

{
  int *piVar1;
  int in_ECX;
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b0d0;
  local_10 = ExceptionList;
  for (piVar1 = *(int **)(in_ECX + 0xbd4); (piVar1 != (int *)0x0 && (*piVar1 != in_EDX));
      piVar1 = (int *)piVar1[2]) {
  }
  ExceptionList = &local_10;
  FUN_005f2ae0(piVar1);
  ExceptionList = local_10;
  return;
}

