// FUN_00539260 @ 00539260 body=[[00539260, 0053931f]]


bool FUN_00539260(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  int local_8;
  
  piVar3 = *(int **)(unaff_EDI + 0x9d8);
  iVar2 = 0x5f5dd18;
  while ((*(int **)(unaff_EDI + 0x9d8) <= piVar3 && (piVar3 < *(int **)(unaff_EDI + 0x9dc)))) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar3 * 4);
    piVar3 = piVar3 + 1;
    if ((((*(int *)(iVar1 + 0x134) == *(int *)(iVar1 + 300)) && (*(int *)(iVar1 + 300) != 0)) &&
        (*(int *)(iVar1 + 0x158) != 0)) &&
       ((0 < *(int *)(*(int *)(*(int *)(iVar1 + 0x118) + DAT_01258720 * 4) + 0x20) &&
        (*(char *)(iVar1 + 0x170) == '\0')))) {
      FUN_004fb7d0(unaff_EDI,&local_8,iVar1,param_1);
      if (local_8 < iVar2) {
        iVar2 = local_8;
      }
    }
  }
  iVar1 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x2c) *
                   (longlong)(*(int *)(*(int *)(unaff_EDI + 0xbcc) + 0x28) + 1000),1000,0);
  return iVar2 <= iVar1;
}

