// FUN_004c10d0 @ 004c10d0 body=[[004c10d0, 004c117b]]


void FUN_004c10d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0xc) = param_1;
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (DAT_01258734 == 0) {
    iVar1 = FUN_00aae9af(0x170);
    local_8 = 0;
    if (iVar1 == 0) {
      DAT_01258734 = 0;
    }
    else {
      DAT_01258734 = FUN_004de5f0(iVar1);
    }
  }
  local_8 = 0xffffffff;
  uVar2 = FUN_004dea30(DAT_01258734,uVar2);
  *(undefined4 *)(in_ECX + 8) = uVar2;
  if ((DAT_012588e8 != 0) && (*(int **)(DAT_012588e8 + 0xb24) != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
    FUN_00643950(*(undefined4 *)(in_ECX + 0x1c));
  }
  ExceptionList = local_10;
  return;
}

