// FUN_005f5540 @ 005f5540 body=[[005f5540, 005f55af]]


void FUN_005f5540(char param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_004d3680();
  }
  else {
    uVar1 = FUN_004a82a0();
    *(undefined1 *)(in_ECX + 0x11) = uVar1;
    FUN_004d3680();
  }
  return;
}

