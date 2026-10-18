// FUN_0070d300 @ 0070d300 body=[[0070d300, 0070d314]]


void FUN_0070d300(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0070d312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x34))();
    return;
  }
  return;
}

