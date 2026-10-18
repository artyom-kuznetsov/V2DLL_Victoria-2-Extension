// FUN_00a2c5a0 @ 00a2c5a0 body=[[00a2c5a0, 00a2c5fb]]


void FUN_00a2c5a0(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 0x10c);
  while ((*(int **)(in_ECX + 0x10c) <= piVar2 && (piVar2 < *(int **)(in_ECX + 0x110)))) {
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0x28) == 0) {
      FUN_00a2c610(iVar1);
      piVar2 = piVar2 + 1;
    }
    else {
      FUN_00a2c610(iVar1);
      piVar2 = piVar2 + 1;
    }
  }
  return;
}

