// FUN_007b0b10 @ 007b0b10 body=[[007b0b10, 007b0b20]]


void FUN_007b0b10(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007b0b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x2c))();
    return;
  }
  return;
}

