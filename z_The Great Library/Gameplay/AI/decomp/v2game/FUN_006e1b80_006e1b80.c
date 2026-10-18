// FUN_006e1b80 @ 006e1b80 body=[[006e1b80, 006e1bd4]]


void FUN_006e1b80(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  cVar2 = FUN_006d1200(*unaff_ESI);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  cVar2 = FUN_006d1200(*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    *param_1 = *unaff_ESI;
    *unaff_ESI = uVar1;
  }
  cVar2 = FUN_006d1200(*unaff_ESI);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  return;
}

