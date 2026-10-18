// FUN_00ae9860 @ 00ae9860 body=[[00ae9860, 00ae99cd]]


void FUN_00ae9860(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b380fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  FUN_00ae8cf0(DAT_00ef259c ^ (uint)&stack0xffffffe0);
  iVar3 = *(int *)(in_ECX + 0x20);
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      piVar2 = *(int **)(*(int *)(in_ECX + 0x1c) + 4 + iVar4);
      *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 4 + iVar4) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      piVar2 = *(int **)(iVar4 + 0x14 + *(int *)(in_ECX + 0x1c));
      *(undefined4 *)(iVar4 + *(int *)(in_ECX + 0x1c) + 0x14) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      iVar1 = iVar4 + 8 + *(int *)(in_ECX + 0x1c);
      piVar2 = *(int **)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 4) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      iVar1 = iVar4 + 0x18 + *(int *)(in_ECX + 0x1c);
      piVar2 = *(int **)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 4) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      iVar4 = iVar4 + 0x20;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar5 = 0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    do {
      FUN_00aea730();
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(in_ECX + 0x20));
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x1c));
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x3c));
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  local_4._0_1_ = 1;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x3c));
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x2c));
  }
  uVar5 = 0;
  local_4 = 0xffffffff;
  if (*(int *)(in_ECX + 0x20) != 0) {
    do {
      FUN_00aea730();
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(in_ECX + 0x20));
  }
  if (*(int *)(in_ECX + 0x1c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x1c));
  }
  ExceptionList = local_c;
  return;
}

