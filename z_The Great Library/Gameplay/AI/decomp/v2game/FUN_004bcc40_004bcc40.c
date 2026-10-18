// FUN_004bcc40 @ 004bcc40 body=[[004bcc40, 004bcd47] [004bcd4b, 004bcd7b] [004bcd7f, 004bcd98] [004bcd9c, 004bce55] [004bce59, 004bce75] [004bce79, 004bce9b] [004bce9f, 004bceb8] [004bcebc, 004bced5] [004bced9, 004bcfb7] [004bcfbb, 004bcfdc] [004bcfe0, 004bcfff] [004bd003, 004bd01c] [004bd020, 004bd0de] [004bd0e2, 004bd102] [004bd106, 004bd129] [004bd12d, 004bd14a] [004bd14e, 004bd1cb] [004bd1cf, 004bd1ec] [004bd1f0, 004bd252] [004bd256, 004bd273] [004bd277, 004bd2aa] [004bd2ae, 004bd2c2]]


undefined1 * FUN_004bcc40(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_e4;
  undefined8 local_dc;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  undefined1 *local_ac;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  undefined1 local_84 [4];
  int local_80;
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  undefined8 local_54;
  int local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b76071;
  local_10 = ExceptionList;
  local_4c = 0;
  if (*(int *)(param_1 + 300) == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    local_dc = 0xded94d;
    *param_2 = 0;
    local_e4 = CONCAT44(0x4bcc8d,(undefined4)local_e4);
    FUN_00409350();
    ExceptionList = local_10;
    return param_2;
  }
  local_dc = CONCAT44(0x4bccaa,(undefined4)local_dc);
  ExceptionList = &local_10;
  FUN_004b9bd0();
  local_4c = DAT_012586dc;
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8[0] = local_c8[0] & 0xffffff00;
  local_8 = 0;
  local_dc = 0x400dfced8;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_e4 = CONCAT44(0x4bcce4,(undefined4)local_e4);
  FUN_00409350();
  local_dc = CONCAT44(local_2c,local_84);
  local_8._0_1_ = 1;
  local_e4 = CONCAT44(0x4bccf5,(undefined4)local_e4);
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  local_dc = CONCAT44(0x4bcd00,(undefined4)local_dc);
  iVar1 = FUN_00475500();
  local_e4 = *(undefined8 *)(iVar1 + 0x6c);
  local_dc = *(undefined8 *)(iVar1 + 0x74);
  uVar2 = FUN_009a9880();
  local_dc = 0xffffffff00000000;
  local_8._0_1_ = 3;
  local_e4 = CONCAT44(uVar2,0x4bcd35);
  FUN_00448aa0();
  if (0xf < local_5c) {
    local_dc = CONCAT44(local_70,&UNK_004bcd48);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  local_8._0_1_ = 4;
  local_dc = CONCAT44(0x4bcd64,(undefined4)local_dc);
  FUN_009adb70();
  if (local_80 != 0) {
    local_dc = CONCAT44(0x4bcd73,(undefined4)local_dc);
    FUN_009e6a80();
    local_dc = CONCAT44(local_80,&UNK_004bcd7c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  if (0xf < local_18) {
    local_dc = CONCAT44(local_2c[0],&UNK_004bcd99);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_dc = 0x400dfd048;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_e4 = CONCAT44(0x4bcdb9,(undefined4)local_e4);
  FUN_00409350();
  local_8._0_1_ = 5;
  local_ac = (undefined1 *)&local_dc;
  local_dc = *(undefined8 *)(*(int *)(local_4c + 0x50) + 0x50);
  local_e4 = CONCAT44(2,local_48);
  uVar2 = FUN_00988bb0();
  local_8._0_1_ = 6;
  local_dc = 0x300dfd1d4;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  local_e4 = CONCAT44(0x4bce08,(undefined4)local_e4);
  FUN_00409350();
  local_8._0_1_ = 7;
  local_dc = CONCAT44(uVar2,0x4bce1e);
  FUN_00988f20();
  local_8._0_1_ = 8;
  local_dc = CONCAT44(local_2c,0x4bce30);
  uVar2 = FUN_00988f20();
  local_dc = 0xffffffff00000000;
  local_8._0_1_ = 9;
  local_e4 = CONCAT44(uVar2,0x4bce43);
  FUN_00448aa0();
  if (0xf < local_5c) {
    local_dc = CONCAT44(local_70,&UNK_004bce56);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_94) {
    local_dc = CONCAT44(local_a8[0],&UNK_004bce76);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_78) {
    local_dc = CONCAT44(local_8c,&UNK_004bce9c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  if (0xf < local_34) {
    local_dc = CONCAT44(local_48[0],&UNK_004bceb9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
    local_dc = CONCAT44(local_2c[0],&UNK_004bced6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar1 = *(int *)(local_4c + 0x50);
  local_dc = *(undefined8 *)(iVar1 + 0x60);
  local_e4 = CONCAT44((local_54._4_4_ - *(int *)(iVar1 + 0x5c)) -
                      (uint)((uint)local_54 < *(uint *)(iVar1 + 0x58)),
                      (uint)local_54 - *(uint *)(iVar1 + 0x58));
  lVar3 = __allmul();
  lVar3 = lVar3 >> 0xf;
  if (((int)((ulonglong)lVar3 >> 0x20) < 1) && (lVar3 < 0)) {
    local_54 = 0;
    lVar3 = 0;
  }
  local_dc = 0x100dee2cc;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_e4 = CONCAT44(0x4bcf3e,(undefined4)local_e4);
  FUN_00409350();
  local_dc = 0x100000002;
  local_ac = (undefined1 *)&local_e4;
  local_8._0_1_ = 10;
  local_e4 = lVar3;
  uVar2 = FUN_009c7de0();
  local_dc = CONCAT44(uVar2,local_a8);
  local_8._0_1_ = 0xb;
  local_e4 = CONCAT44(0x4bcf7d,(undefined4)local_e4);
  FUN_0042c180();
  local_8._0_1_ = 0xc;
  local_dc = CONCAT44(local_2c,0x4bcf92);
  uVar2 = FUN_00988f20();
  local_dc = 0xffffffff00000000;
  local_8._0_1_ = 0xd;
  local_e4 = CONCAT44(uVar2,0x4bcfa5);
  FUN_00448aa0();
  if (0xf < local_34) {
    local_dc = CONCAT44(local_48[0],&UNK_004bcfb8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_94) {
    local_dc = CONCAT44(local_a8[0],&UNK_004bcfdd);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_5c) {
    local_dc = CONCAT44(local_70,&UNK_004bd000);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_18) {
    local_dc = CONCAT44(local_2c[0],&UNK_004bd01d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_dc = 0x100dee2cc;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_e4 = CONCAT44(0x4bd038,(undefined4)local_e4);
  FUN_00409350();
  local_8._0_1_ = 0xe;
  local_dc = 0x100000002;
  local_e4 = *(undefined8 *)
              (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 300) * 4) + 0xbcc)
              + 0x80);
  local_54._0_4_ = *(undefined4 *)(param_1 + 0x128);
  uVar2 = FUN_009c7de0();
  local_dc = CONCAT44(uVar2,local_a8);
  local_8._0_1_ = 0xf;
  local_e4 = CONCAT44(0x4bd0a4,(undefined4)local_e4);
  FUN_0042c180();
  local_8._0_1_ = 0x10;
  local_dc = CONCAT44(local_2c,0x4bd0b9);
  uVar2 = FUN_00988f20();
  local_dc = 0xffffffff00000000;
  local_8._0_1_ = 0x11;
  local_e4 = CONCAT44(uVar2,0x4bd0cc);
  FUN_00448aa0();
  if (0xf < local_34) {
    local_dc = CONCAT44(local_48[0],&UNK_004bd0df);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_94) {
    local_dc = CONCAT44(local_a8[0],&UNK_004bd103);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_5c) {
    local_dc = CONCAT44(local_70,&UNK_004bd12a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_18) {
    local_dc = CONCAT44(local_2c[0],&UNK_004bd14b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_dc = 0xded94d;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_e4 = CONCAT44(0x4bd169,(undefined4)local_e4);
  FUN_00409350();
  local_8._0_1_ = 0x12;
  local_54 = CONCAT44(local_54._4_4_,*(undefined4 *)(param_1 + 0x128));
  local_dc = CONCAT44(local_2c,1000);
  local_e4 = CONCAT44(0x32,local_48);
  uVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 300) * 4) +
                               0xa48) + 0x24))();
  local_8._0_1_ = 0x13;
  FUN_00448aa0(uVar2);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x14;
  uVar2 = (**(code **)(*(int *)(param_1 + 0x84) + 0x24))(local_48,0x31);
  local_8._0_1_ = 0x15;
  FUN_00448aa0(uVar2,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0(local_c8,0,0xffffffff);
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c8[0]);
  }
  ExceptionList = local_10;
  return param_2;
}

