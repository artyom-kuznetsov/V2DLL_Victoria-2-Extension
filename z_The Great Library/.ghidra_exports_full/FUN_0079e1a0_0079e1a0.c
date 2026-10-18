// FUN_0079e1a0 @ 0079e1a0 body=[[0079e1a0, 0079e1b3]]


void FUN_0079e1a0(void)

{
  int in_ECX;
  
  if (*(code **)(in_ECX + 0x1c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0079e1ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_ECX + 0x1c))();
    return;
  }
  return;
}

