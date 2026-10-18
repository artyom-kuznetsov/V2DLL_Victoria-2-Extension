// FUN_00929480 @ 00929480 body=[[00929480, 009295e1] [009295e5, 00929607] [0092960b, 0092962b] [0092962f, 0092964a] [0092964e, 00929732] [00929736, 00929758] [0092975c, 0092977c] [00929780, 0092979b] [0092979f, 00929880] [00929884, 0092989f] [009298a3, 009298bd] [009298c1, 00929926] [0092992a, 00929946] [0092994a, 0092996d] [00929971, 00929aa8] [00929aac, 00929ae0] [00929ae4, 00929aff] [00929b03, 00929b1a] [00929b1e, 00929b48] [00929b62, 00929b8e]]


void FUN_00929480(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int in_ECX;
  char *pcVar7;
  undefined **local_c0 [3];
  undefined4 local_b4;
  char local_b0 [4];
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  int *local_8c;
  undefined4 local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined1 local_5c [4];
  undefined1 *local_58;
  undefined1 *local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  char *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  char local_15;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8454d;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  local_b4 = 1;
  local_15 = '\0';
  local_88 = 0;
  local_8c = (int *)FUN_00aae9af();
  if (local_8c == (int *)0x0) {
    local_2c = (char *)0x0;
    std::exception::exception((exception *)local_c0,&local_2c);
    local_c0[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c0,&DAT_00e6fb20);
  }
  *local_8c = (int)local_8c;
  local_8c[1] = (int)local_8c;
  local_8c[2] = (int)local_8c;
  *(undefined1 *)(local_8c + 5) = 1;
  *(undefined1 *)((int)local_8c + 0x15) = 1;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar3 = *(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 6;
  local_20 = 0;
  local_28 = iVar3;
  if (0 < iVar3) {
    local_1c = (int *)0x0;
    do {
      if (*(int *)(*(int *)(in_ECX + 0x1c) + local_20 * 4) != 0) {
        local_24 = *(int **)((int)local_1c + 0xc + *(int *)(in_ECX + 0x3c));
        if (*(char *)((int)local_24 + 0x1d4) == '\0') {
          local_50 = 0xf;
          local_54 = (undefined1 *)0x0;
          local_64 = local_64 & 0xffffff00;
          FUN_00409350(&DAT_00e3495c,3);
          local_8._0_1_ = 2;
          FUN_0094dbd0(*(int *)(in_ECX + 0x3c) + (int)local_1c,local_80);
          local_8._0_1_ = 3;
          FUN_00988fa0();
          local_8._0_1_ = 4;
          FUN_00988f20();
          local_8._0_1_ = 5;
          FUN_00448aa0();
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_98 = 0xf;
          local_9c = 0;
          local_ac[0] = local_ac[0] & 0xffffff00;
          if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 1;
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        else {
          piVar4 = (int *)FUN_004c8d10();
          *piVar4 = *piVar4 + 1;
        }
        local_15 = '\x01';
        iVar3 = local_28;
      }
      local_1c = (int *)((int)local_1c + 0x40);
      local_20 = local_20 + 1;
    } while (local_20 < iVar3);
  }
  piVar4 = (int *)(*(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 6);
  local_20 = 0;
  if (0 < (int)piVar4) {
    local_1c = (int *)0x0;
    local_24 = piVar4;
    do {
      if (*(int *)(*(int *)(in_ECX + 0xc) + local_20 * 4) != 0) {
        local_28 = *(int *)(*(int *)(in_ECX + 0x2c) + 0xc + (int)local_1c);
        if (*(char *)(local_28 + 0x1d4) == '\0') {
          local_50 = 0xf;
          local_54 = (undefined1 *)0x0;
          local_64 = local_64 & 0xffffff00;
          FUN_00409350(&DAT_00e3495c,3);
          local_8._0_1_ = 6;
          FUN_0094dbd0(*(int *)(in_ECX + 0x2c) + (int)local_1c,local_48);
          local_8._0_1_ = 7;
          FUN_00988fa0();
          local_8._0_1_ = 8;
          FUN_00988f20();
          local_8._0_1_ = 9;
          FUN_00448aa0();
          if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_98 = 0xf;
          local_9c = 0;
          local_ac[0] = local_ac[0] & 0xffffff00;
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 1;
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        else {
          piVar4 = (int *)FUN_004c8d10();
          *piVar4 = *piVar4 + 1;
        }
        local_15 = '\x01';
        piVar4 = local_24;
      }
      local_1c = (int *)((int)local_1c + 0x40);
      local_20 = local_20 + 1;
    } while (local_20 < (int)piVar4);
  }
  local_1c = (int *)*local_8c;
  local_24 = local_8c;
  if (local_1c != local_8c) {
    do {
      local_28 = local_1c[3];
      iVar3 = local_1c[4];
      FUN_00448740(&DAT_00df963c,2);
      if (1 < iVar3) {
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        FUN_00409350(&DAT_00e125f0,2);
        local_50 = 0xf;
        local_54 = (undefined1 *)0x0;
        local_64 = local_64 & 0xffffff00;
        local_8._0_1_ = 0xb;
        pcVar5 = __itoa(iVar3,local_b0,10);
        pcVar7 = pcVar5;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
        local_8._0_1_ = 0xc;
        FUN_00988f20();
        local_8._0_1_ = 0xd;
        FUN_00448aa0();
        if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_6c = 0xf;
        local_70 = 0;
        local_80[0] = local_80[0] & 0xffffff00;
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 1;
        local_50 = 0xf;
        local_54 = (undefined1 *)0x0;
        local_64 = local_64 & 0xffffff00;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350(&DAT_00e3495c,3);
      local_8._0_1_ = 0xe;
      FUN_0090a830(local_28,local_ac);
      local_8._0_1_ = 0xf;
      FUN_00988f20();
      local_8._0_1_ = 0x10;
      FUN_00448aa0();
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 1;
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = local_ac[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (*(char *)((int)local_1c + 0x15) == '\0') {
        piVar4 = (int *)local_1c[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          local_1c = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            local_1c = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(local_1c[1] + 0x15);
          piVar2 = (int *)local_1c[1];
          piVar4 = local_1c;
          while ((local_1c = piVar2, cVar1 == '\0' && (piVar4 == (int *)local_1c[2]))) {
            cVar1 = *(char *)(local_1c[1] + 0x15);
            piVar2 = (int *)local_1c[1];
            piVar4 = local_1c;
          }
        }
      }
    } while (local_1c != local_24);
  }
  piVar4 = param_1 + 4;
  if (0 < *piVar4) {
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    *(undefined1 *)(*piVar4 + -1 + (int)param_1) = 0x2e;
  }
  if (local_15 == '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("PEACE_WHITEPEACE",0x10);
    local_8._0_1_ = 0x11;
    FUN_009a8ee0(local_5c,local_48);
    local_8._0_1_ = 0x12;
    puVar6 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_2c = (char *)FUN_00aae9af();
      local_8._0_1_ = 0x13;
      if (local_2c == (char *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0x14;
      local_2c = (char *)0x0;
      if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar6;
    local_8._0_1_ = 0x12;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_8._0_1_ = 0x15;
    FUN_00408ed0();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_009adb70();
    if (local_58 != (undefined1 *)0x0) {
      while( true ) {
        if (local_58 == local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < *(uint *)(local_58 + 0x14)) break;
        *(undefined4 *)(local_58 + 0x14) = 0xf;
        *(undefined4 *)(local_58 + 0x10) = 0;
        *local_58 = 0;
        local_58 = local_58 + 0x20;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = (undefined1 *)0x0;
    local_54 = (undefined1 *)0x0;
    local_50 = 0;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = 0x17;
  FUN_00445600(*local_8c,local_8c);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

