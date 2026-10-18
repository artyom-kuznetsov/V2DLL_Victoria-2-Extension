// FUN_009b2df0 @ 009b2df0 body=[[009b2df0, 009b2e0e] [009b2e19, 009b2e37]]


void FUN_009b2df0(void)

{
  int *in_ECX;
  
  (**(code **)(in_ECX[0x1c] + 0x24))();
  if (in_ECX[0x18] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x18]);
  }
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
                    /* WARNING: Could not recover jumptable at 0x009b2e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x6c))();
  return;
}

