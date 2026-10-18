// FUN_0099e1e0 @ 0099e1e0 body=[[0099e1e0, 0099e237]]


void FUN_0099e1e0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[1] - *unaff_EDI;
  iVar2 = iVar1 >> 0x1f;
  if (iVar1 / 0xc + iVar2 == iVar2) {
    iVar2 = 0;
  }
  else {
    iVar2 = (param_2 - *unaff_EDI) / 0xc;
  }
  FUN_0099e300(param_2,param_3);
  *param_1 = *unaff_EDI + iVar2 * 0xc;
  return;
}

