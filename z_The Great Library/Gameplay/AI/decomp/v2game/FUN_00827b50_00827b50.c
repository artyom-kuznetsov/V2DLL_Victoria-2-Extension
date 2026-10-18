// FUN_00827b50 @ 00827b50 body=[[00827b50, 00827b92]]


void FUN_00827b50(int param_1)

{
  int *piVar1;
  int *in_ECX;
  
  if ((int *)in_ECX[0x1a] == in_ECX) {
    for (piVar1 = (int *)in_ECX[0x15]; (piVar1 != (int *)0x0 && (*piVar1 != param_1));
        piVar1 = (int *)piVar1[2]) {
    }
    FUN_005f2ae0(piVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00827b91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX[0x1a] + 0x198))();
  return;
}

