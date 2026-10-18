// FUN_00724430 @ 00724430 body=[[00724430, 00724443]]


void FUN_00724430(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0072443e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x14))();
    return;
  }
  return;
}

