// FUN_0045d020 @ 0045d020 body=[[0045d020, 0045d1b2]]


void FUN_0045d020(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  int *unaff_ESI;
  int *piVar4;
  
  iVar1 = (int)param_1 - (int)in_ECX >> 2;
  if (iVar1 < 0x29) {
    iVar1 = *unaff_ESI;
    if (*(int *)(*in_ECX + 4) < *(int *)(iVar1 + 4)) {
      *unaff_ESI = *in_ECX;
      *in_ECX = iVar1;
    }
    iVar1 = *param_1;
    if (*(int *)(*unaff_ESI + 4) < *(int *)(iVar1 + 4)) {
      *param_1 = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
    iVar1 = *unaff_ESI;
    if (*(int *)(*in_ECX + 4) < *(int *)(iVar1 + 4)) {
      *unaff_ESI = *in_ECX;
      *in_ECX = iVar1;
    }
  }
  else {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = in_ECX[iVar2];
    if (*(int *)(*in_ECX + 4) < *(int *)(iVar1 + 4)) {
      in_ECX[iVar2] = *in_ECX;
      *in_ECX = iVar1;
    }
    iVar1 = in_ECX[iVar2 * 2];
    if (*(int *)(in_ECX[iVar2] + 4) < *(int *)(iVar1 + 4)) {
      in_ECX[iVar2 * 2] = in_ECX[iVar2];
      in_ECX[iVar2] = iVar1;
    }
    iVar1 = in_ECX[iVar2];
    if (*(int *)(*in_ECX + 4) < *(int *)(iVar1 + 4)) {
      in_ECX[iVar2] = *in_ECX;
      *in_ECX = iVar1;
    }
    iVar1 = *unaff_ESI;
    piVar3 = unaff_ESI + -iVar2;
    if (*(int *)(*piVar3 + 4) < *(int *)(iVar1 + 4)) {
      *unaff_ESI = *piVar3;
      *piVar3 = iVar1;
    }
    iVar1 = unaff_ESI[iVar2];
    if (*(int *)(*unaff_ESI + 4) < *(int *)(iVar1 + 4)) {
      unaff_ESI[iVar2] = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
    iVar1 = *unaff_ESI;
    if (*(int *)(*piVar3 + 4) < *(int *)(iVar1 + 4)) {
      *unaff_ESI = *piVar3;
      *piVar3 = iVar1;
    }
    piVar4 = param_1 + iVar2 * -2;
    piVar3 = param_1 + -iVar2;
    iVar1 = *piVar3;
    if (*(int *)(*piVar4 + 4) < *(int *)(iVar1 + 4)) {
      *piVar3 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = *param_1;
    if (*(int *)(*piVar3 + 4) < *(int *)(iVar1 + 4)) {
      *param_1 = *piVar3;
      *piVar3 = iVar1;
    }
    iVar1 = *piVar3;
    if (*(int *)(*piVar4 + 4) < *(int *)(iVar1 + 4)) {
      *piVar3 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = *unaff_ESI;
    if (*(int *)(in_ECX[iVar2] + 4) < *(int *)(iVar1 + 4)) {
      *unaff_ESI = in_ECX[iVar2];
      in_ECX[iVar2] = iVar1;
    }
    iVar1 = *piVar3;
    if (*(int *)(*unaff_ESI + 4) < *(int *)(iVar1 + 4)) {
      *piVar3 = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
    iVar1 = *unaff_ESI;
    if (*(int *)(in_ECX[iVar2] + 4) < *(int *)(iVar1 + 4)) {
      *unaff_ESI = in_ECX[iVar2];
      in_ECX[iVar2] = iVar1;
      return;
    }
  }
  return;
}

