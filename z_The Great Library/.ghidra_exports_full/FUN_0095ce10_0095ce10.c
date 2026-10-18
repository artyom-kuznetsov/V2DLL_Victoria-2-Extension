// FUN_0095ce10 @ 0095ce10 body=[[0095ce10, 0095cebe] [0095cec2, 0095cf87] [0095cf8b, 0095cfa5] [0095cfa9, 0095d073] [0095d077, 0095d0a8] [0095d0ac, 0095d0c7] [0095d0cb, 0095d0e5] [0095d0e9, 0095d138] [0095d13c, 0095d1ef] [0095d1f3, 0095d223] [0095d227, 0095d242] [0095d246, 0095d307] [0095d30b, 0095d326] [0095d32a, 0095d386] [0095d38a, 0095d39e]]


/* WARNING: Removing unreachable block (ram,0x0095d15e) */

undefined1 * FUN_0095ce10(int param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_c4;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_94 [4];
  int local_90;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b83328;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_c4 = 0xd00dfed78;
  local_80 = 1;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  FUN_00409350();
  local_c4 = CONCAT44(local_b0,local_94);
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  if (0xf < local_9c) {
    local_c4 = CONCAT44(local_b0[0],&UNK_0095cebf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0x300df7e90;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350();
  local_14 = (undefined1 *)&local_c4;
  local_8._0_1_ = 4;
  local_c4 = __allmul(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x134),0x320000,0);
  local_c4 = local_c4 >> 0xf;
  uVar2 = FUN_00988bb0(local_30,1);
  local_8._0_1_ = 5;
  local_c4 = 0x400095cf38;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 6;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_c4 = CONCAT44(uVar2,local_94);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  local_c4 = CONCAT44(&local_14,local_60);
  FUN_009e6810();
  if (0xf < local_1c) {
    local_c4 = CONCAT44(local_30[0],&UNK_0095cf88);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_1c = 0xf;
  local_20 = 0;
  uVar1 = local_30[0] >> 8;
  local_30[0] = uVar1 << 8;
  if (0xf < local_4c) {
    local_c4 = CONCAT44(local_60[0],&UNK_0095cfa6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xa00dfedac;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = uVar1 << 8;
  FUN_00409350();
  local_8._0_1_ = 7;
  local_c4 = 0x400dfd184;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350();
  local_c4 = CONCAT44(local_30,local_44);
  local_8._0_1_ = 8;
  FUN_009a8ee0();
  local_8._0_1_ = 9;
  local_c4 = CONCAT44(0x95cff9,(undefined4)local_c4);
  iVar3 = FUN_00475500();
  local_c4 = *(undefined8 *)(iVar3 + 0x74);
  uVar2 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  local_8._0_1_ = 10;
  local_c4 = 0x400095d028;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_c4 = CONCAT44(uVar2,local_94);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  local_c4 = CONCAT44(&local_14,local_60);
  FUN_009e6810();
  if (0xf < local_68) {
    local_c4 = CONCAT44(local_7c,&UNK_0095d074);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  local_8._0_1_ = 0xc;
  local_c4 = CONCAT44(0x95d091,(undefined4)local_c4);
  FUN_009adb70();
  if (local_40 != 0) {
    local_c4 = CONCAT44(0x95d0a0,(undefined4)local_c4);
    FUN_009e6a80();
    local_c4 = CONCAT44(local_40,&UNK_0095d0a9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (0xf < local_4c) {
    local_c4 = CONCAT44(local_60[0],&UNK_0095d0c8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_c4 = CONCAT44(local_30[0],&UNK_0095d0e6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = CONCAT44(0x95d0ee,(undefined4)local_c4);
  iVar3 = FUN_00475500();
  local_c4 = *(undefined8 *)(iVar3 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  local_8._0_1_ = 0xd;
  local_c4 = 0xffffffff00000000;
  FUN_00408ed0();
  local_8._0_1_ = 3;
  if (0xf < local_68) {
    local_c4 = CONCAT44(local_7c,&UNK_0095d139);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = CONCAT44(0x95d147,(undefined4)local_c4);
  lVar4 = FUN_00b31c36();
  if (*(longlong *)(param_1 + 0x130) < lVar4) {
    if (*(char *)(param_1 + 0x1d0) == '\0') {
      local_c4 = CONCAT44(*(int *)(param_1 + 0x68) + 0x110,param_2 + 0x1c);
      FUN_0095ca80();
      if (*(int *)(param_2 + 0x2c) != 0) {
        local_c4 = 0xe00e35f44;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350();
        local_c4 = CONCAT44(local_30,local_44);
        local_8._0_1_ = 0x12;
        FUN_009a8ee0();
        local_8._0_1_ = 0x13;
        local_c4 = CONCAT44(0x95d2b4,(undefined4)local_c4);
        iVar3 = FUN_00475500();
        local_c4 = *(undefined8 *)(iVar3 + 0x74);
        FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
        local_8._0_1_ = 0x14;
        local_c4 = CONCAT44(param_2 + 0x1c,0x95d2e6);
        FUN_00988f20();
        local_c4 = 0xffffffff00000000;
        local_8._0_1_ = 0x15;
        FUN_00408ed0();
        if (0xf < local_68) {
          local_c4 = CONCAT44(local_7c,&UNK_0095d308);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_68 = 0xf;
        local_6c = 0;
        local_7c = local_7c & 0xffffff00;
        if (0xf < local_4c) {
          local_c4 = CONCAT44(local_60[0],&UNK_0095d327);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = local_60[0] & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0x12);
        local_c4 = CONCAT44(local_44,0x95d340);
        FUN_009a9740();
        if (0xf < local_1c) {
          local_c4 = CONCAT44(local_30[0],0x95d34e);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      local_c4 = 0x1800e35f28;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_c4 = CONCAT44(local_30,local_44);
      local_8._0_1_ = 0xe;
      FUN_009a8ee0();
      local_8._0_1_ = 0xf;
      local_c4 = CONCAT44(0x95d1aa,(undefined4)local_c4);
      iVar3 = FUN_00475500();
      local_c4 = *(undefined8 *)(iVar3 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
      local_8._0_1_ = 0x10;
      local_c4 = 0xffffffff00000000;
      FUN_00408ed0();
      if (0xf < local_68) {
        local_c4 = CONCAT44(local_7c,&UNK_0095d1f0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      local_8._0_1_ = 0x11;
      local_c4 = CONCAT44(0x95d20c,(undefined4)local_c4);
      FUN_009adb70();
      if (local_40 != 0) {
        local_c4 = CONCAT44(0x95d21b,(undefined4)local_c4);
        FUN_009e6a80();
        local_c4 = CONCAT44(local_40,&UNK_0095d224);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      if (0xf < local_1c) {
        local_c4 = CONCAT44(local_30[0],&UNK_0095d243);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c4 = CONCAT44(*(int *)(param_1 + 0x68) + 0x110,0x95d257);
      FUN_0095cc10();
    }
  }
  local_8 = 0x16;
  local_c4 = CONCAT44(0x95d366,(undefined4)local_c4);
  FUN_009adb70();
  if (local_90 != 0) {
    local_c4 = CONCAT44(0x95d37b,(undefined4)local_c4);
    FUN_009e6a80();
    local_c4 = CONCAT44(local_90,&UNK_0095d387);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

