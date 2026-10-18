// FUN_00708060 @ 00708060 body=[[00708060, 00708256]]


void FUN_00708060(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EDI;
  
  iVar3 = (int)param_2 - (int)unaff_EDI >> 2;
  if (iVar3 < 0x29) {
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = *unaff_EDI;
      *unaff_EDI = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = *unaff_EDI;
      *unaff_EDI = uVar1;
    }
  }
  else {
    iVar3 = iVar3 + 1;
    iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = unaff_EDI[iVar3];
      unaff_EDI[iVar3] = *unaff_EDI;
      *unaff_EDI = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = unaff_EDI[iVar3 * 2];
      unaff_EDI[iVar3 * 2] = unaff_EDI[iVar3];
      unaff_EDI[iVar3] = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = unaff_EDI[iVar3];
      unaff_EDI[iVar3] = *unaff_EDI;
      *unaff_EDI = uVar1;
    }
    puVar4 = param_1 + -iVar3;
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = *puVar4;
      *puVar4 = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = param_1[iVar3];
      param_1[iVar3] = *param_1;
      *param_1 = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = *puVar4;
      *puVar4 = uVar1;
    }
    puVar4 = param_2 + -iVar3;
    puVar5 = param_2 + iVar3 * -2;
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *puVar4;
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *param_2;
      *param_2 = *puVar4;
      *puVar4 = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *puVar4;
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = unaff_EDI[iVar3];
      unaff_EDI[iVar3] = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *puVar4;
      *puVar4 = *param_1;
      *param_1 = uVar1;
    }
    cVar2 = FUN_006f3950();
    if (cVar2 != '\0') {
      uVar1 = *param_1;
      *param_1 = unaff_EDI[iVar3];
      unaff_EDI[iVar3] = uVar1;
      return;
    }
  }
  return;
}

