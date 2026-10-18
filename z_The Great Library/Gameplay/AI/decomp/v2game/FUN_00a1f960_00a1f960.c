// FUN_00a1f960 @ 00a1f960 body=[[00a1f960, 00a1f97d]]


void FUN_00a1f960(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xf8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a1f978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))();
    return;
  }
  return;
}

