// FUN_008e0fe0 @ 008e0fe0 body=[[008e0fe0, 008e10e2] [008e10e6, 008e11bb] [008e11bf, 008e11d5]]


void FUN_008e0fe0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint auStack_f8 [4];
  undefined4 uStack_e8;
  uint uStack_e4;
  int local_dc;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b589ef;
  local_14 = ExceptionList;
  if (param_1 == 0x405) {
    ExceptionList = &local_14;
    *(undefined1 *)(in_ECX + 0x18) = 1;
    uVar2 = FUN_005676d0();
    *(undefined4 *)(in_ECX + 0x1c) = uVar2;
    ExceptionList = local_14;
    return;
  }
  pcVar3 = &stack0x00000008;
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  local_c = 0;
  if (DAT_0125ea24 == 0) {
    local_dc = FUN_00aae9af(0x40);
    local_c._0_1_ = 1;
    if (local_dc == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00566260();
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00567740(uVar2);
  }
  iVar4 = FUN_005677b0(local_114);
  if (iVar4 == 0) {
    iVar4 = FUN_005676d0();
  }
  *(int *)(in_ECX + 0x1c) = iVar4;
  local_c = 0xffffffff;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_114[0]);
  }
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))();
  if (cVar1 == '\0') {
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    auStack_f8[0] = auStack_f8[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c = 2;
    uVar2 = FUN_004015b0(auStack_f8,0x138b,0x10004);
    local_c._0_1_ = 3;
    FUN_00987d50(uVar2,"Invalid religion ",0x11,0);
    uVar2 = FUN_00418e30(uVar2,&stack0x00000008,extraout_ECX," in trigger");
    uVar2 = FUN_00418e30(uVar2);
    FUN_00401280(uVar2);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_f8[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

