// FUN_00ad59e0 @ 00ad59e0 body=[[00ad59e0, 00ad5c96]]


void FUN_00ad59e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b36ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00ae09e0(DAT_00ef259c ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  FUN_00aebc30();
  local_4._0_1_ = 1;
  FUN_00aebc30();
  local_4._0_1_ = 2;
  FUN_00aebc30();
  local_4._0_1_ = 3;
  FUN_00ae0020();
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined2 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined2 *)(in_ECX + 0xd4) = 0x191;
  *(undefined2 *)(in_ECX + 0xc4) = 0x191;
  *(undefined2 *)(in_ECX + 0x9c) = 0x191;
  *(undefined2 *)(in_ECX + 0x8c) = 0x191;
  *(undefined2 *)(in_ECX + 0xe4) = 0x191;
  *(undefined4 *)(in_ECX + 0xfc) = 1;
  *(undefined4 *)(in_ECX + 0xf8) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  uVar3 = FUN_00b164b0();
  *(undefined4 *)(in_ECX + 0x100) = uVar3;
  *(undefined4 *)(in_ECX + 0x110) = 1;
  *(undefined4 *)(in_ECX + 0x10c) = 1;
  if (*(uint *)(in_ECX + 0xd0) < 4) {
    if (*(int *)(in_ECX + 200) == 0) {
      uVar3 = (*(code *)PTR_FUN_00f01b08)(0x40,*(undefined2 *)(in_ECX + 0xd4),4,2,0,0xffffffff);
    }
    else {
      uVar3 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(in_ECX + 200));
    }
    *(undefined4 *)(in_ECX + 200) = uVar3;
    *(undefined4 *)(in_ECX + 0xd0) = 4;
  }
  if (*(uint *)(in_ECX + 0xe0) < 4) {
    if (*(int *)(in_ECX + 0xd8) == 0) {
      uVar3 = (*(code *)PTR_FUN_00f01b08)(0x20,*(undefined2 *)(in_ECX + 0xe4),4,2,0,0xffffffff);
    }
    else {
      uVar3 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(in_ECX + 0xd8));
    }
    *(undefined4 *)(in_ECX + 0xd8) = uVar3;
    *(undefined4 *)(in_ECX + 0xe0) = 4;
  }
  iVar2 = *(int *)(in_ECX + 0xcc);
  uVar4 = iVar2 + 1;
  *(uint *)(in_ECX + 0xcc) = uVar4;
  if (*(uint *)(in_ECX + 0xd0) < uVar4) {
    FUN_00b0d550(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 200) + -0x10 + *(int *)(in_ECX + 0xcc) * 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 3) = 1;
  }
  *(undefined2 *)(*(int *)(in_ECX + 200) + 0xc) = 0x191;
  iVar2 = *(int *)(in_ECX + 0xdc);
  uVar4 = iVar2 + 1;
  *(uint *)(in_ECX + 0xdc) = uVar4;
  if (*(uint *)(in_ECX + 0xe0) < uVar4) {
    FUN_00ae6430(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xd8) + -8 + *(int *)(in_ECX + 0xdc) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00ddd998;
    puVar1[1] = 0;
  }
  ExceptionList = local_c;
  return;
}

