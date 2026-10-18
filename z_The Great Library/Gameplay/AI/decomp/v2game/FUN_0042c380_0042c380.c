// FUN_0042c380 @ 0042c380 body=[[0042c380, 0042c38c]]


void FUN_0042c380(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x1c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042c38a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x1c))();
    return;
  }
  return;
}

