// FUN_00a69c10 @ 00a69c10 body=[[00a69c10, 00a69c4b]]


undefined4 FUN_00a69c10(uint param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0x60) + (param_1 % *(uint *)(in_ECX + 0x5c)) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0xffffffff;
    }
    iVar2 = *piVar1;
    if (*(uint *)(iVar2 + 0x1c) == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar2 + 4);
}

