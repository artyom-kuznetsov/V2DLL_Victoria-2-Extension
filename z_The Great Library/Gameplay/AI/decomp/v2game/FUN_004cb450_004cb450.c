// FUN_004cb450 @ 004cb450 body=[[004cb450, 004cb47d]]


char FUN_004cb450(void)

{
  int in_ECX;
  char cVar1;
  
  cVar1 = *(int *)(in_ECX + 0x98) != 0;
  if (*(int *)(in_ECX + 0xb4) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(in_ECX + 0xd0) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(int *)(in_ECX + 0xec) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

