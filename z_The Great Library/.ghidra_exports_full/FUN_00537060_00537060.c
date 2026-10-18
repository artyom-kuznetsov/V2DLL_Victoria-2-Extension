// FUN_00537060 @ 00537060 body=[[00537060, 0053707c] [00537080, 005370a1]]


void FUN_00537060(int param_1)

{
  int *piVar1;
  int unaff_EDI;
  
  for (piVar1 = *(int **)(param_1 + 0x149c); (piVar1 != (int *)0x0 && (*piVar1 != unaff_EDI));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  FUN_004cb210();
  return;
}

