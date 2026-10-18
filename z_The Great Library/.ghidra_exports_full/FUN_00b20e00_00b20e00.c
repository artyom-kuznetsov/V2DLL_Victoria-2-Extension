// FUN_00b20e00 @ 00b20e00 body=[[00b20e00, 00b20eea]]


undefined4 FUN_00b20e00(int *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  
  puVar11 = (undefined4 *)PTR_DAT_00f05ea4;
  pcVar8 = (char *)*param_1;
  pcVar3 = pcVar8;
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  pcVar3 = PTR_DAT_00f05ea4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pbVar4 = (byte *)(pcVar6 + -((int)pcVar3 - (int)(PTR_DAT_00f05ea4 + 1)));
  pbVar7 = PTR_DAT_00f05ea4;
  do {
    bVar2 = *pbVar4;
    bVar13 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_00b20e60:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_00b20e65;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar13 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_00b20e60;
    pbVar4 = pbVar4 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_00b20e65:
  if (iVar5 != 0) {
    pcVar3 = pcVar8;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar6 = PTR_DAT_00f05ea4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = (*DAT_013f3aac)(pcVar8,pcVar3 + (int)(pcVar6 + ((1 - (int)(PTR_DAT_00f05ea4 + 1)) -
                                                           (int)(pcVar8 + 1))),0);
    pcVar8 = (char *)puVar11;
    if (iVar5 == 0) {
      (*DAT_013f3ab0)(*param_1);
      return 0;
    }
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar9 = (int)pcVar8 - (int)puVar11;
    puVar12 = (undefined4 *)(iVar5 + -1);
    do {
      pcVar8 = (char *)((int)puVar12 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    } while (*pcVar8 != '\0');
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    *param_1 = iVar5;
  }
  return 1;
}

