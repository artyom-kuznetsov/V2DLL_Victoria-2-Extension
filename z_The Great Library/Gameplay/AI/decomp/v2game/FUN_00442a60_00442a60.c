// FUN_00442a60 @ 00442a60 body=[[00442a60, 00442aa0]]


void FUN_00442a60(void)

{
  int in_EAX;
  int *piVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xa4) != in_EAX) {
    *(int *)(unaff_ESI + 0xa4) = in_EAX;
    if (*(int **)(unaff_ESI + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_ESI + 0x38) + 0xd4))();
      piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x38) + 0xec))();
                    /* WARNING: Could not recover jumptable at 0x00442a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x150))();
      return;
    }
  }
  return;
}

