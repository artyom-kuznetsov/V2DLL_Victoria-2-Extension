// FUN_004ec660 @ 004ec660 body=[[004ec660, 004ec808] [004ec80c, 004ec82b] [004ec82f, 004ec900] [004ec904, 004ec923] [004ec927, 004ec9ed] [004ec9f1, 004eca0b] [004eca14, 004ecb4c]]


void FUN_004ec660(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 *puVar6;
  undefined1 **ppuVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uStack_154;
  code *pcStack_150;
  undefined1 auStack_14c [112];
  undefined4 uStack_dc;
  undefined4 *puStack_d8;
  uint *puStack_d4;
  undefined1 **ppuStack_d0;
  uint *puStack_cc;
  undefined1 local_b8 [56];
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined1 *local_70;
  undefined4 local_6c;
  undefined1 local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined4 *local_40;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb69ac;
  local_10 = ExceptionList;
  if ((*(int *)(param_1 + 0x20) != 0) &&
     (0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU))) {
    local_78 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    local_80 = in_ECX[0x4a];
    local_1c = in_ECX[0x4b];
    puStack_cc = *(uint **)(*(int *)(DAT_012587e4 + 4) + local_1c * 4);
    puVar6 = (undefined4 *)(param_1 + 0x1c);
    ppuStack_d0 = (undefined1 **)0x4ec6ea;
    ExceptionList = &local_10;
    local_40 = puVar6;
    local_20 = local_80;
    FUN_00517a70();
    puStack_cc = (uint *)0x0;
    ppuStack_d0 = (undefined1 **)0x1;
    puStack_d4 = &local_78;
    uStack_dc = 0x4ec6f9;
    puStack_d8 = puVar6;
    FUN_004b52e0();
    puStack_cc = (uint *)0x1;
    ppuStack_d0 = (undefined1 **)&local_78;
    uStack_dc = 0x4ec706;
    puStack_d4 = puVar6;
    FUN_004b5730();
    puStack_cc = (uint *)0x0;
    ppuStack_d0 = (undefined1 **)param_1;
    puStack_d4 = (uint *)0x4ec710;
    FUN_00521560();
    local_80 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    local_7c = *(int *)(DAT_012588e8 + 0xb60);
    local_74 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    local_6c = 0;
    local_68 = 0;
    local_8 = 0;
    puStack_cc = (uint *)0x4;
    ppuStack_d0 = (undefined1 **)&DAT_00dfde6c;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    puStack_d4 = (uint *)0x4ec752;
    FUN_00409350();
    local_8._0_1_ = 1;
    puStack_cc = (uint *)0x4ec760;
    puStack_cc = (uint *)FUN_004f97a0();
    ppuStack_d0 = (undefined1 **)local_3c;
    puStack_d4 = (uint *)local_b8;
    local_8._0_1_ = 2;
    puStack_d8 = (undefined4 *)0x4ec775;
    local_18 = (undefined1 *)FUN_00424aa0();
    puStack_cc = (uint *)0x44;
    local_8._0_1_ = 3;
    ppuStack_d0 = (undefined1 **)0x4ec783;
    puVar3 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 4;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 4;
    local_48 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_18 = (undefined1 *)0x0;
      local_8._0_1_ = uVar2;
    }
    else {
      puStack_cc = (uint *)0xffffffff;
      ppuStack_d0 = (undefined1 **)0x0;
      *(undefined4 *)(puVar3 + 0x14) = 0xf;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      puStack_d4 = (uint *)local_18;
      *puVar3 = 0;
      puStack_d8 = (undefined4 *)0x4ec7ad;
      FUN_00408ed0();
      puStack_cc = (uint *)0xffffffff;
      local_8._0_1_ = 5;
      ppuStack_d0 = (undefined1 **)0x0;
      puStack_d4 = (uint *)((int)local_18 + 0x1c);
      *(undefined4 *)(puVar3 + 0x30) = 0xf;
      *(undefined4 *)(puVar3 + 0x2c) = 0;
      puVar3[0x1c] = 0;
      puStack_d8 = (undefined4 *)0x4ec7cf;
      FUN_00408ed0();
      *(undefined4 *)(puVar3 + 0x38) = 0;
      *(undefined4 *)(puVar3 + 0x3c) = 0;
      puVar3[0x40] = 0;
      local_18 = puVar3;
    }
    local_6c = 1;
    puStack_cc = (uint *)0x4ec7fa;
    local_74 = local_18;
    local_70 = local_18;
    FUN_00a39a80();
    if (0xf < local_50) {
      puStack_cc = (uint *)local_64[0];
                    /* WARNING: Subroutine does not return */
      ppuStack_d0 = (undefined1 **)&UNK_004ec809;
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_28) {
      puStack_cc = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
      ppuStack_d0 = (undefined1 **)&UNK_004ec82c;
      FUN_00aae91b();
    }
    puStack_cc = (uint *)0x4;
    ppuStack_d0 = (undefined1 **)&DAT_00df85c0;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    puStack_d4 = (uint *)0x4ec847;
    FUN_00409350();
    local_8._0_1_ = 6;
    puStack_cc = local_64;
    ppuStack_d0 = (undefined1 **)0x4ec858;
    ppuStack_d0 = (undefined1 **)(**(code **)(*in_ECX + 0x1c))();
    puStack_d4 = local_3c;
    puStack_d8 = (undefined4 *)local_b8;
    local_8._0_1_ = 7;
    uStack_dc = 0x4ec86d;
    local_48 = (undefined1 *)FUN_00424aa0();
    ppuStack_d0 = (undefined1 **)0x44;
    local_8._0_1_ = 8;
    puStack_d4 = (uint *)0x4ec87b;
    puVar3 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 9;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 9;
    local_44 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_70 = (undefined1 *)0x0;
      local_8._0_1_ = uVar2;
    }
    else {
      ppuStack_d0 = (undefined1 **)0xffffffff;
      puStack_d4 = (uint *)0x0;
      *(undefined4 *)(puVar3 + 0x14) = 0xf;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      puStack_d8 = (undefined4 *)local_48;
      *puVar3 = 0;
      uStack_dc = 0x4ec8a5;
      FUN_00408ed0();
      local_8._0_1_ = 10;
      ppuStack_d0 = (undefined1 **)0xffffffff;
      puStack_d4 = (uint *)0x0;
      puStack_d8 = (undefined4 *)((int)local_48 + 0x1c);
      *(undefined4 *)(puVar3 + 0x30) = 0xf;
      *(undefined4 *)(puVar3 + 0x2c) = 0;
      puVar3[0x1c] = 0;
      uStack_dc = 0x4ec8c7;
      FUN_00408ed0();
      *(undefined1 **)(puVar3 + 0x38) = local_18;
      *(undefined4 *)(puVar3 + 0x3c) = 0;
      puVar3[0x40] = 0;
      local_70 = puVar3;
    }
    *(undefined1 **)(local_18 + 0x3c) = local_70;
    local_6c = 2;
    ppuStack_d0 = (undefined1 **)0x4ec8f2;
    FUN_00a39a80();
    if (0xf < local_50) {
      ppuStack_d0 = (undefined1 **)local_64[0];
                    /* WARNING: Subroutine does not return */
      puStack_d4 = (uint *)&UNK_004ec901;
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    local_50 = 0xf;
    local_54 = 0;
    uVar1 = local_64[0] >> 8;
    local_64[0] = uVar1 << 8;
    if (0xf < local_28) {
      ppuStack_d0 = (undefined1 **)local_3c[0];
                    /* WARNING: Subroutine does not return */
      puStack_d4 = (uint *)&UNK_004ec924;
      FUN_00aae91b();
    }
    if (*(int *)(param_1 + 0x20) == local_7c) {
      ppuStack_d0 = (undefined1 **)0x0;
      puStack_d4 = (uint *)&DAT_00ded94d;
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = uVar1 << 8;
      puStack_d8 = (undefined4 *)0x4ec94d;
      FUN_00409350();
      local_8._0_1_ = 0xb;
      ppuStack_d0 = (undefined1 **)0xa;
      puStack_d4 = (uint *)0xdfde74;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      puStack_d8 = (undefined4 *)0x4ec969;
      FUN_00409350();
      local_44 = auStack_14c;
      local_8._0_1_ = 0xc;
      uStack_154 = 0;
      pcStack_150 = (code *)0x0;
      uVar5 = local_40[1];
      uVar12 = *local_40;
      uVar9 = 0;
      puVar8 = local_64;
      ppuVar7 = &local_74;
      iVar10 = local_20;
      iVar11 = local_1c;
      FUN_006a4f40(ppuVar7);
      uVar4 = FUN_006a55b0();
      FUN_006a7ed0(auStack_14c,uVar4,ppuVar7,in_ECX,puVar8,uVar9,iVar10,iVar11,uVar12,uVar5);
      pcStack_150 = FUN_006a5730;
      local_8._0_1_ = 0xd;
      uStack_154 = 0x4ec9cb;
      uStack_154 = FUN_006a4f40();
      uVar5 = FUN_006a4f40();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_004e9540(uVar5);
      if (0xf < local_28) {
        ppuStack_d0 = (undefined1 **)local_3c[0];
                    /* WARNING: Subroutine does not return */
        puStack_d4 = (uint *)&UNK_004ec9ee;
        FUN_00aae91b();
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      if (0xf < local_50) {
        ppuStack_d0 = (undefined1 **)local_64[0];
                    /* WARNING: Subroutine does not return */
        puStack_d4 = (uint *)&UNK_004eca0c;
        FUN_00aae91b();
      }
    }
    else {
      local_8._0_1_ = uVar2;
      if (local_7c == local_1c) {
        ppuStack_d0 = (undefined1 **)0x4eca26;
        FUN_009885d0();
        local_8._0_1_ = 0xe;
        ppuStack_d0 = (undefined1 **)0x4eca37;
        FUN_009885d0();
        local_8._0_1_ = 0xf;
        local_44 = (undefined1 *)&uStack_154;
        uStack_154 = 0;
        pcStack_150 = (code *)0x0;
        uVar5 = local_40[1];
        uVar12 = *local_40;
        uVar9 = 0;
        puVar8 = local_3c;
        ppuVar7 = &local_74;
        iVar10 = local_20;
        iVar11 = local_1c;
        FUN_006a4f40(ppuVar7);
        uVar4 = FUN_006a55b0();
        FUN_006a7ed0(auStack_14c,uVar4,ppuVar7,in_ECX,puVar8,uVar9,iVar10,iVar11,uVar12,uVar5);
        pcStack_150 = FUN_006a5730;
        local_8._0_1_ = 0x10;
        uStack_154 = 0x4eca93;
        uStack_154 = FUN_006a4f40();
        uVar5 = FUN_006a4f40();
        local_8 = CONCAT31(local_8._1_3_,0xf);
      }
      else {
        ppuStack_d0 = (undefined1 **)0x4ecaa4;
        FUN_009885d0();
        local_8._0_1_ = 0x11;
        ppuStack_d0 = (undefined1 **)0x4ecab5;
        FUN_009885d0();
        local_8._0_1_ = 0x12;
        local_44 = (undefined1 *)&uStack_154;
        uStack_154 = 0;
        pcStack_150 = (code *)0x0;
        uVar5 = local_40[1];
        uVar12 = *local_40;
        uVar9 = 0;
        puVar8 = local_3c;
        ppuVar7 = &local_74;
        iVar10 = local_20;
        iVar11 = local_1c;
        FUN_006a4f40(ppuVar7);
        uVar4 = FUN_006a55b0();
        FUN_006a7ed0(auStack_14c,uVar4,ppuVar7,in_ECX,puVar8,uVar9,iVar10,iVar11,uVar12,uVar5);
        pcStack_150 = FUN_006a5730;
        local_8._0_1_ = 0x13;
        uStack_154 = 0x4ecb11;
        uStack_154 = FUN_006a4f40();
        uVar5 = FUN_006a4f40();
        local_8 = CONCAT31(local_8._1_3_,0x12);
      }
      FUN_004e9540(uVar5);
      ppuStack_d0 = (undefined1 **)0x4ecb29;
      FUN_00408ad0();
      ppuStack_d0 = (undefined1 **)0x4ecb31;
      FUN_00408ad0();
    }
    ppuStack_d0 = &local_74;
    puStack_d4 = (uint *)0x4ecb3a;
    FUN_0042b9f0();
  }
  ExceptionList = local_10;
  return;
}

