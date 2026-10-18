// FUN_008f8770 @ 008f8770 body=[[008f8770, 008f8820] [008f8829, 008f8889] [008f8892, 008f89fe] [008f8a02, 008f8a7c] [008f8a80, 008f8a9f] [008f8aa3, 008f8b03] [008f8b07, 008f8b26] [008f8b3b, 008f8b9b] [008f8ba4, 008f8d48] [008f8d4c, 008f8d6d] [008f8d71, 008f8d8d] [008f8d91, 008f8da9]]


undefined4 FUN_008f8770(undefined4 param_1,int param_2,char param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  char local_85;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  puStack_10 = &LAB_00b904d8;
  local_14 = ExceptionList;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_c = 0;
  uStack_b = 0;
  local_85 = *(char *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    ExceptionList = &local_14;
    cVar2 = (**(code **)(**(int **)(param_2 + 0x14) + 0x20))();
    if (cVar2 != '\0') {
      uVar3 = FUN_00974c50(*(undefined4 *)
                            (*(int *)(*(int *)(DAT_012587e4 + 4) +
                                     *(int *)(*(int *)(*(int *)(param_2 + 0x14) + 100) + 300) * 4) +
                            0xe64));
      local_c = 5;
      FUN_00408ed0(uVar3,0,0xffffffff);
      local_c = 0;
      uVar1 = local_c;
      local_c = 0;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (param_3 == *(char *)(in_ECX + 0x1c)) {
        FUN_00409350(&DAT_00df8514,2);
        local_c = 6;
        FUN_0042c180(local_34,local_6c);
        _local_c = CONCAT31(uStack_b,7);
        FUN_00988f20(local_50);
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
      }
      else {
        local_c = uVar1;
        FUN_00409350(&DAT_00df8514,2);
        local_c = 8;
        FUN_0042c180(local_34,local_6c);
        _local_c = CONCAT31(uStack_b,9);
        FUN_00988f20(local_50);
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
      }
      goto LAB_008f8d7a;
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        if (*(int *)(param_2 + 0xc) == 0) {
          iVar4 = FUN_008a8dc0();
          uVar3 = FUN_00974c50(*(undefined4 *)
                                (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 4) * 4) +
                                0xe64));
          local_c = 0xc;
          FUN_00408ed0(uVar3,0,0xffffffff);
          local_c = 0;
          FUN_00408ad0();
          if (param_3 == *(char *)(in_ECX + 0x1c)) {
            FUN_009885d0();
            local_c = 0xd;
            FUN_0042c180(local_50,local_6c);
            _local_c = CONCAT31(uStack_b,0xe);
          }
          else {
            FUN_009885d0();
            local_c = 0xf;
            FUN_0042c180(local_50,local_6c);
            _local_c = CONCAT31(uStack_b,0x10);
          }
          FUN_00988f20(local_34);
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          ExceptionList = local_14;
          return param_1;
        }
      }
      else {
        uVar3 = FUN_009692c0();
        uVar3 = FUN_00974c50(uVar3);
        local_c = 0xb;
        FUN_00408ed0(uVar3,0,0xffffffff);
        local_c = 0;
        FUN_00408ad0();
      }
    }
    else {
      uVar3 = FUN_009692c0();
      uVar3 = FUN_00974c50(uVar3);
      local_c = 10;
      FUN_00408ed0(uVar3,0,0xffffffff);
      local_c = 0;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
    }
  }
  else {
    if (*(int *)(param_2 + 0xc) == 0) {
      if (*(int *)(param_2 + 0x18) == 0) {
        if (*(int *)(param_2 + 0x10) == 0) {
          ExceptionList = &local_14;
          cVar2 = (**(code **)(**(int **)(param_2 + 0x14) + 0x20))();
          if (cVar2 == '\0') goto LAB_008f8927;
          iVar4 = FUN_008a8dc0();
          uVar3 = FUN_00974c50(*(undefined4 *)
                                (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 4) * 4) +
                                0xe64));
          local_c = 4;
        }
        else {
          ExceptionList = &local_14;
          uVar3 = FUN_009692c0();
          uVar3 = FUN_00974c50(uVar3);
          local_c = 3;
        }
        FUN_00408ed0(uVar3,0,0xffffffff);
        local_c = 0;
        FUN_00408ad0();
      }
      else {
        ExceptionList = &local_14;
        uVar3 = FUN_009692c0();
        uVar3 = FUN_00974c50(uVar3);
        local_c = 2;
        FUN_00408ed0(uVar3,0,0xffffffff);
        local_c = 0;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
      }
    }
    else {
      ExceptionList = &local_14;
      uVar3 = FUN_00974c50(*(undefined4 *)
                            (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4) +
                            0xe64));
      local_c = 1;
      FUN_00408ed0(uVar3,0,0xffffffff);
      local_c = 0;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
    }
LAB_008f8927:
    local_85 = '\x01';
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (param_3 == local_85) {
    FUN_00409350(&DAT_00df8514,2);
    local_c = 0x11;
    FUN_0042c180(local_34,local_6c);
    _local_c = CONCAT31(uStack_b,0x12);
  }
  else {
    FUN_00409350(&DAT_00df8514,2);
    local_c = 0x13;
    FUN_0042c180(local_34,local_6c);
    _local_c = CONCAT31(uStack_b,0x14);
  }
  FUN_00988f20(local_50);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_34[0] = local_34[0] & 0xffffff00;
  local_24 = 0;
  local_20 = 0xf;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
LAB_008f8d7a:
  local_20 = 0xf;
  local_24 = 0;
  local_3c = 0xf;
  local_50[0] = local_50[0] & 0xffffff00;
  local_40 = 0;
  if (local_58 < 0x10) {
    ExceptionList = local_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_6c[0]);
}

