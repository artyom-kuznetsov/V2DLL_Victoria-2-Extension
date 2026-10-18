// FUN_00779630 @ 00779630 body=[[00779630, 00779641]]


void FUN_00779630(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0077963f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x30))();
    return;
  }
  return;
}

