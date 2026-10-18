// FUN_00b11390 @ 00b11390 body=[[00b11390, 00b113cc]]


void FUN_00b11390(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    puVar1 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0xc,0x132,4,0,0,0xffffffff);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      *in_ECX = (int)puVar1;
      return;
    }
    *in_ECX = 0;
  }
  return;
}

