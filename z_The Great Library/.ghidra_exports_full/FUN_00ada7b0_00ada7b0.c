// FUN_00ada7b0 @ 00ada7b0 body=[[00ada7b0, 00adb6fa]]


void FUN_00ada7b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3753e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)(in_ECX + 0x24);
  if (*(uint *)(in_ECX + 0x2c) < 0x4b) {
    if (*piVar1 == 0) {
      iVar3 = (*(code *)PTR_FUN_00f01b08)
                        (300,*(undefined2 *)(in_ECX + 0x30),4,2,0,0xffffffff,
                         DAT_00ef259c ^ (uint)&stack0xffffffe4);
    }
    else {
      iVar3 = (*(code *)PTR_FUN_00f01b0c)(*piVar1);
    }
    *piVar1 = iVar3;
    *(undefined4 *)(in_ECX + 0x2c) = 0x4b;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0x32,1);
    *puVar4 = &PTR_FUN_00ddcd14;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0x32,2);
    *puVar4 = &PTR_FUN_00ddcd1c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0x32,3);
    *puVar4 = &PTR_FUN_00ddcd24;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0,1);
    *puVar4 = &PTR_FUN_00ddcd2c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0,2);
    *puVar4 = &PTR_FUN_00ddcd34;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 5;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0,3);
    *puVar4 = &PTR_FUN_00ddcd3c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 6;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(1,1);
    *puVar4 = &PTR_FUN_00ddcd44;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 7;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(2,1);
    *puVar4 = &PTR_FUN_00ddcd4c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 8;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(2,2);
    *puVar4 = &PTR_FUN_00ddcd54;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 9;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(2,3);
    *puVar4 = &PTR_FUN_00ddcd5c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 10;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(3,1);
    *puVar4 = &PTR_FUN_00ddcd64;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0xb;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(3,2);
    *puVar4 = &PTR_FUN_00ddcd6c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0xc;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(4,1);
    *puVar4 = &PTR_FUN_00ddcd74;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0xd;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(4,2);
    *puVar4 = &PTR_FUN_00ddcd7c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0xe;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(5,1);
    *puVar4 = &PTR_FUN_00ddcd84;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0xf;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(5,2);
    *puVar4 = &PTR_FUN_00ddcd8c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x10;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(6,1);
    *puVar4 = &PTR_FUN_00ddcd94;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x11;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(7,1);
    *puVar4 = &PTR_FUN_00ddcd9c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x12;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(7,2);
    *puVar4 = &PTR_FUN_00ddcda4;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x13;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(8,1);
    *puVar4 = &PTR_FUN_00ddcdac;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x14;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(9,1);
    *puVar4 = &PTR_FUN_00ddcdb4;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x15;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(10,1);
    *puVar4 = &PTR_FUN_00ddcdbc;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x16;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xb,1);
    *puVar4 = &PTR_FUN_00ddcdc4;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x17;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xc,1);
    *puVar4 = &PTR_FUN_00ddcdd4;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x18;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xd,1);
    *puVar4 = &PTR_FUN_00ddcdcc;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x19;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xe,1);
    *puVar4 = &PTR_FUN_00ddcddc;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x1a;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xf,1);
    *puVar4 = &PTR_FUN_00ddcde4;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x1b;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(200,1);
    *puVar4 = &PTR_FUN_00ddcdec;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x1c;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xc9,1);
    *puVar4 = &PTR_FUN_00ddcdf4;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x1d;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xc9,2);
    *puVar4 = &PTR_FUN_00ddcdfc;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x1e;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xca,1);
    *puVar4 = &PTR_FUN_00ddce04;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x1f;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xca,2);
    *puVar4 = &PTR_FUN_00ddce0c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x20;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0xcb,1);
    *puVar4 = &PTR_FUN_00ddce14;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x21;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(100,1);
    *puVar4 = &PTR_FUN_00ddce1c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x22;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0x65,1);
    *puVar4 = &PTR_FUN_00ddce24;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x23;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(0x66,1);
    *puVar4 = &PTR_FUN_00ddce2c;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  puVar4 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x10,600,4,0,0,0xffffffff);
  uStack_4 = 0x24;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00aee0e0(500,1);
    *puVar4 = &PTR_FUN_00ddce34;
  }
  iVar3 = *(int *)(in_ECX + 0x28);
  uVar5 = iVar3 + 1;
  uStack_4 = 0xffffffff;
  *(uint *)(in_ECX + 0x28) = uVar5;
  if (*(uint *)(in_ECX + 0x2c) < uVar5) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  puVar2 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar4;
  }
  ExceptionList = local_c;
  return;
}

