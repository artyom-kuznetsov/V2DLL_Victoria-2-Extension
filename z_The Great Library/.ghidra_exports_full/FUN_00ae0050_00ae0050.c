// FUN_00ae0050 @ 00ae0050 body=[[00ae0050, 00ae008a]]


void FUN_00ae0050(void)

{
  int *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4]);
    in_ECX[4] = 0;
  }
  return;
}

