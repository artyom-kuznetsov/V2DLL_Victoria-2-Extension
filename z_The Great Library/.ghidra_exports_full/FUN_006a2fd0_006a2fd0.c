// FUN_006a2fd0 @ 006a2fd0 body=[[006a2fd0, 006a3027]]


void FUN_006a2fd0(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  cVar2 = FUN_00698910(*unaff_ESI,*unaff_EDI);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  cVar2 = FUN_00698910(*param_1,*unaff_ESI);
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    *param_1 = *unaff_ESI;
    *unaff_ESI = uVar1;
  }
  cVar2 = FUN_00698910(*unaff_ESI,*unaff_EDI);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  return;
}

