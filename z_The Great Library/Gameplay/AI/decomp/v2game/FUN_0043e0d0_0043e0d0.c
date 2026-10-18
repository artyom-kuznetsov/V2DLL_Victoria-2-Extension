// FUN_0043e0d0 @ 0043e0d0 body=[[0043e0d0, 0043e19e] [0043e1a2, 0043e1c2] [0043e1c6, 0043e1e1] [0043e1e5, 0043e1fa]]


undefined4 FUN_0043e0d0(undefined4 param_1,undefined *param_2,int param_3)

{
  uint uVar1;
  undefined *local_80;
  uint *local_7c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51f4a;
  local_10 = ExceptionList;
  local_14 = (undefined1 *)0x0;
  local_7c = (uint *)0x1;
  local_80 = &DAT_00df830c;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  if ((param_3 < 0) || ((param_3 < 1 && (param_2 < (undefined *)0x1f40000)))) {
    local_18 = (undefined1 *)&local_80;
    local_80 = param_2;
    local_7c = (uint *)param_3;
    FUN_00988bb0(local_50,1);
    uVar1 = 2;
    local_8 = 2;
  }
  else {
    local_14 = (undefined1 *)&local_80;
    local_80 = param_2;
    local_7c = (uint *)param_3;
    FUN_009ca140(1);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = 1;
  }
  local_7c = local_34;
  local_80 = (undefined *)0x43e181;
  local_14 = (undefined1 *)uVar1;
  FUN_00988f20();
  if ((uVar1 & 2) != 0) {
    uVar1 = uVar1 & 0xfffffffd;
    if (0xf < local_3c) {
      local_7c = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_80 = &UNK_0043e19f;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
  }
  if (((uVar1 & 1) != 0) && (0xf < local_58)) {
                    /* WARNING: Subroutine does not return */
    local_80 = &UNK_0043e1c3;
    FUN_00aae91b();
  }
  if (local_20 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_7c = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
  local_80 = &UNK_0043e1e2;
  FUN_00aae91b();
}

