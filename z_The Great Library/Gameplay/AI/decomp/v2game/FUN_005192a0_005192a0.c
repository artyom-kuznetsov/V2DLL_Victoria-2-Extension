// FUN_005192a0 @ 005192a0 body=[[005192a0, 0051930f]]


uint FUN_005192a0(int param_1)

{
  undefined4 *puVar1;
  uint in_EAX;
  int *piVar2;
  int in_EDX;
  
  if (*(int *)(in_EAX + 0x164) != 0) {
    puVar1 = (undefined4 *)(in_EAX + 0x15c);
    for (piVar2 = *(int **)(param_1 + 0x149c); in_EAX = 0, piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[2]) {
      if (*piVar2 == *(int *)*puVar1) {
        piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EDX + 4) * 4) + 0x149c)
        ;
        in_EAX = 0;
        if (piVar2 != (int *)0x0) {
          do {
            if (*piVar2 == *(int *)*puVar1) {
              return CONCAT31((int3)((uint)piVar2 >> 8),1);
            }
            piVar2 = (int *)piVar2[2];
          } while (piVar2 != (int *)0x0);
          return 0;
        }
        break;
      }
    }
  }
  return in_EAX & 0xffffff00;
}

