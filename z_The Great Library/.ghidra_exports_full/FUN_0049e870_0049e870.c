// FUN_0049e870 @ 0049e870 body=[[0049e870, 0049e9f1] [0049e9f5, 0049ea8a] [0049ea8e, 0049ed1e]]


void FUN_0049e870(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  void *_Dst;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  float *pfVar12;
  undefined1 auStack_1c8 [12];
  undefined4 uStack_1bc;
  int local_198 [66];
  undefined **local_90;
  undefined4 local_8c;
  float local_88 [2];
  undefined **local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined **local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 *local_34;
  undefined **local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined1 *local_20;
  int local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b93741;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    local_18 = (undefined4 *)FUN_00aae9af();
    local_8 = 0;
    if (local_18 != (undefined4 *)0x0) {
      FUN_004dada0();
    }
    local_8 = 0xffffffff;
    FUN_004dc340();
  }
  local_34 = (undefined4 *)DAT_0125ce80[0xc];
LAB_0049e8d2:
  do {
    do {
      do {
        piVar8 = *(int **)(param_3 + 0x1c);
        if ((char)piVar8[0x44] == '\0') {
          iVar3 = (**(code **)(*piVar8 + 4))();
          piVar8[2] = iVar3;
          if (iVar3 == 0) {
            piVar8[3] = 0x13;
          }
          *(undefined1 *)(piVar8 + 0x44) = 1;
        }
        piVar8 = piVar8 + 3;
        piVar11 = local_198;
        for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar11 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar11 = piVar11 + 1;
        }
        if ((local_198[0] == 4) || (local_198[0] == 0x13)) {
          (**(code **)(**(int **)(param_3 + 0x1c) + 4))();
          ExceptionList = local_10;
          return;
        }
        FUN_009a1440();
        pcVar4 = (char *)(param_3 + 0x24);
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        local_8._0_1_ = 1;
        local_8._1_3_ = 0;
        puVar5 = DAT_0125ce80;
        if (DAT_0125ce80 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)FUN_00aae9af();
          local_8._0_1_ = 2;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5[1] = 0x1ff;
            *puVar5 = 0;
            local_18 = puVar5;
            _Dst = (void *)FUN_00aad56b();
            puVar5[2] = _Dst;
            _memset(_Dst,0,puVar5[1] * 4);
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
          }
          local_8 = CONCAT31(local_8._1_3_,3);
          local_18 = (undefined4 *)0x0;
          if ((puVar5 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
            FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        DAT_0125ce80 = puVar5;
        local_8._0_1_ = 1;
        puVar5 = (undefined4 *)FUN_004dc420();
        if ((puVar5 == (undefined4 *)0x0) &&
           (puVar5 = DAT_01258730, DAT_01258730 == (undefined4 *)0x0)) {
          puVar5 = (undefined4 *)FUN_00aae9af();
          local_8 = CONCAT31(local_8._1_3_,4);
          local_18 = puVar5;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
            DAT_01258730 = (undefined4 *)0x0;
          }
          else {
            local_20 = auStack_1c8;
            auStack_1c8[0] = 0;
            FUN_00409350("nobuilding",10);
            FUN_004d8b60(puVar5);
            *puVar5 = CNullBuilding::vftable;
            DAT_01258730 = puVar5;
          }
        }
        local_8 = 0xffffffff;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        local_2c = 0x18d;
        local_30 = CMapPoint::vftable;
        local_28 = 0.0;
        local_24 = 0.0;
        FUN_009a2a90();
      } while (puVar5 == (undefined4 *)0x0);
      iVar3 = puVar5[0x16] * 0x10 + *(int *)(param_2 + 0x330);
      *(float *)(iVar3 + 8) = local_28;
      *(float *)(iVar3 + 0xc) = local_24;
    } while (puVar5 != local_34);
    iVar3 = *(int *)(param_1 + 0x212c);
    iVar9 = *(int *)(iVar3 + 4) + -1;
    iVar7 = (int)local_28;
    if (iVar9 < (int)local_28) {
      iVar7 = iVar9;
    }
    iVar9 = (int)local_24;
    if ((int)local_24 < 0) {
      iVar9 = 0;
    }
    iVar6 = *(int *)(iVar3 + 8) + -1;
    if (iVar6 < iVar9) {
      iVar9 = iVar6;
    }
    local_18 = *(undefined4 **)(param_1 + 0x2aa4);
    iVar7 = local_18[*(ushort *)
                      (*(int *)(iVar3 + 0x18) * iVar9 + *(int *)(iVar3 + 0xc) * iVar7 +
                      *(int *)(iVar3 + 0x20))];
  } while (iVar7 == 0);
  if (*(char *)(iVar7 + 0x2a) != '\0') goto code_r0x0049eb65;
  goto LAB_0049ec88;
code_r0x0049eb65:
  if (*(int *)(iVar7 + 0xb4) != 0) {
    local_88[0] = DAT_00f092fc;
    local_74 = DAT_00f092fc;
    local_8c = 0x18d;
    local_90 = CMapPoint::vftable;
    local_88[1] = 0.0;
    local_7c = 0x18d;
    local_80 = CMapPoint::vftable;
    local_78 = 0;
    local_6c = 0x18d;
    local_70 = CMapPoint::vftable;
    local_68 = DAT_00f092dc;
    local_64 = 0;
    local_5c = 0x18d;
    local_60 = CMapPoint::vftable;
    local_58 = 0;
    local_54 = DAT_00f092dc;
    pfVar12 = local_88 + 1;
    local_1c = 4;
    do {
      local_28 = pfVar12[-1] + local_28;
      local_24 = *pfVar12 + local_24;
      local_20 = (undefined1 *)(int)local_28;
      puVar10 = (undefined1 *)(*(int *)(iVar3 + 4) + -1);
      iVar7 = (int)local_24;
      if ((int)local_20 <= (int)puVar10) {
        puVar10 = local_20;
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iVar9 = *(int *)(iVar3 + 8) + -1;
      if (iVar9 < iVar7) {
        iVar7 = iVar9;
      }
      pfVar12 = pfVar12 + 4;
      local_1c = local_1c + -1;
      iVar7 = local_18[*(ushort *)
                        (*(int *)(iVar3 + 0x18) * iVar7 + *(int *)(iVar3 + 0xc) * (int)puVar10 +
                        *(int *)(iVar3 + 0x20))];
    } while (local_1c != 0);
    uStack_1bc = 0x49ec7f;
    _eh_vector_destructor_iterator_(&local_90,0x10,4,FUN_004010c0);
  }
  if (*(char *)(iVar7 + 0x2a) == '\0') {
LAB_0049ec88:
    *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(iVar7 + 0xb4);
    uVar2 = *(undefined4 *)(iVar7 + 0xb4);
    iVar3 = *(int *)(*(int *)(param_1 + 0x2238) + *(int *)(param_2 + 0xb4) * 4);
    puVar5 = (undefined4 *)FUN_00aae9af();
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined1 *)(puVar5 + 5) = 0;
      *(undefined1 *)(puVar5 + 1) = 0;
      *puVar5 = CPort::vftable;
      puVar5[6] = uVar2;
    }
    *(undefined4 **)(iVar3 + 0x158) = puVar5;
    iVar3 = *(int *)(param_1 + 0x2ab0);
    *(int *)(param_1 + 0x2ab0) = iVar3 + 1;
    *(int *)(param_2 + 0xe0) = iVar3;
  }
  goto LAB_0049e8d2;
}

