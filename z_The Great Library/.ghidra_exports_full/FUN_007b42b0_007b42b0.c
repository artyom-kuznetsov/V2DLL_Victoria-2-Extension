// FUN_007b42b0 @ 007b42b0 body=[[007b42b0, 007b4334]]


void FUN_007b42b0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ef08;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x74) + *(int *)(in_ECX + 0x144) * 4) + 8))();
  FUN_00459820();
  ExceptionList = local_10;
  return;
}

