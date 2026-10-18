// FUN_00928eb0 @ 00928eb0 body=[[00928eb0, 00928f0c] [00928f10, 00928f61]]


uint FUN_00928eb0(void)

{
  int *piVar1;
  int *piVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  piVar1 = (int *)(*(int *)(unaff_EDI + 0x30) - *(int *)(unaff_EDI + 0x2c) >> 6);
  iVar3 = 0;
  if (0 < (int)piVar1) {
    piVar2 = (int *)(*(int *)(unaff_EDI + 0x2c) + 0x1c);
    do {
      if ((((piVar2[-4] == *(int *)(in_EDX + 0xc)) && (*piVar2 == *(int *)(in_EDX + 0x1c))) &&
          (piVar2[2] == *(int *)(in_EDX + 0x24))) &&
         ((piVar2[-2] == *(int *)(in_EDX + 0x14) && (piVar2[3] == *(int *)(in_EDX + 0x28))))) {
        return CONCAT31((int3)((uint)*(int *)(unaff_EDI + 0xc) >> 8),
                        *(int *)(*(int *)(unaff_EDI + 0xc) + iVar3 * 4) == 2);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x10;
    } while (iVar3 < (int)piVar1);
  }
  iVar4 = 0;
  iVar3 = *(int *)(unaff_EDI + 0x40) - *(int *)(unaff_EDI + 0x3c) >> 6;
  if (0 < iVar3) {
    piVar1 = (int *)(*(int *)(unaff_EDI + 0x3c) + 0x1c);
    do {
      if (((piVar1[-4] == *(int *)(in_EDX + 0xc)) && (*piVar1 == *(int *)(in_EDX + 0x1c))) &&
         ((piVar1[2] == *(int *)(in_EDX + 0x24) &&
          ((piVar1[-2] == *(int *)(in_EDX + 0x14) && (piVar1[3] == *(int *)(in_EDX + 0x28))))))) {
        return (uint)(*(int *)(*(int *)(unaff_EDI + 0x1c) + iVar4 * 4) == 2);
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 0x10;
    } while (iVar4 < iVar3);
  }
  return (uint)piVar1 & 0xffffff00;
}

