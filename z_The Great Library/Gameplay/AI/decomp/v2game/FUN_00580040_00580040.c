// FUN_00580040 @ 00580040 body=[[00580040, 00580129]]


void FUN_00580040(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56738;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x58) * 4) + 0x20))();
  piVar1 = *(int **)(DAT_012588e8 + 0xb24);
  FUN_00408ed0(in_ECX + 0x3c,0,0xffffffff);
  local_8 = 0;
  iVar2 = (**(code **)(*piVar1 + 0x38))();
  local_8 = 0xffffffff;
  FUN_00802800(iVar2 + 0x20bc,*(undefined4 *)(in_ECX + 0x58));
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
  FUN_007f18b0();
  ExceptionList = local_10;
  return;
}

