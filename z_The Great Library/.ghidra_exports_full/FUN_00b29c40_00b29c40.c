// FUN_00b29c40 @ 00b29c40 body=[[00b29c40, 00b29ddc] [00b29de0, 00b29ed5]]


char * FUN_00b29c40(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    FUN_00b1f840("Invalid argument");
    return (char *)0x0;
  }
  pcVar2 = (char *)(*DAT_013f3aa8)(0x104,0);
  if (pcVar2 == (char *)0x0) {
    FUN_00b1f840("Out of memory");
    return (char *)0x0;
  }
  if ((*param_1 == '\\') && (param_1[1] == '\\')) {
    iVar9 = (int)pcVar2 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar9] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    goto LAB_00b29dc3;
  }
  pcVar3 = (char *)FUN_00b29b80();
  if (pcVar3 == (char *)0x0) {
    (*DAT_013f3ab0)(pcVar2);
    FUN_00b1f840("Out of memory");
    return (char *)0x0;
  }
  if (param_1[1] == ':') {
    pcVar4 = param_1 + 2;
    if (param_1[2] == '\\') {
      iVar9 = (int)pcVar2 - (int)param_1;
      do {
        cVar1 = *param_1;
        param_1[iVar9] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
    else {
      if (*param_1 == *pcVar3) {
        pcVar5 = pcVar3;
        do {
          cVar1 = *pcVar5;
          pcVar5[(int)pcVar2 - (int)pcVar3] = cVar1;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar4;
        } while (cVar1 != '\0');
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar7 = (int)pcVar6 - (int)pcVar4;
        pcVar5 = pcVar2 + -1;
        do {
          pcVar6 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar6 != '\0');
        goto LAB_00b29da8;
      }
      *pcVar2 = *param_1;
      pcVar2[1] = ':';
      pcVar2[2] = '\\';
      iVar9 = 3 - (int)pcVar4;
      do {
        cVar1 = *pcVar4;
        pcVar4[(int)(pcVar2 + iVar9)] = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
  }
  else if (*param_1 == '\\') {
    *pcVar2 = *pcVar3;
    pcVar2[1] = ':';
    iVar9 = 2 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)(pcVar2 + iVar9)] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5[(int)pcVar2 - (int)pcVar3] = cVar1;
      pcVar5 = pcVar5 + 1;
      pcVar4 = param_1;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar7 = (int)pcVar4 - (int)param_1;
    pcVar5 = pcVar2 + -1;
    do {
      pcVar6 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
      pcVar4 = param_1;
    } while (*pcVar6 != '\0');
LAB_00b29da8:
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  (*DAT_013f3ab0)(pcVar3);
LAB_00b29dc3:
  pcVar3 = (char *)FUN_00aafe90(pcVar2,&DAT_00de59ec);
  do {
    if (pcVar3 == (char *)0x0) {
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar3 = (char *)(*DAT_013f3aac)(pcVar2,pcVar3 + (1 - (int)(pcVar2 + 1)),0);
      if (pcVar3 != (char *)0x0) {
        pcVar2 = pcVar3;
      }
      return pcVar2;
    }
    cVar1 = pcVar3[2];
    pcVar5 = pcVar3;
    if (cVar1 == '\\') {
      pcVar4 = pcVar3 + 3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FID_conflict__memcpy(pcVar3 + 1,pcVar3 + 3,(size_t)(pcVar4 + (1 - (int)(pcVar3 + 4))));
    }
    else if (cVar1 == '\0') {
      *pcVar3 = '\0';
    }
    else if (cVar1 == '.') {
      do {
        pcVar5 = pcVar5 + -1;
        if (pcVar5 == pcVar2) goto LAB_00b29e35;
      } while (*pcVar5 != '\\');
      if (pcVar5 == pcVar2) {
LAB_00b29e35:
        pcVar5 = pcVar3 + 2;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FID_conflict__memcpy(pcVar3 + 1,pcVar3 + 2,(size_t)(pcVar5 + (1 - (int)(pcVar3 + 3))));
        pcVar5 = pcVar3;
      }
      else if (pcVar3[3] == '\0') {
        *pcVar5 = '\0';
      }
      else {
        pcVar4 = pcVar3 + 4;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FID_conflict__memcpy(pcVar5 + 1,pcVar3 + 4,(size_t)(pcVar4 + (1 - (int)(pcVar3 + 5))));
      }
    }
    else {
      pcVar5 = pcVar3 + 1;
    }
    pcVar3 = (char *)FUN_00aafe90(pcVar5,&DAT_00de59ec);
  } while( true );
}

