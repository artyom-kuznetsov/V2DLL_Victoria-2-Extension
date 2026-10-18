// FUN_005325e0 @ 005325e0 body=[[005325e0, 00532721] [00532725, 00532745] [00532749, 00532780] [00532784, 005327a9] [005327ad, 005328a5] [005328a9, 005328c8] [005328cc, 005328f5] [005328f9, 0053296c] [00532970, 00532990] [00532994, 005329b9] [005329bd, 005329f3] [005329f7, 00532ade] [00532ae2, 00532b01] [00532b05, 00532b27] [00532b2b, 00532b50] [00532b54, 00532b80] [00532b84, 00532bfe] [00532c02, 00532c38] [00532c3c, 00532c6a] [00532c6e, 00532c86]]


undefined1 * FUN_005325e0(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined8 local_100;
  undefined1 *local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  char *local_a4 [5];
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  int local_40;
  uint local_3c;
  undefined4 local_34;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b8f1cb;
  local_14 = ExceptionList;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  local_c = 0;
  local_a4[0] = "DIPLOMACY_PRIO_NONE";
  local_a4[1] = "DIPLOMACY_PRIO_LOW";
  local_a4[2] = "DIPLOMACY_PRIO_MIDDLE";
  local_a4[3] = "DIPLOMACY_PRIO_HIGH";
  pcVar2 = local_a4[*(int *)(*(int *)(param_1 + 0x13f0) + *(int *)(param_3 + 4) * 4)];
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_100 = CONCAT44((int)pcVar3 - (int)(pcVar2 + 1),pcVar2);
  ExceptionList = &local_14;
  FUN_00409350();
  local_100 = CONCAT44(local_88,local_a4);
  local_c._0_1_ = 1;
  FUN_009a8ee0();
  local_c._0_1_ = 2;
  local_100 = CONCAT44(0x5326b2,(undefined4)local_100);
  iVar4 = FUN_00475500();
  local_100 = *(undefined8 *)(iVar4 + 0x74);
  uVar5 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
  local_100 = CONCAT44(uVar5,local_c0);
  local_c._0_1_ = 3;
  FUN_0042c180();
  local_100 = 0xffffffff00000000;
  local_c._0_1_ = 4;
  FUN_00408ed0();
  if (0xf < local_ac) {
    local_100 = CONCAT44(local_c0[0],&UNK_00532722);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  if (0xf < local_c8) {
    local_100 = CONCAT44(local_dc,&UNK_00532746);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  local_c._0_1_ = 5;
  local_100 = CONCAT44(0x532766,(undefined4)local_100);
  FUN_009adb70();
  if (local_a4[1] != (char *)0x0) {
    local_100 = CONCAT44(0x532777,(undefined4)local_100);
    FUN_009e6a80();
    local_100 = CONCAT44(local_a4[1],&UNK_00532781);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 0;
  local_a4[1] = (char *)0x0;
  local_a4[2] = (char *)0x0;
  local_a4[3] = (char *)0x0;
  if (0xf < local_74) {
    local_100 = CONCAT44(local_88[0],&UNK_005327aa);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e0 = *(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_3 + 4) * 4);
  local_100 = CONCAT44(param_3,&local_e4);
  FUN_00532370();
  local_100 = CONCAT44(param_3,param_1 + 0x1c);
  piVar6 = (int *)FUN_0092f630(local_e0,&local_e8);
  local_100 = 1000;
  uVar5 = __alldiv((longlong)*piVar6 * (longlong)local_e4);
  if (DAT_01258a08 == 0) {
    iVar4 = *(int *)(local_e0 + 0x48);
  }
  else {
    iVar4 = 100000;
  }
  if (*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x404) <= iVar4) {
    local_100 = (ulonglong)*(uint *)(*(int *)(DAT_012586dc + 0x30) + 0x404);
    uVar7 = FUN_00988a50();
    local_100 = CONCAT44(uVar7,local_c0);
    local_c._0_1_ = 6;
    FUN_0042c180();
    local_c._0_1_ = 7;
    FUN_00988fa0();
    local_100 = 0xffffffff00000000;
    local_c._0_1_ = 8;
    FUN_00448aa0();
    if (0xf < local_c8) {
      local_100 = CONCAT44(local_dc,&UNK_005328a6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc = local_dc & 0xffffff00;
    if (0xf < local_ac) {
      local_100 = CONCAT44(local_c0[0],&UNK_005328c9);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    if (0xf < local_74) {
      local_100 = CONCAT44(local_88[0],&UNK_005328f6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_100 = CONCAT44(2,uVar5);
    uVar5 = FUN_00988a50();
    local_100 = CONCAT44(uVar5,local_c0);
    local_c._0_1_ = 9;
    FUN_0042c180();
    local_c._0_1_ = 10;
    FUN_00988fa0();
    local_100 = 0xffffffff00000000;
    local_c._0_1_ = 0xb;
    FUN_00448aa0();
    if (0xf < local_c8) {
      local_100 = CONCAT44(local_dc,&UNK_0053296d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc = local_dc & 0xffffff00;
    if (0xf < local_ac) {
      local_100 = CONCAT44(local_c0[0],&UNK_00532991);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = (uint)local_c._1_3_ << 8;
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    if (0xf < local_74) {
      local_100 = CONCAT44(local_88[0],&UNK_005329ba);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_100 = 0xffffffff00000000;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00408ed0();
    if (0xf < local_58) {
      local_100 = CONCAT44(local_6c,&UNK_005329f4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_14;
    return param_2;
  }
  local_e8 = (undefined1 *)&local_100;
  local_100 = CONCAT44(3,local_e4);
  local_e4 = FUN_00988a50();
  local_e8 = (undefined1 *)&local_100;
  local_c._0_1_ = 0xc;
  local_100 = CONCAT44(3,uVar5);
  local_e8 = (undefined1 *)FUN_00988a50();
  local_c._0_1_ = 0xd;
  local_100 = CONCAT44(0x532a64,(undefined4)local_100);
  uVar5 = FUN_0055dd40();
  local_c._0_1_ = 0xe;
  local_100 = CONCAT44(local_e4,&DAT_00dfced8);
  uVar5 = FUN_0043e9a0(local_c0,"COUNTRY",uVar5,&DAT_00df7e7c,local_e8);
  local_c._0_1_ = 0xf;
  local_100 = CONCAT44(uVar5,0x532aaf);
  FUN_00988fa0();
  local_100 = 0xffffffff00000000;
  local_c._0_1_ = 0x10;
  FUN_00448aa0();
  if (0xf < local_c8) {
    local_100 = CONCAT44(local_dc,&UNK_00532adf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  if (0xf < local_ac) {
    local_100 = CONCAT44(local_c0[0],&UNK_00532b02);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  if (0xf < local_74) {
    local_100 = CONCAT44(local_88[0],&UNK_00532b28);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_90) {
    local_100 = CONCAT44(local_a4[0],&UNK_00532b51);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 0;
  local_90 = 0xf;
  local_a4[4] = (char *)0x0;
  local_a4[0] = (char *)((uint)local_a4[0] & 0xffffff00);
  if (0xf < local_20) {
    local_100 = CONCAT44(local_34,&UNK_00532b81);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = CONCAT44(param_3,param_1 + 0x1c);
  FUN_0092fb60(local_e0,local_50);
  local_c._0_1_ = 0x11;
  if (local_40 != 0) {
    local_100 = CONCAT44(local_50,0x532bc6);
    FUN_00988fa0();
    local_100 = 0xffffffff00000000;
    local_c._0_1_ = 0x12;
    FUN_00448aa0();
    local_c._0_1_ = 0x11;
    if (0xf < local_20) {
      local_100 = CONCAT44(local_34,&UNK_00532bff);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_c._0_1_ = 0x11;
  local_100 = 0xffffffff00000000;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0();
  if (0xf < local_3c) {
    local_100 = CONCAT44(local_50[0],&UNK_00532c39);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_58) {
    local_100 = CONCAT44(local_6c,&UNK_00532c6b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return param_2;
}

