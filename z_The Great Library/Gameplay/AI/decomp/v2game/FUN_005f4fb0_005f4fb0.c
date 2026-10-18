// FUN_005f4fb0 @ 005f4fb0 body=[[005f4fb0, 005f5028]]


void FUN_005f4fb0(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_00495b70();
  }
  else {
    uVar1 = FUN_005a96e0();
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
    FUN_00495b70();
  }
  return;
}

