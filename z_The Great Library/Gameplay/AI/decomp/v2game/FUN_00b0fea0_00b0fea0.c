// FUN_00b0fea0 @ 00b0fea0 body=[[00b0fea0, 00b0fed5]]


void FUN_00b0fea0(void)

{
  int *in_ECX;
  uint uVar1;
  
  if (in_ECX[1] != 0) {
    uVar1 = 0;
    do {
      FUN_00b131d0();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  return;
}

