// FUN_0093f040 @ 0093f040 body=[[0093f040, 0093f0cf] [0093f0d3, 0093f137] [0093f13b, 0093f239] [0093f23d, 0093f274] [0093f27a, 0093f290] [0093f294, 0093f2a8]]


undefined1 * FUN_0093f040(undefined1 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00ba302b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_18 = 1;
  FUN_0090a830(*(undefined4 *)(in_ECX + 0x30),local_64);
  local_8 = 1;
  FUN_00408ed0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_008a8650();
  FUN_0090a8e0();
  local_8 = 2;
  FUN_00408ed0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xbe8) +
                             *(int *)(in_ECX + 0x2c) * 4) + 0x50);
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(int *)(iVar3 + 0x24) == *(int *)(*(int *)(in_ECX + 0x30) + 8)) {
      ExceptionList = local_10;
      return param_1;
    }
  }
  cVar2 = FUN_0092eff0();
  if (cVar2 != '\0') {
    ExceptionList = local_10;
    return param_1;
  }
  FUN_00448740(&DAT_00dee2cc,1);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("NO_CB_EFFECT",0xc);
  local_8 = 3;
  FUN_009a8ee0(local_48,local_34);
  local_8._0_1_ = 4;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_8._0_1_ = 5;
  FUN_00448aa0();
  if (local_50 < 0x10) {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_009adb70();
    if (local_44 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (local_20 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

