// FUN_0094bca0 @ 0094bca0 body=[[0094bca0, 0094bcb1]]


void FUN_0094bca0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0094bcaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x10))();
    return;
  }
  return;
}

