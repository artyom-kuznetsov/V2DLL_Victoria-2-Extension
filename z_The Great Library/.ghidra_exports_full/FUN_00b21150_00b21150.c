// PHYSFS_mount @ 00b21150 body=[[00b21150, 00b21249]]


undefined4 PHYSFS_mount(byte *param_1,undefined2 *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
                    /* 0x721150  30  PHYSFS_mount */
  if (param_1 == (byte *)0x0) {
    FUN_00b1f840("Invalid argument");
    return 0;
  }
  if (param_2 == (undefined2 *)0x0) {
    param_2 = &DAT_00dedc68;
  }
  FUN_00b2a660(DAT_00f20aa0);
  iVar3 = 0;
  iVar4 = DAT_00f20a80;
  do {
    if (iVar4 == 0) {
      iVar4 = FUN_00b20b00(param_2,0);
      if (iVar4 != 0) {
        if (param_3 == 0) {
          *(int *)(iVar4 + 0x10) = DAT_00f20a80;
        }
        else if (iVar3 != 0) {
          *(int *)(iVar3 + 0x10) = iVar4;
          iVar4 = DAT_00f20a80;
        }
        DAT_00f20a80 = iVar4;
        FUN_00b2a680(DAT_00f20aa0);
        return 1;
      }
      FUN_00b2a680(DAT_00f20aa0);
      return 0;
    }
    pbVar5 = *(byte **)(iVar4 + 4);
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00b211c0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00b211c5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00b211c0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00b211c5:
    if (iVar3 == 0) {
      FUN_00b2a680(DAT_00f20aa0);
      return 1;
    }
    iVar3 = iVar4;
    iVar4 = *(int *)(iVar4 + 0x10);
  } while( true );
}

