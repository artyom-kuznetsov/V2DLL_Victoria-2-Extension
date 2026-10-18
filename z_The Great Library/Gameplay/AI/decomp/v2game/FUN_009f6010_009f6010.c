// FUN_009f6010 @ 009f6010 body=[[009f6010, 009f6082]]


void FUN_009f6010(char param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int unaff_ESI;
  
  for (pcVar3 = *(char **)(unaff_ESI + 0x88); pcVar3 != (char *)0x0; pcVar3 = *(char **)(pcVar3 + 8)
      ) {
    if (*pcVar3 == param_1) {
      return;
    }
  }
  iVar1 = *(int *)(unaff_ESI + 0x8c);
  pcVar3 = (char *)FUN_00aae9af(0x10);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    *pcVar3 = param_1;
    *(int *)(pcVar3 + 4) = iVar1;
    pcVar3[8] = '\0';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    pcVar3[0xc] = '\0';
  }
  iVar2 = *(int *)(unaff_ESI + 0x90);
  *(char **)(unaff_ESI + 0x8c) = pcVar3;
  *(int *)(unaff_ESI + 0x90) = iVar2 + 1;
  if (iVar2 == 0) {
    *(char **)(unaff_ESI + 0x88) = pcVar3;
    return;
  }
  *(char **)(iVar1 + 8) = pcVar3;
  return;
}

