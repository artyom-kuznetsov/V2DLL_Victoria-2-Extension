// FUN_00699180 @ 00699180 body=[[00699180, 0069918d]]


void FUN_00699180(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x0069918c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 4) + 0x20))();
  return;
}

