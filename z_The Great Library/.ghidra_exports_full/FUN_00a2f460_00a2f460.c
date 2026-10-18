// FUN_00a2f460 @ 00a2f460 body=[[00a2f460, 00a2f476]]


void FUN_00a2f460(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x16c))();
                    /* WARNING: Could not recover jumptable at 0x00a2f475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x58))();
  return;
}

