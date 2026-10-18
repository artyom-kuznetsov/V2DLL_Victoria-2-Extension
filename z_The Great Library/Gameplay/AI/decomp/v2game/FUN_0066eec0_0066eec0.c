// FUN_0066eec0 @ 0066eec0 body=[[0066eec0, 0066eedf]]


void FUN_0066eec0(void)

{
  int in_ECX;
  
  FUN_0066eee0();
  if (*(char *)((int)*(int **)(in_ECX + 0x1d24) + 0x67) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0066eedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x1d24) + 0x2c))();
    return;
  }
  return;
}

