// FUN_00584270 @ 00584270 body=[[00584270, 00584281]]


undefined1 FUN_00584270(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x40) != 0) && (*(int *)(in_ECX + 0x48) != 0)) {
    return 1;
  }
  return 0;
}

