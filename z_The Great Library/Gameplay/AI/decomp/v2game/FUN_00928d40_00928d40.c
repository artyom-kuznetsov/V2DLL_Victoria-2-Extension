// FUN_00928d40 @ 00928d40 body=[[00928d40, 00928df7]]


void FUN_00928d40(byte param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int in_EDX;
  int iVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x30) - *(int *)(unaff_EDI + 0x2c) >> 6;
  iVar4 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)(*(int *)(unaff_EDI + 0x2c) + 0x1c);
    do {
      if ((((piVar3[-4] == *(int *)(in_EDX + 0xc)) && (*piVar3 == *(int *)(in_EDX + 0x1c))) &&
          (piVar3[2] == *(int *)(in_EDX + 0x24))) &&
         ((piVar3[-2] == *(int *)(in_EDX + 0x14) && (piVar3[3] == *(int *)(in_EDX + 0x28))))) {
        puVar2 = (uint *)(*(int *)(unaff_EDI + 0xc) + iVar4 * 4);
        goto LAB_00928de7;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x10;
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  iVar1 = *(int *)(unaff_EDI + 0x40) - *(int *)(unaff_EDI + 0x3c) >> 6;
  if (0 < iVar1) {
    piVar3 = (int *)(*(int *)(unaff_EDI + 0x3c) + 0x1c);
    while (((piVar3[-4] != *(int *)(in_EDX + 0xc) || (*piVar3 != *(int *)(in_EDX + 0x1c))) ||
           ((piVar3[2] != *(int *)(in_EDX + 0x24) ||
            ((piVar3[-2] != *(int *)(in_EDX + 0x14) || (piVar3[3] != *(int *)(in_EDX + 0x28))))))))
    {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x10;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    puVar2 = (uint *)(*(int *)(unaff_EDI + 0x1c) + iVar4 * 4);
LAB_00928de7:
    if (*puVar2 != 2) {
      *puVar2 = (uint)param_1;
    }
  }
  return;
}

