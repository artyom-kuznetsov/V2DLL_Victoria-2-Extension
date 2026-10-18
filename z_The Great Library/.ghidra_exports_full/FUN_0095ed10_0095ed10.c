// FUN_0095ed10 @ 0095ed10 body=[[0095ed10, 0095ee14] [0095ee1d, 0095ee60] [0095ee64, 0095eeb6] [0095eeba, 0095eed4] [0095eed8, 0095ef25] [0095ef29, 0095ef43] [0095ef47, 0095efb1]]


undefined1 * FUN_0095ed10(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_84 [20];
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [2];
  undefined1 local_4c [8];
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  int *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2b54;
  local_10 = ExceptionList;
  local_34 = (int *)0x0;
  local_38 = *(undefined4 *)(*(int *)(in_ECX + 100) + 0x128);
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 100) + 300) * 4) +
              0xe68) != *(int *)(in_ECX + 0x70)) {
    ExceptionList = &local_10;
    FUN_008a8800();
    iVar2 = FUN_0095aca0();
    if (0 < iVar2) {
      local_34 = (int *)FUN_0095f260();
      cVar1 = (**(code **)(*local_34 + 0x20))();
      if (cVar1 == '\0') {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350("POP_NO_CONV_TARGET",0x12);
        local_8 = 0;
        FUN_009a8ee0(local_4c,local_30);
        local_8._0_1_ = 1;
        iVar2 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_009a9740();
        if (local_1c < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      FUN_00409350("POP_CONVERSION",0xe);
      local_8 = 2;
      FUN_009a8ee0(local_84,local_54);
      local_8._0_1_ = 4;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350(&DAT_00df7e7c,3);
      local_8._0_1_ = 5;
      FUN_009888f0();
      local_8._0_1_ = 6;
      FUN_009a9980();
      if (local_5c < 0x10) {
        local_8._0_1_ = 4;
        local_5c = 0xf;
        local_60 = 0;
        local_70 = local_70 & 0xffffff00;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350(&DAT_00df7e80,4);
        local_8._0_1_ = 7;
        FUN_00567250();
        local_8._0_1_ = 8;
        FUN_009a9980();
        if (local_5c < 0x10) {
          local_8 = CONCAT31(local_8._1_3_,4);
          local_5c = 0xf;
          local_60 = 0;
          local_70 = local_70 & 0xffffff00;
          if (local_1c < 0x10) {
            iVar2 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
            local_8 = 0xffffffff;
            FUN_009a9740();
            ExceptionList = local_10;
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return param_1;
}

