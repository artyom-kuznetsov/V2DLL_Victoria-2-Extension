// FUN_005a9610 @ 005a9610  (requested 005A9610, first bytes: 8B 4F 10 56 8B F0 8B 01)


void FUN_005a9610(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EDI;
  
  (**(code **)(*(int *)unaff_EDI[4] + 0x2c))();
  iVar1 = (**(code **)(*unaff_EDI + 0x24))();
  if (iVar1 == 3) {
    *(int **)(in_EAX + 0x70) = unaff_EDI;
    return;
  }
  *(int **)(in_EAX + 0x74) = unaff_EDI;
  FUN_005d0fe0(1);
  return;
}

