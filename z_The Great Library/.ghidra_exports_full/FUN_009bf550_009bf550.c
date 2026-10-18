// FUN_009bf550 @ 009bf550 body=[[009bf550, 009bf570]]


void FUN_009bf550(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)in_ECX[0x50] + 0x2c))();
    *(undefined1 *)((int)in_ECX + 0x29) = 1;
  }
  return;
}

