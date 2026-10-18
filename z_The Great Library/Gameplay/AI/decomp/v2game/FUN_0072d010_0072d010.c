// FUN_0072d010 @ 0072d010 body=[[0072d010, 0072d052]]


void FUN_0072d010(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x59) != '\0') &&
     (cVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x158))(), cVar1 != '\0')) {
    return;
  }
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x10c))
            (*(undefined1 *)(in_ECX + 0x58),in_ECX + 0x3c);
  return;
}

