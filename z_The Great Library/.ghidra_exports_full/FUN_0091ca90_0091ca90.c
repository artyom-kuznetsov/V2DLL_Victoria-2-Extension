// FUN_0091ca90 @ 0091ca90 body=[[0091ca90, 0091cad7]]


bool FUN_0091ca90(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) == 0) {
    return false;
  }
  if ((*(char *)(in_ECX + 0x98) == '\0') && (cVar1 = FUN_00429b30(), cVar1 == '\0')) {
    return false;
  }
  return *(char *)(in_ECX + 0x94) != '\0';
}

