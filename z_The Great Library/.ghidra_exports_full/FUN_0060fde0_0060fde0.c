// FUN_0060fde0 @ 0060fde0 body=[[0060fde0, 0060fec9] [0060fecd, 0060fef3] [0060fef7, 0060ff8a] [0060ff8e, 0060ffb4] [0060ffb8, 0060ffda] [0060ffe0, 00610062] [00610066, 0061008c] [00610090, 0061011a] [0061011e, 00610144] [00610148, 00610206] [0061020a, 00610230] [00610234, 006102c0] [006102c4, 006102ea] [006102ee, 006103ad] [006103b1, 006103d7] [006103db, 00610470] [00610474, 0061049e] [006104a2, 0061058a]]


/* WARNING: Removing unreachable block (ram,0x00610273) */
/* WARNING: Removing unreachable block (ram,0x006100cf) */
/* WARNING: Removing unreachable block (ram,0x0060ff39) */
/* WARNING: Removing unreachable block (ram,0x0060fe78) */
/* WARNING: Removing unreachable block (ram,0x00610017) */
/* WARNING: Removing unreachable block (ram,0x006101bb) */
/* WARNING: Removing unreachable block (ram,0x00610362) */
/* WARNING: Removing unreachable block (ram,0x006102b8) */
/* WARNING: Removing unreachable block (ram,0x00610112) */
/* WARNING: Removing unreachable block (ram,0x00610422) */
/* WARNING: Removing unreachable block (ram,0x0060ff82) */

void FUN_0060fde0(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint local_94;
  uint local_80;
  uint local_78;
  uint local_64;
  undefined4 local_5c;
  uint local_48;
  uint local_40;
  uint local_2c;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f9f3;
  local_10 = ExceptionList;
  local_14 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f)
                       >> 1);
  ExceptionList = &local_10;
  FUN_00611be0(param_3 + -1,param_4);
  local_20 = local_14 + 1;
  if (param_2 < local_14) {
    while( true ) {
      iVar5 = FUN_005fce10();
      local_8 = 0;
      iVar6 = FUN_005fce10();
      uVar2 = *(uint *)(iVar6 + 0x10);
      uVar3 = *(uint *)(iVar5 + 0x10);
      uVar7 = uVar2;
      if (uVar3 < uVar2) {
        uVar7 = uVar3;
      }
      uVar7 = FUN_00414bd0(uVar7);
      if (uVar7 == 0) {
        if (uVar3 < uVar2) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar3 != uVar2);
        }
      }
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40);
      }
      local_8 = 0xffffffff;
      uVar2 = local_40 >> 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if ((int)uVar7 < 0) break;
      iVar5 = FUN_005fce10();
      local_8 = 2;
      iVar6 = FUN_005fce10();
      uVar3 = *(uint *)(iVar6 + 0x10);
      uVar7 = *(uint *)(iVar5 + 0x10);
      uVar8 = uVar3;
      if (uVar7 < uVar3) {
        uVar8 = uVar7;
      }
      uVar8 = FUN_00414bd0(uVar8);
      if (uVar8 == 0) {
        if (uVar7 < uVar3) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)(uVar7 != uVar3);
        }
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_40 = uVar2 << 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if (((int)uVar8 < 0) || (local_14 = local_14 + -1, local_14 <= param_2)) break;
    }
    local_40 = uVar2 << 8;
    local_8 = 0xffffffff;
    local_2c = 0xf;
  }
  if (local_20 < param_3) {
    while( true ) {
      iVar5 = FUN_005fce10();
      local_8 = 4;
      iVar6 = FUN_005fce10();
      uVar2 = *(uint *)(iVar6 + 0x10);
      uVar3 = *(uint *)(iVar5 + 0x10);
      uVar7 = uVar3;
      if (uVar2 <= uVar3) {
        uVar7 = uVar2;
      }
      uVar7 = FUN_00414bd0(uVar7);
      if (uVar7 == 0) {
        if (uVar3 < uVar2) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar3 != uVar2);
        }
      }
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      uVar2 = local_40 >> 8;
      local_40 = uVar2 << 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if ((int)uVar7 < 0) break;
      iVar5 = FUN_005fce10();
      local_8 = 6;
      iVar6 = FUN_005fce10();
      uVar3 = *(uint *)(iVar6 + 0x10);
      uVar7 = *(uint *)(iVar5 + 0x10);
      uVar8 = uVar7;
      if (uVar3 <= uVar7) {
        uVar8 = uVar3;
      }
      uVar8 = FUN_00414bd0(uVar8);
      if (uVar8 == 0) {
        if (uVar7 < uVar3) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)(uVar7 != uVar3);
        }
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_40 = uVar2 << 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if (((int)uVar8 < 0) || (local_20 = local_20 + 1, param_3 <= local_20)) break;
    }
  }
  local_18 = local_14;
  puVar10 = local_20;
  puVar9 = local_20;
  do {
    while (param_3 <= puVar10) {
joined_r0x00610320:
      for (; param_2 < local_18; local_18 = local_18 + -1) {
        iVar5 = FUN_005fce10();
        local_8 = 0xc;
        iVar6 = FUN_005fce10();
        uVar2 = *(uint *)(iVar6 + 0x10);
        uVar3 = *(uint *)(iVar5 + 0x10);
        uVar7 = uVar3;
        if (uVar2 <= uVar3) {
          uVar7 = uVar2;
        }
        uVar7 = FUN_00414bd0(uVar7);
        if (uVar7 == 0) {
          if (uVar3 < uVar2) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (uint)(uVar3 != uVar2);
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
        if (-1 < (int)uVar7) {
          iVar5 = FUN_005fce10();
          local_8 = 0xe;
          iVar6 = FUN_005fce10();
          uVar2 = *(uint *)(iVar6 + 0x10);
          uVar3 = *(uint *)(iVar5 + 0x10);
          uVar7 = uVar3;
          if (uVar2 <= uVar3) {
            uVar7 = uVar2;
          }
          uVar7 = FUN_00414bd0(uVar7);
          if (uVar7 == 0) {
            if (uVar3 < uVar2) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = (uint)(uVar3 != uVar2);
            }
          }
          if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_94);
          }
          local_8 = 0xffffffff;
          local_80 = 0xf;
          local_94 = local_94 & 0xffffff00;
          if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_78);
          }
          local_64 = 0xf;
          local_78 = local_78 & 0xffffff00;
          if ((int)uVar7 < 0) break;
          uVar4 = local_14[-1];
          local_14 = local_14 + -1;
          *local_14 = local_18[-1];
          local_18[-1] = uVar4;
        }
        local_8 = 0xffffffff;
      }
      if (local_18 == param_2) {
        if (puVar10 == param_3) {
          param_1[1] = (uint)puVar9;
          *param_1 = (uint)local_14;
          ExceptionList = local_10;
          return;
        }
        if (puVar9 != puVar10) {
          uVar4 = *local_14;
          *local_14 = *puVar9;
          *puVar9 = uVar4;
        }
        puVar9 = puVar9 + 1;
        uVar4 = *local_14;
        *local_14 = *puVar10;
        *puVar10 = uVar4;
        puVar10 = puVar10 + 1;
        local_14 = local_14 + 1;
      }
      else {
        local_18 = local_18 + -1;
        if (puVar10 == param_3) {
          local_14 = local_14 + -1;
          if (local_18 != local_14) {
            uVar4 = *local_18;
            *local_18 = *local_14;
            *local_14 = uVar4;
          }
          puVar1 = puVar9 + -1;
          uVar4 = *local_14;
          puVar9 = puVar9 + -1;
          *local_14 = *puVar1;
          *puVar9 = uVar4;
        }
        else {
          uVar4 = *puVar10;
          *puVar10 = *local_18;
          puVar10 = puVar10 + 1;
          *local_18 = uVar4;
        }
      }
    }
    iVar5 = FUN_005fce10();
    local_8 = 8;
    iVar6 = FUN_005fce10();
    uVar2 = *(uint *)(iVar6 + 0x10);
    uVar3 = *(uint *)(iVar5 + 0x10);
    uVar7 = uVar3;
    if (uVar2 <= uVar3) {
      uVar7 = uVar2;
    }
    uVar7 = FUN_00414bd0(uVar7);
    if (uVar7 == 0) {
      if (uVar3 < uVar2) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)(uVar3 != uVar2);
      }
    }
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
    local_8 = 0xffffffff;
    uVar2 = local_40 >> 8;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
    local_20 = puVar9;
    if (-1 < (int)uVar7) {
      iVar5 = FUN_005fce10();
      local_8 = 10;
      iVar6 = FUN_005fce10();
      uVar3 = *(uint *)(iVar6 + 0x10);
      uVar7 = *(uint *)(iVar5 + 0x10);
      uVar8 = uVar7;
      if (uVar3 <= uVar7) {
        uVar8 = uVar3;
      }
      uVar8 = FUN_00414bd0(uVar8);
      if (uVar8 == 0) {
        if (uVar7 < uVar3) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)(uVar7 != uVar3);
        }
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_40 = uVar2 << 8;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      if ((int)uVar8 < 0) goto joined_r0x00610320;
      local_20 = puVar9 + 1;
      uVar4 = *puVar9;
      *puVar9 = *puVar10;
      *puVar10 = uVar4;
    }
    local_40 = uVar2 << 8;
    local_8 = 0xffffffff;
    local_2c = 0xf;
    puVar10 = puVar10 + 1;
    puVar9 = local_20;
  } while( true );
}

