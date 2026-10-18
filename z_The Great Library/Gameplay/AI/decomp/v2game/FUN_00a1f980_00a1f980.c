// FUN_00a1f980 @ 00a1f980 body=[[00a1f980, 00a1f998]]


undefined4 FUN_00a1f980(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xf8) == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00a1f997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x4c))();
  return uVar1;
}

