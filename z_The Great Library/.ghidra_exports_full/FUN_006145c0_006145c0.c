// FUN_006145c0 @ 006145c0 body=[[006145c0, 006146e7]]


void FUN_006145c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b70813;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x234) + 0x18) + 0x38))();
  piVar5 = (int *)(in_ECX + 0x90);
  iVar4 = 0x23;
  do {
    if (*piVar5 != 0) {
      (**(code **)(*(int *)*piVar5 + 0x38))();
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar1 = *(int *)(in_ECX + 4);
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar2 = FUN_00aae9af(0x180);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_8 = iVar4;
      puVar3 = (undefined4 *)FUN_00475150(iVar2);
    }
    local_8 = 1;
    if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)(1);
    }
    local_8 = 0xffffffff;
    DAT_0125b5e0 = puVar3;
  }
  *(undefined1 *)((int)DAT_0125b5e0 + 0x165) = 0;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + *(int *)(iVar1 + 0x75c) * 4) + 0xc))();
  *(undefined4 *)(iVar1 + 0x75c) = 0;
  (**(code **)(*(int *)**(undefined4 **)(iVar1 + 0x74c) + 4))();
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + *(int *)(iVar1 + 0x75c) * 4) + 8))();
  if (*(int *)(*(int *)(iVar1 + 0x1b4) + 0x20) != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 0x1b4) + 0x20) + 0x18) + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

