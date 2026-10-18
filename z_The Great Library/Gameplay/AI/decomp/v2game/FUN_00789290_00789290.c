// FUN_00789290 @ 00789290 body=[[00789290, 00789381]]


void FUN_00789290(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af(0x8c);
  uVar3 = 0;
  local_c = 0;
  if (iVar1 == 0) goto LAB_00789333;
  iVar2 = FUN_00967f50();
  if (iVar2 == 0) {
    uVar3 = FUN_005b6140();
  }
  else {
    uVar3 = FUN_00967f50();
  }
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x6c) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 == 0) {
LAB_00789324:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_009c1d40();
    if (iVar2 == 0) goto LAB_00789324;
    iVar2 = iVar2 + -8;
  }
  *(int *)(in_ECX + 0x68) = iVar2;
  uVar3 = FUN_005dd5b0(iVar1,iVar2,uVar3);
LAB_00789333:
  local_c = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  (**(code **)(*(int *)(**(int **)(in_ECX + 0xe0) + 0x18) + 0x38))();
  *(undefined1 *)(in_ECX + 100) = 1;
  ExceptionList = pvStack_18;
  return;
}

