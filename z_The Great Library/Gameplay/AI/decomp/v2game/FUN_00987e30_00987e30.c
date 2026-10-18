// FUN_00987e30 @ 00987e30 body=[[00987e30, 00987e9a]]


void FUN_00987e30(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_EDI;
  
  if (*(uint *)(unaff_EBP + -0x14) != 0) {
    uVar3 = *(uint *)((int)unaff_EDI + *(int *)(*unaff_EDI + 4) + 0xc) |
            *(uint *)(unaff_EBP + -0x14);
    if (*(int *)((int)unaff_EDI + *(int *)(*unaff_EDI + 4) + 0x38) == 0) {
      uVar3 = uVar3 | 4;
    }
    FUN_00401120(uVar3,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 4;
  cVar2 = thunk_FUN_00ab4d81();
  if (cVar2 == '\0') {
    FUN_00409590();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar1 = *(int **)(*(int *)(*unaff_EDI + 4) + 0x38 + (int)unaff_EDI);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

