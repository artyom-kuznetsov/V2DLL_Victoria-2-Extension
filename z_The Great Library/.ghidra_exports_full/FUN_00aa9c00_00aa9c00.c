// FUN_00aa9c00 @ 00aa9c00 body=[[00aa9c00, 00aa9c65]]


void FUN_00aa9c00(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 4);
      iVar2 = *(int *)(iVar1 + 4);
    }
    *(int *)(iVar1 + 4) = param_1;
    return;
  }
  *in_ECX = param_1;
  return;
}

