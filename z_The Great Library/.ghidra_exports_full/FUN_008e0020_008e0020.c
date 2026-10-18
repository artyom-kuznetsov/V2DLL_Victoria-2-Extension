// FUN_008e0020 @ 008e0020 body=[[008e0020, 008e00f9] [008e00fd, 008e01d1] [008e01d5, 008e01eb]]


void FUN_008e0020(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint auStack_f4 [4];
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b90581;
  local_14 = ExceptionList;
  if (param_1 == 0x405) {
    ExceptionList = &local_14;
    *(undefined1 *)(in_ECX + 0x18) = 1;
    uVar2 = FUN_00561180();
    *(undefined4 *)(in_ECX + 0x1c) = uVar2;
    ExceptionList = local_14;
    return;
  }
  pcVar3 = &stack0x00000008;
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  local_c = 0;
  iVar4 = FUN_004a2f70(local_110);
  if (iVar4 == 0) {
    uVar2 = FUN_00561180();
  }
  else {
    uVar2 = FUN_004a2f70(local_110);
  }
  *(undefined4 *)(in_ECX + 0x1c) = uVar2;
  local_c = 0xffffffff;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_110[0]);
  }
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))();
  if (cVar1 == '\0') {
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    auStack_f4[0] = auStack_f4[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c = 1;
    uVar2 = FUN_004015b0(auStack_f4,0x1329,0x10004);
    local_c._0_1_ = 2;
    FUN_00987d50(uVar2,"Invalid culture ",0x10,0);
    uVar2 = FUN_00418e30(uVar2,&stack0x00000008,extraout_ECX," in trigger");
    uVar2 = FUN_00418e30(uVar2);
    FUN_00401280(uVar2);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_f4[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

