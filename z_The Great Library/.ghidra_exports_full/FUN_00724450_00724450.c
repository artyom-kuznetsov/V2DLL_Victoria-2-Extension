// FUN_00724450 @ 00724450 body=[[00724450, 0072445c]]


void FUN_00724450(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0072445a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x14))();
    return;
  }
  return;
}

