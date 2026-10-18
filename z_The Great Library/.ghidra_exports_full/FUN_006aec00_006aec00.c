// FUN_006aec00 @ 006aec00 body=[[006aec00, 006aec95]]


void FUN_006aec00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_006aea10(in_ECX,param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_00aae9af(0x68);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_005de2b0(iVar2,iVar1,*(int *)(param_1 + 0x6c) == 1);
    }
    local_8 = 0xffffffff;
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  }
  ExceptionList = local_10;
  return;
}

