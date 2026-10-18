// FUN_00ad0e50 @ 00ad0e50 body=[[00ad0e50, 00ad10f3]]


void FUN_00ad0e50(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b36c16;
  local_c = ExceptionList;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  uVar5 = *(uint *)(in_ECX + 0x160);
  uVar7 = 0;
  local_4 = 7;
  if (uVar5 != 0) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x15c) + uVar7 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1,uVar4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  *(undefined4 *)(in_ECX + 0x160) = 0;
  *(undefined4 *)(in_ECX + 0x164) = 0;
  if (*(int *)(in_ECX + 0x15c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x15c));
    *(undefined4 *)(in_ECX + 0x15c) = 0;
  }
  uVar5 = *(uint *)(in_ECX + 0x170);
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x16c) + uVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  *(undefined4 *)(in_ECX + 0x170) = 0;
  *(undefined4 *)(in_ECX + 0x174) = 0;
  if (*(int *)(in_ECX + 0x16c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x16c));
    *(undefined4 *)(in_ECX + 0x16c) = 0;
  }
  if (*(undefined4 **)(in_ECX + 0x1b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x1b8))(1);
  }
  uVar5 = *(uint *)(in_ECX + 0x140);
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x13c) + uVar4 * 4) + 0x10) + 0x1b0) = 0;
      pcVar1 = (char *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x13c) + uVar4 * 4) + 0x10) + 0x1ec);
      *pcVar1 = *pcVar1 + -1;
      FUN_00ad3e00(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x13c) + uVar4 * 4) + 0x10));
      iVar3 = *(int *)(*(int *)(in_ECX + 0x13c) + uVar4 * 4);
      if (iVar3 != 0) {
        FUN_00adfa70();
        (*(code *)PTR__free_00f01b10)(iVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  *(undefined4 *)(in_ECX + 0x140) = 0;
  *(undefined4 *)(in_ECX + 0x144) = 0;
  if (*(int *)(in_ECX + 0x13c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x13c));
    *(undefined4 *)(in_ECX + 0x13c) = 0;
  }
  iVar3 = *(int *)(in_ECX + 0x1b0);
  if (iVar3 != 0) {
    uVar5 = 0;
    if (*(uint *)(iVar3 + 0x140) != 0) {
      piVar6 = *(int **)(iVar3 + 0x13c);
      do {
        if (*(int *)(*piVar6 + 0x10) == in_ECX) {
          if (uVar5 != 0xffffffff) {
            FUN_00acf200(uVar5,0);
          }
          break;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar5 < *(uint *)(iVar3 + 0x140));
    }
  }
  FUN_00ad3e80(in_ECX);
  if (**(int **)(DAT_00f209e0 + 0x3c) != 0) {
    (**(code **)(*(int *)**(int **)(DAT_00f209e0 + 0x3c) + 0x44))();
  }
  local_4._0_1_ = 6;
  FUN_00ad3120();
  local_4._0_1_ = 5;
  if (*(int *)(in_ECX + 0x18c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x18c));
  }
  local_4._0_1_ = 4;
  FUN_00adfc80();
  local_4._0_1_ = 3;
  if (*(int *)(in_ECX + 0x16c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x16c));
  }
  local_4._0_1_ = 2;
  if (*(int *)(in_ECX + 0x15c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x15c));
  }
  local_4._0_1_ = 1;
  if (*(int *)(in_ECX + 0x14c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x14c));
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(int *)(in_ECX + 0x13c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x13c));
  }
  local_4 = 0xffffffff;
  FUN_00ae0dd0();
  ExceptionList = local_c;
  return;
}

