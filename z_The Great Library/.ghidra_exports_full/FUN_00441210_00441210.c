// FUN_00441210 @ 00441210 body=[[00441210, 00441250]]


void FUN_00441210(void)

{
  int in_EAX;
  int *piVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xdc) != in_EAX) {
    *(int *)(unaff_ESI + 0xdc) = in_EAX;
    if (*(int **)(unaff_ESI + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_ESI + 0x40) + 0xd4))();
      piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x40) + 0xec))();
                    /* WARNING: Could not recover jumptable at 0x0044124b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x150))();
      return;
    }
  }
  return;
}

