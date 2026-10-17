// FUN_00537060 @ 00537060  (requested 005370A0, first bytes: 55 8B EC 53 8B 5D 08 8B)


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

