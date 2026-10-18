// FUN_00ae9590 @ 00ae9590 body=[[00ae9590, 00ae96d8]]


int FUN_00ae9590(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b38084;
  local_c = ExceptionList;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  iVar2 = *(int *)(in_ECX + 0x20);
  piVar1 = (int *)(in_ECX + 0x1c);
  uVar5 = iVar2 + 1;
  *(uint *)(in_ECX + 0x20) = uVar5;
  if (*(uint *)(in_ECX + 0x24) < uVar5) {
    FUN_00aea280(iVar2 + 2);
  }
  puVar6 = (undefined4 *)((*(int *)(in_ECX + 0x20) + -1) * 0x20 + *piVar1);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = &PTR_FUN_00ddd998;
    puVar6[1] = 0;
    puVar6[2] = &PTR_FUN_00ddd998;
    puVar6[3] = 0;
    puVar6[4] = &PTR_FUN_00ddd998;
    puVar6[5] = 0;
    puVar6[6] = &PTR_FUN_00ddd998;
    puVar6[7] = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x20) * 0x20 + -0x20 + *piVar1;
  piVar3 = *(int **)(iVar2 + 4);
  local_4 = 0;
  *(undefined4 *)(iVar2 + 4) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(uVar4);
  }
  iVar2 = *(int *)(in_ECX + 0x20) * 0x20 + -0x18 + *piVar1;
  piVar3 = *(int **)(iVar2 + 4);
  local_4 = 1;
  *(undefined4 *)(iVar2 + 4) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  iVar2 = *(int *)(in_ECX + 0x20) * 0x20 + -0x10 + *piVar1;
  piVar3 = *(int **)(iVar2 + 4);
  local_4 = 2;
  *(undefined4 *)(iVar2 + 4) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  iVar2 = *(int *)(in_ECX + 0x20) * 0x20 + -8 + *piVar1;
  piVar1 = *(int **)(iVar2 + 4);
  local_4 = 3;
  *(undefined4 *)(iVar2 + 4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_c;
  return *(int *)(in_ECX + 0x20) + -1;
}

