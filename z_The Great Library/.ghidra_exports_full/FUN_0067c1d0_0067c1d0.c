// FUN_0067c1d0 @ 0067c1d0 body=[[0067c1d0, 0067c4c4]]


void FUN_0067c1d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *unaff_ESI;
  int *piVar4;
  int *piVar5;
  
  iVar2 = (int)param_1 - (int)in_ECX >> 2;
  if (iVar2 < 0x29) {
    iVar2 = *unaff_ESI;
    iVar1 = *in_ECX;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *unaff_ESI = iVar1;
      *in_ECX = iVar2;
    }
    iVar2 = *param_1;
    iVar1 = *unaff_ESI;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *param_1 = iVar1;
      *unaff_ESI = iVar2;
    }
    iVar2 = *unaff_ESI;
    iVar1 = *in_ECX;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *unaff_ESI = iVar1;
      *in_ECX = iVar2;
    }
  }
  else {
    iVar1 = *in_ECX;
    iVar2 = iVar2 + 1;
    iVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    iVar2 = in_ECX[iVar3];
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      in_ECX[iVar3] = iVar1;
      *in_ECX = iVar2;
    }
    iVar2 = in_ECX[iVar3 * 2];
    iVar1 = in_ECX[iVar3];
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      in_ECX[iVar3 * 2] = iVar1;
      in_ECX[iVar3] = iVar2;
    }
    iVar2 = in_ECX[iVar3];
    iVar1 = *in_ECX;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      in_ECX[iVar3] = iVar1;
      *in_ECX = iVar2;
    }
    iVar2 = *unaff_ESI;
    piVar4 = unaff_ESI + -iVar3;
    iVar1 = *piVar4;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *unaff_ESI = iVar1;
      *piVar4 = iVar2;
    }
    iVar2 = unaff_ESI[iVar3];
    iVar1 = *unaff_ESI;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      unaff_ESI[iVar3] = iVar1;
      *unaff_ESI = iVar2;
    }
    iVar2 = *unaff_ESI;
    iVar1 = *piVar4;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *unaff_ESI = iVar1;
      *piVar4 = iVar2;
    }
    piVar4 = param_1 + iVar3 * -2;
    piVar5 = param_1 + -iVar3;
    iVar2 = *piVar5;
    iVar1 = *piVar4;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *piVar5 = iVar1;
      *piVar4 = iVar2;
    }
    iVar2 = *param_1;
    iVar1 = *piVar5;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *param_1 = iVar1;
      *piVar5 = iVar2;
    }
    iVar2 = *piVar5;
    iVar1 = *piVar4;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *piVar5 = iVar1;
      *piVar4 = iVar2;
    }
    iVar2 = *unaff_ESI;
    iVar1 = in_ECX[iVar3];
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *unaff_ESI = iVar1;
      in_ECX[iVar3] = iVar2;
    }
    iVar2 = *piVar5;
    iVar1 = *unaff_ESI;
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *piVar5 = iVar1;
      *unaff_ESI = iVar2;
    }
    iVar2 = *unaff_ESI;
    iVar1 = in_ECX[iVar3];
    if ((*(char *)(iVar1 + 0x20) < *(char *)(iVar2 + 0x20)) ||
       (*(float *)(iVar2 + 0x18) < *(float *)(iVar1 + 0x18))) {
      *unaff_ESI = iVar1;
      in_ECX[iVar3] = iVar2;
      return;
    }
  }
  return;
}

