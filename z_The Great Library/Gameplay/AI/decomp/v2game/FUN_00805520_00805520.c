// FUN_00805520 @ 00805520 body=[[00805520, 0080555f]]


void FUN_00805520(void)

{
  int iVar1;
  int in_EAX;
  int *in_EDX;
  
  iVar1 = *(int *)(in_EAX + 8);
  if ((((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) || (iVar1 == 0xf)) {
    *in_EDX = *in_EDX + 8;
    in_EDX[1] = in_EDX[1] + 0x15;
  }
  else if (iVar1 < 0x10) {
    *in_EDX = *in_EDX + 7;
    in_EDX[1] = in_EDX[1] + 0x12;
    FUN_00808c20();
    return;
  }
  FUN_00808c20();
  return;
}

