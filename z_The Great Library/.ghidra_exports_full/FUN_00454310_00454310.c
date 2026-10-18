// FUN_00454310 @ 00454310 body=[[00454310, 00454546]]


void FUN_00454310(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar4 = (int)param_1 - (int)unaff_ESI >> 2;
  if (iVar4 < 0x29) {
    uVar1 = *unaff_ESI;
    uVar2 = *unaff_EDI;
    cVar3 = FUN_0044f0a0(uVar2,uVar1);
    if (cVar3 != '\0') {
      *unaff_EDI = uVar1;
      *unaff_ESI = uVar2;
    }
    uVar1 = *unaff_EDI;
    uVar2 = *param_1;
    cVar3 = FUN_0044f0a0(uVar2,uVar1);
    if (cVar3 != '\0') {
      *param_1 = uVar1;
      *unaff_EDI = uVar2;
    }
    uVar1 = *unaff_ESI;
    uVar2 = *unaff_EDI;
    cVar3 = FUN_0044f0a0(uVar2,uVar1);
    if (cVar3 != '\0') {
      *unaff_EDI = uVar1;
      *unaff_ESI = uVar2;
    }
  }
  else {
    iVar4 = iVar4 + 1;
    iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
    uVar1 = unaff_ESI[iVar4];
    cVar3 = FUN_0044f0a0(uVar1,*unaff_ESI);
    if (cVar3 != '\0') {
      unaff_ESI[iVar4] = *unaff_ESI;
      *unaff_ESI = uVar1;
    }
    uVar1 = unaff_ESI[iVar4 * 2];
    cVar3 = FUN_0044f0a0(uVar1,unaff_ESI[iVar4]);
    if (cVar3 != '\0') {
      unaff_ESI[iVar4 * 2] = unaff_ESI[iVar4];
      unaff_ESI[iVar4] = uVar1;
    }
    uVar1 = unaff_ESI[iVar4];
    cVar3 = FUN_0044f0a0(uVar1,*unaff_ESI);
    if (cVar3 != '\0') {
      unaff_ESI[iVar4] = *unaff_ESI;
      *unaff_ESI = uVar1;
    }
    uVar1 = *unaff_EDI;
    puVar5 = unaff_EDI + -iVar4;
    cVar3 = FUN_0044f0a0(uVar1,*puVar5);
    if (cVar3 != '\0') {
      *unaff_EDI = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = unaff_EDI[iVar4];
    cVar3 = FUN_0044f0a0(uVar1,*unaff_EDI);
    if (cVar3 != '\0') {
      unaff_EDI[iVar4] = *unaff_EDI;
      *unaff_EDI = uVar1;
    }
    uVar1 = *unaff_EDI;
    cVar3 = FUN_0044f0a0(uVar1,*puVar5);
    if (cVar3 != '\0') {
      *unaff_EDI = *puVar5;
      *puVar5 = uVar1;
    }
    puVar5 = param_1 + iVar4 * -2;
    puVar6 = param_1 + -iVar4;
    uVar1 = *puVar6;
    cVar3 = FUN_0044f0a0(uVar1,*puVar5);
    if (cVar3 != '\0') {
      *puVar6 = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = *param_1;
    cVar3 = FUN_0044f0a0(uVar1,*puVar6);
    if (cVar3 != '\0') {
      *param_1 = *puVar6;
      *puVar6 = uVar1;
    }
    uVar1 = *puVar6;
    cVar3 = FUN_0044f0a0(uVar1,*puVar5);
    if (cVar3 != '\0') {
      *puVar6 = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = *unaff_EDI;
    cVar3 = FUN_0044f0a0(uVar1,unaff_ESI[iVar4]);
    if (cVar3 != '\0') {
      *unaff_EDI = unaff_ESI[iVar4];
      unaff_ESI[iVar4] = uVar1;
    }
    uVar1 = *puVar6;
    cVar3 = FUN_0044f0a0(uVar1,*unaff_EDI);
    if (cVar3 != '\0') {
      *puVar6 = *unaff_EDI;
      *unaff_EDI = uVar1;
    }
    uVar1 = *unaff_EDI;
    cVar3 = FUN_0044f0a0(uVar1,unaff_ESI[iVar4]);
    if (cVar3 != '\0') {
      *unaff_EDI = unaff_ESI[iVar4];
      unaff_ESI[iVar4] = uVar1;
      return;
    }
  }
  return;
}

