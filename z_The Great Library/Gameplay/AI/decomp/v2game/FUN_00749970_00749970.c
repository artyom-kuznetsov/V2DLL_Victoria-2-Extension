// FUN_00749970 @ 00749970 body=[[00749970, 00749a25]]


void FUN_00749970(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar3 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  if (*(int *)(*(int *)(in_ECX + 0x54) + 0x164) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(*(int *)(in_ECX + 0x54) + 0x15c);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x6c);
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af(0x48);
  local_c = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00584a30(iVar1,uVar2,*(undefined4 *)(iVar3 + 0xb5c),*(undefined4 *)(iVar3 + 0xb60));
  }
  local_c = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar2);
  FUN_00749870(in_ECX);
  ExceptionList = pvStack_18;
  return;
}

