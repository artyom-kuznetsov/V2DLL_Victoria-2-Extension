// FUN_008e82f0 @ 008e82f0 body=[[008e82f0, 008e8389]]


undefined4 FUN_008e82f0(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int in_ECX;
  undefined4 uStack_c;
  
  cVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar2 = *(uint *)(param_1 + 8);
      FUN_00969ed0(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x12e8);
      if ((*(int *)(in_ECX + 0x24) <= uStack_c) &&
         ((*(int *)(in_ECX + 0x24) < uStack_c || (*(uint *)(in_ECX + 0x20) <= uVar2)))) {
        return 1;
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x11c);
    if ((*(int *)(in_ECX + 0x24) <= iVar1) &&
       ((*(int *)(in_ECX + 0x24) < iVar1 ||
        (*(uint *)(in_ECX + 0x20) <= *(uint *)(*(int *)(param_1 + 0x14) + 0x118))))) {
      return 1;
    }
  }
  return 0;
}

