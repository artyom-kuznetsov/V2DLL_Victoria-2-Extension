// FUN_007ca200 @ 007ca200 body=[[007ca200, 007ca2f3] [007ca2f7, 007ca31d] [007ca321, 007ca3be] [007ca3c2, 007ca3e8] [007ca3ec, 007ca40e] [007ca410, 007ca49f] [007ca4a3, 007ca4c9] [007ca4cd, 007ca563] [007ca567, 007ca58d] [007ca591, 007ca651] [007ca655, 007ca67b] [007ca67f, 007ca715] [007ca719, 007ca73f] [007ca743, 007ca77c] [007ca780, 007ca812] [007ca816, 007ca83c] [007ca840, 007ca8df] [007ca8e3, 007ca90d] [007ca911, 007ca9f9]]


/* WARNING: Removing unreachable block (ram,0x007ca6ca) */
/* WARNING: Removing unreachable block (ram,0x007ca518) */
/* WARNING: Removing unreachable block (ram,0x007ca36c) */
/* WARNING: Removing unreachable block (ram,0x007ca2a1) */
/* WARNING: Removing unreachable block (ram,0x007ca457) */
/* WARNING: Removing unreachable block (ram,0x007ca607) */
/* WARNING: Removing unreachable block (ram,0x007ca7c8) */
/* WARNING: Removing unreachable block (ram,0x007ca893) */

void FUN_007ca200(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
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
  int *local_24;
  int *local_20;
  bool local_19;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f9f3;
  local_10 = ExceptionList;
  piVar8 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  ExceptionList = &local_10;
  FUN_007cdc30(param_3 + -1,param_4);
  local_20 = piVar8 + 1;
  uVar3 = local_19;
  local_14 = piVar8;
  if (param_2 < piVar8) {
    do {
      local_19 = (bool)uVar3;
      piVar1 = *(int **)(piVar8[-1] + 100);
      iVar4 = (**(code **)(**(int **)(*piVar8 + 100) + 0x1c))(local_5c);
      local_8 = 0;
      iVar5 = (**(code **)(*piVar1 + 0x1c))(local_40);
      local_18 = *(int **)(iVar4 + 0x10);
      uVar2 = *(uint *)(iVar5 + 0x10);
      uVar6 = (uint)local_18;
      if (uVar2 < local_18) {
        uVar6 = uVar2;
      }
      uVar6 = FUN_00414bd0(uVar6);
      if (uVar6 == 0) {
        if (uVar2 < local_18) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)((int *)uVar2 != local_18);
        }
      }
      local_19 = (int)uVar6 < 0;
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
      piVar1 = *(int **)(*piVar8 + 100);
      iVar4 = (**(code **)(**(int **)(piVar8[-1] + 100) + 0x1c))(local_5c);
      local_8 = 2;
      iVar5 = (**(code **)(*piVar1 + 0x1c))(local_40);
      local_18 = *(int **)(iVar4 + 0x10);
      uVar2 = *(uint *)(iVar5 + 0x10);
      uVar6 = (uint)local_18;
      if (uVar2 < local_18) {
        uVar6 = uVar2;
      }
      uVar6 = FUN_00414bd0(uVar6);
      if (uVar6 == 0) {
        if (uVar2 < local_18) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)((int *)uVar2 != local_18);
        }
      }
      local_19 = (int)uVar6 < 0;
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
      piVar8 = piVar8 + -1;
      uVar3 = 0;
    } while (param_2 < piVar8);
    local_8 = 0xffffffff;
    local_2c = 0xf;
    local_30 = 0;
  }
  local_14 = piVar8;
  local_24 = local_20;
  if (local_20 < param_3) {
    while( true ) {
      piVar8 = *(int **)(*local_20 + 100);
      iVar4 = (**(code **)(**(int **)(*local_14 + 100) + 0x1c))(local_5c);
      local_8 = 4;
      iVar5 = (**(code **)(*piVar8 + 0x1c))(local_40);
      uVar2 = *(uint *)(iVar4 + 0x10);
      uVar6 = *(uint *)(iVar5 + 0x10);
      uVar7 = uVar6;
      if (uVar2 <= uVar6) {
        uVar7 = uVar2;
      }
      uVar7 = FUN_00414bd0(uVar7);
      if (uVar7 == 0) {
        if (uVar6 < uVar2) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar6 != uVar2);
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
      piVar8 = local_14;
      if ((int)uVar7 < 0) break;
      piVar8 = *(int **)(*local_14 + 100);
      iVar4 = (**(code **)(**(int **)(*local_20 + 100) + 0x1c))(local_5c);
      local_8 = 6;
      iVar5 = (**(code **)(*piVar8 + 0x1c))(local_40);
      uVar2 = *(uint *)(iVar4 + 0x10);
      uVar6 = *(uint *)(iVar5 + 0x10);
      uVar7 = uVar6;
      if (uVar2 <= uVar6) {
        uVar7 = uVar2;
      }
      uVar7 = FUN_00414bd0(uVar7);
      if (uVar7 == 0) {
        if (uVar6 < uVar2) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar6 != uVar2);
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
      piVar8 = local_14;
      if (((int)uVar7 < 0) ||
         (local_20 = local_20 + 1, local_24 = local_20, piVar8 = local_14, param_3 <= local_20))
      break;
    }
  }
joined_r0x007ca5b9:
  do {
    local_18 = piVar8;
    if (local_24 < param_3) {
      piVar8 = *(int **)(*local_14 + 100);
      iVar4 = (**(code **)(**(int **)(*local_24 + 100) + 0x1c))(local_5c);
      local_8 = 8;
      iVar5 = (**(code **)(*piVar8 + 0x1c))(local_40);
      uVar2 = *(uint *)(iVar4 + 0x10);
      uVar6 = *(uint *)(iVar5 + 0x10);
      uVar7 = uVar6;
      if (uVar2 <= uVar6) {
        uVar7 = uVar2;
      }
      uVar7 = FUN_00414bd0(uVar7);
      if (uVar7 == 0) {
        if (uVar6 < uVar2) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar6 != uVar2);
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
      if (-1 < (int)uVar7) {
        piVar8 = *(int **)(*local_24 + 100);
        iVar4 = (**(code **)(**(int **)(*local_14 + 100) + 0x1c))(local_5c);
        local_8 = 10;
        iVar5 = (**(code **)(*piVar8 + 0x1c))(local_40);
        uVar2 = *(uint *)(iVar4 + 0x10);
        uVar6 = *(uint *)(iVar5 + 0x10);
        uVar7 = uVar6;
        if (uVar2 <= uVar6) {
          uVar7 = uVar2;
        }
        uVar7 = FUN_00414bd0(uVar7);
        if (uVar7 == 0) {
          if (uVar6 < uVar2) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (uint)(uVar6 != uVar2);
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
        if ((int)uVar7 < 0) goto joined_r0x007ca775;
        iVar4 = *local_20;
        *local_20 = *local_24;
        *local_24 = iVar4;
        local_20 = local_20 + 1;
      }
      local_8 = 0xffffffff;
      local_2c = 0xf;
      local_30 = 0;
      local_24 = local_24 + 1;
      piVar8 = local_18;
      goto joined_r0x007ca5b9;
    }
joined_r0x007ca775:
    for (; param_2 < local_18; local_18 = local_18 + -1) {
      piVar8 = *(int **)(local_18[-1] + 100);
      iVar4 = (**(code **)(**(int **)(*local_14 + 100) + 0x1c))(local_5c);
      local_8 = 0xc;
      iVar5 = (**(code **)(*piVar8 + 0x1c))(local_40);
      uVar2 = *(uint *)(iVar4 + 0x10);
      uVar6 = *(uint *)(iVar5 + 0x10);
      uVar7 = uVar6;
      if (uVar2 <= uVar6) {
        uVar7 = uVar2;
      }
      uVar7 = FUN_00414bd0(uVar7);
      if (uVar7 == 0) {
        if (uVar6 < uVar2) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar6 != uVar2);
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
      if (-1 < (int)uVar7) {
        piVar8 = *(int **)(*local_14 + 100);
        iVar4 = (**(code **)(**(int **)(local_18[-1] + 100) + 0x1c))(local_78);
        local_8 = 0xe;
        iVar5 = (**(code **)(*piVar8 + 0x1c))(local_94);
        uVar2 = *(uint *)(iVar4 + 0x10);
        uVar6 = *(uint *)(iVar5 + 0x10);
        uVar7 = uVar6;
        if (uVar2 <= uVar6) {
          uVar7 = uVar2;
        }
        uVar7 = FUN_00414bd0(uVar7);
        if (uVar7 == 0) {
          if (uVar6 < uVar2) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (uint)(uVar6 != uVar2);
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
        if ((int)uVar7 < 0) break;
        iVar4 = local_14[-1];
        local_14 = local_14 + -1;
        *local_14 = local_18[-1];
        local_18[-1] = iVar4;
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
        iVar4 = *local_14;
        *local_14 = *local_20;
        *local_20 = iVar4;
      }
      local_20 = local_20 + 1;
      iVar4 = *local_14;
      *local_14 = *local_24;
      *local_24 = iVar4;
      local_24 = local_24 + 1;
      piVar8 = local_18;
      local_14 = local_14 + 1;
    }
    else {
      piVar8 = local_18 + -1;
      if (local_24 == param_3) {
        local_14 = local_14 + -1;
        if (piVar8 != local_14) {
          iVar4 = *piVar8;
          *piVar8 = *local_14;
          *local_14 = iVar4;
        }
        piVar1 = local_20 + -1;
        iVar4 = *local_14;
        local_20 = local_20 + -1;
        *local_14 = *piVar1;
        *local_20 = iVar4;
      }
      else {
        iVar4 = *local_24;
        *local_24 = *piVar8;
        local_24 = local_24 + 1;
        *piVar8 = iVar4;
      }
    }
  } while( true );
}

