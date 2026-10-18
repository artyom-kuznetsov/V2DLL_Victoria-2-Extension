// FUN_00b29730 @ 00b29730 body=[[00b29730, 00b2975c] [00b29760, 00b29841]]


undefined1 * FUN_00b29730(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  if (param_1 == (char *)0x0) {
    iVar4 = 0;
  }
  else {
    pcVar3 = param_1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  }
  if (param_3 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    pcVar3 = param_3;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    iVar5 = (int)pcVar3 - (int)(param_3 + 1);
  }
  pcVar3 = param_2;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  puVar6 = (undefined1 *)
           (*DAT_013f3aa8)(pcVar3 + iVar4 + (iVar5 - (int)(param_2 + 1)) + 1,
                           (int)(pcVar3 + iVar4 + (iVar5 - (int)(param_2 + 1)) + 1) >> 0x1f);
  if (puVar6 == (undefined1 *)0x0) {
    FUN_00b1f840("Out of memory");
    return (undefined1 *)0x0;
  }
  pcVar3 = param_2;
  if (param_1 == (char *)0x0) {
    *puVar6 = 0;
  }
  else {
    iVar4 = (int)puVar6 - (int)param_1;
    do {
      cVar2 = *param_1;
      param_1[iVar4] = cVar2;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
  }
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar7 = (int)pcVar3 - (int)param_2;
  pcVar3 = puVar6 + -1;
  do {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar3 = *param_2;
    param_2 = param_2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = param_3;
  if (param_3 != (char *)0x0) {
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar7 = (int)pcVar3 - (int)param_3;
    pcVar3 = puVar6 + -1;
    do {
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar3 = *param_3;
      param_3 = param_3 + 1;
      pcVar3 = pcVar3 + 1;
    }
  }
  for (puVar8 = (undefined1 *)FUN_00ab4790(puVar6,0x2f); puVar8 != (undefined1 *)0x0;
      puVar8 = (undefined1 *)FUN_00ab4790(puVar8 + 1,0x2f)) {
    *puVar8 = 0x5c;
  }
  return puVar6;
}

