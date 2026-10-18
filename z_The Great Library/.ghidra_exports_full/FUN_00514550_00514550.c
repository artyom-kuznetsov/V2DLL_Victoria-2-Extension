// FUN_00514550 @ 00514550 body=[[00514550, 005145e3] [005145e7, 0051460a] [00514613, 00514659] [0051465d, 0051467d] [00514683, 005146f2] [005146f6, 00514719] [00514722, 005147b5] [005147b9, 005147e9] [005147f2, 00514950]]


undefined1 * FUN_00514550(undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [2];
  undefined1 local_30 [8];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b81a5d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_18[1] = 1;
  cVar2 = FUN_005144c0();
  if (cVar2 == '\0') {
    uVar3 = FUN_009790b0(in_ECX,local_38);
    local_8 = 3;
    FUN_0042c180(local_54,uVar3);
    local_8._0_1_ = 4;
    FUN_00408ed0();
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_40 = 0xf;
    local_44 = 0;
    uVar1 = local_54[0] >> 8;
    local_54[0] = uVar1 << 8;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18[0] = *(int *)(in_EDX + 0x4bc) + 0x2238;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (*(int *)(in_EDX + 0x84c) == in_ECX) {
      uVar3 = FUN_009790b0(in_ECX,local_70);
      local_8 = 5;
      FUN_0042c180(local_54,uVar3);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_00448aa0();
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      local_1c = *(int *)(in_EDX + 0xbd0);
      if (*(char *)(local_1c + 0xc) == '\0') {
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = uVar1 << 8;
        FUN_00409350("POLITICS_CANNOT_SET_RULING_PARTY_RULE",0x25);
        local_8 = 7;
        FUN_009a8ee0(local_30,local_54);
        local_8._0_1_ = 8;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_8._0_1_ = 9;
        FUN_00448aa0();
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_009a9740();
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        if ((int)((double)((*(int *)(in_EDX + 0x664) + -43800000) / 0x18) / 365.0) < 6) {
          if (*(int *)(DAT_012588e8 + 0xb0c) < local_18[0]) {
            uVar3 = FUN_0043b700(local_18,local_54);
            local_8 = 0xd;
            FUN_0042c180(local_70,uVar3);
            local_8 = CONCAT31(local_8._1_3_,0xe);
          }
          else {
            cVar2 = FUN_00971160();
            if (cVar2 != '\0') {
              ExceptionList = local_10;
              return param_1;
            }
            uVar3 = (**(code **)(**(int **)(in_ECX + 0x54) + 0x18))();
            local_8 = 0xf;
            FUN_0042c180(local_70,uVar3);
            local_8 = CONCAT31(local_8._1_3_,0x10);
          }
          FUN_00448aa0();
          FUN_00408ad0();
        }
        else {
          FUN_009885d0();
          local_8 = 10;
          FUN_009a8ee0(local_30,local_70);
          local_8._0_1_ = 0xb;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_8._0_1_ = 0xc;
          FUN_00448aa0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,10);
          FUN_009a9740();
        }
        FUN_00408ad0();
      }
    }
  }
  else {
    uVar3 = FUN_009790b0(in_ECX,local_70);
    local_8 = 1;
    FUN_0042c180(local_54,uVar3);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00408ed0();
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

