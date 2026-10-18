// FUN_00475120 @ 00475120 body=[[00475120, 00475146]]


void FUN_00475120(void)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) & 0xfffffffe;
  if (*(char *)(in_ECX + 8) != '\0') {
    *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) | 1;
  }
  *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) & 0xffffffbf;
  if (*(char *)(in_ECX + 0x18) != '\0') {
    *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) | 0x40;
  }
  return;
}

