// FUN_00517ca0 @ 00517ca0 body=[[00517ca0, 00517d5d] [00517d61, 00517e07] [00517e0b, 00517e31] [00517e35, 00517e50] [00517e54, 00517e87] [00517e8b, 00517ea6] [00517eaa, 00517eb7] [00517ebb, 00517ecf]]


/* WARNING: Removing unreachable block (ram,0x00517e9e) */

undefined1 * FUN_00517ca0(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint in_stack_00000020;
  undefined8 uVar2;
  uint local_84;
  uint local_68;
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
  undefined4 local_8;
  
  puStack_c = &LAB_00b7494e;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_14 = 1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      uVar2 = 0x200df8510;
    }
    else {
      uVar2 = 0x200df963c;
    }
  }
  else {
    uVar2 = 0x300dfd24c;
  }
  FUN_00448740(uVar2);
  FUN_00988d00(local_44,2);
  local_8._0_1_ = 2;
  FUN_00448aa0();
  local_8._0_1_ = 1;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 3;
  FUN_009a8ee0(local_28,&param_3);
  local_8._0_1_ = 4;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 5;
  FUN_00988fa0();
  local_8._0_1_ = 6;
  FUN_00988f20();
  local_8._0_1_ = 7;
  FUN_00448aa0();
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_68 < 0x10) {
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_009adb70();
    if (local_24 == 0) {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      if (in_stack_00000020 < 0x10) {
        ExceptionList = local_10;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

