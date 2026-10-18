// FUN_00b25750 @ 00b25750 body=[[00b25750, 00b2582c]]


int FUN_00b25750(byte *param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int in_EAX;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  pcVar5 = (char *)FUN_00ab4790(param_1,0x2e);
  iVar4 = *(int *)(in_EAX + 0x14);
  iVar11 = *(int *)(in_EAX + 0x10) + -1;
  if (pcVar5 != (char *)0x0) {
    pcVar1 = pcVar5 + 1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (4 < (uint)((int)pcVar5 - (int)pcVar1)) goto LAB_00b25807;
  }
  iVar10 = 0;
  pbVar6 = param_1;
  do {
    bVar3 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar3 != 0);
  if ((uint)((int)pbVar6 - (int)(param_1 + 1)) < 0xd) {
    iVar7 = FUN_00ab4790(param_1,0x2f);
    if ((iVar7 == 0) && (-1 < iVar11)) {
      do {
        iVar7 = (iVar11 - iVar10) / 2 + iVar10;
        pbVar6 = (byte *)(iVar4 + iVar7 * 0x18);
        pbVar8 = param_1;
        do {
          bVar3 = *pbVar8;
          bVar12 = bVar3 < *pbVar6;
          if (bVar3 != *pbVar6) {
LAB_00b257f0:
            iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00b257f5;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar8[1];
          bVar12 = bVar3 < pbVar6[1];
          if (bVar3 != pbVar6[1]) goto LAB_00b257f0;
          pbVar8 = pbVar8 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar3 != 0);
        iVar9 = 0;
LAB_00b257f5:
        if (iVar9 == 0) {
          return iVar4 + iVar7 * 0x18;
        }
        if (iVar9 < 1) {
          iVar11 = iVar7 + -1;
        }
        else {
          iVar10 = iVar7 + 1;
        }
      } while (iVar10 <= iVar11);
    }
  }
LAB_00b25807:
  FUN_00b1f840("File not found");
  return 0;
}

