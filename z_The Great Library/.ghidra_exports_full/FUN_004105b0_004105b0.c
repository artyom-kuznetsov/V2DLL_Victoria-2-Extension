// FUN_004105b0 @ 004105b0 body=[[004105b0, 004105dc] [004105e0, 004105ee]]


undefined4 FUN_004105b0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  cVar1 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x20) + 0x18) + 0x94))();
  if (cVar1 != '\0') {
    return 1;
  }
  iVar3 = 0;
  iVar2 = *(int *)(unaff_ESI + 0x50) - *(int *)(unaff_ESI + 0x4c) >> 2;
  if (0 < iVar2) {
    piVar4 = *(int **)(unaff_ESI + 0x4c);
    do {
      if (*piVar4 == unaff_EDI) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar2);
  }
  return 0;
}

