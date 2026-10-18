// FUN_00827ba0 @ 00827ba0 body=[[00827ba0, 00827bbc]]


void FUN_00827ba0(void)

{
  int *in_ECX;
  
  if ((int *)in_ECX[0x1a] == in_ECX) {
    FUN_00825da0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00827bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX[0x1a] + 0x19c))();
  return;
}

