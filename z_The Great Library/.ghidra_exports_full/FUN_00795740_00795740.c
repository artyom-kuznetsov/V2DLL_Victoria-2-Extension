// FUN_00795740 @ 00795740 body=[[00795740, 00795826]]


void FUN_00795740(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*unaff_ESI + 0x18) + 0x38))();
  if (*(int *)(unaff_ESI[1] + 0x40) == 0) {
    iVar1 = FUN_00aae9af(100);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_005e02a0(iVar1,unaff_ESI[1]);
    }
    local_8 = 0xffffffff;
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  }
  if (*(int *)(unaff_ESI[2] + 0x40) == 0) {
    iVar1 = FUN_00aae9af(100);
    local_8 = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_005e02a0(iVar1,unaff_ESI[2]);
    }
    local_8 = 0xffffffff;
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  }
  *(undefined1 *)(unaff_ESI + 3) = 0;
  ExceptionList = local_10;
  return;
}

