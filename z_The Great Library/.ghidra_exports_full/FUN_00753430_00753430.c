// FUN_00753430 @ 00753430 body=[[00753430, 0075343c]]


void FUN_00753430(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0075343a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0xc))();
    return;
  }
  return;
}

