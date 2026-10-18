// FUN_008ae490 @ 008ae490 body=[[008ae490, 008ae596] [008ae59a, 008ae5c3] [008ae5c7, 008ae5ed] [008ae5f1, 008ae60e] [008ae612, 008ae62c] [008ae630, 008ae64d] [008ae651, 008ae67a] [008ae680, 008ae785] [008ae789, 008ae7a6] [008ae7aa, 008ae7cb] [008ae7cf, 008ae83c] [008ae840, 008ae85a] [008ae860, 008ae875] [008ae879, 008ae89d]]


undefined1 * FUN_008ae490(int param_1,undefined1 *param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *****pppppuVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint *local_e0;
  undefined4 ****ppppuStack_dc;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  undefined4 local_74;
  undefined4 ****local_70 [4];
  int local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  uint *local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b67b35;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  puVar6 = *(uint **)(param_1 + 8);
  ppppuStack_dc = (undefined4 ****)0x2;
  local_e0 = (uint *)&DAT_00df8514;
  local_74 = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350();
  ppppuStack_dc = (undefined4 ****)0x0;
  local_18 = (undefined1 *)&local_e0;
  local_8 = 1;
  local_e0 = puVar6;
  uVar4 = FUN_00988a50(local_54);
  local_8._0_1_ = 2;
  ppppuStack_dc = (undefined4 ****)0x2;
  local_e0 = (uint *)&DAT_00df963c;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = (undefined4 ****)((uint)local_70[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 3;
  local_e0 = (uint *)0x8ae53c;
  ppppuStack_dc = (undefined4 ****)uVar4;
  FUN_00988f20();
  ppppuStack_dc = (undefined4 ****)local_38;
  local_8._0_1_ = 4;
  local_e0 = (uint *)0x8ae551;
  ppppuStack_dc = (undefined4 ****)FUN_00988f20();
  local_e0 = local_c8;
  local_8._0_1_ = 5;
  uVar4 = FUN_0042c180();
  ppppuStack_dc = (undefined4 ****)0xffffffff;
  local_e0 = (uint *)0x0;
  local_8._0_1_ = 6;
  FUN_00448aa0(uVar4);
  if (0xf < local_b4) {
    ppppuStack_dc = (undefined4 ****)local_c8[0];
                    /* WARNING: Subroutine does not return */
    local_e0 = (uint *)&UNK_008ae597;
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8[0] = local_c8[0] & 0xffffff00;
  if (0xf < local_98) {
    ppppuStack_dc = (undefined4 ****)local_ac;
                    /* WARNING: Subroutine does not return */
    local_e0 = (uint *)&UNK_008ae5c4;
    FUN_00aae91b();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac = local_ac & 0xffffff00;
  if (0xf < local_7c) {
    ppppuStack_dc = (undefined4 ****)local_90[0];
                    /* WARNING: Subroutine does not return */
    local_e0 = (uint *)&UNK_008ae5ee;
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (local_5c < 0x10) {
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = (undefined4 ****)((uint)local_70[0] & 0xffffff00);
    if (0xf < local_40) {
      ppppuStack_dc = (undefined4 ****)local_54[0];
                    /* WARNING: Subroutine does not return */
      local_e0 = (uint *)&UNK_008ae62d;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_24) {
      ppppuStack_dc = (undefined4 ****)local_38[0];
                    /* WARNING: Subroutine does not return */
      local_e0 = (uint *)&UNK_008ae64e;
      FUN_00aae91b();
    }
    ppppuStack_dc = (undefined4 ****)0x1;
    local_e0 = (uint *)&DAT_00dee2cc;
    FUN_00448740();
    local_14 = 0;
    local_18 = (undefined1 *)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2);
    if (0 < (int)local_18) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0xc) + local_14 * 4);
        ppppuStack_dc = (undefined4 ****)0x0;
        local_e0 = (uint *)0x186a0;
        uVar7 = __allmul(piVar1[8] + -1000,piVar1[8] + -1000 >> 0x1f);
        ppppuStack_dc = (undefined4 ****)0x0;
        local_e0 = (uint *)0x3e8;
        local_1c = (uint *)__alldiv(uVar7);
        ppppuStack_dc = (undefined4 ****)0x1;
        local_e0 = (uint *)0x0;
        (**(code **)(*piVar1 + 0x2c))(local_70,param_3,0);
        local_8 = 7;
        if (7 < local_60) {
          ppppuStack_dc = (undefined4 ****)param_3;
          local_e0 = (uint *)0x8ae6e5;
          cVar3 = (**(code **)(*piVar1 + 0x18))();
          ppppuStack_dc = (undefined4 ****)0x8;
          if (cVar3 == '\0') {
            local_e0 = (uint *)&DAT_00e2ce14;
          }
          else {
            local_e0 = (uint *)&DAT_00e2ce08;
          }
          FUN_00448740();
          puVar6 = local_1c;
          if ((int)local_1c < 0) {
            ppppuStack_dc = (undefined4 ****)0x2;
            local_e0 = (uint *)&DAT_00df8510;
          }
          else {
            ppppuStack_dc = (undefined4 ****)0x3;
            local_e0 = (uint *)&DAT_00dfd24c;
          }
          FUN_00448740();
          ppppuStack_dc = (undefined4 ****)0x1;
          local_e0 = (uint *)&DAT_00df9644;
          local_24 = 0xf;
          local_28 = 0;
          local_38[0] = local_38[0] & 0xffffff00;
          FUN_00409350();
          ppppuStack_dc = (undefined4 ****)0x1;
          local_8._0_1_ = 8;
          local_e0 = puVar6;
          local_1c = (uint *)&local_e0;
          FUN_00988a50(local_90);
          ppppuStack_dc = (undefined4 ****)local_38;
          local_8._0_1_ = 9;
          local_e0 = (uint *)0x8ae764;
          uVar4 = FUN_00988f20();
          ppppuStack_dc = (undefined4 ****)0xffffffff;
          local_e0 = (uint *)0x0;
          local_8._0_1_ = 10;
          FUN_00448aa0(uVar4);
          if (0xf < local_40) {
            ppppuStack_dc = (undefined4 ****)local_54[0];
                    /* WARNING: Subroutine does not return */
            local_e0 = (uint *)&UNK_008ae786;
            FUN_00aae91b();
          }
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          if (0xf < local_7c) {
            ppppuStack_dc = (undefined4 ****)local_90[0];
                    /* WARNING: Subroutine does not return */
            local_e0 = (uint *)&UNK_008ae7a7;
            FUN_00aae91b();
          }
          local_8._0_1_ = 7;
          local_7c = 0xf;
          local_80 = 0;
          local_90[0] = local_90[0] & 0xffffff00;
          if (0xf < local_24) {
            ppppuStack_dc = (undefined4 ****)local_38[0];
                    /* WARNING: Subroutine does not return */
            local_e0 = (uint *)&UNK_008ae7cc;
            FUN_00aae91b();
          }
          pppppuVar5 = (undefined4 *****)local_70[0];
          if (local_5c < 0x10) {
            pppppuVar5 = local_70;
          }
          local_e0 = (uint *)((int)pppppuVar5 + 7);
          local_24 = 0xf;
          local_28 = 0;
          local_38[0] = local_38[0] & 0xffffff00;
          puVar6 = local_e0;
          do {
            uVar2 = *puVar6;
            puVar6 = (uint *)((int)puVar6 + 1);
          } while ((char)uVar2 != '\0');
          ppppuStack_dc = (undefined4 ****)((int)puVar6 - (int)(pppppuVar5 + 2));
          FUN_00409350();
          ppppuStack_dc = (undefined4 ****)local_38;
          local_8._0_1_ = 0xb;
          local_e0 = (uint *)0x8ae818;
          uVar4 = FUN_00988fa0();
          ppppuStack_dc = (undefined4 ****)0xffffffff;
          local_e0 = (uint *)0x0;
          local_8 = CONCAT31(local_8._1_3_,0xc);
          FUN_00448aa0(uVar4);
          if (0xf < local_40) {
            ppppuStack_dc = (undefined4 ****)local_54[0];
                    /* WARNING: Subroutine does not return */
            local_e0 = (uint *)&UNK_008ae83d;
            FUN_00aae91b();
          }
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          if (0xf < local_24) {
            ppppuStack_dc = (undefined4 ****)local_38[0];
                    /* WARNING: Subroutine does not return */
            local_e0 = (uint *)&UNK_008ae85b;
            FUN_00aae91b();
          }
        }
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_5c) {
          ppppuStack_dc = local_70[0];
                    /* WARNING: Subroutine does not return */
          local_e0 = (uint *)&UNK_008ae876;
          FUN_00aae91b();
        }
        local_14 = local_14 + 1;
      } while (local_14 < (int)local_18);
    }
    ExceptionList = local_10;
    return param_2;
  }
  ppppuStack_dc = local_70[0];
                    /* WARNING: Subroutine does not return */
  local_e0 = (uint *)&UNK_008ae60f;
  FUN_00aae91b();
}

