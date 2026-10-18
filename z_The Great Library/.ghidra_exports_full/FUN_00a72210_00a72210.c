// FUN_00a72210 @ 00a72210 body=[[00a72210, 00a72319] [00a7231d, 00a72342] [00a72346, 00a7236b] [00a7236f, 00a7238e] [00a72392, 00a723a8] [00a723ac, 00a723c6] [00a723ca, 00a72424] [00a72428, 00a7243c] [00a72440, 00a72448]]


/* WARNING: Removing unreachable block (ram,0x00a724da) */

void FUN_00a72210(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 local_1e8 [16];
  undefined4 local_1d8;
  char *local_1d4;
  uint *puStack_1d0;
  undefined4 local_fc [5];
  uint local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  undefined1 *local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined4 local_78;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b545aa;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffe34;
  puStack_1d0 = (uint *)param_2;
  local_1d4 = (char *)(param_1 + 0x68);
  local_1d8 = 0xa72244;
  ExceptionList = &pvStack_10;
  local_18 = FUN_00a72680();
  if (local_18 == 0) {
    puStack_1d0 = (uint *)param_2;
    local_1d4 = (char *)(param_1 + 0x68);
    local_1d8 = 0xa724d6;
    FUN_009e6760();
    ExceptionList = pvStack_10;
    return;
  }
  local_8 = 0;
  puStack_1d0 = (uint *)0x17;
  local_1d4 = "\" AND status=\"created\";";
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_1d8 = 0xa72273;
  FUN_00409350();
  local_8._0_1_ = 1;
  puStack_1d0 = (uint *)0x18;
  local_1d4 = "_games where creator = \"";
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_1d8 = 0xa7228f;
  FUN_00409350();
  local_8._0_1_ = 2;
  puStack_1d0 = (uint *)0x14;
  local_1d4 = "delete from created_";
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  local_1d8 = 0xa722ab;
  FUN_00409350();
  puStack_1d0 = (uint *)&DAT_013f0670;
  local_8._0_1_ = 3;
  local_1d4 = (char *)0xa722c2;
  FUN_00988f20();
  puStack_1d0 = local_6c;
  local_8._0_1_ = 4;
  local_1d4 = (char *)0xa722d7;
  FUN_00988f20();
  local_8._0_1_ = 5;
  puStack_1d0 = (uint *)param_2;
  local_1d4 = (char *)0xa722ec;
  FUN_00988f20();
  puStack_1d0 = local_34;
  local_8._0_1_ = 6;
  local_1d4 = (char *)0xa72301;
  FUN_00988f20();
  piVar1 = DAT_01258b64;
  if (0xf < local_94) {
    puStack_1d0 = (uint *)local_a8;
                    /* WARNING: Subroutine does not return */
    local_1d4 = &UNK_00a7231a;
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  if (0xf < local_cc) {
    puStack_1d0 = (uint *)local_e0;
                    /* WARNING: Subroutine does not return */
    local_1d4 = &UNK_00a72343;
    FUN_00aae91b();
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  if (0xf < local_b0) {
    puStack_1d0 = (uint *)local_c4;
                    /* WARNING: Subroutine does not return */
    local_1d4 = &UNK_00a7236c;
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  if (0xf < local_3c) {
    puStack_1d0 = (uint *)local_50;
                    /* WARNING: Subroutine does not return */
    local_1d4 = &UNK_00a7238f;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_58) {
    puStack_1d0 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
    local_1d4 = &UNK_00a723a9;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  if (0xf < local_20) {
    puStack_1d0 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
    local_1d4 = &UNK_00a723c7;
    FUN_00aae91b();
  }
  local_8c = local_1e8;
  local_1d4 = (char *)0xf;
  local_1d8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_1e8[0] = 0;
  FUN_00408ed0(local_fc,0,0xffffffff);
  (**(code **)(*piVar1 + 0x10))(local_84);
  if (local_7c == 0) {
    if (local_e8 < 0x10) {
      local_8 = 0xffffffff;
      FUN_00a724c3();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_fc[0]);
  }
  FUN_00463b30(local_78,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_7c);
}

