// FUN_009f0030 @ 009f0030 body=[[009f0030, 009f003c]]


void FUN_009f0030(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x009f003b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0xa0) + 100))();
  return;
}

