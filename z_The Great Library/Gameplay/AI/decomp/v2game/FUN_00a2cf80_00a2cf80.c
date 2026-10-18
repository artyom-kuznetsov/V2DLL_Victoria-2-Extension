// FUN_00a2cf80 @ 00a2cf80 body=[[00a2cf80, 00a2cf9d]]


void FUN_00a2cf80(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[1];
  *in_ECX = &PTR_FUN_00e3fb28;
  in_ECX[1] = 0;
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a2cf9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}

