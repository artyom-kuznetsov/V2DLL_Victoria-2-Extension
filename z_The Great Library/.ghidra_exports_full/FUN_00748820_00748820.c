// FUN_00748820 @ 00748820 body=[[00748820, 00748944]]


void FUN_00748820(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4b7f6;
  local_14 = ExceptionList;
  iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x188);
  ExceptionList = &local_14;
  cVar1 = FUN_004d1e40();
  if (cVar1 != '\0') {
    iVar2 = FUN_00aae9af(0x70);
    local_c = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0073b0c0(iVar2,*(undefined4 *)(DAT_012588e8 + 0xb24),in_ECX);
    }
    local_c = 0xffffffff;
    FUN_006480e0(uVar3);
    ExceptionList = local_14;
    return;
  }
  if ((DAT_012586f1 != '\0') || ((iVar2 = *(int *)(iVar2 + 0x84), 0 < iVar2 && (iVar2 == 1)))) {
    iVar2 = FUN_00aae9af(0x6c);
    local_c = 1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_005853e0(iVar2,*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x188),
                           *(undefined4 *)(DAT_012588e8 + 0xb5c),
                           *(undefined4 *)(DAT_012588e8 + 0xb60));
    }
    local_c = 0xffffffff;
    iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
  }
  ExceptionList = local_14;
  return;
}

