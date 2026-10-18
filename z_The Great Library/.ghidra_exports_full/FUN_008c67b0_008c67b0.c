// FUN_008c67b0 @ 008c67b0 body=[[008c67b0, 008c6850] [008c6854, 008c6a1a] [008c6a1e, 008c6a48] [008c6a4c, 008c6a71] [008c6a75, 008c6a9a] [008c6a9e, 008c6ac3] [008c6ac7, 008c6b00] [008c6b04, 008c6b1f] [008c6b23, 008c6b41] [008c6b45, 008c6b63] [008c6b67, 008c6b7d] [008c6b81, 008c6ba1] [008c6ba5, 008c6be5] [008c6be9, 008c6bfc] [008c6c00, 008c6c14]]


/* WARNING: Removing unreachable block (ram,0x008c6bf1) */
/* WARNING: Removing unreachable block (ram,0x008c6b96) */

undefined1 * FUN_008c67b0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint local_138;
  uint local_11c;
  uint local_100;
  uint local_e4;
  uint local_c8;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined1 local_50 [4];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b85969;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_3c = 1;
  uStack_7 = 0;
  if (0 < param_4) {
    local_14 = param_4;
    do {
      local_8 = 1;
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      FUN_00409350(&DAT_00e29ba0,3);
      local_8 = 2;
      FUN_00448aa0();
      local_8 = 1;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  local_8 = 1;
  FUN_00448aa0();
  if (param_4 == 0) {
    cVar1 = (**(code **)(*local_18 + 0x18))();
    if (cVar1 == (char)param_3) {
      uVar3 = 0x700e2cfe8;
    }
    else {
      uVar3 = 0x700e2cff0;
    }
    FUN_00448740(uVar3);
  }
  FUN_00409350(&DAT_00e0ecb4,2);
  local_8 = 3;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350(&DAT_00ded950,1);
  local_8 = 4;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350("ANY_SUBSTATE",0xc);
  local_8 = 5;
  FUN_0055dd40();
  local_8 = 6;
  local_14 = FUN_009a8ee0(local_50,local_6c);
  local_8 = 7;
  puVar2 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_38 = FUN_00aae9af();
    local_8 = 8;
    if (local_38 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    local_8 = 9;
    local_38 = 0;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar2;
  local_8 = 7;
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
  local_8 = 10;
  FUN_00988f20();
  local_8 = 0xb;
  FUN_00988f20();
  local_8 = 0xc;
  FUN_00988f20();
  local_8 = 0xd;
  FUN_00988f20();
  local_8 = 0xe;
  FUN_00448aa0();
  if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xf;
  FUN_009adb70();
  if (local_4c != (undefined1 *)0x0) {
    while( true ) {
      if (local_4c == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < *(uint *)(local_4c + 0x14)) break;
      *(undefined4 *)(local_4c + 0x14) = 0xf;
      *(undefined4 *)(local_4c + 0x10) = 0;
      *local_4c = 0;
      local_4c = local_4c + 0x20;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_4c = (undefined1 *)0x0;
  local_48 = (undefined1 *)0x0;
  local_44 = 0;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_008b7f70(local_88,param_2,param_3,param_4 + 1,1);
  _local_8 = CONCAT31(uStack_7,0x10);
  FUN_00448aa0();
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

