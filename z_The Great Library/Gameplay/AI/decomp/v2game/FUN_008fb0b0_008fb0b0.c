// FUN_008fb0b0 @ 008fb0b0 body=[[008fb0b0, 008fb157] [008fb15b, 008fb2a7] [008fb2ab, 008fb2cf] [008fb2d3, 008fb303] [008fb307, 008fb322] [008fb326, 008fb341] [008fb345, 008fb363] [008fb367, 008fb3a1] [008fb3a5, 008fb3b8] [008fb3bc, 008fb3d0]]


/* WARNING: Removing unreachable block (ram,0x008fb3ad) */

undefined1 *
FUN_008fb0b0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint local_a8;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined1 local_4c [4];
  undefined1 *local_48;
  undefined1 *local_44;
  undefined4 local_40;
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
  
  puStack_c = &LAB_00b6587c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_38 = 1;
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
  if ((param_4 == 0) && (param_5 != '\0')) {
    cVar1 = (**(code **)(*local_18 + 0x18))();
    if (cVar1 == (char)param_3) {
      uVar3 = 0x700e2cfe8;
    }
    else {
      uVar3 = 0x700e2cff0;
    }
    FUN_00448740(uVar3);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350("ANY_GP_STARTS",0xd);
  local_8 = 3;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350(&DAT_00e0ecb4,2);
  local_8 = 4;
  FUN_009a8ee0(local_4c,local_84);
  local_8 = 5;
  puVar2 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_14 = FUN_00aae9af();
    local_8 = 6;
    if (local_14 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    local_8 = 7;
    local_14 = 0;
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
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8 = 10;
  FUN_009adb70();
  if (local_48 != (undefined1 *)0x0) {
    while( true ) {
      if (local_48 == local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < *(uint *)(local_48 + 0x14)) break;
      *(undefined4 *)(local_48 + 0x14) = 0xf;
      *(undefined4 *)(local_48 + 0x10) = 0;
      *local_48 = 0;
      local_48 = local_48 + 0x20;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = (undefined1 *)0x0;
  local_44 = (undefined1 *)0x0;
  local_40 = 0;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_008b7f70(local_68,param_2,param_3,param_4 + 1,1);
  _local_8 = CONCAT31(uStack_7,0xb);
  FUN_00448aa0();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

