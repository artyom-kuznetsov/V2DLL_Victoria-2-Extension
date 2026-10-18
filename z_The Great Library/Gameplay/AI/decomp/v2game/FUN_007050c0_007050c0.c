// FUN_007050c0 @ 007050c0 body=[[007050c0, 007050d8]]


void FUN_007050c0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007050d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x40))();
    return;
  }
  return;
}

