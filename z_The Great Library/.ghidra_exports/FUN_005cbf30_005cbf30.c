// FUN_005cbf30 @ 005cbf30  (requested 005CBF30, first bytes: 8B 56 74 8B 4A 14 8B 41)


void FUN_005cbf30(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_ESI;
  
  piVar2 = *(int **)(*(int *)(unaff_ESI + 0x74) + 0x14);
  for (piVar1 = (int *)piVar2[8]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == unaff_ESI) goto LAB_005cbf4e;
  }
  piVar2 = *(int **)(*(int *)(unaff_ESI + 0x74) + 0x10);
LAB_005cbf4e:
  (**(code **)(*piVar2 + 0x20))();
  return;
}

