// PHYSFS_getMountPoint @ 00b20050 body=[[00b20050, 00b20166]]


undefined2 * PHYSFS_getMountPoint(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *_Dst;
  int iVar4;
  byte *pbVar5;
  undefined2 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  
                    /* 0x720050  19  PHYSFS_getMountPoint */
  FUN_00b2a660(DAT_00f20aa0);
  iVar4 = DAT_00f20a80;
  do {
    if (iVar4 == 0) {
      FUN_00b2a680(DAT_00f20aa0);
      _Dst = (undefined4 *)FUN_00b1f7d0();
      if (_Dst == (undefined4 *)0x0) {
        _Dst = (undefined4 *)(*DAT_013f3aa8)(0x60,0);
        if (_Dst == (undefined4 *)0x0) {
          return (undefined2 *)0x0;
        }
        _memset(_Dst,0,0x60);
        uVar8 = FUN_00b29590();
        *_Dst = (int)uVar8;
        iVar4 = DAT_00f20a9c;
        _Dst[1] = (int)((ulonglong)uVar8 >> 0x20);
        if (iVar4 != 0) {
          FUN_00b2a660(iVar4);
          iVar4 = DAT_00f20a9c;
        }
        _Dst[0x17] = DAT_00f20a7c;
        DAT_00f20a7c = _Dst;
        if (iVar4 != 0) {
          FUN_00b2a680(iVar4);
        }
      }
      _Dst[2] = 1;
      _strncpy((char *)(_Dst + 3),"No such entry in search path",0x50);
      *(undefined1 *)((int)_Dst + 0x5b) = 0;
      return (undefined2 *)0x0;
    }
    pbVar2 = *(byte **)(iVar4 + 4);
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00b20096:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00b2009b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00b20096;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00b2009b:
    if (iVar3 == 0) {
      puVar6 = *(undefined2 **)(iVar4 + 8);
      if (puVar6 == (undefined2 *)0x0) {
        puVar6 = &DAT_00dedc68;
      }
      FUN_00b2a680(DAT_00f20aa0);
      return puVar6;
    }
    iVar4 = *(int *)(iVar4 + 0x10);
  } while( true );
}

