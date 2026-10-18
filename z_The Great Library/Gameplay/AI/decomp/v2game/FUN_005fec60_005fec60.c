// FUN_005fec60 @ 005fec60 body=[[005fec60, 005fed4b] [005fed51, 005feddb]]


undefined1 * FUN_005fec60(undefined1 *param_1,undefined *param_2,int param_3)

{
  undefined4 uVar1;
  undefined *local_48;
  int local_44;
  undefined4 local_34 [5];
  uint local_20;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b51121;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_14 = 1;
  if (param_3 < 1) {
    if ((param_3 < 0) || (param_2 < (undefined *)0x10000)) {
      local_18 = (undefined1 *)&local_48;
      local_48 = param_2;
      local_44 = param_3;
      uVar1 = FUN_00988bb0(local_34,3);
      local_8 = 1;
    }
    else {
      if (0 < param_3) goto LAB_005fed0e;
      if ((-1 < param_3) && ((undefined *)0x4ffff < param_2)) {
        if (param_3 < 0) {
LAB_005fed84:
          local_18 = (undefined1 *)&local_48;
          local_48 = param_2;
          local_44 = param_3;
          uVar1 = FUN_00988bb0(local_34,1);
          local_8 = 5;
        }
        else {
          if ((0 < param_3) || ((undefined *)0x13880000 < param_2)) goto LAB_005fed0e;
          if ((param_3 < 0) || ((param_3 < 1 && (param_2 < (undefined *)0xc3500001))))
          goto LAB_005fed84;
          local_18 = (undefined1 *)&local_48;
          local_48 = param_2;
          local_44 = param_3;
          uVar1 = FUN_009ca140(2);
          local_8 = 4;
        }
        local_44 = 0xffffffff;
        local_48 = (undefined *)0x0;
        FUN_00408ed0(uVar1);
        local_8 = local_8 & 0xffffff00;
        local_44 = 0x5fedbb;
        FUN_00408ad0();
        goto LAB_005fedbb;
      }
      local_18 = (undefined1 *)&local_48;
      local_48 = param_2;
      local_44 = param_3;
      uVar1 = FUN_00988bb0(local_34,2);
      local_8 = 2;
    }
  }
  else {
LAB_005fed0e:
    local_18 = (undefined1 *)&local_48;
    local_48 = param_2;
    local_44 = param_3;
    uVar1 = FUN_00988bb0(local_34,0);
    local_8 = 3;
  }
  local_44 = 0xffffffff;
  local_48 = (undefined *)0x0;
  FUN_00408ed0(uVar1);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_20) {
    local_44 = local_34[0];
                    /* WARNING: Subroutine does not return */
    local_48 = &UNK_005fed4c;
    FUN_00aae91b();
  }
LAB_005fedbb:
  local_44 = 1;
  local_48 = &DAT_00df830c;
  FUN_00448740();
  ExceptionList = local_10;
  return param_1;
}

