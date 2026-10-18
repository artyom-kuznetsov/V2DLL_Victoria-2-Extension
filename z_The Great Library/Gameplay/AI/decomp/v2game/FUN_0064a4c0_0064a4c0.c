// FUN_0064a4c0 @ 0064a4c0 body=[[0064a4c0, 0064a55b]]


void FUN_0064a4c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x158))();
  if (cVar1 != '\0') {
    iVar2 = FUN_00aae9af(0x5c);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0068b610(DAT_012588e8);
      uVar3 = FUN_0072cef0(iVar2,uVar3,0);
    }
    local_8 = 0xffffffff;
    iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x38))();
  ExceptionList = local_10;
  return;
}

