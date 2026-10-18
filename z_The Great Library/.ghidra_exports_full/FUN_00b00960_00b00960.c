// FUN_00b00960 @ 00b00960 body=[[00b00960, 00b00995]]


void FUN_00b00960(void)

{
  int *in_ECX;
  uint uVar1;
  
  if (in_ECX[1] != 0) {
    uVar1 = 0;
    do {
      FUN_00b13650();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  return;
}

