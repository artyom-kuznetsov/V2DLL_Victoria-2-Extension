// FUN_00b25a50 @ 00b25a50 body=[[00b25a50, 00b25a96]]


int FUN_00b25a50(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = *(byte **)(*(int *)(param_1 + 0xc + param_3 * 0x18) + 0x14);
  pbVar2 = *(byte **)(*(int *)(param_1 + 0xc + param_2 * 0x18) + 0x14);
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}

