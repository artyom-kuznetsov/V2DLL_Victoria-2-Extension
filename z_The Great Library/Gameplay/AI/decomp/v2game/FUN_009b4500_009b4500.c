// FUN_009b4500 @ 009b4500 body=[[009b4500, 009b4520]]


void FUN_009b4500(void)

{
  int in_ECX;
  
  FUN_009b3e40();
  if (*(int *)(in_ECX + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b451d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x100) + 0x30))();
    return;
  }
  return;
}

