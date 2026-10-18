// FUN_009b42b0 @ 009b42b0 body=[[009b42b0, 009b42d4]]


void FUN_009b42b0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0xbc) + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x009b42d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0xbc) + 0x74))();
  return;
}

