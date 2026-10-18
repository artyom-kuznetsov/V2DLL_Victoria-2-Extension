// FUN_00b28390 @ 00b28390 body=[[00b28390, 00b283ac] [00b283b0, 00b28493]]


int FUN_00b28390(char *param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  
  pbVar3 = (byte *)PHYSFS_getDirSeparator();
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pbVar5 = pbVar3;
  do {
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar2 != 0);
  iVar6 = FUN_00b29670(param_1);
  if (iVar6 == 0) {
    FUN_00b1f840("Archive type unsupported");
    return 0;
  }
  iVar6 = (*DAT_013f3aa8)(pcVar4 + ((((int)pbVar5 - (int)(pbVar3 + 1)) + 1) - (int)(param_1 + 1)),0)
  ;
  if (iVar6 == 0) {
    FUN_00b1f840("Out of memory");
    return 0;
  }
  pcVar7 = param_1;
  do {
    cVar1 = *pcVar7;
    pcVar7[iVar6 - (int)param_1] = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pbVar5 = (byte *)(param_1 +
                   (int)(pcVar4 + (-((int)pbVar5 - (int)(pbVar3 + 1)) - (int)(param_1 + 1))));
  pbVar11 = pbVar3;
  do {
    bVar2 = *pbVar5;
    bVar12 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_00b28455:
      iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00b2845a;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar12 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_00b28455;
    pbVar5 = pbVar5 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_00b2845a:
  pbVar5 = pbVar3;
  if (iVar8 != 0) {
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    uVar9 = (int)pbVar5 - (int)pbVar3;
    pbVar5 = (byte *)(iVar6 + -1);
    do {
      pbVar11 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
    } while (*pbVar11 != 0);
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar5 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar5 = pbVar5 + 1;
    }
  }
  return iVar6;
}

