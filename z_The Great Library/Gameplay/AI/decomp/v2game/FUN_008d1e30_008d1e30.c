// FUN_008d1e30 @ 008d1e30 body=[[008d1e30, 008d1ed9] [008d1edd, 008d1f83] [008d1f87, 008d1fa2] [008d1fa9, 008d1ff6] [008d1ffa, 008d20d6] [008d20da, 008d210a] [008d210e, 008d2234] [008d2238, 008d2262] [008d2266, 008d229b] [008d229f, 008d22ba] [008d22be, 008d22dc] [008d22e0, 008d2303] [008d2307, 008d2327] [008d232b, 008d233f]]


/* WARNING: Removing unreachable block (ram,0x008d231c) */
/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_008d1e30(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  undefined8 uVar6;
  uint local_c0;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  LPSTR ******local_80 [5];
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar4 = param_4;
  puStack_c = &LAB_00b66acf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_48 = 1;
  local_8._1_3_ = 0;
  if (0 < param_4) {
    do {
      local_8._0_1_ = 1;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350(&DAT_00e29ba0,3);
      local_8._0_1_ = 2;
      FUN_00448aa0();
      local_8._0_1_ = 1;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  local_8._0_1_ = 1;
  FUN_00448aa0();
  if (iVar4 == 0) {
    cVar2 = (**(code **)(*in_ECX + 0x18))();
    if (cVar2 == (char)param_3) {
      uVar6 = 0x700e2cfe8;
    }
    else {
      uVar6 = 0x700e2cff0;
    }
    FUN_00448740(uVar6);
  }
  FUN_008b7f70(local_80,param_2,param_3,iVar4 + 1,1);
  local_8._0_1_ = 3;
  piVar3 = (int *)FUN_00989510(&local_20,10);
  if (local_20 != (undefined1 *)0x0) {
    while( true ) {
      if (local_20 == local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < *(uint *)(local_20 + 0x14)) break;
      *(undefined4 *)(local_20 + 0x14) = 0xf;
      *(undefined4 *)(local_20 + 0x10) = 0;
      *local_20 = 0;
      local_20 = local_20 + 0x1c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((piVar3[1] - *piVar3) / 0x1c < 2) {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("ALL_CORE_PROVINCE",0x11);
    local_8._0_1_ = 0xb;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350(&DAT_00e0ecb4,2);
    local_8._0_1_ = 0xc;
    FUN_009a8ee0(local_24,local_64);
    local_8._0_1_ = 0xd;
    puVar5 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar4 = FUN_00aae9af();
      local_8._0_1_ = 0xe;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0xf;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar5;
    local_8._0_1_ = 0xd;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00448aa0();
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    local_8._0_1_ = 0x12;
    FUN_009adb70();
    if (local_20 != (undefined1 *)0x0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = (undefined1 *)0x0;
    local_1c = (undefined1 *)0x0;
    local_18 = 0;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    uVar1 = local_50;
  }
  else {
    FUN_008b7f70(local_9c,param_2,param_3,0,0);
    local_8._0_1_ = 4;
    FUN_00408ed0();
    local_8._0_1_ = 3;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_6c < 0x10) {
      local_80[0] = (LPSTR ******)local_80;
    }
    CharLowerBuffA((LPSTR)local_80[0],1);
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350("ALL_CORE_PROVINCE_THAT",0x16);
    local_8._0_1_ = 5;
    FUN_009a8ee0(local_24,local_40);
    local_8._0_1_ = 6;
    puVar5 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar4 = FUN_00aae9af();
      local_8._0_1_ = 7;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 8;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar5;
    local_8._0_1_ = 6;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_8._0_1_ = 9;
    FUN_00448aa0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8._0_1_ = 10;
    FUN_009adb70();
    uVar1 = local_2c;
    if (local_20 != (undefined1 *)0x0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < uVar1) {
    local_18 = 0;
    local_1c = (undefined1 *)0x0;
    local_20 = (undefined1 *)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0;
  local_1c = (undefined1 *)0x0;
  local_20 = (undefined1 *)0x0;
  FUN_00448aa0();
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

