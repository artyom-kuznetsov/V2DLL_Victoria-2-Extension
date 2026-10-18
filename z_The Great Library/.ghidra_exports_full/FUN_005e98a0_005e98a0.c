// FUN_005e98a0 @ 005e98a0 body=[[005e98a0, 005e993f]]


void FUN_005e98a0(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_005697e0(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x18),0,0);
  }
  else {
    uVar1 = FUN_005697d0();
    *(undefined4 *)(in_ECX + 0x18) = uVar1;
    FUN_005697e0(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),0,0);
  }
  return;
}

