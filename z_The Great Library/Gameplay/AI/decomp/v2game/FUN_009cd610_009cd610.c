// FUN_009cd610 @ 009cd610 body=[[009cd610, 009cd621]]


void FUN_009cd610(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009cd61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 8))();
    return;
  }
  return;
}

