// FUN_0066b830 @ 0066b830 body=[[0066b830, 0066b88f]]


int FUN_0066b830(void)

{
  int in_ECX;
  undefined4 *puVar1;
  int iVar2;
  int local_14;
  
  iVar2 = 0;
  puVar1 = (undefined4 *)(in_ECX + 0x1550);
  do {
    FUN_004e9470(*puVar1);
    if (local_14 != 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 10);
  return -1;
}

