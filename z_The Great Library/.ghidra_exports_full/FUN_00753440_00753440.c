// FUN_00753440 @ 00753440 body=[[00753440, 00753453]]


void FUN_00753440(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0075344e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x18))();
    return;
  }
  return;
}

