// FUN_008b88f0 @ 008b88f0 body=[[008b88f0, 008b899a] [008b899e, 008b8aed] [008b8af1, 008b8b18] [008b8b1c, 008b8c3a] [008b8c3e, 008b8c65] [008b8c69, 008b8c9d] [008b8ca1, 008b8cbc] [008b8cc0, 008b8cd6] [008b8cda, 008b8d7f] [008b8d83, 008b8d9f] [008b8da3, 008b8df3] [008b8df7, 008b8e6e] [008b8e72, 008b8ea5] [008b8eb0, 008b8f04] [008b8f08, 008b9047] [008b904b, 008b9074] [008b9078, 008b90b5] [008b90b9, 008b90d4] [008b90d8, 008b90f9] [008b90fd, 008b9127] [008b912b, 008b9181] [008b9185, 008b9197] [008b919b, 008b91bf] [008b91c3, 008b91d8]]


/* WARNING: Removing unreachable block (ram,0x008b91b4) */

undefined1 *
FUN_008b88f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_10c;
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  undefined4 local_cc;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  int *local_74;
  uint local_70 [4];
  undefined1 *local_60;
  uint local_5c;
  undefined1 local_54 [4];
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_40;
  undefined1 local_38 [4];
  undefined1 *local_34;
  undefined1 *local_30;
  uint local_2c;
  int local_24;
  int *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b67945;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_cc = 1;
  uStack_7 = 0;
  if (0 < param_4) {
    local_18 = param_4;
    do {
      local_8 = 1;
      local_5c = 0xf;
      local_60 = (undefined1 *)0x0;
      local_70[0] = local_70[0] & 0xffffff00;
      FUN_00409350(&DAT_00e29ba0,3);
      local_8 = 2;
      FUN_00448aa0();
      local_8 = 1;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_8 = 1;
  FUN_00448aa0();
  if (param_4 == 0) {
    if ((char)param_5 != '\0') {
      cVar2 = (**(code **)(*local_74 + 0x18))();
      if (cVar2 == (char)param_3) {
        uVar9 = 0x700e2cfe8;
      }
      else {
        uVar9 = 0x700e2cff0;
      }
      FUN_00448740(uVar9);
    }
    local_5c = 0xf;
    local_60 = (undefined1 *)0x0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350("OR_TRIGGER_STARTS",0x11);
    local_8 = 3;
    local_2c = 0xf;
    local_30 = (undefined1 *)0x0;
    local_40 = local_40 & 0xffffff00;
    FUN_00409350(&DAT_00e0ecb4,2);
    local_8 = 4;
    local_20 = (int *)FUN_009a8ee0(local_54,local_70);
    local_8 = 5;
    puVar3 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_24 = FUN_00aae9af();
      local_8 = 6;
      if (local_24 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_00475150();
      }
      local_8 = 7;
      local_24 = 0;
      if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar3;
    local_8 = 5;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_8 = 8;
    FUN_00988f20();
    local_8 = 9;
    FUN_00448aa0();
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 10;
  }
  else {
    local_5c = 0xf;
    local_60 = (undefined1 *)0x0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350("OR_TRIG_SHORT",0xd);
    local_8 = 0xb;
    local_2c = 0xf;
    local_30 = (undefined1 *)0x0;
    local_40 = local_40 & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 0xc;
    local_20 = (int *)FUN_009a8ee0(local_54,local_70);
    local_8 = 0xd;
    puVar3 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_24 = FUN_00aae9af();
      local_8 = 0xe;
      if (local_24 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_00475150();
      }
      local_8 = 0xf;
      local_24 = 0;
      if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar3;
    local_8 = 0xd;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_8 = 0x10;
    FUN_00988f20();
    local_8 = 0x11;
    FUN_00448aa0();
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0x12;
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90 = local_90 & 0xffffff00;
  local_98 = 0xf;
  local_9c = 0;
  FUN_009adb70();
  if (local_50 != (undefined1 *)0x0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0;
  local_4c = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  if (local_2c < 0x10) {
    local_40 = local_40 & 0xffffff00;
    local_30 = (undefined1 *)0x0;
    local_2c = 0xf;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0;
    local_24 = local_74[3] - local_74[2] >> 2;
    if (0 < local_24) {
      do {
        local_8 = 0x13;
        local_20 = *(int **)(local_74[2] + local_18 * 4);
        (**(code **)(*local_20 + 0x2c))(local_70,param_2,param_3,0,param_5);
        local_8 = 0x14;
        piVar4 = (int *)FUN_00989510(&local_50,10);
        if (local_50 != (undefined1 *)0x0) {
          local_1c = local_4c;
          puVar7 = local_50;
          while( true ) {
            if (puVar7 == local_4c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            if (0xf < *(uint *)(puVar7 + 0x14)) break;
            *(undefined4 *)(puVar7 + 0x14) = 0xf;
            *(undefined4 *)(puVar7 + 0x10) = 0;
            *puVar7 = 0;
            puVar7 = puVar7 + 0x1c;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_50 = (undefined1 *)0x0;
        local_4c = (undefined1 *)0x0;
        local_48 = 0;
        if ((piVar4[1] - *piVar4) / 0x1c == 1) {
          (**(code **)(*local_20 + 0x28))(local_e8,param_2,param_3);
          local_8 = 0x15;
          FUN_00408ed0();
          local_8 = 0x14;
          if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        local_2c = 0xf;
        local_30 = (undefined1 *)0x0;
        local_40 = local_40 & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        puVar1 = local_30;
        puVar7 = local_60;
        iVar5 = FUN_00414bd0();
        bVar8 = false;
        if (iVar5 == 0) {
          if (puVar7 < puVar1) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(puVar7 != puVar1);
          }
          bVar8 = uVar6 == 0;
        }
        local_11 = !bVar8;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if ((bool)local_11) {
          local_98 = 0xf;
          local_9c = 0;
          local_ac = local_ac & 0xffffff00;
          puVar7 = (undefined1 *)(param_4 + 1);
          if (0 < param_4 + 1) {
            do {
              local_1c = puVar7;
              local_8 = 0x17;
              local_b4 = 0xf;
              local_b8 = 0;
              local_c8[0] = local_c8[0] & 0xffffff00;
              FUN_00409350(&DAT_00e29ba0,3);
              local_8 = 0x18;
              FUN_00448aa0();
              local_8 = 0x17;
              if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_1c = (undefined1 *)((int)local_1c + -1);
              puVar7 = local_1c;
            } while (local_1c != (undefined1 *)0x0);
          }
          local_8 = 0x17;
          FUN_00448aa0();
          if (0 < local_18) {
            local_7c = 0xf;
            local_80 = 0;
            local_90 = local_90 & 0xffffff00;
            FUN_00409350(&DAT_00ded950,1);
            local_8 = 0x19;
            local_b4 = 0xf;
            local_b8 = 0;
            local_c8[0] = local_c8[0] & 0xffffff00;
            FUN_00409350(&DAT_00e2d034,2);
            local_8 = 0x1a;
            FUN_009a8ee0(local_38,local_c8);
            local_8 = 0x1b;
            puVar3 = DAT_0125b5e0;
            if (DAT_0125b5e0 == (undefined4 *)0x0) {
              local_1c = (undefined1 *)FUN_00aae9af();
              local_8 = 0x1c;
              if (local_1c == (undefined1 *)0x0) {
                puVar3 = (undefined4 *)0x0;
              }
              else {
                puVar3 = (undefined4 *)FUN_00475150();
              }
              local_8 = 0x1d;
              local_1c = (undefined1 *)0x0;
              if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
                (**(code **)*DAT_0125b5e0)();
              }
            }
            DAT_0125b5e0 = puVar3;
            local_8 = 0x1b;
            FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
            local_8 = 0x1e;
            FUN_00988f20();
            local_8 = 0x1f;
            FUN_00448aa0();
            if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_10c = 0xf;
            if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_d4 = 0xf;
            local_d8 = 0;
            local_e8[0] = local_e8[0] & 0xffffff00;
            local_8 = 0x20;
            FUN_009adb70();
            puVar7 = local_34;
            if (local_34 != (undefined1 *)0x0) {
              while( true ) {
                if (puVar7 == local_30) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                if (0xf < *(uint *)(puVar7 + 0x14)) break;
                *(undefined4 *)(puVar7 + 0x14) = 0xf;
                *(undefined4 *)(puVar7 + 0x10) = 0;
                *puVar7 = 0;
                puVar7 = puVar7 + 0x20;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_34 = (undefined1 *)0x0;
            local_30 = (undefined1 *)0x0;
            local_2c = 0;
            if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_8 = 0x17;
            local_b4 = 0xf;
            local_b8 = 0;
            local_c8[0] = local_c8[0] & 0xffffff00;
            if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          if (((char)param_5 != '\0') && (param_4 != 0)) {
            cVar2 = (**(code **)(*local_20 + 0x18))();
            if (cVar2 == (char)param_3) {
              uVar9 = 0x700e2cfe8;
            }
            else {
              uVar9 = 0x700e2cff0;
            }
            FUN_00448740(uVar9);
          }
          FUN_00448aa0();
          if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        local_8 = 0x13;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_18 = local_18 + 1;
      } while (local_18 < local_24);
    }
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

