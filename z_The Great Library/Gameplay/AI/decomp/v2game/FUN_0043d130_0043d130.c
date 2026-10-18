// FUN_0043d130 @ 0043d130 body=[[0043d130, 0043d1af]]


void FUN_0043d130(int *param_1)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int *in_EDX;
  int *unaff_ESI;
  undefined8 uVar3;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = *in_EDX;
  iVar2 = *param_1;
  unaff_ESI[2] = iVar2;
  iVar1 = unaff_ESI[1] - *unaff_ESI;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else if ((iVar1 < -0x189373) || (0x20c49a < iVar1)) {
    uVar3 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar3,iVar2,iVar2 >> 0x1f);
  }
  else {
    iVar2 = (iVar1 * 1000) / iVar2;
  }
  unaff_ESI[3] = iVar2 / 1000 + 1;
  return;
}

