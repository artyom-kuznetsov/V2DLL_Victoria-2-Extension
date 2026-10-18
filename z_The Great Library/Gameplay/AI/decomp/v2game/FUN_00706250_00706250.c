// FUN_00706250 @ 00706250 body=[[00706250, 0070633d] [00706341, 00706367] [0070636b, 00706402] [00706406, 0070642c] [00706430, 007064db] [007064df, 00706505] [00706509, 00706599] [0070659d, 007065c3] [007065c7, 0070668b] [0070668f, 007066b5] [007066b9, 00706749] [0070674d, 00706773] [00706777, 0070683c] [00706840, 00706866] [0070686a, 00706903] [00706907, 00706931] [00706935, 00706a1d]]


/* WARNING: Removing unreachable block (ram,0x007066fe) */
/* WARNING: Removing unreachable block (ram,0x0070654e) */
/* WARNING: Removing unreachable block (ram,0x007063b0) */
/* WARNING: Removing unreachable block (ram,0x007062eb) */
/* WARNING: Removing unreachable block (ram,0x00706490) */
/* WARNING: Removing unreachable block (ram,0x00706641) */
/* WARNING: Removing unreachable block (ram,0x007067f2) */
/* WARNING: Removing unreachable block (ram,0x007068b7) */

void FUN_00706250(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined4 local_5c [5];
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  bool local_19;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f9f3;
  local_10 = ExceptionList;
  puVar10 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  ExceptionList = &local_10;
  FUN_007075f0(param_3 + -1,param_4);
  local_20 = puVar10 + 1;
  uVar5 = local_19;
  local_14 = puVar10;
  if (param_2 < puVar10) {
    do {
      local_19 = (bool)uVar5;
      piVar2 = (int *)puVar10[-1];
      iVar6 = (**(code **)(*(int *)*puVar10 + 0x20))(local_5c);
      local_8 = 0;
      iVar7 = (**(code **)(*piVar2 + 0x20))(local_40);
      local_18 = *(undefined4 **)(iVar6 + 0x10);
      uVar3 = *(uint *)(iVar7 + 0x10);
      uVar8 = (uint)local_18;
      if (uVar3 < local_18) {
        uVar8 = uVar3;
      }
      uVar8 = FUN_00414bd0(uVar8);
      if (uVar8 == 0) {
        if (uVar3 < local_18) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)((undefined4 *)uVar3 != local_18);
        }
      }
      local_19 = (int)uVar8 < 0;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      if (local_19) break;
      piVar2 = (int *)*puVar10;
      iVar6 = (**(code **)(*(int *)puVar10[-1] + 0x20))(local_5c);
      local_8 = 2;
      iVar7 = (**(code **)(*piVar2 + 0x20))(local_40);
      local_18 = *(undefined4 **)(iVar6 + 0x10);
      uVar3 = *(uint *)(iVar7 + 0x10);
      uVar8 = (uint)local_18;
      if (uVar3 < local_18) {
        uVar8 = uVar3;
      }
      uVar8 = FUN_00414bd0(uVar8);
      if (uVar8 == 0) {
        if (uVar3 < local_18) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)((undefined4 *)uVar3 != local_18);
        }
      }
      local_19 = (int)uVar8 < 0;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      if (local_19) break;
      puVar10 = puVar10 + -1;
      uVar5 = 0;
    } while (param_2 < puVar10);
    local_8 = 0xffffffff;
    local_2c = 0xf;
    local_30 = 0;
  }
  local_14 = puVar10;
  local_24 = local_20;
  if (local_20 < param_3) {
    while( true ) {
      piVar2 = (int *)*local_20;
      iVar6 = (**(code **)(*(int *)*local_14 + 0x20))(local_5c);
      local_8 = 4;
      iVar7 = (**(code **)(*piVar2 + 0x20))(local_40);
      uVar3 = *(uint *)(iVar6 + 0x10);
      uVar8 = *(uint *)(iVar7 + 0x10);
      uVar9 = uVar8;
      if (uVar3 <= uVar8) {
        uVar9 = uVar3;
      }
      uVar9 = FUN_00414bd0(uVar9);
      if (uVar9 == 0) {
        if (uVar8 < uVar3) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar8 != uVar3);
        }
      }
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      local_24 = local_20;
      puVar10 = local_14;
      if ((int)uVar9 < 0) break;
      piVar2 = (int *)*local_14;
      iVar6 = (**(code **)(*(int *)*local_20 + 0x20))(local_5c);
      local_8 = 6;
      iVar7 = (**(code **)(*piVar2 + 0x20))(local_40);
      uVar3 = *(uint *)(iVar6 + 0x10);
      uVar8 = *(uint *)(iVar7 + 0x10);
      uVar9 = uVar8;
      if (uVar3 <= uVar8) {
        uVar9 = uVar3;
      }
      uVar9 = FUN_00414bd0(uVar9);
      if (uVar9 == 0) {
        if (uVar8 < uVar3) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar8 != uVar3);
        }
      }
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      local_24 = local_20;
      puVar10 = local_14;
      if (((int)uVar9 < 0) ||
         (local_20 = local_20 + 1, local_24 = local_20, puVar10 = local_14, param_3 <= local_20))
      break;
    }
  }
joined_r0x007065f6:
  do {
    local_18 = puVar10;
    if (local_24 < param_3) {
      piVar2 = (int *)*local_14;
      iVar6 = (**(code **)(*(int *)*local_24 + 0x20))(local_5c);
      local_8 = 8;
      iVar7 = (**(code **)(*piVar2 + 0x20))(local_40);
      uVar3 = *(uint *)(iVar6 + 0x10);
      uVar8 = *(uint *)(iVar7 + 0x10);
      uVar9 = uVar8;
      if (uVar3 <= uVar8) {
        uVar9 = uVar3;
      }
      uVar9 = FUN_00414bd0(uVar9);
      if (uVar9 == 0) {
        if (uVar8 < uVar3) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar8 != uVar3);
        }
      }
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      if (-1 < (int)uVar9) {
        piVar2 = (int *)*local_24;
        iVar6 = (**(code **)(*(int *)*local_14 + 0x20))(local_5c);
        local_8 = 10;
        iVar7 = (**(code **)(*piVar2 + 0x20))(local_40);
        uVar3 = *(uint *)(iVar6 + 0x10);
        uVar8 = *(uint *)(iVar7 + 0x10);
        uVar9 = uVar8;
        if (uVar3 <= uVar8) {
          uVar9 = uVar3;
        }
        uVar9 = FUN_00414bd0(uVar9);
        if (uVar9 == 0) {
          if (uVar8 < uVar3) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(uVar8 != uVar3);
          }
        }
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        local_8 = 0xffffffff;
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c[0]);
        }
        if ((int)uVar9 < 0) goto joined_r0x007067a9;
        uVar4 = *local_20;
        *local_20 = *local_24;
        *local_24 = uVar4;
        local_20 = local_20 + 1;
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_24 = local_24 + 1;
      puVar10 = local_18;
      goto joined_r0x007065f6;
    }
joined_r0x007067a9:
    for (; param_2 < local_18; local_18 = local_18 + -1) {
      piVar2 = (int *)local_18[-1];
      iVar6 = (**(code **)(*(int *)*local_14 + 0x20))(local_5c);
      local_8 = 0xc;
      iVar7 = (**(code **)(*piVar2 + 0x20))(local_40);
      uVar3 = *(uint *)(iVar6 + 0x10);
      uVar8 = *(uint *)(iVar7 + 0x10);
      uVar9 = uVar8;
      if (uVar3 <= uVar8) {
        uVar9 = uVar3;
      }
      uVar9 = FUN_00414bd0(uVar9);
      if (uVar9 == 0) {
        if (uVar8 < uVar3) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar8 != uVar3);
        }
      }
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      if (-1 < (int)uVar9) {
        piVar2 = (int *)*local_14;
        iVar6 = (**(code **)(*(int *)local_18[-1] + 0x20))(local_78);
        local_8 = 0xe;
        iVar7 = (**(code **)(*piVar2 + 0x20))(local_94);
        uVar3 = *(uint *)(iVar6 + 0x10);
        uVar8 = *(uint *)(iVar7 + 0x10);
        uVar9 = uVar8;
        if (uVar3 <= uVar8) {
          uVar9 = uVar3;
        }
        uVar9 = FUN_00414bd0(uVar9);
        if (uVar9 == 0) {
          if (uVar8 < uVar3) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(uVar8 != uVar3);
          }
        }
        if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_94[0]);
        }
        local_8 = 0xffffffff;
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_78[0]);
        }
        local_64 = 0xf;
        local_68 = 0;
        local_78[0] = local_78[0] & 0xffffff00;
        if ((int)uVar9 < 0) break;
        uVar4 = local_14[-1];
        local_14 = local_14 + -1;
        *local_14 = local_18[-1];
        local_18[-1] = uVar4;
      }
      local_8 = 0xffffffff;
    }
    if (local_18 == param_2) {
      if (local_24 == param_3) {
        param_1[1] = (uint)local_20;
        *param_1 = (uint)local_14;
        ExceptionList = local_10;
        return;
      }
      if (local_20 != local_24) {
        uVar4 = *local_14;
        *local_14 = *local_20;
        *local_20 = uVar4;
      }
      local_20 = local_20 + 1;
      uVar4 = *local_14;
      *local_14 = *local_24;
      *local_24 = uVar4;
      local_24 = local_24 + 1;
      puVar10 = local_18;
      local_14 = local_14 + 1;
    }
    else {
      puVar10 = local_18 + -1;
      if (local_24 == param_3) {
        local_14 = local_14 + -1;
        if (puVar10 != local_14) {
          uVar4 = *puVar10;
          *puVar10 = *local_14;
          *local_14 = uVar4;
        }
        puVar1 = local_20 + -1;
        uVar4 = *local_14;
        local_20 = local_20 + -1;
        *local_14 = *puVar1;
        *local_20 = uVar4;
      }
      else {
        uVar4 = *local_24;
        *local_24 = *puVar10;
        local_24 = local_24 + 1;
        *puVar10 = uVar4;
      }
    }
  } while( true );
}

