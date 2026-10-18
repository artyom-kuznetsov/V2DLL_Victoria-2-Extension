// FUN_00536b70 @ 00536b70 body=[[00536b70, 00536c44] [00536c48, 00536c64] [00536c68, 00536e34] [00536e38, 00536e67] [00536e6b, 00536e92] [00536e96, 00536eba] [00536ebe, 00536efe] [00536f02, 00536f23] [00536f27, 00536f57] [00536f5b, 00536fac] [00536fb0, 00536fc8]]


undefined1 * FUN_00536b70(int param_1,undefined1 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *local_104;
  undefined1 local_100 [4];
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  int local_ec;
  int local_e4;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  undefined1 auStack_a8 [4];
  uint uStack_a4;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_6c;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint local_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b73575;
  local_14 = ExceptionList;
  local_ec = 0;
  local_e4 = DAT_012588e8;
  if (*(int *)(param_1 + 0x1494) == 0) {
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("TB_NATIONALFOCUS_NONE",0x15);
    local_c = 0;
    FUN_009a8ee0(local_100,local_e0);
    local_c._0_1_ = 1;
    iVar3 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                 (int)*(undefined8 *)(iVar3 + 0x74),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_009adb70();
    if (local_fc != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_fc);
    }
    local_fc = 0;
    local_f8 = 0;
    local_f4 = 0;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e0[0]);
    }
    ExceptionList = local_14;
    return param_2;
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  local_c = 3;
  piVar1 = *(int **)(param_1 + 0x148c);
  ExceptionList = &local_14;
  while( true ) {
    local_104 = piVar1;
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00408ed0(local_c0,0,0xffffffff);
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c0[0]);
      }
      ExceptionList = local_14;
      return param_2;
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    FUN_00409350("NAT_IN",6);
    local_c = CONCAT31(local_c._1_3_,4);
    piVar2 = *(int **)(*(int *)(*(int *)(local_e4 + 0xbf0) + *(int *)(param_1 + 0x20) * 0x10) +
                      ((int *)*piVar1)[0x1b] * 4);
    uStack_f0 = (**(code **)(*(int *)*piVar1 + 0x18))(local_34);
    puStack_10._0_1_ = 5;
    uStack_c8 = FUN_009a8ee0(&local_104,&local_e4);
    puStack_10._0_1_ = 6;
    puVar4 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_ec = FUN_00aae9af(0x180);
      puStack_10._0_1_ = 7;
      if (local_ec == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_00475150(local_ec);
      }
      puStack_10._0_1_ = 8;
      local_ec = 0;
      if ((puVar4 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)(1);
      }
    }
    DAT_0125b5e0 = puVar4;
    puStack_10._0_1_ = 6;
    uVar5 = FUN_009a9880((int)*(undefined8 *)(DAT_0125b5e0 + 0x1b),
                         (int)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1b) >> 0x20),
                         (int)*(undefined8 *)(DAT_0125b5e0 + 0x1d),
                         (int)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1d) >> 0x20));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,9);
    (**(code **)(*piVar2 + 0x18))(auStack_a8);
    local_c._0_1_ = 10;
    FUN_00988f20(uVar5);
    local_c._0_1_ = 0xb;
    uVar5 = FUN_00988f20(local_ec);
    local_c._0_1_ = 0xc;
    FUN_00448aa0(uVar5,0,0xffffffff);
    if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_88);
    }
    uStack_74 = 0xf;
    uStack_78 = 0;
    uStack_88 = uStack_88 & 0xffffff00;
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_50);
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    uStack_50 = uStack_50 & 0xffffff00;
    if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_a4);
    }
    uStack_90 = 0xf;
    uStack_94 = 0;
    uStack_a4 = uStack_a4 & 0xffffff00;
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_6c);
    }
    uStack_58 = 0xf;
    uStack_5c = 0;
    uStack_6c = uStack_6c & 0xffffff00;
    local_c._0_1_ = 0xd;
    FUN_009adb70();
    if (local_fc != 0) break;
    local_fc = 0;
    local_f8 = 0;
    local_f4 = 0;
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_c = CONCAT31(local_c._1_3_,3);
    uStack_20 = 0xf;
    uStack_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e0[0]);
    }
    FUN_00448740(&DAT_00dee2cc,1);
    piVar1 = (int *)local_104[2];
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_fc);
}

