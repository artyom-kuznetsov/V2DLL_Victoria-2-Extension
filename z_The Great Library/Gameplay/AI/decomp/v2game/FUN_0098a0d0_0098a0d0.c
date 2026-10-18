// FUN_0098a0d0 @ 0098a0d0 body=[[0098a0d0, 0098a143]]


int FUN_0098a0d0(char *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint in_ECX;
  char *pcVar6;
  int *unaff_EDI;
  
  if (unaff_EDI[4] != 0) {
    uVar2 = unaff_EDI[4] - 1;
    if (uVar2 <= in_ECX) {
      in_ECX = uVar2;
    }
    piVar3 = unaff_EDI;
    if (0xf < (uint)unaff_EDI[5]) {
      piVar3 = (int *)*unaff_EDI;
    }
    pcVar6 = (char *)((int)piVar3 + in_ECX);
    cVar1 = *param_1;
    while( true ) {
      if ((*pcVar6 == cVar1) && (iVar4 = FUN_00414bd0(1), iVar4 == 0)) {
        if ((uint)unaff_EDI[5] < 0x10) {
          return (int)pcVar6 - (int)unaff_EDI;
        }
        return (int)pcVar6 - *unaff_EDI;
      }
      pcVar5 = (char *)FUN_00408fc0();
      if (pcVar6 == pcVar5) break;
      pcVar6 = pcVar6 + -1;
    }
  }
  return -1;
}

