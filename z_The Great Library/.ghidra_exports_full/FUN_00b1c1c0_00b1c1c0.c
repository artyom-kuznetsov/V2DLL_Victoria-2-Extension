// FUN_00b1c1c0 @ 00b1c1c0 body=[[00b1c1c0, 00b1c1ec]]


void FUN_00b1c1c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00de092c;
  (*(code *)PTR__free_00f01b10)(in_ECX[1]);
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  return;
}

