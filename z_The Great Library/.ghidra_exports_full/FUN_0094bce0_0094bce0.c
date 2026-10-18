// FUN_0094bce0 @ 0094bce0 body=[[0094bce0, 0094bcf8]]


void FUN_0094bce0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0094bcf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x20))();
    return;
  }
  return;
}

