// FUN_008cff80 @ 008cff80 body=[[008cff80, 008cffba]]


undefined4 FUN_008cff80(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 0x15c
                    );
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

