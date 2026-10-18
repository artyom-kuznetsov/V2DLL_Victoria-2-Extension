// FUN_00699190 @ 00699190 body=[[00699190, 0069919d]]


void FUN_00699190(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0069919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0x24))();
  return;
}

