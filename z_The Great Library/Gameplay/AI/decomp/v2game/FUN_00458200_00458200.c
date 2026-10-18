// FUN_00458200 @ 00458200 body=[[00458200, 004583a6] [004583aa, 0045840d] [00458415, 0045842e] [00458435, 00458471]]


void FUN_00458200(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int local_118;
  int local_114;
  int local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  undefined4 local_104;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00ba22c1;
  local_14 = ExceptionList;
  local_110 = 0;
  ExceptionList = &local_14;
  if (0 < (int)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) & 0xfffffffcU)) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x18) + local_110 * 4);
      local_fc = *(undefined4 *)(iVar5 + 0x8c);
      local_10c = (undefined4 *)0x0;
      local_108 = (undefined4 *)0x0;
      local_104 = 0;
      local_c = 0;
      local_118 = 0;
      piVar6 = (int *)(iVar5 + 0xc);
      local_f8 = local_fc;
      do {
        local_114 = 0;
        if (0 < (int)(piVar6[1] - *piVar6 & 0xfffffffcU)) {
          do {
            iVar5 = *piVar6;
            iVar1 = local_114 * 4;
            uVar3 = FUN_0045bb20(*(undefined4 *)(piVar6[0xc] + iVar1),&local_fc,local_118,&local_10c
                                );
            *(undefined4 *)(iVar5 + iVar1) = uVar3;
            uVar7 = 0;
            if (*(int *)(iVar1 + *piVar6) == 0) {
              local_e0 = 0xf;
              local_e4 = 0;
              local_f4[0] = local_f4[0] & 0xffffff00;
              FUN_00409350("news_collector.cpp",0x12);
              local_c._0_1_ = 1;
              piVar4 = (int *)FUN_004015b0(local_f4,0x413,0x10004);
              local_c = CONCAT31(local_c._1_3_,2);
              FUN_00987d50(piVar4,
                           "CNewsPaperSet::InitPostRead() - Failed to generate article from scope.",
                           0x46,0);
              FUN_00408be0(piVar4);
              if (((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
                 (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34
                                      ))(), iVar5 == -1)) {
                uVar7 = 4;
              }
              if (uVar7 != 0) {
                uVar7 = *(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar7;
                if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
                  uVar7 = uVar7 | 4;
                }
                FUN_00401120(uVar7,0);
              }
              local_c._0_1_ = 1;
              FUN_00987ac0(appuStack_60);
              appuStack_60[0] = std::ios_base::vftable;
              FUN_00aad52d(appuStack_60);
              local_c = (uint)local_c._1_3_ << 8;
              if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_f4[0]);
              }
            }
            local_114 = local_114 + 1;
          } while (local_114 < piVar6[1] - *piVar6 >> 2);
        }
        local_118 = local_118 + 1;
        piVar6 = piVar6 + 4;
      } while (local_118 < 3);
      local_c = 0xffffffff;
      puVar2 = local_10c;
      if (local_10c != (undefined4 *)0x0) {
        while( true ) {
          if (puVar2 == local_108) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_10c);
          }
          if (0xf < (uint)puVar2[5]) break;
          puVar2[5] = 0xf;
          puVar2[4] = 0;
          *(undefined1 *)puVar2 = 0;
          puVar2 = puVar2 + 7;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar2);
      }
      local_110 = local_110 + 1;
    } while (local_110 < *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2);
  }
  ExceptionList = local_14;
  return;
}

