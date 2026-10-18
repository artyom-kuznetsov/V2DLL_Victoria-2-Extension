// FUN_009f64a0 @ 009f64a0 body=[[009f64a0, 009f64cc]]


void FUN_009f64a0(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0xb4))();
  if (cVar1 == '\0') {
    *(int *)((int)in_ECX + 0x6e) = in_ECX[0xe];
  }
  (**(code **)(*in_ECX + 0x74))();
  FUN_009f7e60();
  *(undefined1 *)(in_ECX + 0x1b) = 1;
  return;
}

