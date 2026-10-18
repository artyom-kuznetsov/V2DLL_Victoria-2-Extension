// FUN_005dafd0 @ 005dafd0 body=[[005dafd0, 005db190] [005db1ab, 005db1d9]]


void FUN_005dafd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_dc [124];
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58bf6;
  local_14 = ExceptionList;
  if (param_2 < 0x4e9) {
    if (param_2 == 0x4e8) {
      ExceptionList = &local_14;
      puVar2 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_104);
      *(undefined4 *)(in_ECX + 0xc) = *puVar2;
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x174) {
      ExceptionList = &local_14;
      puVar2 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_fc);
      *(undefined4 *)(in_ECX + 8) = *puVar2;
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x374) {
      ExceptionList = &local_14;
      puVar2 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_dc);
      *(undefined4 *)(in_ECX + 0x14) = *puVar2;
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 == 0x4e9) {
    ExceptionList = &local_14;
    puVar2 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_100);
    *(undefined4 *)(in_ECX + 0x10) = *puVar2;
    ExceptionList = local_14;
    return;
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350("unitadjuster.cpp",0x10);
  local_c = 0;
  uVar3 = FUN_004015b0(local_f8,0x26,0x10004);
  local_c._0_1_ = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  puVar2 = (undefined4 *)(iVar1 + 0x14);
  FUN_00987d50(uVar3,"unknown key \'",0xd,0);
  uVar3 = FUN_00418e30(uVar3,param_1 + 0x24,extraout_ECX,"\' in file ");
  uVar3 = FUN_00418e30(uVar3);
  if (0xf < *(uint *)(iVar1 + 0x28)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  uVar3 = FUN_00418e30(uVar3,puVar2);
  FUN_00401280(uVar3);
  local_c = (uint)local_c._1_3_ << 8;
  FUN_00987ac0(appuStack_60);
  appuStack_60[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_60);
  if (local_e4 < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_f8[0]);
}

