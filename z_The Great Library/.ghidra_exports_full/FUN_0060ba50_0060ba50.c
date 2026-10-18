// FUN_0060ba50 @ 0060ba50 body=[[0060ba50, 0060bacb]]


void FUN_0060ba50(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00aae9af(0xa8);
  local_8 = 0;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005fe270();
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(in_ECX + 500);
  if ((piVar3 != piVar1) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))(1);
  }
  *(int **)(in_ECX + 500) = piVar3;
  ExceptionList = local_10;
  return;
}

