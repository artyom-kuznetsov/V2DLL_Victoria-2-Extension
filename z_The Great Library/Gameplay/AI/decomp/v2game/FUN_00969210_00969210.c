// FUN_00969210 @ 00969210 body=[[00969210, 009692b2]]


void FUN_00969210(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  uVar6 = 0;
  uVar5 = 0;
  uVar2 = 0;
  if (DAT_01258a1c != 0) {
    do {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x44) + uVar2 * 4);
      if (uVar5 < uVar1) {
        uVar5 = uVar1;
        uVar6 = uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_01258a1c);
  }
  ExceptionList = &local_10;
  if (DAT_0125ea24 == 0) {
    ExceptionList = &local_10;
    iVar3 = FUN_00aae9af(0x40);
    local_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00566260();
    }
    local_8 = 0xffffffff;
    FUN_00567740(uVar4);
  }
  if (*(int *)(*(int *)(DAT_0125ea24 + 0x1c) + uVar6 * 4) == 0) {
    FUN_005676d0();
  }
  ExceptionList = local_10;
  return;
}

