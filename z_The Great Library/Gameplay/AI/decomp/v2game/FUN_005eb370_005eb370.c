// FUN_005eb370 @ 005eb370 body=[[005eb370, 005eb3dc]]


void FUN_005eb370(char param_1)

{
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_00522430(*(undefined4 *)(in_ECX + 0x14),0);
  }
  else {
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xe64);
    FUN_00522430(*(undefined4 *)(in_ECX + 0x10),0);
  }
  return;
}

