// FUN_00a6b3e0 @ 00a6b3e0 body=[[00a6b3e0, 00a6b40f]]


void FUN_00a6b3e0(void)

{
  int iVar1;
  uint *puVar2;
  int *unaff_EDI;
  
  puVar2 = (uint *)(unaff_EDI[1] + 0x188);
  iVar1 = 8;
  do {
    if (1 < *puVar2) {
      (**(code **)(*unaff_EDI + 8))(*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 5;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

