// PHYSFS_removeFromSearchPath @ 00b1ff60 body=[[00b1ff60, 00b20044]]


undefined4 PHYSFS_removeFromSearchPath(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
                    /* 0x71ff60  48  PHYSFS_removeFromSearchPath */
  if (param_1 == (byte *)0x0) {
    FUN_00b1f840("Invalid argument");
    return 0;
  }
  FUN_00b2a660(DAT_00f20aa0);
  iVar3 = 0;
  iVar2 = DAT_00f20a80;
  do {
    if (iVar2 == 0) {
      FUN_00b1f840("No such entry in search path");
      FUN_00b2a680(DAT_00f20aa0);
      return 0;
    }
    pbVar4 = *(byte **)(iVar2 + 4);
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00b1ffc5:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00b1ffca;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00b1ffc5;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00b1ffca:
    if (iVar5 == 0) {
      iVar2 = *(int *)(iVar2 + 0x10);
      iVar5 = FUN_00b1fcc0();
      if (iVar5 == 0) {
        FUN_00b2a680(DAT_00f20aa0);
        return 0;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x10) = iVar2;
        iVar2 = DAT_00f20a80;
      }
      DAT_00f20a80 = iVar2;
      FUN_00b2a680(DAT_00f20aa0);
      return 1;
    }
    iVar3 = iVar2;
    iVar2 = *(int *)(iVar2 + 0x10);
  } while( true );
}

