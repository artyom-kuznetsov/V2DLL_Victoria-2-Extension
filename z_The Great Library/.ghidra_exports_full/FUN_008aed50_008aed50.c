// FUN_008aed50 @ 008aed50 body=[[008aed50, 008aee5c] [008aee60, 008aee83] [008aee87, 008aeeb0] [008aeeb4, 008aeed7] [008aeedb, 008aeef5] [008aeef9, 008aef16] [008aef1a, 008af02a] [008af02e, 008af04e] [008af052, 008af079] [008af07d, 008af0ef] [008af0f3, 008af10d] [008af113, 008af12b] [008af12f, 008af1bf] [008af1c3, 008af1df] [008af1e3, 008af208]]


undefined1 * FUN_008aed50(int param_1,undefined1 *param_2,undefined4 ****param_3)

{
  int *piVar1;
  undefined4 ***pppuVar2;
  char cVar3;
  undefined4 ****ppppuVar4;
  undefined4 uVar5;
  undefined4 *****pppppuVar6;
  undefined4 ****local_d8;
  undefined4 ****ppppuStack_d4;
  uint local_b0;
  undefined4 ***local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined4 ****local_8c [4];
  int local_7c;
  uint local_78;
  undefined4 local_70;
  undefined4 ***local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined4 ***local_50 [3];
  undefined4 ***local_44;
  undefined4 local_40;
  int *local_3c;
  undefined4 ***local_34;
  undefined4 ***local_30 [4];
  int local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b67aa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_70 = 1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    ppppuStack_d4 = (undefined4 ****)0x2;
    local_3c = (int *)0xf;
    local_d8 = (undefined4 ****)&DAT_00df8514;
    local_40 = 0;
    local_50[0] = (undefined4 ***)((uint)local_50[0] & 0xffffff00);
    FUN_00409350();
    ppppuStack_d4 = (undefined4 ****)0x0;
    local_34 = &local_d8;
    local_8 = 1;
    local_d8 = *(undefined4 *****)(param_1 + 0x1c);
    ppppuVar4 = (undefined4 ****)FUN_00988a50(local_6c);
    local_8._0_1_ = 2;
    ppppuStack_d4 = (undefined4 ****)0x2;
    local_d8 = (undefined4 ****)&DAT_00df963c;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
    FUN_00409350();
    local_8._0_1_ = 3;
    local_d8 = (undefined4 ****)0x8aee05;
    ppppuStack_d4 = ppppuVar4;
    FUN_00988f20();
    ppppuStack_d4 = local_50;
    local_8._0_1_ = 4;
    local_d8 = (undefined4 ****)0x8aee1a;
    ppppuStack_d4 = (undefined4 ****)FUN_00988f20();
    local_d8 = local_8c;
    local_8._0_1_ = 5;
    uVar5 = FUN_0042c180();
    ppppuStack_d4 = (undefined4 ****)0xffffffff;
    local_d8 = (undefined4 ****)0x0;
    local_8._0_1_ = 6;
    FUN_00448aa0(uVar5);
    if (0xf < local_78) {
      ppppuStack_d4 = local_8c[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (undefined4 ****)&UNK_008aee5d;
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = (undefined4 ****)((uint)local_8c[0] & 0xffffff00);
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      local_d8 = (undefined4 ****)&UNK_008aee84;
      FUN_00aae91b();
    }
    if (0xf < local_94) {
      ppppuStack_d4 = (undefined4 ****)local_a8[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (undefined4 ****)&UNK_008aeeb1;
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = (undefined4 ***)((uint)local_a8[0] & 0xffffff00);
    if (0xf < local_1c) {
      ppppuStack_d4 = (undefined4 ****)local_30[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (undefined4 ****)&UNK_008aeed8;
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
    if (0xf < local_58) {
      ppppuStack_d4 = (undefined4 ****)local_6c[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (undefined4 ****)&UNK_008aeef6;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = (undefined4 ***)((uint)local_6c[0] & 0xffffff00);
    if (0xf < local_3c) {
      ppppuStack_d4 = (undefined4 ****)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_d8 = (undefined4 ****)&UNK_008aef17;
      FUN_00aae91b();
    }
    ppppuStack_d4 = (undefined4 ****)0x1;
    local_d8 = (undefined4 ****)&DAT_00dee2cc;
    FUN_00448740();
  }
  local_3c = *(int **)(param_1 + 0x20);
  do {
    if ((local_3c < *(int **)(param_1 + 0x20)) || (*(int **)(param_1 + 0x24) <= local_3c)) {
      ppppuVar4 = *(undefined4 *****)(param_1 + 8);
      while( true ) {
        if ((ppppuVar4 < *(undefined4 *****)(param_1 + 8)) ||
           (*(undefined4 *****)(param_1 + 0xc) <= ppppuVar4)) {
          ExceptionList = local_10;
          return param_2;
        }
        local_44 = (undefined4 ****)0x0;
        local_40 = 0;
        local_3c = (int *)0x0;
        local_8 = 0xd;
        local_d8 = (undefined4 ****)0x8af16e;
        ppppuStack_d4 = ppppuVar4;
        FUN_009beeb0();
        local_34 = &ppppuStack_d4;
        local_8 = 0xe;
        ppppuStack_d4 = (undefined4 ****)0x0;
        local_d8 = param_3;
        FUN_008af4e0(&local_44,local_30);
        local_8._0_1_ = 0xf;
        ppppuStack_d4 = (undefined4 ****)local_44;
        if (local_20 != 0) {
          ppppuStack_d4 = (undefined4 ****)0xffffffff;
          local_d8 = (undefined4 ****)0x0;
          FUN_00448aa0(local_30);
          ppppuStack_d4 = (undefined4 ****)local_44;
        }
        local_44 = ppppuStack_d4;
        if (0xf < local_1c) break;
        local_8 = (uint)local_8._1_3_ << 8;
        local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
        local_20 = 0;
        local_1c = 0xf;
        if (ppppuStack_d4 != (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
          local_d8 = (undefined4 ****)&UNK_008af1e0;
          FUN_00aae91b();
        }
        ppppuVar4 = ppppuVar4 + 4;
      }
                    /* WARNING: Subroutine does not return */
      local_d8 = (undefined4 ****)&UNK_008af1c0;
      ppppuStack_d4 = (undefined4 ****)local_30[0];
      FUN_00aae91b();
    }
    piVar1 = (int *)*local_3c;
    if ((char)piVar1[7] == '\0') {
      local_34 = (undefined4 ***)piVar1[8];
      ppppuStack_d4 = (undefined4 ****)0x1;
      local_d8 = (undefined4 ****)0x0;
      (**(code **)(*piVar1 + 0x2c))(local_8c,param_3,0);
      local_8 = 7;
      if (7 < local_7c) {
        ppppuStack_d4 = param_3;
        local_d8 = (undefined4 ****)0x8aef8a;
        cVar3 = (**(code **)(*piVar1 + 0x18))();
        ppppuStack_d4 = (undefined4 ****)0x8;
        if (cVar3 == '\0') {
          local_d8 = (undefined4 ****)&DAT_00e2ce14;
        }
        else {
          local_d8 = (undefined4 ****)&DAT_00e2ce08;
        }
        FUN_00448740();
        pppuVar2 = local_34;
        if ((int)local_34 < 0) {
          ppppuStack_d4 = (undefined4 ****)0x2;
          local_d8 = (undefined4 ****)&DAT_00df8510;
        }
        else {
          ppppuStack_d4 = (undefined4 ****)0x3;
          local_d8 = (undefined4 ****)&DAT_00dfd24c;
        }
        FUN_00448740();
        ppppuStack_d4 = (undefined4 ****)0x1;
        local_d8 = (undefined4 ****)&DAT_00df9644;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
        FUN_00409350();
        ppppuStack_d4 = (undefined4 ****)0x1;
        local_8._0_1_ = 8;
        local_d8 = (undefined4 ****)pppuVar2;
        local_34 = &local_d8;
        FUN_00988a50(local_a8);
        ppppuStack_d4 = local_30;
        local_8._0_1_ = 9;
        local_d8 = (undefined4 ****)0x8af009;
        uVar5 = FUN_00988f20();
        ppppuStack_d4 = (undefined4 ****)0xffffffff;
        local_d8 = (undefined4 ****)0x0;
        local_8._0_1_ = 10;
        FUN_00448aa0(uVar5);
        if (0xf < local_58) {
          ppppuStack_d4 = (undefined4 ****)local_6c[0];
                    /* WARNING: Subroutine does not return */
          local_d8 = (undefined4 ****)&UNK_008af02b;
          FUN_00aae91b();
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = (undefined4 ***)((uint)local_6c[0] & 0xffffff00);
        if (0xf < local_94) {
          ppppuStack_d4 = (undefined4 ****)local_a8[0];
                    /* WARNING: Subroutine does not return */
          local_d8 = (undefined4 ****)&UNK_008af04f;
          FUN_00aae91b();
        }
        local_8._0_1_ = 7;
        local_94 = 0xf;
        local_98 = 0;
        local_a8[0] = (undefined4 ***)((uint)local_a8[0] & 0xffffff00);
        if (0xf < local_1c) {
          ppppuStack_d4 = (undefined4 ****)local_30[0];
                    /* WARNING: Subroutine does not return */
          local_d8 = (undefined4 ****)&UNK_008af07a;
          FUN_00aae91b();
        }
        pppppuVar6 = (undefined4 *****)local_8c[0];
        if (local_78 < 0x10) {
          pppppuVar6 = local_8c;
        }
        local_d8 = (undefined4 ****)((int)pppppuVar6 + 7);
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
        ppppuStack_d4 = local_d8;
        do {
          cVar3 = *(char *)ppppuStack_d4;
          ppppuStack_d4 = (undefined4 ****)((int)ppppuStack_d4 + 1);
        } while (cVar3 != '\0');
        ppppuStack_d4 = (undefined4 ****)((int)ppppuStack_d4 - (int)(pppppuVar6 + 2));
        FUN_00409350();
        ppppuStack_d4 = local_30;
        local_8._0_1_ = 0xb;
        local_d8 = (undefined4 ****)0x8af0cb;
        uVar5 = FUN_00988fa0();
        ppppuStack_d4 = (undefined4 ****)0xffffffff;
        local_d8 = (undefined4 ****)0x0;
        local_8 = CONCAT31(local_8._1_3_,0xc);
        FUN_00448aa0(uVar5);
        if (0xf < local_58) {
          ppppuStack_d4 = (undefined4 ****)local_6c[0];
                    /* WARNING: Subroutine does not return */
          local_d8 = (undefined4 ****)&UNK_008af0f0;
          FUN_00aae91b();
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = (undefined4 ***)((uint)local_6c[0] & 0xffffff00);
        if (0xf < local_1c) {
          ppppuStack_d4 = (undefined4 ****)local_30[0];
                    /* WARNING: Subroutine does not return */
          local_d8 = (undefined4 ****)&UNK_008af10e;
          FUN_00aae91b();
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_78) {
        ppppuStack_d4 = local_8c[0];
                    /* WARNING: Subroutine does not return */
        local_d8 = (undefined4 ****)&UNK_008af12c;
        FUN_00aae91b();
      }
    }
    local_3c = local_3c + 1;
  } while( true );
}

