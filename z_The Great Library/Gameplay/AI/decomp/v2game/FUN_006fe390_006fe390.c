// FUN_006fe390 @ 006fe390 body=[[006fe390, 006fe40d]]


void FUN_006fe390(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00aae9af(0x100);
  local_8 = 0;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_006f95b0(iVar2,param_1,unaff_ESI);
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(unaff_ESI + 0x1c4);
  if ((piVar3 != piVar1) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))(1);
  }
  *(int **)(unaff_ESI + 0x1c4) = piVar3;
  ExceptionList = local_10;
  return;
}

