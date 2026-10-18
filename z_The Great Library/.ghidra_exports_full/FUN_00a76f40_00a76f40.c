// FUN_00a76f40 @ 00a76f40 body=[[00a76f40, 00a76f65]]


void FUN_00a76f40(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)in_ECX[0x3e] + 0x30))();
    FUN_00a77460();
  }
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  return;
}

