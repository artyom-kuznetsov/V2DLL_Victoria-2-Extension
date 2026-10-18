// FUN_00540520 @ 00540520 body=[[00540520, 005405d6] [005405da, 00540750] [00540754, 0054083c] [00540840, 00540862] [00540866, 00540878]]


void FUN_00540520(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  int extraout_ECX;
  undefined4 in_EDX;
  undefined8 local_a4;
  uint local_8c [5];
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [2];
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b732c5;
  local_10 = ExceptionList;
  local_1c = *(undefined4 *)(in_ECX + 0x1428);
  local_14 = (undefined1 *)0x0;
  if (*(int *)(in_ECX + 0x142c) == 0) {
    local_a4 = 0x1a00dff8d4;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_a4 = CONCAT44(local_54,local_30);
    local_8 = 0;
    FUN_009a8ee0();
    local_8._0_1_ = 1;
    local_a4 = CONCAT44(0x540594,(int)local_a4);
    iVar1 = FUN_00475500();
    local_a4 = *(undefined8 *)(iVar1 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8 = CONCAT31(local_8._1_3_,2);
    local_a4 = CONCAT44(0x5405bf,(int)local_a4);
    FUN_009adb70();
    if (local_2c != 0) {
      local_a4 = CONCAT44(0x5405ce,(int)local_a4);
      FUN_009e6a80();
      local_a4 = CONCAT44(local_2c,&UNK_005405d7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (local_40 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    local_a4._4_4_ = local_54[0];
  }
  else if (*(char *)(in_ECX + 0x12d0) == '\0') {
    iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x44);
    local_14 = (undefined1 *)&local_a4;
    local_a4._4_4_ = 0;
    ExceptionList = &local_10;
    FUN_00401000();
    iVar2 = FUN_00b31c00();
    uVar3 = __alldiv((longlong)iVar2 * (longlong)iVar1,1000,0);
    local_a4 = CONCAT44(local_a4._4_4_,uVar3);
    uVar3 = FUN_00988a50();
    local_a4 = CONCAT44(uVar3,in_EDX);
    local_8 = 3;
    FUN_0042c180();
    if (local_40 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    local_a4._4_4_ = local_54[0];
  }
  else {
    local_a4._4_4_ = 0x540681;
    ExceptionList = &local_10;
    iVar1 = FUN_005379e0();
    local_18 = (undefined1 *)&local_a4;
    if (iVar1 == 1) {
      local_a4 = CONCAT44(local_a4._4_4_,*(undefined4 *)(extraout_ECX + 0x138));
      local_14 = (undefined1 *)&local_a4;
      local_a4 = __allmul(*(undefined4 *)(extraout_ECX + 0x138),
                          *(undefined4 *)(extraout_ECX + 0x13c),0x320000,0);
      local_a4 = local_a4 >> 0xf;
      uVar3 = FUN_00988bb0(local_38,0);
      local_8 = 4;
      local_14 = *(undefined1 **)(*(int *)(DAT_012586dc + 0x10) + 0x3c);
      local_18 = (undefined1 *)&local_a4;
      local_a4._4_4_ = 0;
      local_a4._0_4_ = DAT_012586dc;
      FUN_00401000();
      iVar1 = FUN_00b31c00();
      uVar4 = __alldiv((longlong)iVar1 * (longlong)(int)local_14,1000,0);
      local_a4 = CONCAT44(local_a4._4_4_,uVar4);
      FUN_00988a50();
      local_a4 = CONCAT44(uVar3,"PERCENTAGE");
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_0043ec10();
      if (0xf < local_40) {
        local_a4 = CONCAT44(local_54[0],&UNK_00540751);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      if (local_24 < 0x10) {
        ExceptionList = local_10;
        return;
      }
      local_a4._4_4_ = local_38[0];
    }
    else {
      local_a4 = CONCAT44(local_a4._4_4_,*(undefined4 *)(extraout_ECX + 0x138));
      local_a4 = __allmul(*(undefined4 *)(extraout_ECX + 0x138),
                          *(undefined4 *)(extraout_ECX + 0x13c),0x320000,0);
      local_a4 = local_a4 >> 0xf;
      uVar3 = FUN_00988bb0(local_8c,0);
      local_8 = 6;
      local_14 = *(undefined1 **)(*(int *)(DAT_012586dc + 0x10) + 0x40);
      local_18 = (undefined1 *)&local_a4;
      local_a4._4_4_ = 0;
      FUN_00401000();
      iVar1 = FUN_00b31c00();
      uVar4 = __alldiv((longlong)iVar1 * (longlong)(int)local_14,1000,0);
      local_a4 = CONCAT44(local_a4._4_4_,uVar4);
      FUN_00988a50();
      local_a4 = CONCAT44(uVar3,"PERCENTAGE");
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_0043ec10();
      if (0xf < local_5c) {
        local_a4 = CONCAT44(local_70,&UNK_0054083d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      if (local_78 < 0x10) {
        ExceptionList = local_10;
        return;
      }
      local_a4._4_4_ = local_8c[0];
    }
  }
  local_a4 = CONCAT44(local_a4._4_4_,&UNK_00540863);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

