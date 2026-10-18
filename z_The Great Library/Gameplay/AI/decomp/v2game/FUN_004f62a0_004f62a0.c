// FUN_004f62a0 @ 004f62a0 body=[[004f62a0, 004f62b8]]


void FUN_004f62a0(void)

{
  int *piVar1;
  int *in_EAX;
  
  piVar1 = *(int **)(*(int *)(*(int *)*in_EAX + 4) + 0x38 + *in_EAX);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004f62b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}

