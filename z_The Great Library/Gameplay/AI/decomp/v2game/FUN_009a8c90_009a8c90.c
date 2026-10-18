// FUN_009a8c90 @ 009a8c90 body=[[009a8c90, 009a8c9d]]


void FUN_009a8c90(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 0;
                    /* WARNING: Could not recover jumptable at 0x009a8c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x70) + 0x38))();
  return;
}

