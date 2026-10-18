// FUN_0048f590 @ 0048f590 body=[[0048f590, 0048f5d9]]


float10 FUN_0048f590(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar1 = FUN_0051b040(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 8) * 4));
    if (cVar1 != '\0') {
      return (float10)1;
    }
  }
  return (float10)DAT_00f092dc;
}

