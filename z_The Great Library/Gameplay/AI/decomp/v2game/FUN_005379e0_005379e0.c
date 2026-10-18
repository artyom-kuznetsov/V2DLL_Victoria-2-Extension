// FUN_005379e0 @ 005379e0 body=[[005379e0, 00537a22]]


char FUN_005379e0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x12d0) == '\0') {
    return '\x03';
  }
  if (*(char *)(in_ECX + 0x31) != '\0') {
    return '\0';
  }
  return (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(in_ECX + 0x1404)) +
         '\x01';
}

