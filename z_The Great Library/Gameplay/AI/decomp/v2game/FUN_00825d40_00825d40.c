// FUN_00825d40 @ 00825d40  (requested 00825D40, first bytes: 33 C0 38 41 3C 0F 95 C0)


bool FUN_00825d40(void)

{
  int in_ECX;
  
  return *(char *)(in_ECX + 0x3c) != '\0';
}

