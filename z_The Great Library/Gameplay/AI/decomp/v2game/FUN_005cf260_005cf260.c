// FUN_005cf260 @ 005cf260 body=[[005cf260, 005cf2db]]


bool FUN_005cf260(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int unaff_EDI;
  bool bVar4;
  
  if (*(int *)(unaff_EDI + 0x74) == 0) {
    return false;
  }
  piVar1 = *(int **)(*(int *)(unaff_EDI + 0xdc) + 0x10c);
  if (*(char *)(*(int *)(*(int *)(unaff_EDI + 0xdc) + 0x5c) + 0x2a) == '\0') {
    if (piVar1 == (int *)0x0) goto LAB_005cf2a6;
    iVar3 = (**(code **)(*piVar1 + 0x24))();
    bVar4 = iVar3 == 2;
  }
  else {
    if (piVar1 == (int *)0x0) goto LAB_005cf2a6;
    iVar3 = (**(code **)(*piVar1 + 0x24))();
    bVar4 = iVar3 == 1;
  }
  if (bVar4) {
    cVar2 = FUN_0042bb00();
    return cVar2 != '\0';
  }
LAB_005cf2a6:
  if ((*(int *)(unaff_EDI + 0x74) != 0) && (cVar2 = FUN_0042bb00(), cVar2 != '\0')) {
    return true;
  }
  return false;
}

