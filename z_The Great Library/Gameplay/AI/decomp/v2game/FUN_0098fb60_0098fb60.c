// FUN_0098fb60 @ 0098fb60 body=[[0098fb60, 0098fc3f]]


void FUN_0098fb60(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  
  pcVar1 = (char *)(param_1 + 4);
  iVar2 = FUN_00aaf0c5(pcVar1);
  iVar5 = 0;
  iVar3 = 0;
  cVar4 = *pcVar1;
  while ((cVar4 != '\0' && (pcVar6 = pcVar1 + iVar5, iVar5 = iVar5 + 1, *pcVar6 != '.'))) {
    cVar4 = pcVar1[iVar5];
  }
  pcVar6 = (char *)(iVar5 + 4 + param_1);
  iVar7 = 0;
  if (*pcVar6 != '\0') {
    cVar4 = pcVar1[iVar5];
    do {
      pcVar6 = pcVar6 + 1;
      iVar3 = cVar4 + -0x30 + iVar3 * 10;
      cVar4 = *pcVar6;
      iVar7 = iVar7 + 1;
    } while (cVar4 != '\0');
    if (2 < iVar7) goto LAB_0098fbc8;
  }
  iVar7 = 3 - iVar7;
  do {
    iVar3 = iVar3 * 10;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
LAB_0098fbc8:
  if (((*pcVar1 == '-') && (iVar2 == 0)) || (iVar2 < 0)) {
    iVar3 = -iVar3;
  }
  iVar5 = iVar3 * 1000;
  if (iVar5 + 0x189373U < 0x39580e) {
    iVar3 = (iVar3 * 1000000) / 1000000;
  }
  else {
    uVar8 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
    iVar3 = __alldiv(uVar8,1000000,0);
  }
  *param_2 = iVar3 + iVar2 * 1000;
  return;
}

