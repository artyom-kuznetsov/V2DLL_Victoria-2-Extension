// FUN_005ebc10 @ 005ebc10 body=[[005ebc10, 005ebd2c]]


void FUN_005ebc10(char param_1)

{
  int in_ECX;
  
  if (param_1 == '\0') {
    if (*(char *)(in_ECX + 0x20) == '\0') {
      FUN_004236a0(in_ECX + 0x18);
      FUN_004138a0();
    }
    else {
      FUN_004236a0(in_ECX + 0x18);
      FUN_004138a0();
    }
  }
  else if (*(char *)(in_ECX + 0x20) == '\0') {
    FUN_004f6550();
    FUN_004138a0();
    FUN_004236a0(in_ECX + 0x10);
    FUN_004138a0();
  }
  else {
    FUN_004f6570();
    FUN_004138a0();
    FUN_004236a0(in_ECX + 0x10);
    FUN_004138a0();
  }
  return;
}

