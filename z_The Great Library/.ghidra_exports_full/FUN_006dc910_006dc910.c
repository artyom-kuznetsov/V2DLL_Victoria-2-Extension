// FUN_006dc910 @ 006dc910 body=[[006dc910, 006dc988]]


void FUN_006dc910(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00aae9af(0x80);
  piVar3 = (int *)0x0;
  local_8 = 0;
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_006d1c80(iVar2);
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(in_ECX + 0x2d0);
  if ((piVar3 != piVar1) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))(1);
  }
  *(int **)(in_ECX + 0x2d0) = piVar3;
  ExceptionList = local_10;
  return;
}

