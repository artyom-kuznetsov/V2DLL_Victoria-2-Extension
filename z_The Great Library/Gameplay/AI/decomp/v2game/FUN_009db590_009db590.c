// FUN_009db590 @ 009db590 body=[[009db590, 009db652] [009db656, 009db72a] [009db72e, 009db980]]


void FUN_009db590(undefined4 *param_1)

{
  size_t sVar1;
  undefined4 *puVar2;
  size_t sVar3;
  int in_ECX;
  int iVar4;
  uint local_174;
  undefined1 local_12c [16];
  undefined4 local_11c;
  undefined4 local_118;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  undefined **local_f0 [16];
  int local_b0;
  undefined **local_ac;
  undefined **local_60;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4efbc;
  local_14 = ExceptionList;
  if (*(char *)(in_ECX + 0xc) == '\0') {
    sVar1 = param_1[4];
    puVar2 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    ExceptionList = &local_14;
    sVar3 = _fwrite(puVar2,1,sVar1,*(FILE **)(in_ECX + 0x34));
    if (sVar1 != sVar3) {
      local_118 = 0xf;
      local_11c = 0;
      local_12c[0] = 0;
      FUN_00409350();
      local_c = 7;
      FUN_00409350();
      local_c._0_1_ = 8;
      FUN_00988f20(param_1);
      FUN_009d77e0(0xce,local_12c);
      local_c._0_1_ = 9;
      FUN_00408ed0();
      local_c._0_1_ = 10;
      FUN_00408ed0();
      local_c = CONCAT31(local_c._1_3_,9);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_009d6030();
    local_c = 0;
    iVar4 = 0;
    if (0 < (int)param_1[4]) {
      do {
        FUN_009d6b50();
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_1[4]);
    }
    puVar2 = (undefined4 *)FUN_009dc8e0();
    sVar1 = param_1[4];
    if (7 < (uint)puVar2[5]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    sVar3 = _fwrite(puVar2,2,sVar1,*(FILE **)(in_ECX + 0x34));
    if (7 < local_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (sVar1 != sVar3) {
      FUN_00409350();
      local_c._0_1_ = 1;
      local_118 = 0xf;
      local_11c = 0;
      local_12c[0] = 0;
      FUN_00409350();
      local_c._0_1_ = 2;
      FUN_00988f20();
      local_c._0_1_ = 3;
      FUN_00408ed0(local_110,0,0xffffffff);
      FUN_009e7a90(local_f0,199);
      local_f0[0] = &PTR_FUN_00e37db4;
      if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0xf;
      local_100 = 0;
      local_110[0] = local_110[0] & 0xffffff00;
      local_c._0_1_ = 4;
      FUN_00408ed0();
      local_c._0_1_ = 5;
      FUN_00408ed0();
      local_c = CONCAT31(local_c._1_3_,4);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
    *(undefined ***)((int)&local_b0 + *(int *)(local_b0 + 4)) = &PTR_FUN_00e3b4f4;
    local_c = 6;
    local_ac = &PTR_FUN_00e3b4b8;
    FUN_009d68b0();
    FUN_009d5b00();
    local_c = 0xffffffff;
    *(undefined ***)((int)&local_b0 + *(int *)(local_b0 + 4)) = &PTR_FUN_00e3b4b4;
    local_60 = std::ios_base::vftable;
    FUN_00aad52d();
  }
  ExceptionList = local_14;
  return;
}

