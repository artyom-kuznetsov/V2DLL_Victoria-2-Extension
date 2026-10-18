// FUN_00737d00 @ 00737d00 body=[[00737d00, 00737d0c]]


void FUN_00737d00(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00737d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 8))();
    return;
  }
  return;
}

