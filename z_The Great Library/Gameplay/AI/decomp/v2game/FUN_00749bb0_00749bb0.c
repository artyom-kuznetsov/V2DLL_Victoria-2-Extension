// FUN_00749bb0 @ 00749bb0 body=[[00749bb0, 00749c71]]


void FUN_00749bb0(void)

{
  char cVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_EDI < 0) {
    cVar1 = (**(code **)(**(int **)(unaff_ESI + 8) + 0xc0))();
    if ((cVar1 != '\0') &&
       (cVar1 = FUN_00563fb0(*(undefined4 *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 0x38)),
       cVar1 != '\0')) {
      (**(code **)(**(int **)(unaff_ESI + 8) + 0xb8))();
      return;
    }
    cVar1 = (**(code **)(**(int **)(unaff_ESI + 8) + 0xc0))();
    if (cVar1 != '\0') {
      return;
    }
    cVar1 = FUN_00563fb0(*(undefined4 *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 0x38));
    if (cVar1 != '\0') {
      return;
    }
  }
  else if ((*(int *)(*(int *)(unaff_ESI + 4) + 0x4c) == unaff_EDI) ||
          (cVar1 = (**(code **)(**(int **)(unaff_ESI + 8) + 0xc0))(), cVar1 != '\0')) {
    if (*(int *)(*(int *)(unaff_ESI + 4) + 0x4c) != unaff_EDI) {
      return;
    }
    cVar1 = (**(code **)(**(int **)(unaff_ESI + 8) + 0xc0))();
    if (cVar1 == '\0') {
      return;
    }
    (**(code **)(**(int **)(unaff_ESI + 8) + 0xb8))();
    return;
  }
  (**(code **)(**(int **)(unaff_ESI + 8) + 0xbc))();
  return;
}

