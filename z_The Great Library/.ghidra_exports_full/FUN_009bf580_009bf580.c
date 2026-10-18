// FUN_009bf580 @ 009bf580 body=[[009bf580, 009bf5a0]]


void FUN_009bf580(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)in_ECX[0x50] + 0x30))();
    *(undefined1 *)((int)in_ECX + 0x29) = 0;
  }
  return;
}

