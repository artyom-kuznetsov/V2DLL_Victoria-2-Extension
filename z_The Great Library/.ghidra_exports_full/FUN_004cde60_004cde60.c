// FUN_004cde60 @ 004cde60 body=[[004cde60, 004ce0f6] [004ce100, 004ce249] [004ce250, 004ce396] [004ce3a0, 004ce466] [004ce474, 004ce556] [004ce561, 004ce719]]


undefined4 * FUN_004cde60(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 local_250 [544];
  undefined4 *local_30;
  uint local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00baf834;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[1] = 0x18d;
  param_1[2] = DAT_01268fec;
  param_1[3] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xc] = CSelectable::vftable;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = CState::vftable;
  param_1[0xc] = CState::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = *(undefined4 *)((int)param_2 + 0x58);
  param_1[0x17] = *(undefined4 *)((int)param_2 + 0x5c);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  FUN_0044bc60(param_1 + 0x22);
  local_8._0_1_ = 6;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_00968940(param_1 + 0x32);
  param_1[0x73] = 0x18d;
  param_1[0x72] = CPopProject::vftable;
  local_20 = param_1 + 0x74;
  param_1[0x75] = 0x18d;
  *local_20 = CGoodsPool::vftable;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  local_8._0_1_ = 8;
  _memset(param_1 + 0x76,0,0x40);
  FUN_00423920();
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = param_1;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 4;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  local_8 = CONCAT31(local_8._1_3_,10);
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  local_24 = (undefined4 *)0x2d2d2d;
  param_1[0xa1] = 0x2d2d2d;
  param_1[0xa2] = 0;
  FUN_004d5f50();
  local_20 = (undefined4 *)DAT_00f09720;
  local_24 = (undefined4 *)0x2f;
  DAT_00f09720 = DAT_00f09720 + 1;
  FUN_009c1390(&local_24);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((int)param_2 + 0x80);
  param_1[0x21] = *(undefined4 *)((int)param_2 + 0x84);
  param_1[0x94] = *(undefined4 *)((int)param_2 + 0x250);
  param_1[0x96] = *(undefined4 *)((int)param_2 + 600);
  param_1[0x97] = *(undefined4 *)((int)param_2 + 0x25c);
  param_1[0x98] = *(undefined4 *)((int)param_2 + 0x260);
  param_1[0x99] = *(undefined4 *)((int)param_2 + 0x264);
  if ((*(char *)((int)param_2 + 0x27c) == '\0') && (*(char *)(param_3 + 0x27c) == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x9f) = uVar5;
  param_1[0xa1] = *(undefined4 *)((int)param_2 + 0x284);
  param_1[0xa2] = *(undefined4 *)((int)param_2 + 0x288);
  local_28 = *(uint *)(param_3 + 0x280);
  local_18[0] = *(uint *)((int)param_2 + 0x280);
  puVar6 = local_18;
  if ((int)*(uint *)((int)param_2 + 0x280) <= (int)*(uint *)(param_3 + 0x280)) {
    puVar6 = &local_28;
  }
  param_1[0xa0] = *puVar6;
  puVar9 = *(undefined4 **)((int)param_2 + 0x48);
  while ((*(undefined4 **)((int)param_2 + 0x48) <= puVar9 &&
         (puVar9 < *(undefined4 **)((int)param_2 + 0x4c)))) {
    local_24 = puVar9 + 1;
    puVar8 = (undefined4 *)param_1[0x13];
    local_30 = puVar9;
    if ((puVar9 < puVar8) && (puVar1 = (undefined4 *)param_1[0x12], puVar1 <= puVar9)) {
      local_28 = (int)puVar9 - (int)puVar1 >> 2;
      if (puVar8 == (undefined4 *)param_1[0x14]) {
        uVar7 = (int)puVar8 - (int)puVar1 >> 2;
        if (0x3ffffffe < uVar7) goto LAB_004ce207;
        local_18[0] = uVar7 + 1;
        uVar7 = (int)param_1[0x14] - (int)puVar1 >> 2;
        if (uVar7 < local_18[0]) {
          if (0x3fffffff - (uVar7 >> 1) < uVar7) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar7 + (uVar7 >> 1);
          }
          if (uVar7 < local_18[0]) {
            uVar7 = local_18[0];
          }
          FUN_004bf300(uVar7);
        }
      }
      if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x13] = *(undefined4 *)(param_1[0x12] + local_28 * 4);
      }
      param_1[0x13] = param_1[0x13] + 4;
      puVar9 = local_24;
    }
    else {
      if (puVar8 == (undefined4 *)param_1[0x14]) {
        uVar7 = (int)puVar8 - param_1[0x12] >> 2;
        if (0x3ffffffe < uVar7) goto LAB_004ce207;
        local_1c = uVar7 + 1;
        uVar7 = (int)(param_1[0x14] - param_1[0x12]) >> 2;
        if (uVar7 < local_1c) {
          if (0x3fffffff - (uVar7 >> 1) < uVar7) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar7 + (uVar7 >> 1);
          }
          if (uVar7 < local_1c) {
            uVar7 = local_1c;
          }
          FUN_004bf300(uVar7);
        }
      }
      if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x13] = *local_30;
      }
      param_1[0x13] = param_1[0x13] + 4;
      puVar9 = local_24;
    }
  }
  pvVar2 = *(void **)((int)param_2 + 0x48);
  if (pvVar2 != *(void **)((int)param_2 + 0x4c)) {
    local_18[0] = 0;
    FID_conflict__memcpy(pvVar2,*(void **)((int)param_2 + 0x4c),0);
    *(uint *)((int)param_2 + 0x4c) = local_18[0] + (int)pvVar2;
  }
  local_24 = *(undefined4 **)(param_3 + 0x48);
  do {
    while( true ) {
      if ((local_24 < *(undefined4 **)(param_3 + 0x48)) ||
         (*(undefined4 **)(param_3 + 0x4c) <= local_24)) {
        pvVar2 = *(void **)(param_3 + 0x48);
        if (pvVar2 != *(void **)(param_3 + 0x4c)) {
          local_18[0] = 0;
          FID_conflict__memcpy(pvVar2,*(void **)(param_3 + 0x4c),0);
          *(uint *)(param_3 + 0x4c) = (int)pvVar2 + local_18[0];
        }
        uVar7 = *(int *)((int)param_2 + 0x60);
        puVar9 = local_20;
        while (local_20 = (undefined4 *)uVar7, local_20 != (undefined4 *)0x0) {
          local_1c = *(int *)((int)local_20 + 0x224);
          FUN_004f2e50(local_250);
          local_8._0_1_ = 0xd;
          local_18[0] = param_1[0x19];
          local_28 = FUN_00aae9af(0x230);
          local_8._0_1_ = 0xe;
          if (local_28 == 0) {
            uVar7 = 0;
          }
          else {
            FUN_004f2e50(local_28);
            *(uint *)(local_28 + 0x220) = local_18[0];
            *(undefined4 *)(local_28 + 0x224) = 0;
            *(undefined1 *)(local_28 + 0x228) = 0;
            uVar7 = local_28;
          }
          iVar3 = param_1[0x1a];
          param_1[0x19] = uVar7;
          param_1[0x1a] = iVar3 + 1;
          if (iVar3 == 0) {
            param_1[0x18] = uVar7;
          }
          else {
            *(uint *)(local_18[0] + 0x224) = uVar7;
          }
          local_8 = CONCAT31(local_8._1_3_,10);
          FUN_004f33c0(local_250);
          FUN_004ef470();
          uVar7 = local_1c;
          puVar9 = local_20;
        }
        iVar3 = *(int *)((int)param_2 + 0x60);
        if (iVar3 != 0) {
          local_1c = (uint)local_20;
          local_20 = (undefined4 *)*(undefined4 *)(iVar3 + 0x224);
          FUN_004f33c0(iVar3);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar3);
        }
        *(undefined4 *)((int)param_2 + 0x60) = 0;
        *(undefined4 *)((int)param_2 + 100) = 0;
        *(undefined4 *)((int)param_2 + 0x68) = 0;
        uVar7 = *(int *)(param_3 + 0x60);
        while (local_20 = (undefined4 *)uVar7, local_20 != (undefined4 *)0x0) {
          local_1c = *(int *)((int)local_20 + 0x224);
          FUN_004f2e50(local_250);
          local_8._0_1_ = 0xf;
          local_28 = param_1[0x19];
          local_18[0] = FUN_00aae9af(0x230);
          local_8._0_1_ = 0x10;
          if (local_18[0] == 0) {
            uVar7 = 0;
          }
          else {
            FUN_004f2e50(local_18[0]);
            *(uint *)(local_18[0] + 0x220) = local_28;
            *(undefined4 *)(local_18[0] + 0x224) = 0;
            *(undefined1 *)(local_18[0] + 0x228) = 0;
            uVar7 = local_18[0];
          }
          iVar3 = param_1[0x1a];
          param_1[0x19] = uVar7;
          param_1[0x1a] = iVar3 + 1;
          if (iVar3 == 0) {
            param_1[0x18] = uVar7;
          }
          else {
            *(uint *)(local_28 + 0x224) = uVar7;
          }
          local_8 = CONCAT31(local_8._1_3_,10);
          FUN_004f33c0(local_250);
          FUN_004ef470();
          uVar7 = local_1c;
          puVar9 = local_20;
        }
        iVar3 = *(int *)(param_3 + 0x60);
        local_1c = (uint)local_20;
        if (iVar3 != 0) {
          local_20 = (undefined4 *)*(undefined4 *)(iVar3 + 0x224);
          FUN_004f33c0(iVar3);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar3);
        }
        *(undefined4 *)(param_3 + 0x60) = 0;
        *(undefined4 *)(param_3 + 100) = 0;
        *(undefined4 *)(param_3 + 0x68) = 0;
        local_20 = puVar9;
        FUN_00968d50(param_1 + 0x32);
        FUN_004cfd20();
        param_1[0x2e] = *(undefined4 *)((int)param_2 + 0xb8);
        param_1[0x2f] = *(undefined4 *)((int)param_2 + 0xbc);
        param_1[0x30] = *(undefined4 *)((int)param_2 + 0xc0);
        param_1[0x31] = *(undefined4 *)((int)param_2 + 0xc4);
        piVar10 = *(int **)((int)param_2 + 0x38);
        while (piVar10 != (int *)0x0) {
          param_2 = (undefined4 *)FUN_00aae9af(0x10);
          if (param_2 == (undefined4 *)0x0) {
            param_2 = (undefined4 *)0x0;
          }
          else {
            iVar3 = *piVar10;
            piVar10 = (int *)piVar10[2];
            param_2[1] = 0x18d;
            *param_2 = CTimedModifier::vftable;
            param_2[3] = 43800000;
            param_2[3] = DAT_01259abc;
            param_2[2] = *(undefined4 *)(iVar3 + 8);
            param_2[3] = *(undefined4 *)(iVar3 + 0xc);
          }
          local_18[0] = param_1[0xf];
          puVar9 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = param_2;
            puVar9[1] = local_18[0];
            puVar9[2] = 0;
            *(undefined1 *)(puVar9 + 3) = 0;
          }
          iVar3 = param_1[0x10];
          param_1[0xf] = puVar9;
          param_1[0x10] = iVar3 + 1;
          if (iVar3 == 0) {
            param_1[0xe] = puVar9;
          }
          else {
            *(undefined4 **)(local_18[0] + 8) = puVar9;
          }
        }
        piVar10 = *(int **)(param_3 + 0x38);
        while (piVar10 != (int *)0x0) {
          param_2 = (undefined4 *)FUN_00aae9af(0x10);
          if (param_2 == (undefined4 *)0x0) {
            param_2 = (undefined4 *)0x0;
          }
          else {
            iVar3 = *piVar10;
            piVar10 = (int *)piVar10[2];
            param_2[1] = 0x18d;
            *param_2 = CTimedModifier::vftable;
            param_2[3] = 43800000;
            param_2[3] = DAT_01259abc;
            param_2[2] = *(undefined4 *)(iVar3 + 8);
            param_2[3] = *(undefined4 *)(iVar3 + 0xc);
          }
          iVar3 = param_1[0xf];
          puVar9 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = param_2;
            puVar9[1] = iVar3;
            puVar9[2] = 0;
            *(undefined1 *)(puVar9 + 3) = 0;
          }
          iVar4 = param_1[0x10];
          param_1[0xf] = puVar9;
          param_1[0x10] = iVar4 + 1;
          if (iVar4 == 0) {
            param_1[0xe] = puVar9;
          }
          else {
            *(undefined4 **)(iVar3 + 8) = puVar9;
          }
        }
        FUN_004ce950();
        FUN_004d22a0(param_1);
        FUN_004d2480();
        ExceptionList = local_10;
        return param_1;
      }
      puVar8 = local_24 + 1;
      puVar9 = (undefined4 *)param_1[0x13];
      local_30 = local_24;
      if ((local_24 < puVar9) && (puVar1 = (undefined4 *)param_1[0x12], puVar1 <= local_24)) break;
      local_24 = puVar8;
      if (puVar9 == (undefined4 *)param_1[0x14]) {
        uVar7 = (int)puVar9 - param_1[0x12] >> 2;
        if (0x3ffffffe < uVar7) goto LAB_004ce207;
        local_1c = uVar7 + 1;
        uVar7 = (int)(param_1[0x14] - param_1[0x12]) >> 2;
        if (uVar7 < local_1c) {
          if (0x3fffffff - (uVar7 >> 1) < uVar7) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar7 + (uVar7 >> 1);
          }
          if (uVar7 < local_1c) {
            uVar7 = local_1c;
          }
          FUN_004bf300(uVar7);
        }
      }
      if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x13] = *local_30;
      }
      param_1[0x13] = param_1[0x13] + 4;
    }
    local_28 = (int)local_24 - (int)puVar1 >> 2;
    local_24 = puVar8;
    if (puVar9 == (undefined4 *)param_1[0x14]) {
      uVar7 = (int)puVar9 - (int)puVar1 >> 2;
      if (0x3ffffffe < uVar7) {
LAB_004ce207:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      local_18[0] = uVar7 + 1;
      uVar7 = (int)param_1[0x14] - (int)puVar1 >> 2;
      if (uVar7 < local_18[0]) {
        if (0x3fffffff - (uVar7 >> 1) < uVar7) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar7 + (uVar7 >> 1);
        }
        if (uVar7 < local_18[0]) {
          uVar7 = local_18[0];
        }
        FUN_004bf300(uVar7);
      }
    }
    if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x13] = *(undefined4 *)(param_1[0x12] + local_28 * 4);
    }
    param_1[0x13] = param_1[0x13] + 4;
  } while( true );
}

