// FUN_00a2afe0 @ 00a2afe0 body=[[00a2afe0, 00a2b0e6] [00a2b0ea, 00a2b166]]


undefined4 FUN_00a2afe0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  size_t _Size;
  void *_Memory;
  undefined4 uVar4;
  byte *in_ECX;
  byte *pbVar5;
  bool bVar6;
  undefined1 local_98 [12];
  undefined4 uStack_8c;
  void *local_88;
  byte *local_84;
  undefined1 local_6c [48];
  int local_3c;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5d220;
  local_10 = ExceptionList;
  pbVar2 = in_ECX;
  if (0xf < *(uint *)(in_ECX + 0x14)) {
    pbVar2 = *(byte **)in_ECX;
  }
  pbVar5 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a2b035:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a2b03a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a2b035;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a2b03a:
  if (iVar3 != 0) {
    pbVar2 = in_ECX;
    if (0xf < *(uint *)(in_ECX + 0x14)) {
      pbVar2 = *(byte **)in_ECX;
    }
    if ((pbVar2 != (byte *)0x0) && (*pbVar2 != 0)) {
      local_84 = (byte *)0xa2b063;
      ExceptionList = &local_10;
      iVar3 = PHYSFS_exists();
      if (iVar3 != 0) {
        if (0xf < *(uint *)(in_ECX + 0x14)) {
          in_ECX = *(byte **)in_ECX;
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        pbVar2 = in_ECX;
        do {
          bVar1 = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (bVar1 != 0);
        local_88 = (void *)0xa2b0a3;
        local_84 = in_ECX;
        FUN_00409350();
        local_14 = local_98;
        local_8 = 0;
        local_84 = (byte *)0xf;
        local_88 = (void *)0x0;
        local_98[0] = 0;
        FUN_00409350(&DAT_00ded94d,0);
        FUN_00992740(local_6c,local_30,0);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (local_1c < 0x10) {
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (local_3c == 0) {
            _Size = 0;
          }
          else {
            local_84 = (byte *)0xa2b100;
            _Size = PHYSFS_fileLength();
          }
          local_84 = (byte *)0xa2b10f;
          _Memory = _malloc(_Size);
          local_88 = (void *)0xa2b11e;
          local_84 = _Memory;
          FUN_00992f20();
          uStack_8c = 0xa2b12e;
          local_88 = _Memory;
          local_84 = (byte *)_Size;
          uVar4 = FUN_00adc150();
          local_84 = (byte *)0xa2b136;
          _free(_Memory);
          FUN_00992d60();
          ExceptionList = local_10;
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        local_84 = &UNK_00a2b0e7;
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

