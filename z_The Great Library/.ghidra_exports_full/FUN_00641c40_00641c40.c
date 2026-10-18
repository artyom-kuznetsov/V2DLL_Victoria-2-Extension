// FUN_00641c40 @ 00641c40 body=[[00641c40, 00641c58]]


void FUN_00641c40(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00641c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x38))();
    return;
  }
  return;
}

