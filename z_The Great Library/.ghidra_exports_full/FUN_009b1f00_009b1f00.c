// FUN_009b1f00 @ 009b1f00 body=[[009b1f00, 009b1f12]]


undefined4 FUN_009b1f00(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009b1f0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x78))();
    return uVar1;
  }
  return 0;
}

