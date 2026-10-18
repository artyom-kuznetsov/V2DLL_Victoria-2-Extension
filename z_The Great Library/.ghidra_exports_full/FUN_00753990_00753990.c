// FUN_00753990 @ 00753990 body=[[00753990, 007539ab]]


void FUN_00753990(void)

{
  int in_ECX;
  
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x18) + 0x34))();
                    /* WARNING: Could not recover jumptable at 0x007539aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x20))();
  return;
}

