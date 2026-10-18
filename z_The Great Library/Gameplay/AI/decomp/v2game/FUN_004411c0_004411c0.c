// FUN_004411c0 @ 004411c0 body=[[004411c0, 00441200]]


void FUN_004411c0(void)

{
  int in_EAX;
  int *piVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xd8) != in_EAX) {
    *(int *)(unaff_ESI + 0xd8) = in_EAX;
    if (*(int **)(unaff_ESI + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_ESI + 0x3c) + 0xd4))();
      piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x3c) + 0xec))();
                    /* WARNING: Could not recover jumptable at 0x004411fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x150))();
      return;
    }
  }
  return;
}

