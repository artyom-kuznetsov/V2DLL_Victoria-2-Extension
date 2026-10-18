// FUN_004cb190 @ 004cb190 body=[[004cb190, 004cb1c5]]


bool FUN_004cb190(void)

{
  int in_ECX;
  byte bVar1;
  
  bVar1 = *(int *)(in_ECX + 0x98) != 0;
  if (*(int *)(in_ECX + 0xb4) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)(in_ECX + 0xd0) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (*(int *)(in_ECX + 0xec) != 0) {
    bVar1 = bVar1 + 1;
  }
  return 3 < bVar1;
}

