// FUN_008a30e0 @ 008a30e0 body=[[008a30e0, 008a310c] [008a3110, 008a3125]]


int FUN_008a30e0(int param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0xc) * 4) + 0x83c);
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if (*(int *)(iVar1 + 0x54) == *(int *)(param_1 + 0x20)) {
        return iVar1;
      }
    } while (piVar2 != (int *)0x0);
  }
  return 0;
}

