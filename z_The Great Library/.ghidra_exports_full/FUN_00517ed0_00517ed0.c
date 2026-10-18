// FUN_00517ed0 @ 00517ed0 body=[[00517ed0, 00517fb1] [00517fb5, 00517fd1] [00517fd5, 00518091] [00518095, 00518133] [00518137, 005181e0] [005181e4, 00518284] [00518288, 00518314] [00518318, 005183a2] [005183a6, 005183d4] [005183d8, 005183ed]]


/* WARNING: Removing unreachable block (ram,0x005183cb) */

undefined1 * FUN_00517ed0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  int local_68;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba7382;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((*(int *)(*(int *)(*(int *)(in_ECX + 0xbe8) + param_3 * 4) + 0x3c) < 0x186a1) ||
     (ExceptionList = &local_14, piVar2 = (int *)FUN_005183f0(), *piVar2 < 0)) {
    local_c._0_1_ = 3;
    local_c._1_3_ = 0;
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0xbe8) + param_3 * 4) + 0x24) != 0) {
      FUN_00409350("DIPRELCH_DEPENDENCY");
      FUN_00401000(0x437a8000);
      FUN_00b31c00();
      FUN_00517ca0(local_50);
      local_c._0_1_ = 4;
      FUN_00448aa0();
      local_c._0_1_ = 3;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
    }
    local_c._0_1_ = 3;
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0xbe8) + param_3 * 4) + 0x34) != 0) {
      FUN_00409350("DIPRELCH_WAR");
      FUN_00401000(0xc1180000);
      FUN_00b31c00();
      FUN_00517ca0(local_34);
      local_c._0_1_ = 5;
      FUN_00448aa0();
      local_c._0_1_ = 3;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
    }
    local_c._0_1_ = 3;
    if (((*(char *)(param_3 + *(int *)(in_ECX + 0xd08)) != '\0') &&
        (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0x67c) == '\0')) &&
       (*(char *)(in_ECX + 0x67c) == '\0')) {
      FUN_009885d0();
      FUN_00401000(0x424a0000);
      FUN_00b31c00();
      FUN_00517ca0(local_34);
      local_c._0_1_ = 6;
      FUN_00448aa0();
      local_c._0_1_ = 3;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_c._0_1_ = 3;
    if ((0 < *(int *)(*(int *)(*(int *)(in_ECX + 0xbe8) + param_3 * 4) + 0x3c)) &&
       (cVar1 = FUN_0092ede0(), cVar1 != '\0')) {
      FUN_00409350("DIPRELCH_VALID_CB");
      FUN_00401000(0xc395c001);
      FUN_00b31c00();
      FUN_00517ca0(local_34);
      local_c._0_1_ = 7;
      FUN_00448aa0();
      local_c._0_1_ = 3;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    if (*(int *)(*(int *)(*(int *)(in_ECX + 0xbe8) + param_3 * 4) + 0x28) != 0) {
      FUN_00409350("DIPRELCH_GUARANTEE");
      FUN_00401000(0x42a10000);
      FUN_00b31c00();
      FUN_00517ca0(local_34);
      local_c._0_1_ = 8;
      FUN_00448aa0();
      local_c._0_1_ = 3;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    if (*(char *)(*(int *)(*(int *)(in_ECX + 0xbe8) + param_3 * 4) + 0x60) != '\0') {
      FUN_00409350("DIPRELCH_HASACCESS");
      FUN_00401000(0x41cc0000);
      FUN_00b31c00();
      FUN_00517ca0(local_34);
      local_c._0_1_ = 9;
      FUN_00448aa0();
      local_c._0_1_ = 3;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    ExceptionList = local_14;
    return param_1;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350();
  local_c = 0;
  FUN_009a8ee0();
  local_c._0_1_ = 1;
  FUN_00475500();
  FUN_009a9880();
  local_c = CONCAT31(local_c._1_3_,2);
  FUN_009adb70();
  if (local_68 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_3c < 0x10) {
    ExceptionList = local_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

