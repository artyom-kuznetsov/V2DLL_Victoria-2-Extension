// FUN_0060bad0 @ 0060bad0 body=[[0060bad0, 0060bb4b]]


void FUN_0060bad0(void)

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
    piVar3 = (int *)FUN_005fe630();
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(in_ECX + 0x1f8);
  if ((piVar3 != piVar1) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))(1);
  }
  *(int **)(in_ECX + 0x1f8) = piVar3;
  ExceptionList = local_10;
  return;
}

