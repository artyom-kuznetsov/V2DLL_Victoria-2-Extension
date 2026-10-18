// FUN_008ff670 @ 008ff670 body=[[008ff670, 008ff6f8]]


uint FUN_008ff670(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if ((char)uVar2 != '\0') {
      iVar3 = FUN_00967f50();
      return (uint)(*(int *)(iVar3 + 0x30) == *(int *)(in_ECX + 0x1c));
    }
  }
  else {
    piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xb98) + *(int *)(param_1 + 0xc) * 0x10);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      do {
        if (*(int *)(*piVar1 + 0x30) == *(int *)(in_ECX + 0x1c)) {
          return CONCAT31((int3)((uint)piVar1 >> 8),1);
        }
        piVar1 = (int *)piVar1[2];
        uVar2 = 0;
      } while (piVar1 != (int *)0x0);
    }
  }
  return uVar2 & 0xffffff00;
}

