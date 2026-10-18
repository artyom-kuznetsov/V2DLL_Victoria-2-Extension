// FUN_009c51a0 @ 009c51a0 body=[[009c51a0, 009c51b2]]


void FUN_009c51a0(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x16c))();
                    /* WARNING: Could not recover jumptable at 0x009c51b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x60))();
  return;
}

