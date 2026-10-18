// FUN_004d0e70 @ 004d0e70 body=[[004d0e70, 004d0f51]]


undefined4 FUN_004d0e70(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  if (*(char *)(param_2 + 0x13e) != '\0') {
    if (((*(int *)(param_2 + 0x138) == 2) && (0 < *(int *)(param_1 + 0x84))) &&
       (*(uint *)(*(int *)(*(int *)(param_2 + 0x80) + 0x38) + 8) ==
        (*(uint *)(*(int *)(DAT_012586dc + 0x50) + 0x178) >> 0xf |
        *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x17c) << 0x11))) {
      return 0;
    }
    if ((DAT_01258734 != 0) && (param_2 != DAT_01258734 + 0x10)) {
      piVar2 = (int *)FUN_004c25b0();
      piVar3 = *(int **)(param_1 + 0x48);
      do {
        do {
          if (piVar3 < *(int **)(param_1 + 0x48)) {
            return 0;
          }
          if (*(int **)(param_1 + 0x4c) <= piVar3) {
            return 0;
          }
          iVar1 = *(int *)(*piVar3 * 0xb0 + 8 + *piVar2);
          piVar3 = piVar3 + 1;
        } while (((DAT_01258734 == 0) || (iVar1 == DAT_01258734 + 0x10)) || (iVar1 == 0));
        uVar4 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 0x80) + 8) + 0x2c + param_2);
        iVar1 = *(int *)(*(int *)(param_2 + 0x6c) + 4 + uVar4 * 8);
      } while ((iVar1 < 0) || ((iVar1 < 1 && (*(int *)(*(int *)(param_2 + 0x6c) + uVar4 * 8) == 0)))
              );
    }
  }
  return 1;
}

