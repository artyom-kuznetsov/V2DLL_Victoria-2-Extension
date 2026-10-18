// FUN_009962f0 @ 009962f0 body=[[009962f0, 009963ac] [009963b6, 009963c4]]


void FUN_009962f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *unaff_ESI;
  int unaff_EDI;
  
  (**(code **)(*unaff_ESI + 0x38))();
  iVar3 = (**(code **)(*unaff_ESI + 0x44))();
  if (iVar3 == 0) {
    iVar3 = *param_1;
  }
  else {
    (**(code **)(*unaff_ESI + 0x44))();
    piVar4 = (int *)(**(code **)(*unaff_ESI + 0x44))();
    iVar3 = *piVar4;
  }
  (**(code **)(iVar3 + 0x14))();
  iVar3 = *(int *)(unaff_EDI + 0xe8);
  if (iVar3 == 0) {
    (**(code **)(*unaff_ESI + 0x24))(1);
    return;
  }
  do {
    if (unaff_ESI == *(int **)(iVar3 + 8)) {
      if (*(char *)(unaff_EDI + 0xf4) == '\0') {
        iVar1 = *(int *)(iVar3 + 0xc);
        iVar2 = *(int *)(iVar3 + 0x10);
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x10) = iVar2;
        }
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0xc) = iVar1;
        }
        if (iVar3 == *(int *)(unaff_EDI + 0xe8)) {
          *(int *)(unaff_EDI + 0xe8) = iVar2;
        }
        if (iVar3 == *(int *)(unaff_EDI + 0xec)) {
          *(int *)(unaff_EDI + 0xec) = iVar1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      *(undefined1 *)(iVar3 + 0x14) = 1;
      (**(code **)(*unaff_ESI + 0x24))(1);
      return;
    }
    iVar3 = *(int *)(iVar3 + 0x10);
  } while (iVar3 != 0);
  (**(code **)(*unaff_ESI + 0x24))(1);
  return;
}

