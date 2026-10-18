// FUN_009a8530 @ 009a8530 body=[[009a8530, 009a8541]]


int * FUN_009a8530(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0xf0);
  if (0xf < *(uint *)(in_ECX + 0x104)) {
    piVar1 = (int *)*piVar1;
  }
  return piVar1;
}

