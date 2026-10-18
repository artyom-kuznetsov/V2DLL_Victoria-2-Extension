// FUN_00827bc0 @ 00827bc0 body=[[00827bc0, 00827bd7]]


void FUN_00827bc0(void)

{
  int *in_ECX;
  
  if ((int *)in_ECX[0x1a] == in_ECX) {
    FUN_00826290();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00827bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX[0x1a] + 400))();
  return;
}

