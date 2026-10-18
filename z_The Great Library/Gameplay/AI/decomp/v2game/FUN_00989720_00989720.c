// FUN_00989720 @ 00989720 body=[[00989720, 009897b9]]


void FUN_00989720(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *unaff_EDI;
  
  pcVar2 = unaff_EDI;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = param_2;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar2 = unaff_EDI;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar4 = FUN_005484e0(param_1,unaff_EDI,(int)pcVar2 - (int)(unaff_EDI + 1));
  while (iVar4 != -1) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00989f10(iVar4,param_2,(int)pcVar2 - (int)(param_2 + 1));
    pcVar2 = unaff_EDI;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_005484e0(param_1,unaff_EDI,(int)pcVar2 - (int)(unaff_EDI + 1));
  }
  return;
}

