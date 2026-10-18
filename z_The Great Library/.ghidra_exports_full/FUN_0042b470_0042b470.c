// FUN_0042b470 @ 0042b470 body=[[0042b470, 0042b50e]]


void FUN_0042b470(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c4 [180];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb93fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
  }
  iVar1 = FUN_00aae9af(0xb4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00424d90();
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  FUN_00425610(local_c4);
  local_8 = 0;
  FUN_0042b510();
  local_8 = 0xffffffff;
  FUN_00424eb0(local_c4);
  FUN_00426570(*(undefined4 *)(param_1 + 8));
  ExceptionList = local_10;
  return;
}

