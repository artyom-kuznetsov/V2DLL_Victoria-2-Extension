// FUN_0095c0b0 @ 0095c0b0 body=[[0095c0b0, 0095c17a] [0095c17e, 0095c19d] [0095c1a1, 0095c251] [0095c255, 0095c29f] [0095c2a3, 0095c39a] [0095c39e, 0095c3cd] [0095c3d1, 0095c3f5] [0095c3f9, 0095c41b] [0095c41f, 0095c441]]


undefined4 FUN_0095c0b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined1 local_10c [20];
  int local_f8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *apuStack_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00ba2c9c;
  local_10 = ExceptionList;
  local_8 = 0;
  local_20 = 0;
  local_124 = 0x95c0e8;
  ExceptionList = &local_10;
  FUN_008a8650();
  local_124 = 0x1500e35eb0;
  local_f8 = param_1;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_12c = CONCAT44(0x95c10e,(undefined4)local_12c);
  FUN_00409350();
  local_124 = CONCAT44(local_6c,local_50);
  local_8 = 1;
  local_12c = CONCAT44(0x95c122,(undefined4)local_12c);
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  local_124 = CONCAT44(0x95c12d,(undefined4)local_124);
  iVar1 = FUN_00475500();
  local_12c = *(undefined8 *)(iVar1 + 0x6c);
  local_124 = *(undefined8 *)(iVar1 + 0x74);
  uStack_134._4_4_ = 0x95c14e;
  FUN_009a9880();
  local_20 = 1;
  local_8._0_1_ = 3;
  local_124 = CONCAT44(0x95c161,(undefined4)local_124);
  FUN_009adb70();
  if (local_4c != 0) {
    local_124 = CONCAT44(0x95c172,(undefined4)local_124);
    FUN_009e6a80();
    local_124 = CONCAT44(local_4c,&UNK_0095c17b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  if (0xf < local_58) {
    local_124 = CONCAT44(local_6c[0],&UNK_0095c19e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_124 = 0x100ded950;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_12c = CONCAT44(0x95c1bd,(undefined4)local_12c);
  FUN_00448740();
  local_124 = CONCAT44(local_10c,apuStack_18);
  local_12c = CONCAT44(0x95c1d9,(undefined4)local_12c);
  (**(code **)(*(int *)(DAT_00f20c04 + 0x4c) + 0x18))();
  uStack_134._4_4_ =
       (((int)apuStack_18[0] >> 0x1f) << 0xf | (uint)apuStack_18[0] >> 0x11) << 0xf |
       ((uint)apuStack_18[0] & 0x1ffff) >> 2;
  local_12c = 0x1f40000;
  uStack_134._0_4_ = (uint *)((int)apuStack_18[0] << 0x1e);
  uStack_134 = __alldiv();
  if (((int)((ulonglong)uStack_134 >> 0x20) < 1) && (uStack_134 < 0)) {
    local_1c = 0;
    uStack_134 = 0;
  }
  local_12c = 0x100000002;
  apuStack_18[0] = (undefined1 *)&uStack_134;
  uVar2 = FUN_009c80d0(local_3c);
  local_12c = 0xffffffff00000000;
  local_8 = 4;
  uStack_134._0_4_ = (uint *)0x95c240;
  uStack_134._4_4_ = uVar2;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_28) {
    local_12c = CONCAT44(local_3c[0],&UNK_0095c252);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_12c = 0x100dee2cc;
  uStack_134._4_4_ = 0x95c263;
  FUN_00448740();
  uStack_134._4_4_ = DAT_00f20c04 + 0x4c;
  local_12c = CONCAT44(local_10c,local_3c);
  uStack_134._0_4_ = (uint *)0x95c27c;
  uStack_134._4_4_ = FUN_008aed50();
  local_12c = 0xffffffff00000000;
  local_8 = 5;
  uStack_134._0_4_ = (uint *)0x95c28e;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_28) {
    local_12c = CONCAT44(local_3c[0],&UNK_0095c2a0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_12c = 0x100dee2cc;
  uStack_134._4_4_ = 0x95c2b1;
  FUN_00448740();
  _local_1c = CONCAT44(apuStack_18[0],*(undefined4 *)(*(int *)(param_1 + 100) + 0x128));
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 100) + 300) * 4);
  uStack_134._4_4_ = *(undefined4 *)(iVar1 + 0xe74);
  uStack_134._0_4_ = *(uint **)(iVar1 + 0xe70);
  local_12c = 0x320000;
  lVar3 = __allmul();
  local_12c = 0x100df9644;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  uStack_134._4_4_ = 0x95c31d;
  FUN_00409350();
  uStack_134._4_4_ = 2;
  uStack_134._0_4_ = local_3c;
  local_8 = 6;
  local_12c = lVar3 >> 0xf;
  FUN_00988bb0();
  local_8._0_1_ = 7;
  local_12c = CONCAT44(local_88,0x95c354);
  uVar2 = FUN_00988f20();
  local_12c = CONCAT44(uVar2,local_a4);
  local_8._0_1_ = 8;
  uStack_134._4_4_ = 0x95c36f;
  uStack_134._4_4_ = FUN_0042c180();
  local_12c = 0xffffffff00000000;
  local_8._0_1_ = 9;
  uStack_134._0_4_ = (uint *)0x95c382;
  FUN_00448aa0();
  if (0xf < local_90) {
    local_12c = CONCAT44(local_a4[0],&UNK_0095c39b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (0xf < local_ac) {
    local_12c = CONCAT44(local_c0,&UNK_0095c3ce);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  if (0xf < local_28) {
    local_12c = CONCAT44(local_3c[0],&UNK_0095c3f6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_74) {
    local_12c = CONCAT44(local_88[0],&UNK_0095c41c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_12c = 0x100dee2cc;
  uStack_134._4_4_ = 0x95c42d;
  FUN_00448740();
  ExceptionList = local_10;
  return param_2;
}

