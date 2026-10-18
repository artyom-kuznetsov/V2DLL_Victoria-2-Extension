// FUN_008c3200 @ 008c3200 body=[[008c3200, 008c3234]]


void FUN_008c3200(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0xa5f) {
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    return;
  }
  if (param_1 == 0xa61) {
    *(undefined4 *)(in_ECX + 0x1c) = 2;
    return;
  }
  *(undefined4 *)(in_ECX + 0x1c) = 1;
  return;
}

