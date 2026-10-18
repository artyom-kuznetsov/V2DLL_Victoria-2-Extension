// FUN_00474b20 @ 00474b20 body=[[00474b20, 00474bef]]


void FUN_00474b20(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  char *unaff_EDI;
  
  for (piVar4 = *(int **)(unaff_EDI + 8); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    if (*piVar4 == param_1) {
      return;
    }
  }
  pcVar6 = (char *)(param_1 + 0x28);
  iVar7 = 0xb;
  pcVar2 = unaff_EDI;
  do {
    pcVar3 = pcVar2 + 0x18;
    if ((*pcVar3 == '\0') && (pcVar3[param_1 - (int)unaff_EDI] == '\0')) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    *pcVar3 = cVar5;
    if ((pcVar2[0x20] == '\0') && (pcVar6[-8] == '\0')) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    pcVar2[0x20] = cVar5;
    if ((pcVar2[0x28] == '\0') && (*pcVar6 == '\0')) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    pcVar2[0x28] = cVar5;
    pcVar6 = pcVar6 + 0x18;
    iVar7 = iVar7 + -1;
    pcVar2 = pcVar3;
  } while (iVar7 != 0);
  iVar7 = *(int *)(unaff_EDI + 0xc);
  piVar4 = (int *)FUN_00aae9af(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = param_1;
    piVar4[1] = iVar7;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_EDI + 0x10);
  *(int **)(unaff_EDI + 0xc) = piVar4;
  *(int *)(unaff_EDI + 0x10) = iVar1 + 1;
  if (iVar1 == 0) {
    *(int **)(unaff_EDI + 8) = piVar4;
    return;
  }
  *(int **)(iVar7 + 8) = piVar4;
  return;
}

