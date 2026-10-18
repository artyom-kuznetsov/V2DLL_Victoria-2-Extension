// FUN_00a2f070 @ 00a2f070 body=[[00a2f070, 00a2f090]]


void FUN_00a2f070(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)in_ECX[0x54] + 0x30))();
  }
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  return;
}

