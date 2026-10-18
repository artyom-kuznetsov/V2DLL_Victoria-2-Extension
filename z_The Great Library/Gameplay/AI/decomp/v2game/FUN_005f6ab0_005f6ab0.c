// FUN_005f6ab0 @ 005f6ab0 body=[[005f6ab0, 005f6baf] [005f6bb3, 005f6bc3]]


void FUN_005f6ab0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  int in_EDX;
  undefined4 *puVar3;
  undefined **local_7c [18];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5a3f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0055c6c0(DAT_012587e4,&local_18,in_EDX + 4);
  *(undefined4 *)(in_ECX + 0x10) = local_18;
  *(int *)(in_ECX + 0x14) = local_14;
  if (local_14 == 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("warhistory.cpp",0xe);
    local_8 = 0;
    FUN_004015b0(local_34,0xf3,0x10004);
    local_8._0_1_ = 1;
    iVar1 = *(int *)(in_ECX + 0xc);
    puVar3 = (undefined4 *)(iVar1 + 0x10);
    uVar2 = FUN_00987d20(in_EDX + 4,extraout_ECX," add_attacker in ");
    uVar2 = FUN_00418e30(uVar2);
    uVar2 = FUN_00418e30(uVar2);
    if (0xf < *(uint *)(iVar1 + 0x24)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    uVar2 = FUN_00418e30(uVar2,puVar3);
    FUN_00401280(uVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00987ac0(local_7c);
    local_7c[0] = std::ios_base::vftable;
    FUN_00aad52d(local_7c);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

