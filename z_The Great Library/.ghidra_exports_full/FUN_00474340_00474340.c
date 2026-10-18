// FUN_00474340 @ 00474340 body=[[00474340, 004743b4] [004743b8, 00474478] [0047447c, 004744b3] [004744b7, 004744d6] [004744df, 00474569] [0047456d, 004745a4] [004745a8, 004745c3] [004745c7, 00474609] [0047460d, 0047463b]]


undefined1 * FUN_00474340(undefined1 *param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  undefined8 uVar2;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b627ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_14 = 1;
  (**(code **)(*in_ECX + 0x18))(local_60,param_2);
  local_8 = 1;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar1 = in_ECX[param_2 * 2 + 6];
  FUN_00448740(&DAT_00df9638,2);
  if (*(char *)(*(int *)(DAT_0125b5d0 + param_2 * 4) + 0x28) == '\0') {
    if ((char)iVar1 == '\0') {
      uVar2 = 0x200df8518;
      goto LAB_004744e4;
    }
    uVar2 = 0x200df8510;
  }
  else {
    if ((char)iVar1 == '\0') {
      uVar2 = 0x200df8510;
LAB_004744e4:
      FUN_00448740(uVar2);
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfb4f8,2);
      local_8 = 6;
      FUN_009a8ee0(local_28,local_44);
      local_8._0_1_ = 7;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_8._0_1_ = 8;
      FUN_00448aa0();
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffffff00;
      local_8._0_1_ = 9;
      FUN_009adb70();
      if (local_24 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto LAB_004745c9;
    }
    uVar2 = 0x200df8518;
  }
  FUN_00448740(uVar2);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfb4f4,3);
  local_8 = 2;
  FUN_009a8ee0(local_28,local_44);
  local_8._0_1_ = 3;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 4;
  FUN_00448aa0();
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  local_8._0_1_ = 5;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_004745c9:
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8 = 10;
  FUN_00448aa0();
  if (local_30 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

