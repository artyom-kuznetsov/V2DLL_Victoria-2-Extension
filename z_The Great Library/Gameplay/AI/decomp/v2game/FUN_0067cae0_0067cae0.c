// FUN_0067cae0 @ 0067cae0 body=[[0067cae0, 0067cb3d]]


void FUN_0067cae0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int unaff_EDI;
  
  if (in_ECX <= param_1) {
    *(int *)(unaff_EDI + in_ECX * 4) = *param_2;
    return;
  }
  do {
    iVar2 = (in_ECX + -1) / 2;
    iVar1 = *(int *)(unaff_EDI + iVar2 * 4);
    if ((*(char *)(iVar1 + 0x20) <= *(char *)(*param_2 + 0x20)) &&
       (*(float *)(*param_2 + 0x18) <= *(float *)(iVar1 + 0x18))) break;
    *(int *)(unaff_EDI + in_ECX * 4) = iVar1;
    in_ECX = iVar2;
  } while (param_1 < iVar2);
  *(int *)(unaff_EDI + in_ECX * 4) = *param_2;
  return;
}

