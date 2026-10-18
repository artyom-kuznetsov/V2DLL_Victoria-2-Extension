// FUN_004d2630 @ 004d2630 body=[[004d2630, 004d26fa] [004d26fe, 004d2735] [004d2739, 004d2758] [004d275c, 004d27d2] [004d27d6, 004d27f8]]


/* WARNING: Removing unreachable block (ram,0x004d27ca) */
/* WARNING: Removing unreachable block (ram,0x004d2750) */

undefined1 * FUN_004d2630(int param_1,undefined1 *param_2)

{
  int iVar1;
  int in_EDX;
  undefined8 uVar2;
  uint local_50;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b75883;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  if (*(int *)(*(int *)(param_1 + 0x26c) + in_EDX * 4) != 0) {
    FUN_00409350();
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 2;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 3;
    FUN_00448aa0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00448740();
    iVar1 = *(int *)(*(int *)(param_1 + 0x26c) + in_EDX * 4);
    uVar2 = __allmul(iVar1,iVar1 >> 0x1f,100000,0);
    __alldiv(uVar2,1000,0);
    FUN_00988a50();
    local_8 = 5;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    FUN_00448740();
  }
  ExceptionList = local_10;
  return param_2;
}

