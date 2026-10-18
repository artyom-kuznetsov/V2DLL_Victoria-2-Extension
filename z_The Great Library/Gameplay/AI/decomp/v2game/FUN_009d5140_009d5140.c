// FUN_009d5140 @ 009d5140 body=[[009d5140, 009d51f7]]


void FUN_009d5140(int *param_1)

{
  int iVar1;
  char cVar2;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (*unaff_ESI == *unaff_EDI) {
    cVar2 = FUN_0098ab20();
  }
  else {
    cVar2 = *unaff_EDI < *unaff_ESI;
  }
  if ((cVar2 != '\0') && (unaff_ESI != unaff_EDI)) {
    iVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = iVar1;
    iVar1 = unaff_ESI[1];
    unaff_ESI[1] = unaff_EDI[1];
    unaff_EDI[1] = iVar1;
  }
  if (*param_1 == *unaff_ESI) {
    cVar2 = FUN_0098ab20();
  }
  else {
    cVar2 = *unaff_ESI < *param_1;
  }
  if ((cVar2 != '\0') && (param_1 != unaff_ESI)) {
    iVar1 = *param_1;
    *param_1 = *unaff_ESI;
    *unaff_ESI = iVar1;
    iVar1 = param_1[1];
    param_1[1] = unaff_ESI[1];
    unaff_ESI[1] = iVar1;
  }
  if (*unaff_ESI == *unaff_EDI) {
    cVar2 = FUN_0098ab20();
  }
  else {
    cVar2 = *unaff_EDI < *unaff_ESI;
  }
  if ((cVar2 != '\0') && (unaff_ESI != unaff_EDI)) {
    iVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = iVar1;
    iVar1 = unaff_ESI[1];
    unaff_ESI[1] = unaff_EDI[1];
    unaff_EDI[1] = iVar1;
  }
  return;
}

