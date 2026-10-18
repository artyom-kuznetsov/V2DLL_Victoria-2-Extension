// FUN_00658ea0 @ 00658ea0 body=[[00658ea0, 00658ee5]]


void FUN_00658ea0(char param_1)

{
  int in_ECX;
  
  if (((param_1 != '\0') || (*(char *)(DAT_012588e8 + 0xd11) == '\0')) ||
     (*(char *)(*(int *)(DAT_012588e8 + 0xb24) + 0x70) != '\0')) {
    *(undefined1 *)(in_ECX + 0x1d10) = 1;
    FUN_004cd940();
    *(undefined1 *)(in_ECX + 0x1d10) = 0;
  }
  return;
}

