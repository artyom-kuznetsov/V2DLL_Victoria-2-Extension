// FUN_00805200 @ 00805200 body=[[00805200, 00805325]]


void FUN_00805200(int *param_1)

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
    if (iVar1 < *in_ECX) {
      *unaff_ESI = *in_ECX;
      *in_ECX = iVar1;
    }
    iVar1 = *param_1;
    if (iVar1 < *unaff_ESI) {
      *param_1 = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
    iVar1 = *unaff_ESI;
    if (iVar1 < *in_ECX) {
      *unaff_ESI = *in_ECX;
      *in_ECX = iVar1;
    }
  }
  else {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = in_ECX[iVar2];
    if (iVar1 < *in_ECX) {
      in_ECX[iVar2] = *in_ECX;
      *in_ECX = iVar1;
    }
    iVar1 = in_ECX[iVar2 * 2];
    if (iVar1 < in_ECX[iVar2]) {
      in_ECX[iVar2 * 2] = in_ECX[iVar2];
      in_ECX[iVar2] = iVar1;
    }
    iVar1 = in_ECX[iVar2];
    if (iVar1 < *in_ECX) {
      in_ECX[iVar2] = *in_ECX;
      *in_ECX = iVar1;
    }
    iVar1 = *unaff_ESI;
    piVar3 = unaff_ESI + -iVar2;
    if (iVar1 < *piVar3) {
      *unaff_ESI = *piVar3;
      *piVar3 = iVar1;
    }
    iVar1 = unaff_ESI[iVar2];
    if (iVar1 < *unaff_ESI) {
      unaff_ESI[iVar2] = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
    iVar1 = *unaff_ESI;
    if (iVar1 < *piVar3) {
      *unaff_ESI = *piVar3;
      *piVar3 = iVar1;
    }
    piVar4 = param_1 + iVar2 * -2;
    piVar3 = param_1 + -iVar2;
    iVar1 = *piVar3;
    if (iVar1 < *piVar4) {
      *piVar3 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = *param_1;
    if (iVar1 < *piVar3) {
      *param_1 = *piVar3;
      *piVar3 = iVar1;
    }
    iVar1 = *piVar3;
    if (iVar1 < *piVar4) {
      *piVar3 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = *unaff_ESI;
    if (iVar1 < in_ECX[iVar2]) {
      *unaff_ESI = in_ECX[iVar2];
      in_ECX[iVar2] = iVar1;
    }
    iVar1 = *piVar3;
    if (iVar1 < *unaff_ESI) {
      *piVar3 = *unaff_ESI;
      *unaff_ESI = iVar1;
    }
    iVar1 = *unaff_ESI;
    if (iVar1 < in_ECX[iVar2]) {
      *unaff_ESI = in_ECX[iVar2];
      in_ECX[iVar2] = iVar1;
      return;
    }
  }
  return;
}

