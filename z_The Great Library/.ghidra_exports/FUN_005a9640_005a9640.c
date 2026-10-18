// FUN_005a9640 @ 005a9640  (requested 005A9640, first bytes: 56 8B F0 8B 07 8B 50 24)


void FUN_005a9640(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int *unaff_EDI;
  
  iVar2 = (**(code **)(*unaff_EDI + 0x24))();
  if (iVar2 == 3) {
    *(undefined4 *)(in_EAX + 0x70) = 0;
    goto LAB_005a96af;
  }
  if (*(int *)(unaff_EDI[4] + 0x28) == 1) {
    for (piVar1 = *(int **)(unaff_EDI[4] + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (*piVar1 == in_EAX) goto LAB_005a96a2;
    }
  }
  if (*(int *)(unaff_EDI[5] + 0x28) == 1) {
    for (piVar1 = *(int **)(unaff_EDI[5] + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (*piVar1 == in_EAX) goto LAB_005a96a2;
    }
  }
  goto LAB_005a96a8;
LAB_005a96a2:
  FUN_005a0180();
LAB_005a96a8:
  *(undefined4 *)(in_EAX + 0x74) = 0;
LAB_005a96af:
  FUN_005d1360();
  (**(code **)(*(int *)unaff_EDI[4] + 0x30))();
  (**(code **)(*(int *)unaff_EDI[5] + 0x30))();
  return;
}

