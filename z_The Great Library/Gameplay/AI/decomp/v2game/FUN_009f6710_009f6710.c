// FUN_009f6710 @ 009f6710 body=[[009f6710, 009f673f]]


void FUN_009f6710(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0xb4))();
  if (cVar1 == '\0') {
    *(int *)((int)in_ECX + 0x6e) = in_ECX[0xe];
  }
  (**(code **)(*in_ECX + 0x90))();
  FUN_009f7e60();
  *(undefined1 *)(in_ECX + 0x1b) = 1;
  return;
}

