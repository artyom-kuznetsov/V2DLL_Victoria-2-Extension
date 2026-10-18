// FUN_00583070 @ 00583070 body=[[00583070, 005830cd]]


undefined4 FUN_00583070(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4) + 0xe44);
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if (((*(int *)(iVar1 + 0xc) == *(int *)(in_ECX + 0x50)) &&
          (*(int *)(iVar1 + 8) == *(int *)(in_ECX + 0x4c))) &&
         (*(int *)(in_ECX + 0x54) < *(int *)(iVar1 + 0x68))) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
    } while (piVar2 != (int *)0x0);
  }
  return 0;
}

