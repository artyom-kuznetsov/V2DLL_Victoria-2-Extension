// FUN_00789910 @ 00789910 body=[[00789910, 007899f0]]


void FUN_00789910(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  undefined4 uVar3;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4b7f6;
  pvStack_14 = ExceptionList;
  if (*(char *)(in_ECX + 0x94) == '\0') {
    ExceptionList = &pvStack_14;
    iVar1 = FUN_00aae9af(100);
    local_c = 1;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_005ab7f0();
      uVar3 = FUN_005e02a0(iVar1,uVar3);
    }
    piVar2 = *(int **)(DAT_012588e8 + 0xb24);
  }
  else {
    ExceptionList = &pvStack_14;
    iVar1 = FUN_00aae9af(100);
    uVar3 = 0;
    local_c = 0;
    if (iVar1 != 0) {
      uVar3 = FUN_005ab7f0();
      uVar3 = FUN_005e0b50(iVar1,uVar3);
    }
    piVar2 = *(int **)(DAT_012588e8 + 0xb24);
  }
  local_c = 0xffffffff;
  iVar1 = (**(code **)(*piVar2 + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  *(undefined1 *)(in_ECX + 100) = 1;
  *(undefined1 *)(*(int *)(in_ECX + 0x68) + 0xdb0) = 1;
  ExceptionList = pvStack_18;
  return;
}

