// FUN_00a7cca0 @ 00a7cca0 body=[[00a7cca0, 00a7cd22]]


byte * FUN_00a7cca0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  iVar3 = (*(int *)(in_EAX + 0x54) - *(int *)(in_EAX + 0x50)) / 0x60;
  iVar6 = 0;
  if (0 < iVar3) {
    pbVar2 = *(byte **)(in_EAX + 0x50);
    pbVar8 = pbVar2;
    pbVar5 = param_1;
    pbVar7 = pbVar2;
LAB_00a7ccd5:
    do {
      bVar1 = *pbVar8;
      bVar9 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar8[1];
          bVar9 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7ccf5;
          pbVar8 = pbVar8 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_00a7ccd5;
        }
        iVar4 = 0;
      }
      else {
LAB_00a7ccf5:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar4 == 0) {
        return pbVar2 + iVar6 * 0x60;
      }
      iVar6 = iVar6 + 1;
      pbVar8 = pbVar7 + 0x60;
      pbVar5 = param_1;
      pbVar7 = pbVar8;
    } while (iVar6 < iVar3);
  }
  return (byte *)0x0;
}

