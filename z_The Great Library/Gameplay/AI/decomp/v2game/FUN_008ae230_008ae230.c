// FUN_008ae230 @ 008ae230  (requested 008AE230, first bytes: 8B 49 04 8B 01 8B 50 2C)


void FUN_008ae230(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x008ae238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
  return;
}

