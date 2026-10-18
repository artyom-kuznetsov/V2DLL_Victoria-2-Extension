// FUN_00b277b0 @ 00b277b0 body=[[00b277b0, 00b277f6]]


int FUN_00b277b0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_2 != param_3) {
    pbVar3 = *(byte **)(param_1 + param_3 * 0x30);
    pbVar2 = *(byte **)(param_1 + param_2 * 0x30);
    do {
      bVar1 = *pbVar2;
      bVar4 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00b277f0:
        return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      }
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = pbVar2[1];
      bVar4 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00b277f0;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
  }
  return 0;
}

