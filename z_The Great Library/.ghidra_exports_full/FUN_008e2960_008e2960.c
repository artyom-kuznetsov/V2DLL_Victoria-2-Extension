// FUN_008e2960 @ 008e2960 body=[[008e2960, 008e298c] [008e2990, 008e29aa]]


undefined4 FUN_008e2960(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe54);
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == *(int *)(in_ECX + 0x1c)) {
        return CONCAT31((int3)((uint)piVar1 >> 8),1);
      }
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != (int *)0x0);
  }
  return 0;
}

