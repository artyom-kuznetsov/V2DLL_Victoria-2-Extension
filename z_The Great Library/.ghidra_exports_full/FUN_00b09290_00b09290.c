// FUN_00b09290 @ 00b09290 body=[[00b09290, 00b092b3]]


void FUN_00b09290(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = *(uint *)(in_ECX + 8);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00b08240();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

