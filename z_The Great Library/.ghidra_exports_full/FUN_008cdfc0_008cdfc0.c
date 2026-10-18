// FUN_008cdfc0 @ 008cdfc0 body=[[008cdfc0, 008cdffd]]


undefined4 FUN_008cdfc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 200);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(int *)(iVar2 + 8) != *(int *)(in_ECX + 0x1c));
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}

