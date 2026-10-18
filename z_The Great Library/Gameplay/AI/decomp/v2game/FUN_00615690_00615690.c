// FUN_00615690 @ 00615690 body=[[00615690, 0061577b] [0061577f, 0061579d] [006157a1, 006157d3] [006157d7, 006157ed] [006157f1, 006158b3] [006158b7, 006158d8] [006158dc, 00615908] [0061590c, 00615922] [00615926, 00615940] [00615944, 00615957]]


/* WARNING: Removing unreachable block (ram,0x00615807) */
/* WARNING: Removing unreachable block (ram,0x00615938) */
/* WARNING: Removing unreachable block (ram,0x0061593c) */

undefined4 FUN_00615690(undefined4 param_1,int param_2)

{
  int iVar1;
  uint local_84;
  uint local_68;
  int local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b707ea;
  local_10 = ExceptionList;
  local_28 = 0;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00df8514,2);
  if (param_2 < 0x32) {
    local_8 = 0x26;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (uint)local_44[0]._1_3_ << 8;
    FUN_00409350("AI_DIPLO_NO",0xb);
    local_8._0_1_ = 0x27;
    FUN_009a8ee0(local_24,local_44);
    local_8._0_1_ = 0x28;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0x29;
    FUN_00988fa0();
    local_8._0_1_ = 0x2a;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x2b);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_8 = 0x20;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (uint)local_44[0]._1_3_ << 8;
    FUN_00409350("AI_DIPLO_YES",0xc);
    local_8._0_1_ = 0x21;
    FUN_009a8ee0(local_24,local_44);
    local_8._0_1_ = 0x22;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 0x23;
    FUN_00988fa0();
    local_8._0_1_ = 0x24;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x25);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

