// FUN_00a86e90 @ 00a86e90 body=[[00a86e90, 00a86eaa]]


void FUN_00a86e90(void)

{
  int *in_ECX;
  
  (**(code **)(in_ECX[0x1d] + 0x24))();
                    /* WARNING: Could not recover jumptable at 0x00a86ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xe4))();
  return;
}

