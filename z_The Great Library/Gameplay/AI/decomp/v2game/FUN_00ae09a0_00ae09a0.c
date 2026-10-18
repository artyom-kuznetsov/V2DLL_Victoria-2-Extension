// FUN_00ae09a0 @ 00ae09a0 body=[[00ae09a0, 00ae09d0]]


void FUN_00ae09a0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00ddd91c;
  if (in_ECX[1] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[1]);
  }
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  return;
}

