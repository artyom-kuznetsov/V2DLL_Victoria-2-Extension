// FUN_005f6880 @ 005f6880 body=[[005f6880, 005f68a8]]


void FUN_005f6880(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(*(int *)(in_ECX + 0xc) + 0x70);
    *(undefined1 *)(*(int *)(in_ECX + 0xc) + 0x70) = *(undefined1 *)(in_ECX + 0x11);
    return;
  }
  *(undefined1 *)(*(int *)(in_ECX + 0xc) + 0x70) = *(undefined1 *)(in_ECX + 0x10);
  return;
}

