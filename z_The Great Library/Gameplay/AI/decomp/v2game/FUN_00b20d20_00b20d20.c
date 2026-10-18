// FUN_00b20d20 @ 00b20d20 body=[[00b20d20, 00b20df9]]


char * FUN_00b20d20(void)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar3 = FUN_00b29540();
  if (iVar3 != 0) {
    pcVar4 = (char *)FUN_00b29c40(iVar3);
    (*DAT_013f3ab0)(iVar3);
    if (pcVar4 != (char *)0x0) {
      return pcVar4;
    }
  }
  puVar2 = PTR_DAT_00f05ea4;
  pcVar5 = (char *)FUN_00b29480();
  pcVar4 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    pcVar4 = "default";
  }
  pcVar6 = DAT_00f20a90;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar7 = pcVar4;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar8 = puVar2;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar6 = (char *)(*DAT_013f3aa8)(pcVar6 + (int)(pcVar7 + (int)(pcVar8 + (((-(int)(puVar2 + 1) -
                                                                            (int)(pcVar4 + 1)) + 6)
                                                                          - (int)(DAT_00f20a90 + 1))
                                                                )),0);
  if (pcVar6 == (char *)0x0) {
    FUN_00b1f840("Out of memory");
  }
  else {
    _sprintf(pcVar6,"%susers%s%s",DAT_00f20a90,puVar2,pcVar4);
  }
  (*DAT_013f3ab0)(pcVar5);
  return pcVar6;
}

