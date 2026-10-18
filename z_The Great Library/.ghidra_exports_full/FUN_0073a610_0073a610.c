// FUN_0073a610 @ 0073a610 body=[[0073a610, 0073a6e7]]


void FUN_0073a610(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *unaff_ESI;
  undefined8 *unaff_EDI;
  
  cVar4 = FUN_0072fcd0(unaff_EDI);
  if (cVar4 != '\0') {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    uVar3 = unaff_ESI[2];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    unaff_ESI[2] = unaff_EDI[2];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
    unaff_EDI[2] = uVar3;
  }
  cVar4 = FUN_0072fcd0(unaff_ESI);
  if (cVar4 != '\0') {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    *param_1 = *unaff_ESI;
    param_1[1] = unaff_ESI[1];
    param_1[2] = unaff_ESI[2];
    *unaff_ESI = uVar1;
    unaff_ESI[1] = uVar2;
    unaff_ESI[2] = uVar3;
  }
  cVar4 = FUN_0072fcd0(unaff_EDI);
  if (cVar4 != '\0') {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    uVar3 = unaff_ESI[2];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    unaff_ESI[2] = unaff_EDI[2];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
    unaff_EDI[2] = uVar3;
  }
  return;
}

