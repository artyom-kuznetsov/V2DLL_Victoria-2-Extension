// FUN_006b5f30 @ 006b5f30 body=[[006b5f30, 006b5f93]]


void FUN_006b5f30(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if ((param_2 < 4) && (cVar2 = FUN_006a8a40(param_2), cVar2 != '\0')) {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  if ((param_2 < 4) && (cVar2 = FUN_006a8a40(param_2), cVar2 != '\0')) {
    uVar1 = *param_1;
    *param_1 = *unaff_ESI;
    *unaff_ESI = uVar1;
  }
  if ((param_2 < 4) && (cVar2 = FUN_006a8a40(param_2), cVar2 != '\0')) {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  return;
}

