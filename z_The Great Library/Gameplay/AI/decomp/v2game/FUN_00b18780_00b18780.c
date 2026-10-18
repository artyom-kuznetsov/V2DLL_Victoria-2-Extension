// FUN_00b18780 @ 00b18780 body=[[00b18780, 00b187a6]]


void FUN_00b18780(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x18) != '\0') {
    (*(code *)PTR__free_00f01b10)(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}

