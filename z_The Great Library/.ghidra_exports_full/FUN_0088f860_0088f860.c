// FUN_0088f860 @ 0088f860 body=[[0088f860, 0088f956]]


void FUN_0088f860(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e5b8;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0x10) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 0x20))
              ();
    piVar1 = *(int **)(DAT_012588e8 + 0xb24);
    FUN_00408ed0(in_ECX + 0x20,0,0xffffffff);
    local_8 = 0;
    iVar2 = (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    FUN_00802800(iVar2 + 0x20bc,*(undefined4 *)(param_1 + 0x10));
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
    FUN_007f18b0();
  }
  ExceptionList = local_10;
  return;
}

