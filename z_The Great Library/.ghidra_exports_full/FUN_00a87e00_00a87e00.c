// FUN_00a87e00 @ 00a87e00 body=[[00a87e00, 00a87e3b]]


void FUN_00a87e00(int param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[0x12];
  *(undefined1 *)(in_ECX + 0xe) = 1;
  *(bool *)(in_ECX + 0xe) = iVar1 == -1 || param_1 <= iVar1;
  if ((-2 < iVar1) && (cVar2 = (**(code **)(*in_ECX + 0x5c))(), cVar2 != '\0')) {
    *(int **)(in_ECX[0xd] + 0x98) = in_ECX;
  }
  return;
}

