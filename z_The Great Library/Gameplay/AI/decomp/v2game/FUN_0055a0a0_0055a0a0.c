// FUN_0055a0a0 @ 0055a0a0 body=[[0055a0a0, 0055a19b]]


void FUN_0055a0a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar3 = FUN_00445060(unaff_EDI[1]);
  iVar4 = FUN_00445060(unaff_ESI[1]);
  if (iVar3 < iVar4) {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
  }
  iVar3 = FUN_00445060(param_1[1]);
  iVar4 = FUN_00445060(unaff_ESI[1]);
  if (iVar4 < iVar3) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = *unaff_ESI;
    param_1[1] = unaff_ESI[1];
    *unaff_ESI = uVar1;
    unaff_ESI[1] = uVar2;
  }
  iVar3 = FUN_00445060(unaff_EDI[1]);
  iVar4 = FUN_00445060(unaff_ESI[1]);
  if (iVar3 < iVar4) {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
  }
  return;
}

