// FUN_006477c0 @ 006477c0 body=[[006477c0, 006478bf] [006478c3, 006478e4] [006478e8, 0064790a] [0064790e, 0064792d] [00647931, 00647950] [00647954, 0064796d] [00647971, 00647983]]


/* WARNING: Removing unreachable block (ram,0x0064789f) */

bool FUN_006477c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint in_stack_ffffff40;
  uint local_ac;
  undefined4 local_a4;
  uint local_90;
  undefined4 local_88;
  uint local_74;
  undefined4 local_6c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b455f1;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dedc68,1);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dedc68,1);
  local_8._0_1_ = 1;
  FUN_00988f20(local_50);
  local_8._0_1_ = 2;
  puVar1 = (undefined4 *)FUN_00988f20(param_2);
  local_8._0_1_ = 3;
  FUN_00988f20(local_2c);
  local_8 = CONCAT31(local_8._1_3_,4);
  puVar2 = (undefined4 *)FUN_00988f20(param_3);
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  uVar3 = PHYSFS_getLastModTime(puVar1);
  local_34 = (undefined4)uVar3;
  if (0xf < (uint)puVar2[5]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  lVar4 = PHYSFS_getLastModTime(puVar2);
  param_1._3_1_ = lVar4 < CONCAT44((int)((ulonglong)uVar3 >> 0x20),local_34);
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c);
  }
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  if (local_74 < 0x10) {
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_stack_ffffff40);
    }
    if (local_18 < 0x10) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (local_3c < 0x10) {
        ExceptionList = local_10;
        return (bool)param_1._3_1_;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0],in_stack_ffffff40 & 0xffffff00);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_88);
}

