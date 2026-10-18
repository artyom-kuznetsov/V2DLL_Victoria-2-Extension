// FUN_009b1fe0 @ 009b1fe0 body=[[009b1fe0, 009b1ff2]]


void FUN_009b1fe0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 8) = 1;
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009b1ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 4) + 0x20))();
    return;
  }
  return;
}

