// FUN_00a7a0a0 @ 00a7a0a0 body=[[00a7a0a0, 00a7a127]]


void FUN_00a7a0a0(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d6a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e43890;
  param_1[6] = &PTR_LAB_00e438f0;
  param_1[0xc] = &PTR_LAB_00e43900;
  param_1[0x12] = &PTR_LAB_00e43910;
  param_1[0x18] = &PTR_LAB_00e43920;
  local_8 = 0;
  piVar1 = (int *)param_1[0x31];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  piVar1 = (int *)param_1[0x31];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_8 = 0xffffffff;
  FUN_00a5f240();
  ExceptionList = local_10;
  return;
}

