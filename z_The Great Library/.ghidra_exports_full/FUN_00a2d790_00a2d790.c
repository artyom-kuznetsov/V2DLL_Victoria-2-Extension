// FUN_00a2d790 @ 00a2d790 body=[[00a2d790, 00a2d7db]]


void FUN_00a2d790(void)

{
  char cVar1;
  int *in_ECX;
  int iVar2;
  
  cVar1 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)in_ECX[0x4f] + 0x2c))();
    FUN_00a2dc60(in_ECX);
  }
  iVar2 = in_ECX[0x50];
  *(undefined1 *)((int)in_ECX + 0x29) = 1;
  if (iVar2 != in_ECX[0x51]) {
    do {
      (**(code **)(**(int **)(iVar2 + 0x1c) + 0x34))();
      iVar2 = iVar2 + 0x20;
    } while (iVar2 != in_ECX[0x51]);
  }
  return;
}

