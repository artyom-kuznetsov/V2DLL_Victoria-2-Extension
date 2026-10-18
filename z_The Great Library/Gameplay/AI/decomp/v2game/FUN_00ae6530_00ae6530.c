// FUN_00ae6530 @ 00ae6530 body=[[00ae6530, 00ae654d]]


void FUN_00ae6530(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[1];
  *in_ECX = &PTR_FUN_00ddd998;
  in_ECX[1] = 0;
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ae654b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}

