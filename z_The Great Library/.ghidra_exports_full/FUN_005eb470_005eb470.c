// FUN_005eb470 @ 005eb470 body=[[005eb470, 005eb4e2]]


void FUN_005eb470(char param_1)

{
  int in_ECX;
  
  if (param_1 == '\0') {
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x12b0) = *(undefined4 *)(in_ECX + 0x14);
  }
  else {
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x12b0);
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x12b0) = *(undefined4 *)(in_ECX + 0x10);
  }
  return;
}

