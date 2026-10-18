// FUN_00a2d7e0 @ 00a2d7e0 body=[[00a2d7e0, 00a2d82b]]


void FUN_00a2d7e0(void)

{
  char cVar1;
  int *in_ECX;
  int iVar2;
  
  cVar1 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)in_ECX[0x4f] + 0x30))();
    FUN_00a2dfa0();
  }
  iVar2 = in_ECX[0x50];
  if (iVar2 != in_ECX[0x51]) {
    do {
      (**(code **)(**(int **)(iVar2 + 0x1c) + 0x38))();
      iVar2 = iVar2 + 0x20;
    } while (iVar2 != in_ECX[0x51]);
  }
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  return;
}

