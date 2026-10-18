// FUN_00a7cc10 @ 00a7cc10 body=[[00a7cc10, 00a7cc98]]


byte * FUN_00a7cc10(byte *param_1)

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
  
  iVar3 = (*(int *)(in_EAX + 0x44) - *(int *)(in_EAX + 0x40)) / 0x1c;
  iVar6 = 0;
  if (0 < iVar3) {
    pbVar2 = *(byte **)(in_EAX + 0x40);
    pbVar8 = pbVar2;
    pbVar5 = param_1;
    pbVar7 = pbVar2;
LAB_00a7cc45:
    do {
      bVar1 = *pbVar8;
      bVar9 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar8[1];
          bVar9 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7cc65;
          pbVar8 = pbVar8 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_00a7cc45;
        }
        iVar4 = 0;
      }
      else {
LAB_00a7cc65:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar4 == 0) {
        return pbVar2 + iVar6 * 0x1c;
      }
      iVar6 = iVar6 + 1;
      pbVar8 = pbVar7 + 0x1c;
      pbVar5 = param_1;
      pbVar7 = pbVar8;
    } while (iVar6 < iVar3);
  }
  return (byte *)0x0;
}

