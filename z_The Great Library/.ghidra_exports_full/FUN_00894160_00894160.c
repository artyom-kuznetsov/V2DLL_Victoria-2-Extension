// FUN_00894160 @ 00894160 body=[[00894160, 0089425a]]


void FUN_00894160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_28;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  local_14 = ExceptionList;
  if (*(char *)(in_ECX + 0x20) != '\0') {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    if (DAT_0131bb34 == 0) {
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af(0x188);
      local_c = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0041a160();
      }
      FUN_00423700(uVar4);
    }
    iVar3 = DAT_012587e4;
    local_24 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (0 < local_24) {
      local_28 = 0;
      do {
        iVar2 = *(int *)(local_28 + *(int *)(iVar1 + 0x194));
        while (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x6c) =
               *(undefined4 *)(*(int *)(*(int *)(iVar3 + 4) + *(int *)(iVar1 + 300) * 4) + 0xe64);
          iVar2 = *(int *)(iVar2 + 0x27c);
        }
        local_28 = local_28 + 0x10;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  ExceptionList = local_14;
  return;
}

