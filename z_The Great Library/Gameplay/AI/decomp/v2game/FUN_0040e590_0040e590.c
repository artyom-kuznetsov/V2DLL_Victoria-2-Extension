// FUN_0040e590 @ 0040e590 body=[[0040e590, 0040e616]]


void FUN_0040e590(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x39c) != '\0') {
    *(undefined1 *)(in_ECX + 0x39c) = 0;
    *(undefined4 *)(in_ECX + 0x34c) = 2;
    FUN_0040d870();
    FUN_0040f040(in_ECX);
    FUN_0040f740();
    FUN_0040f4d0();
    return;
  }
  if (*(char *)(in_ECX + 0x39d) != '\0') {
    *(undefined1 *)(in_ECX + 0x39d) = 0;
    FUN_0040f040(in_ECX);
    *(undefined4 *)(in_ECX + 0x34c) = 0;
    *(undefined1 *)(in_ECX + 0x39c) = 0;
    FUN_0040d870();
    FUN_0040f040(in_ECX);
    FUN_0040f740();
    FUN_0040f4d0();
    return;
  }
  return;
}

