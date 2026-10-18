// FUN_0057cfd0 @ 0057cfd0 body=[[0057cfd0, 0057d05a]]


uint FUN_0057cfd0(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x4c) * 4) + 0xe44);
  iVar3 = 0;
  if (piVar1 != (int *)0x0) {
    do {
      iVar3 = *piVar1;
      piVar1 = (int *)piVar1[2];
      if ((*(int *)(iVar3 + 0xc) == *(int *)(in_ECX + 0x44)) &&
         (*(int *)(iVar3 + 8) == *(int *)(in_ECX + 0x40))) break;
      iVar3 = 0;
    } while (piVar1 != (int *)0x0);
  }
  uVar2 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 0x5c) * 4);
  if (((*(int *)(iVar3 + 0x5c) == *(int *)(uVar2 + 0x20)) && (*(char *)(uVar2 + 0xae0) != '\0')) &&
     (uVar2 = *(uint *)(in_ECX + 0x3c), (int)uVar2 < *(int *)(iVar3 + 0x68))) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

