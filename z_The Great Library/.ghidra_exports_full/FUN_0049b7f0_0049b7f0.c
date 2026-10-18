// FUN_0049b7f0 @ 0049b7f0 body=[[0049b7f0, 0049b8f6]]


int * FUN_0049b7f0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int unaff_EDI;
  
  iVar2 = *(int *)(*(int *)(unaff_EDI + 0x2aa4) + in_ECX * 4);
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x2aa4) + param_2 * 4);
  iVar3 = *(int *)(iVar2 + 0xe0);
  if (((-1 < iVar3) ||
      (iVar3 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x2aa4) + *(int *)(iVar2 + 0xdc) * 4) + 0xe0),
      -1 < iVar3)) &&
     ((iVar2 = *(int *)(iVar1 + 0xe0), -1 < iVar2 ||
      (iVar2 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x2aa4) + *(int *)(iVar1 + 0xdc) * 4) + 0xe0),
      -1 < iVar2)))) {
    if (iVar2 < iVar3) {
      iVar2 = ((*(int *)(unaff_EDI + 0x2ab0) + -1) * iVar2 - ((iVar2 + -1) * iVar2) / 2) + iVar3;
    }
    else {
      iVar2 = ((*(int *)(unaff_EDI + 0x2ab0) + -1) * iVar3 - ((iVar3 + -1) * iVar3) / 2) + iVar2;
    }
    if (param_3 != 0) {
      *(bool *)param_3 = *(char *)(iVar2 + *(int *)(unaff_EDI + 0x2ab8)) != '\0';
    }
    *param_1 = (uint)*(ushort *)(*(int *)(unaff_EDI + 0x2ab4) + iVar2 * 2) * 1000;
    return param_1;
  }
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  *param_1 = iVar2;
  return param_1;
}

