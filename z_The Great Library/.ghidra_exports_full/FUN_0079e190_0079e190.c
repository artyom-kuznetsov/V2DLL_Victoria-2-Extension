// FUN_0079e190 @ 0079e190 body=[[0079e190, 0079e19c]]


void FUN_0079e190(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0079e19a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x10))();
    return;
  }
  return;
}

