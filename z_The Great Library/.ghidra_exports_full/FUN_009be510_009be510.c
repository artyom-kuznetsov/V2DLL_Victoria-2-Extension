// FUN_009be510 @ 009be510 body=[[009be510, 009be707] [009be70b, 009be745]]


undefined4 FUN_009be510(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_cc [4];
  int local_c8;
  undefined4 local_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  undefined1 local_a4 [144];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5dbd6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  piVar1 = (int *)FUN_00a45090(param_3);
  if (*piVar1 != 0) {
    puVar4 = (undefined4 *)FUN_00a45090(param_3);
    ExceptionList = local_14;
    return *puVar4;
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_c = 0;
  if (*(char *)(param_1 + 0x48) != '\0') {
    local_cc[0] = 0x5c;
    local_c8 = FUN_0098a0d0(local_cc);
    if (local_c8 == -1) {
      local_c8 = FUN_00989290(0x2f,0xffffffff);
    }
    if ((0 < local_c8) && (local_c8 < *(int *)(param_2 + 0x10))) {
      FUN_009885d0();
      local_c._0_1_ = 2;
      local_c4 = FUN_009895f0(*(undefined4 *)(param_2 + 0x10));
      local_c._0_1_ = 3;
      FUN_009895f0(local_c8);
      local_c._0_1_ = 4;
      FUN_00988f20(local_a4);
      local_c._0_1_ = 5;
      uVar2 = FUN_00988f20(local_c4);
      local_c._0_1_ = 6;
      FUN_00408ed0(uVar2,0,0xffffffff);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00408ad0();
      iVar3 = FUN_009be910(local_c0,param_4);
      if (iVar3 == 0) {
        FUN_00408ed0(param_2,0,0xffffffff);
      }
    }
  }
  local_c4 = FUN_009be910(local_c0,param_4);
  FUN_0068f390();
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  puVar4 = (undefined4 *)FUN_00a45090(param_3);
  *puVar4 = *(undefined4 *)(param_1 + 0x44);
  FUN_00a840b0();
  FUN_00a840b0();
  if (local_ac < 0x10) {
    ExceptionList = local_14;
    return *(undefined4 *)(param_1 + 0x44);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_c0[0]);
}

