// FUN_00631cd0 @ 00631cd0 body=[[00631cd0, 00631d38]]


void FUN_00631cd0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  cVar3 = FUN_0061af50(unaff_ESI,unaff_EDI);
  if (cVar3 != '\0') {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
  }
  cVar3 = FUN_0061af50(param_1,unaff_ESI);
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = *unaff_ESI;
    param_1[1] = unaff_ESI[1];
    *unaff_ESI = uVar1;
    unaff_ESI[1] = uVar2;
  }
  cVar3 = FUN_0061af50(unaff_ESI,unaff_EDI);
  if (cVar3 != '\0') {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
  }
  return;
}

