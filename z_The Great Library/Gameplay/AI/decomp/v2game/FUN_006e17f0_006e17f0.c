// FUN_006e17f0 @ 006e17f0 body=[[006e17f0, 006e18b8]]


void FUN_006e17f0(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  cVar2 = FUN_006dda00(*unaff_ESI,unaff_ESI[1],*unaff_EDI,unaff_EDI[1]);
  if ((cVar2 != '\0') && (unaff_ESI != unaff_EDI)) {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
    uVar1 = unaff_ESI[1];
    unaff_ESI[1] = unaff_EDI[1];
    unaff_EDI[1] = uVar1;
  }
  cVar2 = FUN_006dda00(*param_1,param_1[1],*unaff_ESI,unaff_ESI[1]);
  if ((cVar2 != '\0') && (param_1 != unaff_ESI)) {
    uVar1 = *param_1;
    *param_1 = *unaff_ESI;
    *unaff_ESI = uVar1;
    uVar1 = param_1[1];
    param_1[1] = unaff_ESI[1];
    unaff_ESI[1] = uVar1;
  }
  cVar2 = FUN_006dda00(*unaff_ESI,unaff_ESI[1],*unaff_EDI,unaff_EDI[1]);
  if ((cVar2 != '\0') && (unaff_ESI != unaff_EDI)) {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
    uVar1 = unaff_ESI[1];
    unaff_ESI[1] = unaff_EDI[1];
    unaff_EDI[1] = uVar1;
  }
  return;
}

