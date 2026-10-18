// FUN_005f71a0 @ 005f71a0 body=[[005f71a0, 005f72cc] [005f72d0, 005f72e6]]


void FUN_005f71a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  undefined4 local_fc;
  int local_f8;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0055c6c0(DAT_012587e4,&local_fc,param_1 + 4);
  *(undefined4 *)(in_ECX + 0x10) = local_fc;
  *(int *)(in_ECX + 0x14) = local_f8;
  if (local_f8 == 0) {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("warhistory.cpp",0xe);
    local_c = 0;
    uVar2 = FUN_004015b0(local_f4,0x146,0x10004);
    local_c._0_1_ = 1;
    iVar1 = *(int *)(in_ECX + 0xc);
    FUN_00987d50(uVar2,"Unknown countrytag for ",0x17,0);
    puVar3 = (undefined4 *)(iVar1 + 0x10);
    uVar2 = FUN_00418e30(uVar2,param_1 + 4,extraout_ECX," rem_defender in ");
    uVar2 = FUN_00418e30(uVar2);
    if (0xf < *(uint *)(iVar1 + 0x24)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    uVar2 = FUN_00418e30(uVar2,puVar3);
    FUN_00401280(uVar2);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

