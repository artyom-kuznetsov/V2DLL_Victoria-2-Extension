// FUN_006138f0 @ 006138f0 body=[[006138f0, 006139d2]]


void FUN_006138f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x28);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00613210(iVar1,*(undefined4 *)(unaff_ESI + 8),param_1);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x10))(uVar2,0);
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x28))();
  if (*(int *)(unaff_ESI + 0x2c) < iVar1) {
    puVar3 = (undefined4 *)(**(code **)(**(int **)(unaff_ESI + 0xc) + 0x2c))();
    puVar3 = *(undefined4 **)*puVar3;
    (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x20))(puVar3,1);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x6c))();
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x80))();
  (**(code **)(**(int **)(unaff_ESI + 0xc) + 0x78))();
  if (*(char *)(unaff_ESI + 0x30) != '\0') {
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x24) + 0x18) + 0x34))();
    (**(code **)(**(int **)(unaff_ESI + 0x24) + 0x2c))();
  }
  ExceptionList = local_10;
  return;
}

