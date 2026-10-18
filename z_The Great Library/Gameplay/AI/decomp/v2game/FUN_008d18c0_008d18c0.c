// FUN_008d18c0 @ 008d18c0 body=[[008d18c0, 008d191b] [008d1920, 008d1965] [008d1969, 008d1abf] [008d1ac3, 008d1ae7] [008d1aeb, 008d1b1d] [008d1b21, 008d1b3c] [008d1b40, 008d1b5b] [008d1b5f, 008d1b83] [008d1b87, 008d1bc1] [008d1bc5, 008d1bd5] [008d1bd9, 008d1bed]]


undefined1 * FUN_008d18c0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined1 local_50 [4];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b66b5f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_38 = 1;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
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
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  FUN_00409350("ANY_CORE_PROVINCE",0x11);
  local_8 = 3;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350(&DAT_00e0ecb4,2);
  local_8 = 4;
  local_14 = FUN_009a8ee0(local_50,local_a4);
  local_8 = 5;
  puVar2 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_3c = FUN_00aae9af();
    local_8 = 6;
    if (local_3c == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    local_8 = 7;
    local_3c = 0;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar2;
  local_8 = 5;
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
  local_8 = 8;
  FUN_00988f20();
  local_8 = 9;
  FUN_00448aa0();
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_8 = 10;
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
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_008b7f70(local_6c,param_2,param_3,param_4 + 1,1);
  _local_8 = CONCAT31(uStack_7,0xb);
  FUN_00448aa0();
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_74 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

