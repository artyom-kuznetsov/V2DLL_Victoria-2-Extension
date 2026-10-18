// FUN_009b2040 @ 009b2040 body=[[009b2040, 009b2050]]


void FUN_009b2040(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b204e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
    return;
  }
  return;
}

