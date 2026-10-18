// FUN_008e5490 @ 008e5490 body=[[008e5490, 008e554c] [008e5550, 008e560c] [008e5610, 008e5652]]


undefined4 FUN_008e5490(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9a5b6;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x10) < 1) {
        return 0;
      }
      ExceptionList = &local_10;
      if (DAT_0131bb34 == 0) {
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x188);
        local_8 = 0;
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_0041a160();
        }
        local_8 = 0xffffffff;
        FUN_00423700(uVar3);
      }
      for (iVar1 = *(int *)(in_ECX + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
        iVar2 = FUN_005c2ad0(iVar1);
        if (iVar2 == 0) {
          iVar2 = FUN_0096bb70();
        }
        if (*(char *)(iVar2 + 0x50) != '\0') {
          iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
          goto LAB_008e559a;
        }
      }
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 0x1a8;
    }
    else {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4);
      ExceptionList = &local_10;
LAB_008e559a:
      iVar1 = *(int *)(iVar1 + 0x188) + 200;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x12e8;
    ExceptionList = &local_10;
  }
  if (iVar1 != 0) {
    if (DAT_0131bb34 == 0) {
      iVar2 = FUN_00aae9af(0x188);
      local_8 = 1;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0041a160();
      }
      local_8 = 0xffffffff;
      FUN_00423700(uVar3);
    }
    iVar2 = *(int *)(in_ECX + 0x1c);
    while( true ) {
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return 1;
      }
      iVar4 = FUN_005c2ad0(iVar2);
      if (iVar4 == 0) {
        iVar4 = FUN_0096bb70();
      }
      if ((*(char *)(iVar4 + 0x40) != '\0') &&
         (*(int *)(*(int *)(iVar1 + 0x5c) + *(int *)(iVar4 + 0x28) * 4) == 0)) break;
      iVar2 = *(int *)(iVar2 + 0x20);
    }
  }
  ExceptionList = local_10;
  return 0;
}

