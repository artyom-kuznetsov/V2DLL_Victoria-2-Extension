// FUN_00b092c0 @ 00b092c0 body=[[00b092c0, 00b092f7]]


void FUN_00b092c0(int param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = *(uint *)(in_ECX + 8);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + uVar2 * 4) + 0x8c) + 0x3c) ==
          *(int *)(param_1 + 0x3c)) {
        FUN_00b08240();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

