// FUN_005e9750 @ 005e9750 body=[[005e9750, 005e97b6]]


void FUN_005e9750(char param_1)

{
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_004f64e0();
  }
  else {
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x84c);
    FUN_004f64e0();
  }
  return;
}

