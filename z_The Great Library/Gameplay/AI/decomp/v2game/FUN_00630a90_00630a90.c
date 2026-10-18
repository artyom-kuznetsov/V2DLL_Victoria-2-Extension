// FUN_00630a90 @ 00630a90 body=[[00630a90, 00630aed] [00630af0, 00630b6f] [00630b73, 00630b99] [00630b9d, 00630c23] [00630c27, 00630c4d] [00630c51, 00630cef] [00630cf3, 00630d19] [00630d1d, 00630da1] [00630da5, 00630dcb] [00630dcf, 00630e7c] [00630e80, 00630ea6] [00630eaa, 00630f2e] [00630f32, 00630f58] [00630f5c, 00631024] [00631028, 0063104e] [00631052, 006310db] [006310df, 00631104] [00631108, 00631241]]


/* WARNING: Removing unreachable block (ram,0x00630ee3) */
/* WARNING: Removing unreachable block (ram,0x00630d56) */
/* WARNING: Removing unreachable block (ram,0x00630bd8) */
/* WARNING: Removing unreachable block (ram,0x00630b27) */
/* WARNING: Removing unreachable block (ram,0x00630ca4) */
/* WARNING: Removing unreachable block (ram,0x00630e31) */
/* WARNING: Removing unreachable block (ram,0x00630fd9) */
/* WARNING: Removing unreachable block (ram,0x00630f26) */
/* WARNING: Removing unreachable block (ram,0x00630d99) */
/* WARNING: Removing unreachable block (ram,0x0063108e) */
/* WARNING: Removing unreachable block (ram,0x00630c1b) */

void FUN_00630a90(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint local_94;
  uint local_80;
  uint local_78;
  uint local_64;
  undefined4 local_5c;
  uint local_48;
  uint local_40;
  uint local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b92d83;
  local_10 = ExceptionList;
  local_14 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f)
                       >> 1) * 2;
  ExceptionList = &local_10;
  FUN_00631690(local_14,param_3 + -2,param_4);
  local_18 = local_14 + 2;
  if (param_2 < local_14) {
    while( true ) {
      iVar7 = FUN_0055dd40();
      local_8 = 0;
      iVar8 = FUN_0055dd40();
      uVar1 = *(uint *)(iVar7 + 0x10);
      uVar2 = *(uint *)(iVar8 + 0x10);
      uVar9 = uVar2;
      if (uVar1 <= uVar2) {
        uVar9 = uVar1;
      }
      uVar9 = FUN_00414bd0(uVar9);
      if (uVar9 == 0) {
        if (uVar2 < uVar1) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar2 != uVar1);
        }
      }
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      uVar1 = local_40 >> 8;
      local_40 = uVar1 << 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if ((int)uVar9 < 0) break;
      iVar7 = FUN_0055dd40();
      local_8 = 2;
      iVar8 = FUN_0055dd40();
      uVar2 = *(uint *)(iVar7 + 0x10);
      uVar9 = *(uint *)(iVar8 + 0x10);
      uVar10 = uVar9;
      if (uVar2 <= uVar9) {
        uVar10 = uVar2;
      }
      uVar10 = FUN_00414bd0(uVar10);
      if (uVar10 == 0) {
        if (uVar9 < uVar2) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = (uint)(uVar9 != uVar2);
        }
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_40 = uVar1 << 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if (((int)uVar10 < 0) || (local_14 = local_14 + -2, local_14 <= param_2)) break;
    }
  }
  if (local_18 < param_3) {
    while( true ) {
      iVar7 = FUN_0055dd40();
      local_8 = 4;
      iVar8 = FUN_0055dd40();
      uVar1 = *(uint *)(iVar7 + 0x10);
      uVar2 = *(uint *)(iVar8 + 0x10);
      uVar9 = uVar2;
      if (uVar1 <= uVar2) {
        uVar9 = uVar1;
      }
      uVar9 = FUN_00414bd0(uVar9);
      if (uVar9 == 0) {
        if (uVar2 < uVar1) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar2 != uVar1);
        }
      }
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      uVar1 = local_40 >> 8;
      local_40 = uVar1 << 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if ((int)uVar9 < 0) break;
      iVar7 = FUN_0055dd40();
      local_8 = 6;
      iVar8 = FUN_0055dd40();
      uVar2 = *(uint *)(iVar7 + 0x10);
      uVar9 = *(uint *)(iVar8 + 0x10);
      uVar10 = uVar9;
      if (uVar2 <= uVar9) {
        uVar10 = uVar2;
      }
      uVar10 = FUN_00414bd0(uVar10);
      if (uVar10 == 0) {
        if (uVar9 < uVar2) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = (uint)(uVar9 != uVar2);
        }
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_40 = uVar1 << 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if (((int)uVar10 < 0) || (local_18 = local_18 + 2, param_3 <= local_18)) break;
    }
  }
  local_20 = local_14;
  puVar12 = local_18;
  puVar5 = local_18;
  do {
    while (puVar11 = local_20, puVar6 = local_14, param_3 <= puVar12) {
joined_r0x00630f9a:
      for (; local_14 = puVar6, param_2 < local_20; local_20 = local_20 + -2) {
        local_24 = puVar11 + -2;
        iVar7 = FUN_0055dd40();
        local_8 = 0xc;
        iVar8 = FUN_0055dd40();
        uVar1 = *(uint *)(iVar7 + 0x10);
        uVar2 = *(uint *)(iVar8 + 0x10);
        uVar9 = uVar2;
        if (uVar1 <= uVar2) {
          uVar9 = uVar1;
        }
        uVar9 = FUN_00414bd0(uVar9);
        if (uVar9 == 0) {
          if (uVar2 < uVar1) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(uVar2 != uVar1);
          }
        }
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40);
        }
        local_8 = 0xffffffff;
        local_2c = 0xf;
        local_40 = local_40 & 0xffffff00;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c);
        }
        if (-1 < (int)uVar9) {
          iVar7 = FUN_0055dd40();
          local_8 = 0xe;
          iVar8 = FUN_0055dd40();
          uVar1 = *(uint *)(iVar7 + 0x10);
          uVar2 = *(uint *)(iVar8 + 0x10);
          uVar9 = uVar2;
          if (uVar1 <= uVar2) {
            uVar9 = uVar1;
          }
          uVar9 = FUN_00414bd0(uVar9);
          if (uVar9 == 0) {
            if (uVar2 < uVar1) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = (uint)(uVar2 != uVar1);
            }
          }
          if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_78);
          }
          local_8 = 0xffffffff;
          local_64 = 0xf;
          local_78 = local_78 & 0xffffff00;
          if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_94);
          }
          local_80 = 0xf;
          local_94 = local_94 & 0xffffff00;
          if ((int)uVar9 < 0) break;
          uVar3 = puVar6[-2];
          uVar4 = puVar6[-1];
          local_14 = puVar6 + -2;
          *local_14 = *local_24;
          puVar6[-1] = puVar11[-1];
          *local_24 = uVar3;
          puVar11[-1] = uVar4;
        }
        local_8 = 0xffffffff;
        puVar11 = local_24;
        puVar6 = local_14;
      }
      if (local_20 == param_2) {
        if (puVar12 == param_3) {
          *param_1 = (uint)puVar6;
          param_1[1] = (uint)puVar5;
          ExceptionList = local_10;
          return;
        }
        if (puVar5 != puVar12) {
          uVar3 = *puVar6;
          uVar4 = puVar6[1];
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
          *puVar5 = uVar3;
          puVar5[1] = uVar4;
        }
        uVar3 = *puVar6;
        *puVar6 = *puVar12;
        uVar4 = puVar6[1];
        puVar6[1] = puVar12[1];
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12 = puVar12 + 2;
        puVar5 = puVar5 + 2;
        local_14 = puVar6 + 2;
      }
      else {
        puVar11 = local_20 + -2;
        if (puVar12 == param_3) {
          local_14 = puVar6 + -2;
          if (puVar11 != local_14) {
            uVar3 = *puVar11;
            uVar4 = local_20[-1];
            *puVar11 = *local_14;
            local_20[-1] = puVar6[-1];
            *local_14 = uVar3;
            puVar6[-1] = uVar4;
          }
          uVar3 = *local_14;
          uVar4 = puVar6[-1];
          *local_14 = puVar5[-2];
          puVar6[-1] = puVar5[-1];
          puVar5[-2] = uVar3;
          puVar5[-1] = uVar4;
          puVar5 = puVar5 + -2;
          local_20 = puVar11;
        }
        else {
          uVar3 = *puVar12;
          uVar4 = puVar12[1];
          *puVar12 = *puVar11;
          puVar12[1] = local_20[-1];
          puVar12 = puVar12 + 2;
          *puVar11 = uVar3;
          local_20[-1] = uVar4;
          local_20 = puVar11;
        }
      }
    }
    iVar7 = FUN_0055dd40();
    local_8 = 8;
    iVar8 = FUN_0055dd40();
    uVar1 = *(uint *)(iVar7 + 0x10);
    uVar2 = *(uint *)(iVar8 + 0x10);
    uVar9 = uVar2;
    if (uVar1 <= uVar2) {
      uVar9 = uVar1;
    }
    uVar9 = FUN_00414bd0(uVar9);
    if (uVar9 == 0) {
      if (uVar2 < uVar1) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = (uint)(uVar2 != uVar1);
      }
    }
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
    local_8 = 0xffffffff;
    uVar1 = local_40 >> 8;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
    local_18 = puVar5;
    if (-1 < (int)uVar9) {
      iVar7 = FUN_0055dd40();
      local_8 = 10;
      iVar8 = FUN_0055dd40();
      uVar2 = *(uint *)(iVar7 + 0x10);
      uVar9 = *(uint *)(iVar8 + 0x10);
      uVar10 = uVar9;
      if (uVar2 <= uVar9) {
        uVar10 = uVar2;
      }
      uVar10 = FUN_00414bd0(uVar10);
      if (uVar10 == 0) {
        if (uVar9 < uVar2) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = (uint)(uVar9 != uVar2);
        }
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_40 = uVar1 << 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if ((int)uVar10 < 0) goto joined_r0x00630f9a;
      uVar3 = puVar5[1];
      local_18 = puVar5 + 2;
      uVar4 = *puVar5;
      *puVar5 = *puVar12;
      puVar5[1] = puVar12[1];
      *puVar12 = uVar4;
      puVar12[1] = uVar3;
    }
    local_40 = uVar1 << 8;
    local_8 = 0xffffffff;
    local_2c = 0xf;
    puVar12 = puVar12 + 2;
    puVar5 = local_18;
  } while( true );
}

