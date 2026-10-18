// FUN_00b204b0 @ 00b204b0 body=[[00b204b0, 00b2053a]]


undefined4 FUN_00b204b0(byte *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  
  local_8 = 0;
  uVar6 = *param_3;
  do {
    uVar2 = uVar6;
    if (uVar2 == 0) {
      *param_3 = local_8;
      return 0;
    }
    uVar6 = uVar2 >> 1;
    pbVar3 = *(byte **)(param_2 + (uVar6 + local_8) * 4);
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00b20500:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00b20505;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00b20500;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00b20505:
    if (iVar4 == 0) {
      return 1;
    }
    if (iVar4 < 1) {
      local_8 = uVar6 + local_8 + 1;
      uVar6 = uVar2 + (-1 - uVar6);
    }
  } while( true );
}

