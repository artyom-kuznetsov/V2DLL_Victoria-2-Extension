// FUN_00804210 @ 00804210 body=[[00804210, 00804228] [00804230, 0080426b]]


void FUN_00804210(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 400) * *(int *)(unaff_EDI + 0x18c);
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(unaff_EDI + 0x19c) + 0x39c + iVar3) != 0) {
        piVar1 = *(int **)(*(int *)(unaff_EDI + 0x19c) + 0x39c + iVar3);
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(*(int *)(unaff_EDI + 0x19c) + 0x39c + iVar3) = 0;
      }
      iVar3 = iVar3 + 0x3c0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

