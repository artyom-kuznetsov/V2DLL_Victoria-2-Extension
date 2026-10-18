// FUN_005cbe00 @ 005cbe00  (requested 005CBE00, first bytes: 55 8B EC 83 EC 08 53 8B)


uint FUN_005cbe00(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_EAX;
  int *piVar3;
  
  piVar3 = (int *)in_EAX[0x3b];
  do {
    do {
      do {
        if (piVar3 == (int *)0x0) {
          return (uint)in_EAX & 0xffffff00;
        }
        piVar1 = (int *)*piVar3;
        piVar2 = (int *)piVar3[2];
        in_EAX = piVar3;
        piVar3 = piVar2;
      } while ((char)piVar1[0x41] != '\0');
      in_EAX = (int *)(**(code **)(*piVar1 + 0x38))();
    } while ((char)in_EAX == '\0');
    in_EAX = *(int **)(*(int *)(DAT_012587e4 + 4) + piVar1[0x31] * 4);
  } while ((*(int *)(param_1 + 0xc4) == in_EAX[8]) ||
          (((*(int *)(*(int *)(in_EAX[0x2fa] + *(int *)(param_1 + 0xc4) * 4) + 0x34) == 0 &&
            (((*(char *)(param_1 + 0xc0) != 'R' || (*(char *)(param_1 + 0xc1) != 'E')) ||
             (*(char *)(param_1 + 0xc2) != 'B')))) &&
           ((((char)in_EAX[7] != 'R' || (*(char *)((int)in_EAX + 0x1d) != 'E')) ||
            (*(char *)((int)in_EAX + 0x1e) != 'B'))))));
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

