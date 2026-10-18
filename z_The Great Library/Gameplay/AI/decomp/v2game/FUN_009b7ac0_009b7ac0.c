// FUN_009b7ac0 @ 009b7ac0 body=[[009b7ac0, 009b7c5a] [009b7c5e, 009b7c75]]


void FUN_009b7ac0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *unaff_EDI;
  undefined8 uVar3;
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
  iVar1 = FUN_009b7610();
  iVar1 = (iVar1 % 1000) * 1000;
  uVar3 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
  uVar2 = __alldiv(uVar3,1000000,0);
  *unaff_EDI = uVar2;
  if (DAT_01258a65 != '\0') {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("random.cpp",10);
    local_c = 0;
    uVar2 = FUN_004015b0(local_f4,0x10d,5);
    local_c._0_1_ = 1;
    FUN_00987d50(uVar2,"Random called from ",0x13,0);
    uVar2 = FUN_00455470(uVar2,param_1,extraout_ECX,&DAT_00ded950,extraout_ECX,0,extraout_ECX,
                         &DAT_00ded950);
    uVar2 = FUN_00418e30(uVar2);
    uVar2 = FUN_00455470(uVar2);
    uVar2 = FUN_00418e30(uVar2);
    uVar2 = FUN_0048b410(uVar2);
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

