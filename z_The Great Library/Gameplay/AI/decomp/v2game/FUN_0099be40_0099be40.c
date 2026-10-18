// FUN_0099be40 @ 0099be40 body=[[0099be40, 0099bec6]]


void FUN_0099be40(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  
  (**(code **)(*unaff_ESI + 0x80))();
  iVar2 = param_1 + 0x6b9e0;
  if (unaff_EDI != 0) {
    iVar2 = unaff_EDI;
  }
  if (((*(int *)(iVar2 + 0xd8) == 0) && (iVar1 = *(int *)(iVar2 + 0xdc), iVar1 != 0)) &&
     (iVar2 = iVar1, unaff_EDI != 0)) {
    iVar2 = *(int *)(iVar1 + 0xd8);
  }
  iVar1 = *(int *)(iVar2 + 0xd4);
  if (iVar1 == 0) {
    unaff_ESI[0x35] = 0;
    *(int **)(*(int *)(iVar2 + 0xe4) + 0xdc) = unaff_ESI;
  }
  else {
    *(int **)(iVar1 + 0xd8) = unaff_ESI;
    unaff_ESI[0x35] = iVar1;
  }
  unaff_ESI[0x36] = iVar2;
  *(int **)(iVar2 + 0xd4) = unaff_ESI;
  unaff_ESI[0x39] = *(int *)(iVar2 + 0xe4);
  return;
}

