// FUN_005395a0 @ 005395a0 body=[[005395a0, 00539629]]


uint FUN_005395a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = (int *)DAT_012588e8[0x2cf];
  piVar4 = DAT_012588e8;
  do {
    do {
      do {
        piVar3 = piVar2;
        if (piVar3 == (int *)0x0) {
          return (uint)piVar4 & 0xffffff00;
        }
        iVar1 = *piVar3;
        piVar2 = (int *)piVar3[2];
        piVar4 = piVar3;
      } while (*(char *)(iVar1 + 0xfd) == '\0');
      piVar4 = *(int **)(iVar1 + 0x2c);
      piVar3 = *(int **)(iVar1 + 0x30);
      if (piVar4 != piVar3) {
        do {
          if (piVar4[1] == *(int *)(param_1 + 0x20)) break;
          piVar4 = piVar4 + 2;
        } while (piVar4 != piVar3);
        if (piVar4 != piVar3) goto LAB_0053961f;
      }
      piVar3 = *(int **)(iVar1 + 0x40);
      piVar4 = *(int **)(iVar1 + 0x3c);
    } while (piVar4 == piVar3);
    do {
      if (piVar4[1] == *(int *)(param_1 + 0x20)) break;
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar3);
  } while (piVar4 == piVar3);
LAB_0053961f:
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}

