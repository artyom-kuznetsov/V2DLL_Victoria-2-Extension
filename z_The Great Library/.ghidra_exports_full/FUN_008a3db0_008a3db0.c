// FUN_008a3db0 @ 008a3db0 body=[[008a3db0, 008a3f09]]


void FUN_008a3db0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb7b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0125eadc == 0) {
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af(0x9c);
    local_c = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00576fe0(iVar3);
    }
    local_c = 0xffffffff;
    FUN_0057ab10(uVar4);
  }
  iVar3 = FUN_0057b0a0(in_ECX + 0x20);
  if (iVar3 != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xbcc);
    iVar2 = *(int *)(iVar3 + 0x2e4);
    if ((*(int *)(*(int *)(iVar1 + 0x2b8) + iVar2 * 4) != 1) &&
       (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) {
      uVar4 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
      uVar5 = FUN_00469980(iVar3,*(int *)(iVar1 + 0x2d8) + 0x1c);
      FUN_00457b00(uVar4,uVar5);
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x2b8) + iVar2 * 4) = 1;
    FUN_00568dc0(*(undefined4 *)
                  (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xbcc),iVar3
                 ,1000);
    FUN_00508330(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  ExceptionList = local_14;
  return;
}

