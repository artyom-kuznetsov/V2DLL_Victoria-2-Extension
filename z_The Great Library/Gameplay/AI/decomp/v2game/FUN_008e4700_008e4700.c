// FUN_008e4700 @ 008e4700 body=[[008e4700, 008e4829] [008e482d, 008e483f]]


void FUN_008e4700(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5e2fe;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_01258a2c == 0) {
    ExceptionList = &local_14;
    iVar2 = FUN_00aae9af(0x3f0);
    local_c = 0;
    if (iVar2 == 0) {
      DAT_01258a2c = 0;
    }
    else {
      DAT_01258a2c = FUN_0096bbf0();
    }
  }
  local_c = 0xffffffff;
  *(int *)(in_ECX + 0x1c) = DAT_01258a2c;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    ExceptionList = local_14;
    return;
  }
  pcVar3 = &stack0x00000008;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  local_c = 1;
  if (DAT_0131bb34 == 0) {
    iVar2 = FUN_00aae9af(0x188);
    local_c._0_1_ = 2;
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0041a160();
    }
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00423700(uVar4);
  }
  iVar2 = FUN_005c2ad0(local_34);
  if (iVar2 == 0) {
    iVar2 = FUN_0096bb70();
  }
  *(int *)(in_ECX + 0x1c) = iVar2;
  if (local_20 < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

