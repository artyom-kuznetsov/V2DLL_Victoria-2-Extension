// FUN_0095f780 @ 0095f780 body=[[0095f780, 0095f869] [0095f86d, 0095f888] [0095f88c, 0095f8f2] [0095f8f6, 0095f912] [0095f918, 0095f95b] [0095f95f, 0095f977] [0095f97d, 0095f9aa]]


undefined1 * FUN_0095f780(undefined1 *param_1)

{
  int iVar1;
  int in_ECX;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30;
  int local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2a7a;
  local_10 = ExceptionList;
  if (*(int *)(in_ECX + 0x70) ==
      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 100) + 300) * 4) +
              0xe68)) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    ExceptionList = &local_10;
    FUN_008a8650();
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350("POP_CONVERSION_FACTORS",0x16);
    local_8 = 0;
    FUN_009a8ee0(local_44,local_60);
    local_8._0_1_ = 1;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_8._0_1_ = 5;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00448740(&DAT_00dee2cc,1);
    FUN_008aed50();
    local_8 = CONCAT31(local_8._1_3_,6);
    if (local_20 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00409350(&DAT_00ded94d,0);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      FUN_00448aa0();
      FUN_00448740(&DAT_00dee2cc,1);
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00408ed0();
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

