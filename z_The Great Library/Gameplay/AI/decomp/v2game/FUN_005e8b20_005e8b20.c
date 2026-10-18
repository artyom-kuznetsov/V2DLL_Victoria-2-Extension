// FUN_005e8b20 @ 005e8b20 body=[[005e8b20, 005e8b85]]


void FUN_005e8b20(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_0050e4c0(*(undefined4 *)(in_ECX + 0x14),0);
  }
  else {
    uVar1 = FUN_0050e4b0();
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
    FUN_0050e4c0(*(undefined4 *)(in_ECX + 0x10),0);
  }
  return;
}

