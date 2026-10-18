// FUN_009b7950 @ 009b7950 body=[[009b7950, 009b7a9d] [009b7aa1, 009b7ab9]]


undefined4 FUN_009b7950(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
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
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    ExceptionList = &local_14;
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  DAT_00f20c14 = DAT_00f20c14 + 1;
  uVar1 = FUN_009b7610();
  if (DAT_01258a65 != '\0') {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("random.cpp",10);
    local_c = 0;
    uVar2 = FUN_004015b0(local_f4,0xf6,5);
    local_c._0_1_ = 1;
    FUN_00987d50(uVar2,&DAT_00e004e4,1,0);
    uVar2 = FUN_00455470(uVar2,param_1,param_2,&DAT_00ded950,param_2,param_2,extraout_ECX,
                         &DAT_00ded950,extraout_ECX,uVar1);
    uVar2 = FUN_00418e30(uVar2);
    uVar2 = FUN_00455470(uVar2);
    uVar2 = FUN_00418e30(uVar2);
    uVar2 = FUN_00455470(uVar2);
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
  return uVar1;
}

