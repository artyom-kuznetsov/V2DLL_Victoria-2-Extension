// FUN_004d0fd0 @ 004d0fd0 body=[[004d0fd0, 004d1012]]


uint FUN_004d0fd0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  piVar2 = *(int **)(unaff_EDI + 0x48);
  do {
    if ((piVar2 < *(int **)(unaff_EDI + 0x48)) || (*(int **)(unaff_EDI + 0x4c) <= piVar2)) {
      return (uint)piVar2 & 0xffffff00;
    }
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar2 * 4);
    piVar2 = piVar2 + 1;
  } while ((*(int *)(iVar1 + 300) == 0) || (*(int *)(iVar1 + 0x158) == 0));
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

