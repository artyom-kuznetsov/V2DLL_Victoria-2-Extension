// FUN_008bc300 @ 008bc300 body=[[008bc300, 008bc32c] [008bc330, 008bc34a]]


undefined4 FUN_008bc300(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x4f8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == *(int *)(in_ECX + 0x1c)) break;
    piVar1 = (int *)piVar1[2];
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}

