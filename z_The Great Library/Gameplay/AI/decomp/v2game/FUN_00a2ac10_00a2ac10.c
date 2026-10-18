// FUN_00a2ac10 @ 00a2ac10 body=[[00a2ac10, 00a2ad35] [00a2ad39, 00a2ae64] [00a2ae68, 00a2af40] [00a2af44, 00a2af5a]]


void FUN_00a2ac10(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  size_t _Size;
  void *_Memory;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  undefined1 *local_17c;
  undefined *puStack_178;
  undefined ***pppuStack_174;
  undefined4 uStack_170;
  char *local_16c;
  byte *local_168;
  uint local_150 [3];
  undefined4 uStack_144;
  undefined4 local_140;
  uint local_13c;
  undefined1 local_134 [4];
  uint uStack_130;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 *local_118;
  undefined **local_114 [10];
  uint uStack_ec;
  int local_e4;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5d25c;
  local_14 = ExceptionList;
  pbVar8 = (byte *)(param_1 + 0xbc);
  pbVar4 = pbVar8;
  if (0xf < *(uint *)(param_1 + 0xd0)) {
    pbVar4 = *(byte **)pbVar8;
  }
  pbVar7 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar4;
    bVar10 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00a2ac76:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00a2ac7b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar10 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00a2ac76;
    pbVar4 = pbVar4 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00a2ac7b:
  if (iVar5 != 0) {
    pbVar4 = pbVar8;
    if (0xf < *(uint *)(param_1 + 0xd0)) {
      pbVar4 = *(byte **)pbVar8;
    }
    if ((pbVar4 != (byte *)0x0) && (*pbVar4 != 0)) {
      local_168 = (byte *)0xa2aca4;
      ExceptionList = &local_14;
      iVar5 = PHYSFS_exists();
      if (iVar5 != 0) {
        if (0xf < *(uint *)(param_1 + 0xd0)) {
          pbVar8 = *(byte **)pbVar8;
        }
        local_13c = 0xf;
        local_140 = 0;
        local_150[0] = local_150[0] & 0xffffff00;
        pbVar4 = pbVar8;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        local_16c = (char *)0xa2ace5;
        local_168 = pbVar8;
        FUN_00409350();
        local_118 = (undefined1 *)&local_17c;
        local_c = 0;
        local_168 = (byte *)0xf;
        local_16c = (char *)0x0;
        local_17c = (undefined1 *)((uint)local_17c & 0xffffff00);
        FUN_00409350(&DAT_00ded94d,0);
        FUN_00992740(local_114,local_150,0);
        local_c._0_1_ = 2;
        if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
          local_168 = &UNK_00a2ad36;
          FUN_00aae91b();
        }
        local_13c = 0xf;
        local_140 = 0;
        local_150[0] = local_150[0] & 0xffffff00;
        if (local_e4 == 0) {
          _Size = 0;
        }
        else {
          local_168 = (byte *)0xa2ad53;
          _Size = PHYSFS_fileLength();
        }
        local_168 = (byte *)0xa2ad62;
        _Memory = _malloc(_Size);
        local_16c = (char *)0xa2ad72;
        local_168 = _Memory;
        FUN_00992f20();
        uStack_170 = 0xa2ad82;
        local_16c = _Memory;
        local_168 = (byte *)_Size;
        uVar6 = FUN_00adc3e0();
        *(undefined4 *)(param_1 + 0xd8) = uVar6;
        local_168 = (byte *)0xa2ad91;
        _free(_Memory);
        if (*(int *)(param_1 + 0xd8) == 0) {
          local_168 = (byte *)0xe3f994;
          local_120 = 0xf;
          local_124 = 0;
          local_134[0] = 0;
          local_16c = (char *)0xa2adc0;
          FUN_00409350();
          local_16c = local_134;
          local_168 = (byte *)0x19d;
          local_c._0_1_ = 3;
          uStack_170 = 0xa2addf;
          uVar6 = FUN_004015b0();
          local_168 = (byte *)0x1b;
          local_16c = "Failed to read actor file: ";
          local_c = CONCAT31(local_c._1_3_,4);
          pppuStack_174 = (undefined ***)0xa2adfa;
          uStack_170 = uVar6;
          puVar3 = (undefined4 *)0x0;
          FUN_00987d50();
          pppuStack_174 = (undefined ***)puVar3;
          if (0xf < pppuStack_174[5]) {
            pppuStack_174 = (undefined ***)*pppuStack_174;
          }
          local_17c = (undefined1 *)0xa2ae11;
          puStack_178 = (undefined *)uVar6;
          uVar6 = FUN_00418e30();
          local_17c = &DAT_00df8140;
          uVar6 = FUN_00418e30(uVar6);
          FUN_00401280(uVar6);
          pppuStack_174 = appuStack_70;
          uStack_1c = 3;
          puStack_178 = (undefined *)0xa2ae3a;
          FUN_00987ac0();
          pppuStack_174 = appuStack_70;
          appuStack_70[0] = std::ios_base::vftable;
          puStack_178 = (undefined *)0xa2ae52;
          FUN_00aad52d();
          if (uStack_130 < 0x10) {
            pppuStack_174 = (undefined ***)0xa2ae71;
            FUN_00992d60();
            ExceptionList = pvStack_24;
            return;
          }
          pppuStack_174 = (undefined ***)uStack_144;
                    /* WARNING: Subroutine does not return */
          puStack_178 = &UNK_00a2ae65;
          FUN_00aae91b();
        }
        (**(code **)(**(int **)(*(int *)(DAT_00f209e0 + 0x30) + 0x34) + 0x20))();
        local_168 = *(byte **)(param_1 + 0xd8);
        local_16c = (char *)0xa2aeb1;
        FUN_00ad4340();
        local_168 = (byte *)0xa2aeb7;
        FUN_00a2af60();
        uVar2 = *(uint *)(*(int *)(param_1 + 0xd8) + 0x84);
        uVar9 = 0;
        if (uVar2 != 0) {
          do {
            iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xd8) + 0x80) + uVar9 * 4) + 0x1c)
            ;
            if ((*(int *)(iVar5 + 0xc) != 0) &&
               (iVar5 = (**(code **)(**(int **)(iVar5 + 0xc) + 0x10))(), iVar5 != 0)) {
              *(undefined1 *)(param_1 + 0x15f) = 1;
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar2);
        }
        local_114[0] = &PTR_FUN_00e37dc0;
        if (local_e4 != 0) {
          local_168 = (byte *)0xa2af21;
          PHYSFS_close();
          local_e4 = 0;
        }
        local_114[0] = &PTR_FUN_00e3b540;
        if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
          local_168 = &UNK_00a2af41;
          FUN_00aae91b();
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

