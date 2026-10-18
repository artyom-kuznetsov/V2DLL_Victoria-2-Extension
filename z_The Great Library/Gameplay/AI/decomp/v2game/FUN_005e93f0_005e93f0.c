// FUN_005e93f0 @ 005e93f0 body=[[005e93f0, 005e945d]]


void FUN_005e93f0(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_00513a90(*(undefined4 *)(in_ECX + 0x14),0,0,0);
  }
  else {
    uVar1 = FUN_00513a80();
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
    FUN_00513a90(*(undefined4 *)(in_ECX + 0x10),0,0,0);
  }
  return;
}

