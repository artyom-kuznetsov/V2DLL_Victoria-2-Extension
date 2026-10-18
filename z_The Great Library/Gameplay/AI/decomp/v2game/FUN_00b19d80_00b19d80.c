// FUN_00b19d80 @ 00b19d80 body=[[00b19d80, 00b19dd7]]


void FUN_00b19d80(byte param_1)

{
  byte bVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00de07c8;
  if (((in_ECX[1] != 0) && (bVar1 = *(byte *)((int)in_ECX + 0x15), (bVar1 & 4) != 0)) &&
     ((bVar1 & 8) == 0)) {
    if ((bVar1 & 2) == 0) {
      (*(code *)PTR__free_00f01b10)(in_ECX[1]);
    }
    else {
      (*(code *)in_ECX[2])();
    }
  }
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__free_00f01b10)();
  }
  return;
}

