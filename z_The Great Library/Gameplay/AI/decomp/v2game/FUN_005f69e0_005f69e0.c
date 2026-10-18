// FUN_005f69e0 @ 005f69e0 body=[[005f69e0, 005f6a2a]]


void FUN_005f69e0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    FUN_00408ed0(*(int *)(in_ECX + 0xc) + 0x10,0,0xffffffff);
    FUN_00408ed0(in_ECX + 0x10,0,0xffffffff);
    return;
  }
  FUN_00408ed0(in_ECX + 0x2c,0,0xffffffff);
  return;
}

