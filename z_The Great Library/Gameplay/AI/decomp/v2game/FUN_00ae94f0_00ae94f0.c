// FUN_00ae94f0 @ 00ae94f0 body=[[00ae94f0, 00ae958a]]


void FUN_00ae94f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b38049;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  param_1 = param_1 * 0x20;
  piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + 0xc + param_1);
  local_4 = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x1c) + param_1 + 0xc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  param_1 = *(int *)(in_ECX + 0x1c) + 0x18 + param_1;
  piVar1 = *(int **)(param_1 + 4);
  local_4 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_c;
  return;
}

