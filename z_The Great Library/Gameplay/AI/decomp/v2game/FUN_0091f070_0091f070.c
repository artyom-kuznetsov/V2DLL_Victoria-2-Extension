// FUN_0091f070 @ 0091f070 body=[[0091f070, 0091f112] [0091f116, 0091f144] [0091f148, 0091f15d] [0091f161, 0091f1b3] [0091f1b7, 0091f1f0] [0091f1f4, 0091f2ac] [0091f2b0, 0091f3b9] [0091f3bd, 0091f3d6] [0091f3da, 0091f3ee]]


undefined1 * FUN_0091f070(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int in_ECX;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [2];
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  uint local_34;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8504f;
  local_10 = ExceptionList;
  local_14 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_0091fa10(in_ECX,0);
  if ((local_28 - local_2c & 0xfffffffcU) != 0) {
    FUN_0091fc40(in_ECX,local_48,&local_2c,1);
    local_8._0_1_ = 2;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("VERSUS",6);
    local_8._0_1_ = 3;
    FUN_00a840b0();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00a840b0();
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (local_2c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("VERSUS",6);
  local_8._0_1_ = 4;
  FUN_00a840b0();
  local_8._0_1_ = 1;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 5;
  FUN_00a840b0();
  local_8._0_1_ = 1;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 1;
  if (local_34 < 0x10) {
    local_1c = *(undefined4 *)(in_ECX + 8);
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4)
                                  + 0xbe8) + *(int *)(in_ECX + 0x14) * 4) + 0x20) == 0) {
      FUN_00409350("CALL_MUST_BE_ALLIES",0x13);
      local_8._0_1_ = 6;
      FUN_009a8ee0(local_40,local_64);
      local_8._0_1_ = 7;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_14 = 1;
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_009adb70();
      if (local_3c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
    }
    else {
      local_1c = *(undefined4 *)(in_ECX + 8);
      local_8._0_1_ = uVar1;
      if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) + 0x67c) ==
          '\0') {
        FUN_00409350("CALL_MUST_BE_AT_WAR",0x13);
        local_8._0_1_ = 9;
        FUN_009a8ee0(local_40,local_64);
        local_8._0_1_ = 10;
        iVar2 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
        local_14 = 1;
        local_8 = CONCAT31(local_8._1_3_,9);
        FUN_009a9740();
      }
      else {
        FUN_00409350("CALL_MUST_HAVE_JOINABLE_WAR",0x1b);
        local_8._0_1_ = 0xb;
        FUN_009a8ee0(local_40,local_64);
        local_8._0_1_ = 0xc;
        iVar2 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
        local_14 = 1;
        local_8 = CONCAT31(local_8._1_3_,0xb);
        FUN_009a9740();
      }
    }
    if (local_50 < 0x10) {
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (local_2c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

