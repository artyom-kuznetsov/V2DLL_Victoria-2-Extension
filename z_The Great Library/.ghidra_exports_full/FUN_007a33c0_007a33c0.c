// FUN_007a33c0 @ 007a33c0 body=[[007a33c0, 007a3512] [007a3516, 007a3566] [007a356a, 007a35bf] [007a35c3, 007a3607] [007a360b, 007a367a] [007a367e, 007a36ba] [007a36be, 007a3750] [007a3754, 007a3775] [007a3779, 007a3801] [007a3805, 007a3826] [007a382a, 007a389f] [007a38a3, 007a38c2] [007a38c6, 007a38e9] [007a38ed, 007a3901]]


/* WARNING: Removing unreachable block (ram,0x007a381e) */
/* WARNING: Removing unreachable block (ram,0x007a38ba) */
/* WARNING: Removing unreachable block (ram,0x007a376d) */

undefined4 *
FUN_007a33c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7a81f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_00f0d860;
  param_1[3] = DAT_00f0d864;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  FUN_009c1390(&DAT_00f0d860);
  puVar1 = param_1 + 0xd;
  local_8 = 1;
  *puVar1 = CChoiceObserver<CStandardlistboxItem>::vftable;
  param_1[0x10] = param_5;
  param_1[0x11] = param_4;
  param_1[0x14] = param_2;
  param_1[0xf] = param_3;
  param_1[0x12] = param_7;
  *param_1 = CGameList::vftable;
  *puVar1 = CGameList::vftable;
  FUN_007a4540(FUN_007a4190,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007a4540(FUN_007a4260,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 4;
  param_1[0x3e] = param_6;
  *(undefined1 *)(param_1 + 0x3f) = (undefined1)param_8;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("GameListActionWindow",0x14);
  local_8._0_1_ = 5;
  uVar2 = (**(code **)(*(int *)param_1[0x10] + 0x2c))(local_5c,param_1[0x3e]);
  local_8._0_1_ = 4;
  param_1[0x13] = uVar2;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("RefreshButton",0xd);
  local_8._0_1_ = 6;
  iVar3 = (**(code **)(*(int *)param_1[0x13] + 0x34))(local_5c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x16);
  local_8._0_1_ = 4;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("JoinButton",10);
  local_8._0_1_ = 7;
  iVar3 = (**(code **)(*(int *)param_1[0x13] + 0x34))(local_5c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x2a);
  local_8._0_1_ = 4;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("ChannelListing",0xe);
  local_8._0_1_ = 8;
  uVar2 = (**(code **)(*(int *)param_1[0x13] + 0x7c))(local_5c);
  local_8._0_1_ = 4;
  param_1[0xe] = uVar2;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  (**(code **)(*(int *)param_1[0xe] + 4))(puVar1);
  (**(code **)(*(int *)param_1[0xe] + 0x38))(1);
  (**(code **)(*(int *)param_1[0xe] + 0x54))();
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("GamesInfowindow",0xf);
  local_8._0_1_ = 9;
  uVar2 = (**(code **)(*(int *)param_1[0x10] + 0x2c))(local_5c,param_1[0x3e]);
  local_8._0_1_ = 4;
  param_1[0x40] = uVar2;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("METASERVER_GAME_INFO",0x14);
  local_8._0_1_ = 10;
  FUN_009a8ee0(local_24,local_5c);
  local_8._0_1_ = 0xc;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 0xd;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("CREATOR",7);
  local_8._0_1_ = 0xe;
  param_8 = FUN_00aae9af();
  local_8._0_1_ = 0xf;
  if (param_8 == 0) {
    param_8 = 0;
  }
  else {
    param_8 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0xe;
  FUN_009e6810(local_40,&param_8);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xc;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 0x10;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfa9f8,4);
  local_8._0_1_ = 0x11;
  param_8 = FUN_00aae9af();
  local_8._0_1_ = 0x12;
  if (param_8 == 0) {
    param_8 = 0;
  }
  else {
    param_8 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0x11;
  FUN_009e6810(local_40,&param_8);
  if (local_2c < 0x10) {
    local_8._0_1_ = 0xc;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350("GameInfoBox",0xb);
    local_8._0_1_ = 0x13;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0x14;
    (**(code **)(*(int *)param_1[0x40] + 0x38))();
    FUN_009e7500();
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40[0]);
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_009adb70();
    if (local_20 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

