// FUN_00a77260 @ 00a77260 body=[[00a77260, 00a7727b]]


void FUN_00a77260(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x6c))();
                    /* WARNING: Could not recover jumptable at 0x00a7727a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX[0x3e] + 0x24))();
  return;
}

