// FUN_0091d440 @ 0091d440 body=[[0091d440, 0091d4b1] [0091d4b5, 0091d4fc] [0091d500, 0091d549] [0091d54d, 0091d594] [0091d598, 0091d654] [0091d658, 0091d674] [0091d67a, 0091d6a7]]


/* WARNING: Removing unreachable block (ram,0x0091d540) */
/* WARNING: Removing unreachable block (ram,0x0091d4a8) */

undefined1 * FUN_0091d440(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int local_4c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6533a;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00409350();
  local_c = 0;
  FUN_00a840b0();
  local_c = 0xffffffff;
  FUN_00988bb0(local_34,3);
  local_c = 1;
  FUN_00a840b0();
  local_c = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00409350();
  local_c = 2;
  FUN_00a840b0();
  local_c = 0xffffffff;
  FUN_00988bb0(local_34,3);
  local_c = 3;
  FUN_00a840b0();
  local_c = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  uVar1 = local_34[0] >> 8;
  local_34[0] = uVar1 << 8;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4) + 0x67c) == '\0')
  {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = uVar1 << 8;
    FUN_00409350();
    local_c = 4;
    FUN_009a8ee0();
    local_c._0_1_ = 5;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_009adb70();
    if (local_4c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350();
  }
  ExceptionList = local_14;
  return param_1;
}

