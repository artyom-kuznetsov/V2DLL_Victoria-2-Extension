// FUN_00697f20 @ 00697f20 body=[[00697f20, 00697f95]]


void FUN_00697f20(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x3c);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0072a7b0(iVar1);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0xdc) + 0x38) + 0x18))(uVar2);
  (**(code **)(**(int **)(in_ECX + 0xdc) + 8))(in_ECX + 0x30);
  ExceptionList = local_10;
  return;
}

