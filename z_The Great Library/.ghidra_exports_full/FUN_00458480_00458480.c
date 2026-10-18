// FUN_00458480 @ 00458480 body=[[00458480, 004585a0] [004585a4, 00458697] [004586b4, 00458758] [0045875c, 0045886a] [0045886e, 004588db] [004588e1, 004589d4]]


int FUN_00458480(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined1 *puVar7;
  int local_17c;
  uint local_174;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_164;
  uint local_160;
  int *local_158;
  int local_154;
  undefined4 *local_150;
  int local_14c;
  int local_148;
  int local_144;
  int *local_140;
  undefined4 local_13c;
  uint local_128;
  undefined1 local_120 [8];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 *local_f8;
  undefined **appuStack_70 [4];
  undefined **appuStack_60 [15];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar6 = DAT_012586f4;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba2291;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar3 = FUN_00459880();
  if (iVar3 == 0) {
    local_160 = 0xf;
    local_164 = 0;
    local_174 = local_174 & 0xffffff00;
    FUN_00409350("news_collector.cpp",0x12);
    local_c = 8;
    uVar4 = FUN_004015b0(&local_174,0x13e,0x10004);
    local_c._0_1_ = 9;
    FUN_00987d50(uVar4,"CNewsCollector::GenerateFakeNews() - Could not find valid layout style.",
                 0x47,0);
    FUN_00401280(uVar4);
    local_c = CONCAT31(local_c._1_3_,8);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (local_160 < 0x10) {
      ExceptionList = pvStack_14;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_174);
  }
  local_150 = (undefined4 *)FUN_00467240(*(undefined4 *)(iVar6 + 8));
  FUN_00464bd0(0,*(undefined4 *)(DAT_012588e8 + 0xb0c));
  if (iVar6 == -0x13c) {
    local_160 = 0xf;
    local_164 = 0;
    local_174 = local_174 & 0xffffff00;
    FUN_00409350("news_collector.cpp",0x12);
    local_c = 0;
    uVar4 = FUN_004015b0(&local_174,0x10c,0x10004);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987d50(uVar4,
                 "CNewsCollector::GenerateFakeNews() - Failed to generate news, as there is no fake entries in database."
                 ,0x66,0);
    FUN_00401280(uVar4);
    uStack_1c = 0;
    FUN_00987ac0(appuStack_70);
    appuStack_70[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_70);
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_ESI);
    }
  }
  else {
    local_148 = FUN_00461f40();
    if (local_148 != 0) {
      local_144 = FUN_00aae9af(0x94);
      local_c = 4;
      if (local_144 == 0) {
        local_17c = 0;
      }
      else {
        local_17c = FUN_0045b020(local_144);
      }
      local_c = 0xffffffff;
      *(undefined4 *)(local_17c + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      *(undefined4 *)(local_17c + 0x88) = *(undefined4 *)(iVar3 + 0x88);
      *(undefined4 *)(local_17c + 0x8c) = *param_4;
      local_144 = local_17c;
      uVar4 = FUN_004598e0(iVar3);
      local_c = 5;
      FUN_00408ed0(uVar4,0,0xffffffff);
      local_c = 0xffffffff;
      if (0xf < local_160) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_174);
      }
      FUN_008a8650(0);
      local_118 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
      local_114 = *(undefined4 *)(DAT_012588e8 + 0xb60);
      local_f8 = local_150;
      iVar6 = 0;
      local_154 = 0;
      local_174 = 0;
      local_170 = 0;
      local_16c = 0;
      local_c = 6;
      local_14c = 0;
      if (0 < *(int *)(iVar3 + 0x84)) {
        local_140 = (int *)(iVar3 + 0x54);
        local_158 = (int *)(local_148 + 8);
        do {
          piVar2 = local_158;
          if (*local_158 != 0) {
            puVar5 = (undefined1 *)FUN_00aae9af(0x54);
            puVar7 = (undefined1 *)0x0;
            if (puVar5 != (undefined1 *)0x0) {
              *(undefined4 *)(puVar5 + 0x10) = 0;
              *(undefined4 *)(puVar5 + 0x14) = 0xf;
              *puVar5 = 0;
              *(undefined4 *)(puVar5 + 0x2c) = 0;
              *(undefined4 *)(puVar5 + 0x30) = 0xf;
              puVar5[0x1c] = 0;
              *(undefined4 *)(puVar5 + 0x48) = 0;
              *(undefined4 *)(puVar5 + 0x4c) = 0xf;
              puVar5[0x38] = 0;
              puVar7 = puVar5;
            }
            FUN_0045eae0(*piVar2,local_120,puVar7,param_4,&local_174);
            uVar4 = FUN_0045fd40(local_148);
            local_c._0_1_ = 7;
            FUN_0045bcf0(local_17c,puVar7,local_150,uVar4);
            local_c = CONCAT31(local_c._1_3_,6);
            if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_13c);
            }
          }
          local_154 = local_154 + 1;
          if (local_140[1] - *local_140 >> 5 <= local_154) {
            local_158 = local_158 + 1;
            iVar6 = iVar6 + 1;
            local_140 = local_140 + 4;
            local_154 = 0;
            if (2 < iVar6) break;
          }
          local_14c = local_14c + 1;
        } while (local_14c < *(int *)(iVar3 + 0x84));
      }
      uVar1 = local_174;
      local_c = 0xffffffff;
      if (local_174 == 0) {
        if (local_150 != (undefined4 *)0x0) {
          (**(code **)*local_150)(1);
        }
        FUN_0068f390();
        ExceptionList = pvStack_14;
        return local_144;
      }
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar1);
    }
    local_160 = 0xf;
    local_164 = 0;
    local_174 = local_174 & 0xffffff00;
    FUN_00409350("news_collector.cpp",0x12);
    local_c = 2;
    uVar4 = FUN_004015b0(&local_174,0x113,0x10004);
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_00987d50(uVar4,
                 "CNewsCollector::GenerateFakeNews() - Failed to generate news, as there is no fake article at name "
                 ,0x62,0);
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    uVar4 = FUN_00418e30(uVar4,param_2);
    FUN_00401280(uVar4);
    uStack_1c = 2;
    FUN_00987ac0(appuStack_70);
    appuStack_70[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_70);
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_ESI);
    }
  }
  ExceptionList = pvStack_24;
  return 0;
}

