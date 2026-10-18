// FUN_009684d0 @ 009684d0 body=[[009684d0, 009686a9]]


void FUN_009684d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  int *unaff_ESI;
  int *piVar4;
  
  iVar1 = (int)param_1 - (int)unaff_ESI >> 2;
  if (iVar1 < 0x29) {
    iVar1 = *in_ECX;
    if (*(int *)(*unaff_ESI + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *in_ECX = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
    iVar1 = *param_1;
    if (*(int *)(*in_ECX + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *param_1 = *in_ECX;
      *in_ECX = iVar1;
    }
    iVar1 = *in_ECX;
    if (*(int *)(*unaff_ESI + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *in_ECX = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
  }
  else {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = unaff_ESI[iVar2];
    if (*(int *)(*unaff_ESI + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      unaff_ESI[iVar2] = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
    iVar1 = unaff_ESI[iVar2 * 2];
    if (*(int *)(unaff_ESI[iVar2] + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      unaff_ESI[iVar2 * 2] = unaff_ESI[iVar2];
      unaff_ESI[iVar2] = iVar1;
    }
    iVar1 = unaff_ESI[iVar2];
    if (*(int *)(*unaff_ESI + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      unaff_ESI[iVar2] = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
    piVar3 = in_ECX + -iVar2;
    iVar1 = *in_ECX;
    if (*(int *)(*piVar3 + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *in_ECX = *piVar3;
      *piVar3 = iVar1;
    }
    iVar1 = in_ECX[iVar2];
    if (*(int *)(*in_ECX + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      in_ECX[iVar2] = *in_ECX;
      *in_ECX = iVar1;
    }
    iVar1 = *in_ECX;
    if (*(int *)(*piVar3 + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *in_ECX = *piVar3;
      *piVar3 = iVar1;
    }
    piVar4 = param_1 + iVar2 * -2;
    piVar3 = param_1 + -iVar2;
    iVar1 = *piVar3;
    if (*(int *)(*piVar4 + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *piVar3 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = *param_1;
    if (*(int *)(*piVar3 + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *param_1 = *piVar3;
      *piVar3 = iVar1;
    }
    iVar1 = *piVar3;
    if (*(int *)(*piVar4 + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *piVar3 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = *in_ECX;
    if (*(int *)(unaff_ESI[iVar2] + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *in_ECX = unaff_ESI[iVar2];
      unaff_ESI[iVar2] = iVar1;
    }
    iVar1 = *piVar3;
    if (*(int *)(*in_ECX + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *piVar3 = *in_ECX;
      *in_ECX = iVar1;
    }
    iVar1 = *in_ECX;
    if (*(int *)(unaff_ESI[iVar2] + 0x1438) < *(int *)(iVar1 + 0x1438)) {
      *in_ECX = unaff_ESI[iVar2];
      unaff_ESI[iVar2] = iVar1;
      return;
    }
  }
  return;
}

