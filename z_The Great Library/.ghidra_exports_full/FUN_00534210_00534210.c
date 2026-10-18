// FUN_00534210 @ 00534210 body=[[00534210, 00534332] [00534336, 00534359] [0053435d, 00534386] [0053438a, 005343b3] [005343b7, 005343da] [005343de, 005343f8] [005343fc, 00534419] [0053441d, 00534499] [0053449d, 005344cd] [005344d1, 005344ef] [005344f3, 0053455a] [0053455e, 00534578] [0053457c, 00534590]]


undefined1 * FUN_00534210(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_f4;
  undefined4 local_e0;
  uint local_cc;
  undefined4 local_c4;
  uint local_b0;
  undefined4 local_a8;
  uint local_94;
  undefined4 local_8c;
  uint local_78;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [2];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b7369f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_f4 = 0x100dee2cc;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  local_f4 = 0x100dedc68;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 2;
  local_14 = (undefined1 *)&local_f4;
  local_f4 = CONCAT44(2,*(undefined4 *)(*(int *)(DAT_012586dc + 0x40) + 0x24));
  local_14 = (undefined1 *)FUN_00988a50();
  local_8._0_1_ = 3;
  local_f4 = CONCAT44(2,*(undefined4 *)(param_1 + 0x1430));
  FUN_00988a50();
  local_8._0_1_ = 4;
  local_f4 = CONCAT44(local_4c,0x5342e4);
  FUN_00988f20();
  local_8._0_1_ = 5;
  local_f4 = CONCAT44(local_14,0x5342f9);
  FUN_00988f20();
  local_8._0_1_ = 6;
  local_f4 = CONCAT44(local_30,0x53430e);
  FUN_00988f20();
  local_f4 = 0xffffffff00000000;
  local_8._0_1_ = 7;
  FUN_00408ed0();
  if (0xf < local_78) {
    local_f4 = CONCAT44(local_8c,&UNK_00534333);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_cc) {
    local_f4 = CONCAT44(local_e0,&UNK_0053435a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_b0) {
    local_f4 = CONCAT44(local_c4,&UNK_00534387);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_94) {
    local_f4 = CONCAT44(local_a8,&UNK_005343b4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_54) {
    local_f4 = CONCAT44(local_68[0],&UNK_005343db);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_38) {
    local_f4 = CONCAT44(local_4c[0],&UNK_005343f9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_f4 = CONCAT44(local_30[0],&UNK_0053441a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f4 = 0xc00dff198;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_f4 = CONCAT44(local_30,local_44);
  local_8 = 8;
  local_14 = (undefined1 *)FUN_009a8ee0();
  local_8._0_1_ = 9;
  local_f4 = CONCAT44(0x534459,(undefined4)local_f4);
  iVar1 = FUN_00475500();
  local_f4 = *(undefined8 *)(iVar1 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
  local_f4 = 0xffffffff00000000;
  local_8._0_1_ = 10;
  FUN_00448aa0();
  if (0xf < local_54) {
    local_f4 = CONCAT44(local_68[0],&UNK_0053449a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8._0_1_ = 0xb;
  local_f4 = CONCAT44(0x5344b6,(undefined4)local_f4);
  FUN_009adb70();
  if (local_40 != 0) {
    local_f4 = CONCAT44(0x5344c5,(undefined4)local_f4);
    FUN_009e6a80();
    local_f4 = CONCAT44(local_40,&UNK_005344ce);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (0xf < local_1c) {
    local_f4 = CONCAT44(local_30[0],&UNK_005344f0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f4 = 0xded94d;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0xc;
  local_f4 = CONCAT44(local_30,1000);
  uVar2 = (**(code **)(*(int *)(param_1 + 0xa48) + 0x24))(local_68,0x47);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  FUN_00448aa0(uVar2,0,0xffffffff);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return param_2;
}

