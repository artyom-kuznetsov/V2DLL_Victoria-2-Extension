// FUN_005e41e0 @ 005e41e0  (requested 005E41E0, first bytes: 55 8B EC 83 E4 F8 83 EC)


uint FUN_005e41e0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  
  iVar5 = DAT_01258a98;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (DAT_01258a98 != 0) goto LAB_005e42d4;
LAB_005e421b:
    iVar1 = 0;
  }
  else {
    if (DAT_01258a94 == 0) goto LAB_005e421b;
LAB_005e42d4:
    iVar1 = FUN_009c1d40();
    if (iVar1 == 0) goto LAB_005e421b;
    iVar1 = iVar1 + -8;
  }
  *(int *)(in_ECX + 0x3c) = iVar1;
  uVar2 = 0;
  if (iVar1 == 0) goto LAB_005e4310;
  if (*(uint *)(in_ECX + 0x68) < 0x1269) {
    if (iVar5 != 0) goto LAB_005e42f7;
LAB_005e424f:
    uVar2 = 0;
  }
  else {
    if (DAT_01258a94 == 0) goto LAB_005e424f;
LAB_005e42f7:
    iVar5 = FUN_009c1d40();
    if (iVar5 == 0) goto LAB_005e424f;
    uVar2 = iVar5 - 8;
  }
  *(uint *)(in_ECX + 100) = uVar2;
  if ((uVar2 != 0) && (*(int *)(in_ECX + 0x8c) != 0)) {
    piVar3 = (int *)FUN_0079dee0();
    piVar4 = (int *)FUN_0079dee0();
    (**(code **)(*piVar4 + 0x30))();
    iVar5 = FUN_005dc560();
    iVar1 = (**(code **)(*piVar3 + 0x30))();
    uVar2 = *(int *)(*(int *)(iVar1 + 0xa4) + 600) / 1000 - iVar5;
    if (*(int *)(in_ECX + 0x8c) <= (int)uVar2) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
LAB_005e4310:
  return uVar2 & 0xffffff00;
}

