// FUN_00b23b70 @ 00b23b70 body=[[00b23b70, 00b23c04]]


int FUN_00b23b70(byte *param_1)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  iVar5 = *(int *)(in_EAX + 0x10) + -1;
  if (-1 < iVar5) {
    do {
      iVar2 = (iVar5 - iVar7) / 2 + iVar7;
      pbVar6 = (byte *)(*(int *)(in_EAX + 0x18) + iVar2 * 0x1c);
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00b23bc2:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00b23bc7;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00b23bc2;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00b23bc7:
      if (iVar4 == 0) {
        return *(int *)(in_EAX + 0x18) + iVar2 * 0x1c;
      }
      if (iVar4 < 1) {
        iVar5 = iVar2 + -1;
      }
      else {
        iVar7 = iVar2 + 1;
      }
    } while (iVar7 <= iVar5);
  }
  FUN_00b1f840("File not found");
  return 0;
}

