// FUN_008b93b0 @ 008b93b0 body=[[008b93b0, 008b93d3]]


void FUN_008b93b0(int param_1)

{
  int in_ECX;
  
  *(bool *)(in_ECX + 0x1c) = param_1 == 0x29f;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    *(undefined1 *)(in_ECX + 0x1c) = 0;
  }
  return;
}

