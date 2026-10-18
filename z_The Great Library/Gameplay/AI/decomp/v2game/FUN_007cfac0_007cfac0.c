// FUN_007cfac0 @ 007cfac0 body=[[007cfac0, 007cfcb2]]


void FUN_007cfac0(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar3 = (int)param_1 - (int)unaff_ESI >> 2;
  if (iVar3 < 0x29) {
    cVar2 = FUN_007c6bb0(*unaff_EDI);
    if (cVar2 != '\0') {
      uVar1 = *unaff_EDI;
      *unaff_EDI = *unaff_ESI;
      *unaff_ESI = uVar1;
    }
    cVar2 = FUN_007c6bb0(*param_1);
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = *unaff_EDI;
      *unaff_EDI = uVar1;
    }
    cVar2 = FUN_007c6bb0(*unaff_EDI);
    if (cVar2 != '\0') {
      uVar1 = *unaff_EDI;
      *unaff_EDI = *unaff_ESI;
      *unaff_ESI = uVar1;
    }
  }
  else {
    iVar3 = iVar3 + 1;
    iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
    cVar2 = FUN_007c6bb0(unaff_ESI[iVar3]);
    if (cVar2 != '\0') {
      uVar1 = unaff_ESI[iVar3];
      unaff_ESI[iVar3] = *unaff_ESI;
      *unaff_ESI = uVar1;
    }
    cVar2 = FUN_007c6bb0(unaff_ESI[iVar3 * 2]);
    if (cVar2 != '\0') {
      uVar1 = unaff_ESI[iVar3 * 2];
      unaff_ESI[iVar3 * 2] = unaff_ESI[iVar3];
      unaff_ESI[iVar3] = uVar1;
    }
    cVar2 = FUN_007c6bb0(unaff_ESI[iVar3]);
    if (cVar2 != '\0') {
      uVar1 = unaff_ESI[iVar3];
      unaff_ESI[iVar3] = *unaff_ESI;
      *unaff_ESI = uVar1;
    }
    puVar4 = unaff_EDI + -iVar3;
    cVar2 = FUN_007c6bb0(*unaff_EDI);
    if (cVar2 != '\0') {
      uVar1 = *unaff_EDI;
      *unaff_EDI = *puVar4;
      *puVar4 = uVar1;
    }
    cVar2 = FUN_007c6bb0(unaff_EDI[iVar3]);
    if (cVar2 != '\0') {
      uVar1 = unaff_EDI[iVar3];
      unaff_EDI[iVar3] = *unaff_EDI;
      *unaff_EDI = uVar1;
    }
    cVar2 = FUN_007c6bb0(*unaff_EDI);
    if (cVar2 != '\0') {
      uVar1 = *unaff_EDI;
      *unaff_EDI = *puVar4;
      *puVar4 = uVar1;
    }
    puVar4 = param_1 + iVar3 * -2;
    puVar5 = param_1 + -iVar3;
    cVar2 = FUN_007c6bb0(*puVar5);
    if (cVar2 != '\0') {
      uVar1 = *puVar5;
      *puVar5 = *puVar4;
      *puVar4 = uVar1;
    }
    cVar2 = FUN_007c6bb0(*param_1);
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = *puVar5;
      *puVar5 = uVar1;
    }
    cVar2 = FUN_007c6bb0(*puVar5);
    if (cVar2 != '\0') {
      uVar1 = *puVar5;
      *puVar5 = *puVar4;
      *puVar4 = uVar1;
    }
    cVar2 = FUN_007c6bb0(*unaff_EDI);
    if (cVar2 != '\0') {
      uVar1 = *unaff_EDI;
      *unaff_EDI = unaff_ESI[iVar3];
      unaff_ESI[iVar3] = uVar1;
    }
    cVar2 = FUN_007c6bb0(*puVar5);
    if (cVar2 != '\0') {
      uVar1 = *puVar5;
      *puVar5 = *unaff_EDI;
      *unaff_EDI = uVar1;
    }
    cVar2 = FUN_007c6bb0(*unaff_EDI);
    if (cVar2 != '\0') {
      uVar1 = *unaff_EDI;
      *unaff_EDI = unaff_ESI[iVar3];
      unaff_ESI[iVar3] = uVar1;
      return;
    }
  }
  return;
}

