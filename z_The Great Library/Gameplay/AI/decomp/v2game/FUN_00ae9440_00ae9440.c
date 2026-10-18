// FUN_00ae9440 @ 00ae9440 body=[[00ae9440, 00ae94ef]]


void FUN_00ae9440(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3801e;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + 4 + iVar4);
      local_4 = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 4 + iVar4) = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(uVar2);
      }
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + 0x14 + iVar4);
      local_4 = 1;
      *(undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar4 + 0x14) = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (uVar3 < *(uint *)(in_ECX + 0x20));
  }
  ExceptionList = local_c;
  return;
}

