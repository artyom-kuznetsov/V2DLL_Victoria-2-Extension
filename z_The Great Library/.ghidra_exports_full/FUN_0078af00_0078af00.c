// FUN_0078af00 @ 0078af00 body=[[0078af00, 0078af50]]


void FUN_0078af00(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x38))();
  if (cVar1 == '\0') {
    (**(code **)(*in_ECX + 0x28))();
  }
  if (*(int *)(in_ECX[3] + 0x40) != (in_ECX[0x15] - in_ECX[0x14]) / 0x28) {
    FUN_0078b4c0(in_ECX + -7);
    return;
  }
  FUN_0078b2e0();
  FUN_0078b140();
  return;
}

