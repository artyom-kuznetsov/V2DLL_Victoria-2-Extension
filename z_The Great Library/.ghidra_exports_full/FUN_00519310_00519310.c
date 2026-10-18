// FUN_00519310 @ 00519310 body=[[00519310, 0051949b] [0051949f, 005194bd] [005194c1, 005194d7] [005194db, 00519513] [00519517, 0051953c] [00519540, 00519567] [0051956b, 005195e2] [005195e6, 00519600] [00519604, 00519621] [00519625, 00519646] [0051964a, 00519695] [00519699, 005196ab]]


undefined1 * FUN_00519310(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint in_stack_0000001c;
  int in_stack_00000024;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  undefined1 local_a8 [4];
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_2c;
  uint local_28;
  int *local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b748e5;
  local_10 = ExceptionList;
  local_40 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_1c = in_ECX[2];
  local_40 = 1;
  local_14 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  do {
    local_8._0_1_ = 2;
    if (puVar1 == (undefined4 *)0x0) {
LAB_00519687:
      if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return param_1;
    }
    local_8._0_1_ = 2;
    local_18 = (undefined4 *)puVar1[2];
    local_20 = (int *)*puVar1;
    if (in_stack_00000024 <= local_14) {
      FUN_00448740(&DAT_00dfe8dc,3);
      FUN_00448740(&DAT_00dfce2c,3);
      goto LAB_00519687;
    }
    if (0 < local_14) {
      if (local_14 < local_1c + -1) {
        FUN_00448740(&DAT_00df8148,2);
      }
      else {
        local_28 = 0xf;
        local_2c = 0;
        local_3c = local_3c & 0xffffff00;
        FUN_00409350(&DAT_00ded950,1);
        local_8._0_1_ = 3;
        local_b0 = 0xf;
        local_b4 = 0;
        local_c4[0] = local_c4[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfaa6c,3);
        local_8._0_1_ = 4;
        FUN_009a8ee0(local_a8,local_c4);
        local_8._0_1_ = 5;
        iVar2 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
        local_8._0_1_ = 6;
        FUN_00988fa0();
        local_8._0_1_ = 7;
        FUN_00988f20();
        local_8._0_1_ = 8;
        FUN_00448aa0();
        if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_80 = 0xf;
        local_84 = 0;
        local_94 = local_94 & 0xffffff00;
        if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_64 = 0xf;
        local_68 = 0;
        local_78 = local_78 & 0xffffff00;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c = local_5c & 0xffffff00;
        local_8._0_1_ = 9;
        FUN_009adb70();
        if (local_a4 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_a4 = 0;
        local_a0 = 0;
        local_9c = 0;
        if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 2;
        local_b0 = 0xf;
        local_b4 = 0;
        local_c4[0] = local_c4[0] & 0xffffff00;
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c = local_3c & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 10;
    (**(code **)(*local_20 + 0x1c))();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_8._0_1_ = 0xc;
    FUN_00988f20();
    local_8._0_1_ = 0xd;
    FUN_00448aa0();
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 2;
    local_80 = 0xf;
    local_84 = 0;
    local_94 = local_94 & 0xffffff00;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_14 = local_14 + 1;
    puVar1 = local_18;
  } while( true );
}

