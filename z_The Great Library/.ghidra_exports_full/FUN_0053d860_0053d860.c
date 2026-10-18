// FUN_0053d860 @ 0053d860 body=[[0053d860, 0053d92f] [0053d933, 0053d950] [0053d954, 0053d9ad] [0053d9b1, 0053d9ce] [0053d9d2, 0053da0b] [0053da0f, 0053da23]]


undefined1 * FUN_0053d860(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_68 [5];
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b732f8;
  local_10 = ExceptionList;
  local_14 = *(undefined4 *)(DAT_012588e8 + 0xc10);
  ExceptionList = &local_10;
  iVar1 = FUN_00444f80(in_ECX + 0x1c);
  local_14 = FUN_00444ff0(in_ECX + 0x1c);
  if ((iVar1 == 0) && (local_14 == 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_8 = 0;
    if (0 < iVar1) {
      uVar2 = FUN_009888f0(local_68);
      local_8._0_1_ = 1;
      uVar2 = FUN_0042c180(local_4c,uVar2);
      local_8._0_1_ = 2;
      FUN_00448aa0(uVar2,0,0xffffffff);
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
      FUN_00448740(&DAT_00dee2cc,1);
    }
    if (0 < local_14) {
      uVar2 = FUN_009888f0(local_68);
      local_8._0_1_ = 3;
      uVar2 = FUN_0042c180(local_4c,uVar2);
      local_8._0_1_ = 4;
      FUN_00448aa0(uVar2,0,0xffffffff);
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
      FUN_00448740(&DAT_00dee2cc,1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0(local_30,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

