// FUN_007796e0 @ 007796e0 body=[[007796e0, 007796f8]]


void FUN_007796e0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007796f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 8))();
    return;
  }
  return;
}

