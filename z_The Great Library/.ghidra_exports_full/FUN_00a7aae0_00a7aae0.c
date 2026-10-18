// FUN_00a7aae0 @ 00a7aae0 body=[[00a7aae0, 00a7ab2b] [00a7ab30, 00a7ac11] [00a7ac15, 00a7ad3e] [00a7ad42, 00a7ad73] [00a7ad77, 00a7adcb]]


/* WARNING: Removing unreachable block (ram,0x00a7ab9e) */

void FUN_00a7aae0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  HCURSOR pHVar5;
  undefined4 uVar6;
  LPCSTR ***ppppCVar7;
  int in_ECX;
  undefined4 extraout_ECX;
  uint uVar8;
  bool bVar9;
  undefined4 *local_138;
  int local_134;
  int local_130;
  LPCSTR **local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_110;
  uint local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b540a3;
  pvStack_14 = ExceptionList;
  local_138 = (undefined4 *)(in_ECX + 0xd4);
  bVar1 = false;
  ExceptionList = &pvStack_14;
  _memset(local_138,0,0x40);
  local_130 = 0;
  local_134 = 0;
  do {
    if (local_130 < (param_1[1] - *param_1) / 0x1c) {
      local_fc = 0xf;
      local_100 = 0;
      local_110 = local_110 & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      uVar2 = local_100;
      bVar1 = true;
      uVar4 = *(uint *)(*param_1 + local_134 + 0x10);
      uVar8 = uVar4;
      if (local_100 <= uVar4) {
        uVar8 = local_100;
      }
      iVar3 = FUN_00414bd0(uVar8);
      bVar9 = false;
      if (iVar3 == 0) {
        if (uVar4 < uVar2) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar4 != uVar2);
        }
        bVar9 = uVar4 == 0;
      }
      if (bVar9) goto LAB_00a7abe8;
      bVar9 = true;
    }
    else {
LAB_00a7abe8:
      bVar9 = false;
    }
    local_c = 0xffffffff;
    if ((bVar1) && (bVar1 = false, 0xf < local_fc)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110);
    }
    if (bVar9) {
      local_118 = 0xf;
      local_11c = 0;
      local_12c[0] = (LPCSTR **)((uint)local_12c[0] & 0xffffff00);
      FUN_00408ed0(*param_1 + local_134,0,0xffffffff);
      local_c = 1;
      ppppCVar7 = (LPCSTR ***)local_12c[0];
      if (local_118 < 0x10) {
        ppppCVar7 = local_12c;
      }
      pHVar5 = LoadCursorFromFileA((LPCSTR)ppppCVar7);
      *local_138 = pHVar5;
      if (pHVar5 == (HCURSOR)0x0) {
        pHVar5 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        *local_138 = pHVar5;
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4[0] = local_f4[0] & 0xffffff00;
        FUN_00409350("directinput.cpp",0xf);
        local_c._0_1_ = 2;
        uVar6 = FUN_004015b0(local_f4,0x3a9,3);
        local_c._0_1_ = 3;
        FUN_00987d50(uVar6,"Error loading cursor: ",0x16,0);
        ppppCVar7 = (LPCSTR ***)local_12c[0];
        if (local_118 < 0x10) {
          ppppCVar7 = local_12c;
        }
        uVar6 = FUN_00418e30(uVar6,ppppCVar7,extraout_ECX,&DAT_00dee2cc);
        FUN_00418e30(uVar6);
        local_c = CONCAT31(local_c._1_3_,2);
        FUN_00987ac0(appuStack_60);
        appuStack_60[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_60);
        if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_f4[0]);
        }
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4[0] = local_f4[0] & 0xffffff00;
      }
      local_c = 0xffffffff;
      if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_12c[0]);
      }
      local_118 = 0xf;
      local_11c = 0;
      local_12c[0] = (LPCSTR **)((uint)local_12c[0] & 0xffffff00);
    }
    else {
      pHVar5 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      *local_138 = pHVar5;
    }
    local_130 = local_130 + 1;
    local_138 = local_138 + 1;
    local_134 = local_134 + 0x1c;
    if (0x1bf < local_134) {
      ExceptionList = pvStack_14;
      return;
    }
  } while( true );
}

