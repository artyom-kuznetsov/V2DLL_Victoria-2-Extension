// FUN_005e99d0 @ 005e99d0 body=[[005e99d0, 005e9aab]]


void FUN_005e99d0(char param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    if (*(char *)(in_ECX + 0x15) == '\0') {
      if (*(char *)(in_ECX + 0x15) == '\0') {
        FUN_00502cc0();
      }
    }
    else {
      FUN_00502c00(*(undefined4 *)(in_ECX + 0x10));
    }
  }
  else {
    uVar1 = FUN_00502bd0();
    *(undefined1 *)(in_ECX + 0x15) = uVar1;
    if ((*(char *)(in_ECX + 0x14) == '\0') || (*(char *)(in_ECX + 0x15) != '\0')) {
      if ((*(char *)(in_ECX + 0x14) == '\0') && (*(char *)(in_ECX + 0x15) != '\0')) {
        FUN_00502cc0();
      }
    }
    else {
      FUN_00502c00(*(undefined4 *)(in_ECX + 0x10));
    }
  }
  return;
}

