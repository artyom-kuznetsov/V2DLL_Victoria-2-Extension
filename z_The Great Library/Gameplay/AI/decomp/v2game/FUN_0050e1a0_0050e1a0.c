// FUN_0050e1a0 @ 0050e1a0 body=[[0050e1a0, 0050e22c]]


void FUN_0050e1a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_EDI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar3 = DAT_012588e8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b0d0;
  local_14 = ExceptionList;
  if ((*(char *)(unaff_EDI + 0x13e0) != '\0') && (*(char *)(unaff_EDI + 0xbc0) == '\0')) {
    ExceptionList = &local_14;
    for (piVar4 = *(int **)(unaff_EDI + 0x9d8);
        (*(int **)(unaff_EDI + 0x9d8) <= piVar4 && (piVar4 < *(int **)(unaff_EDI + 0x9dc)));
        piVar4 = piVar4 + 1) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0xacc) + *piVar4 * 4);
      iVar2 = *(int *)(iVar1 + 0x188);
      if (*(char *)(iVar2 + 0x80) != '\0') {
        *(undefined1 *)(iVar2 + 0x80) = 0;
      }
      FUN_004bba40(iVar1);
    }
  }
  ExceptionList = local_14;
  return;
}

