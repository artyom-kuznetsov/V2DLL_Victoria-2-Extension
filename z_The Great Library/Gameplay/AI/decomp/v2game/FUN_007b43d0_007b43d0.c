// FUN_007b43d0 @ 007b43d0 body=[[007b43d0, 007b443f] [007b4443, 007b44e2] [007b44e6, 007b4519] [007b451d, 007b4538] [007b453c, 007b457d] [007b4581, 007b45ff] [007b4603, 007b4645] [007b4649, 007b468d] [007b4691, 007b46b4] [007b46b8, 007b46d4]]


/* WARNING: Removing unreachable block (ram,0x007b4685) */

undefined4 *
FUN_007b43d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [2];
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b97152;
  local_10 = ExceptionList;
  local_8 = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultDialog",0xd);
  local_8._0_1_ = 1;
  FUN_00640680(param_1,local_40);
  local_8._0_1_ = 3;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  param_1[0x1a] = param_2;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  *param_1 = CBuyConfirm::vftable;
  param_1[0x1b] = param_5;
  FUN_007b47e0();
  local_8._0_1_ = 4;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("ME_BUY_ITEM",0xb);
  local_8._0_1_ = 5;
  FUN_009a8ee0(local_38,local_5c);
  local_8._0_1_ = 6;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 7;
  FUN_00641710();
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 8;
  FUN_009adb70();
  if (local_34 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("ME_BUY_ITEM_DESC",0x10);
  local_8._0_1_ = 9;
  FUN_009a8ee0(local_24,local_40);
  local_8._0_1_ = 0xb;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfbf14,4);
  local_8._0_1_ = 0xc;
  param_2 = FUN_00aae9af();
  local_8._0_1_ = 0xd;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0xc;
  FUN_009e6810(local_5c,&param_2);
  local_8._0_1_ = 0xb;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("CREDITS",7);
  local_8._0_1_ = 0xe;
  FUN_009a99f0(local_24,param_4);
  local_8._0_1_ = 0xb;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 0xf;
  FUN_006417b0();
  local_8 = CONCAT31(local_8._1_3_,0x10);
  FUN_009adb70();
  if (local_20 == 0) {
    FUN_007b46e0();
    ExceptionList = local_10;
    return param_1;
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

