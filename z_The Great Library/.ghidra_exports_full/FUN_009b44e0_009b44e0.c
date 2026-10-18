// FUN_009b44e0 @ 009b44e0 body=[[009b44e0, 009b44fe]]


void FUN_009b44e0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x53) = 0;
  FUN_009b3e00();
  if (*(int **)(in_ECX + 0x104) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009b44fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x104) + 0x38))();
    return;
  }
  return;
}

