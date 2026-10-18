// FUN_00984870 @ 00984870 body=[[00984870, 009849f3]]


void FUN_00984870(int *param_1,int *param_2)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = ((int)param_2 - (int)in_EAX) / 0x44;
  if (iVar2 < 0x29) {
    if (*in_EAX < *param_1) {
      FUN_007d03f0();
    }
    if (*param_1 < *param_2) {
      FUN_007d03f0(param_1);
    }
    if (*in_EAX < *param_1) {
      FUN_007d03f0();
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    piVar1 = in_EAX + iVar2 * 0x11;
    if (*in_EAX < in_EAX[iVar2 * 0x11]) {
      FUN_007d03f0();
    }
    if (*piVar1 < in_EAX[iVar2 * 0x22]) {
      FUN_007d03f0(piVar1);
    }
    if (*in_EAX < *piVar1) {
      FUN_007d03f0();
    }
    piVar3 = param_1 + iVar2 * -0x11;
    if (*piVar3 < *param_1) {
      FUN_007d03f0(piVar3);
    }
    if (*param_1 < param_1[iVar2 * 0x11]) {
      FUN_007d03f0(param_1);
    }
    if (*piVar3 < *param_1) {
      FUN_007d03f0(piVar3);
    }
    piVar4 = param_2 + iVar2 * -0x11;
    piVar3 = param_2 + iVar2 * -0x22;
    if (*piVar3 < *piVar4) {
      FUN_007d03f0(piVar3);
    }
    if (*piVar4 < *param_2) {
      FUN_007d03f0(piVar4);
    }
    if (*piVar3 < *piVar4) {
      FUN_007d03f0(piVar3);
    }
    if (*piVar1 < *param_1) {
      FUN_007d03f0(piVar1);
    }
    if (*param_1 < *piVar4) {
      FUN_007d03f0(param_1);
    }
    if (*piVar1 < *param_1) {
      FUN_007d03f0(piVar1);
      return;
    }
  }
  return;
}

