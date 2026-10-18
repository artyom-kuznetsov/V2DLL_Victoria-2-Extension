// FUN_00705600 @ 00705600 body=[[00705600, 0070566a] [0070566e, 007056b6] [007056ba, 00705728] [0070572c, 00705781] [00705785, 00705798]]


undefined4 FUN_00705600(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6de4e;
  local_10 = ExceptionList;
  local_18 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("PRODUCTION_FACTORY_PROFITABILITY",0x20);
  local_8 = 1;
  FUN_009a8ee0(local_2c,local_48);
  local_8._0_1_ = 3;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350(&DAT_00dff69c,4);
  local_8._0_1_ = 4;
  FUN_009a99f0(local_2c,*param_2);
  local_8._0_1_ = 3;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("VALUE",5);
  local_8._0_1_ = 5;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 6;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  FUN_009e6810(local_64,&local_14);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_18 = 1;
  local_8 = 7;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

