// FUN_00615166 @ 00615166 body=[[00615166, 006151c8]]


void FUN_00615166(void)

{
  int *piVar1;
  uint uVar2;
  undefined1 *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  
  uVar2 = *(uint *)(unaff_EBP + -0x14);
  *unaff_EBX = 0;
  if (unaff_ESI[2] == 0 && unaff_ESI[3] == 0) {
    uVar2 = uVar2 | 2;
  }
  if (uVar2 != 0) {
    uVar2 = uVar2 | *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0xc);
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x38) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_00401120(uVar2,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

