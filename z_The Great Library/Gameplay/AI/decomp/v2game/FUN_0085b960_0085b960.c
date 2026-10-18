// FUN_0085b960 @ 0085b960 body=[[0085b960, 0085b9a2]]


undefined4 FUN_0085b960(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0x100) + (param_2 % *(uint *)(in_ECX + 0xfc)) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    if (*(uint *)(iVar2 + 0xc) == param_2) break;
    piVar1 = (int *)piVar1[1];
  }
  if (iVar2 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar2 + 0x10);
}

