// FUN_0064cf20 @ 0064cf20 body=[[0064cf20, 0064cf64]]


void FUN_0064cf20(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x144))();
  if (cVar1 == '\0') {
    FUN_0069c2c0(*(char *)(*(int *)(in_ECX[0x780] + 0x28) + 0x67) == '\0');
    if (*(char *)((int)*(int **)(in_ECX[0x780] + 0x28) + 0x67) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0064cf61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(in_ECX[0x780] + 0x28) + 0x2c))();
      return;
    }
  }
  return;
}

