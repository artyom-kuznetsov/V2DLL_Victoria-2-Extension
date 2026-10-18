// FUN_007b3660 @ 007b3660 body=[[007b3660, 007b3674]]


void FUN_007b3660(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x007b3672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x38))();
    return;
  }
  return;
}

