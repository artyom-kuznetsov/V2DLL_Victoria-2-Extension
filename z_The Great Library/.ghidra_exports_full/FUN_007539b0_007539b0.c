// FUN_007539b0 @ 007539b0 body=[[007539b0, 007539c7]]


void FUN_007539b0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x50) + 0x2c))();
                    /* WARNING: Could not recover jumptable at 0x007539c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x2c))();
  return;
}

