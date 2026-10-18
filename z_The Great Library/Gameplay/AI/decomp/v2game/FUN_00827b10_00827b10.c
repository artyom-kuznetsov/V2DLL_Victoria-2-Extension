// FUN_00827b10 @ 00827b10 body=[[00827b10, 00827b45]]


void FUN_00827b10(undefined4 param_1)

{
  int *in_ECX;
  
  if ((int *)in_ECX[0x1a] == in_ECX) {
    (**(code **)(*in_ECX + 0x19c))(param_1);
    FUN_00825df0(in_ECX);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00827b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX[0x1a] + 0x18c))();
  return;
}

