// FUN_007bd250 @ 007bd250 body=[[007bd250, 007bd261]]


void FUN_007bd250(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007bd25f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x20))();
    return;
  }
  return;
}

