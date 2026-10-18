// FUN_00aabd30 @ 00aabd30 body=[[00aabd30, 00aabd9f]]


void FUN_00aabd30(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int in_ECX;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = FUN_00aaac00(param_2);
  if (iVar2 != *(int *)(in_ECX + 4)) {
    pbVar5 = *(byte **)(iVar2 + 0xc);
    pbVar3 = (byte *)*param_2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00aabd70:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00aabd75;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00aabd70;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00aabd75:
    if (-1 < iVar4) {
      *param_1 = iVar2;
      return;
    }
  }
  *param_1 = *(int *)(in_ECX + 4);
  return;
}

