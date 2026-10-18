// FUN_009b2000 @ 009b2000 body=[[009b2000, 009b2012]]


void FUN_009b2000(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 8) = 0;
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009b2010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 4) + 0x24))();
    return;
  }
  return;
}

