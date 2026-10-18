// FUN_0055e6e0 @ 0055e6e0 body=[[0055e6e0, 0055e72e] [0055e730, 0055e866] [0055e86a, 0055e8b0]]


/* WARNING: Removing unreachable block (ram,0x0055e74a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0055e6e0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int *local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5f7f0;
  local_10 = ExceptionList;
  local_20 = (int *)*param_1;
  iVar4 = param_1[1] - (int)local_20 >> 2;
  local_14 = 0;
  ExceptionList = &local_10;
  if (0 < iVar4) {
    local_18 = *(uint *)(param_2 + 0x10);
    local_1c = *(undefined4 *)(param_2 + 0x14);
    ExceptionList = &local_10;
    param_1 = local_20;
    do {
      uVar2 = *(uint *)(*param_1 + 0x40);
      uVar3 = local_18;
      if (uVar2 < local_18) {
        uVar3 = uVar2;
      }
      iVar1 = FUN_00414bd0(uVar3);
      bVar5 = false;
      if (iVar1 == 0) {
        if (uVar2 < local_18) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = (uint)(uVar2 != local_18);
        }
        bVar5 = uVar2 == 0;
      }
      if (bVar5) {
        ExceptionList = local_10;
        return (undefined *)local_20[local_14];
      }
      param_1 = param_1 + 1;
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  if ((DAT_013f296c & 1) == 0) {
    DAT_013f296c = DAT_013f296c | 1;
    local_8 = 0;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350("NullCrime",9);
    local_8._0_1_ = 1;
    FUN_0044bc60(&DAT_013f28f0);
    local_8 = CONCAT31(local_8._1_3_,2);
    _DAT_013f28f0 = CCrime::vftable;
    DAT_013f2934 = 0xf;
    _DAT_013f2930 = 0;
    DAT_013f2920._0_1_ = 0;
    FUN_00408ed0(local_3c,0,0xffffffff);
    _DAT_013f293c = 0xffffffff;
    _DAT_013f2944 = 0x18d;
    _DAT_013f2948 = 0;
    _DAT_013f294c = 0;
    _DAT_013f2950 = 0;
    _DAT_013f2958 = 0;
    _DAT_013f2940 = CAndTrigger::vftable;
    DAT_013f295c = 0;
    _DAT_013f28f0 = CNullCrime::vftable;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    _atexit(FUN_00c7ff10);
  }
  ExceptionList = local_10;
  return &DAT_013f28f0;
}

