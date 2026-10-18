// FUN_009a6ae0 @ 009a6ae0 body=[[009a6ae0, 009a6b1c]]


void FUN_009a6ae0(int param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[0x12];
  if (iVar1 == -1) {
    *(undefined1 *)(in_ECX + 0xe) = 1;
  }
  else {
    *(bool *)(in_ECX + 0xe) = param_1 <= iVar1;
  }
  if (-2 < iVar1) {
    cVar2 = (**(code **)(*in_ECX + 0x5c))();
    if (cVar2 != '\0') {
      *(int **)(in_ECX[0xd] + 0x98) = in_ECX;
    }
  }
  return;
}

