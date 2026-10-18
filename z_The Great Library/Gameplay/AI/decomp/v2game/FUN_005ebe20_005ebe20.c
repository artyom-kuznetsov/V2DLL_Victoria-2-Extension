// FUN_005ebe20 @ 005ebe20 body=[[005ebe20, 005ebe91]]


void FUN_005ebe20(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_0053d7f0(*(undefined4 *)(in_ECX + 0x18));
  }
  else {
    uVar1 = FUN_0053d810();
    *(undefined4 *)(in_ECX + 0x18) = uVar1;
    FUN_0053d7f0(*(undefined4 *)(in_ECX + 0x14));
  }
  return;
}

