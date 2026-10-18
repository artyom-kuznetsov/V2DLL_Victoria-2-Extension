// FUN_006a9390 @ 006a9390 body=[[006a9390, 006a93b5]]


void FUN_006a9390(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x6c) + 0x24))();
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x24))();
                    /* WARNING: Could not recover jumptable at 0x006a93b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x18) + 0x38))();
  return;
}

