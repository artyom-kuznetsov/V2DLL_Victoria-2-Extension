// FUN_004566c0 @ 004566c0 body=[[004566c0, 004566cf]]


undefined1 FUN_004566c0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x29) != '\0') {
    *(undefined1 *)(in_ECX + 0x29) = 0;
    return 1;
  }
  return 0;
}

