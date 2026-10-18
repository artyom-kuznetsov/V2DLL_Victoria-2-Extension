// FUN_0054b53b @ 0054b53b body=[[0054b53b, 0054b598]]


void FUN_0054b53b(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_ESI;
  
  uVar2 = *(uint *)(unaff_EBP + -0x18);
  if (*(char *)(unaff_EBP + -0x11) == '\0') {
    uVar2 = uVar2 | 2;
  }
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0xc) | uVar2;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x38) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_00401120(uVar2,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x20) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x20));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

