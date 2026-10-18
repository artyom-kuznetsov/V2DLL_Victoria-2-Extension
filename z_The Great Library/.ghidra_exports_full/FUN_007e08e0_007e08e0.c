// FUN_007e08e0 @ 007e08e0 body=[[007e08e0, 007e095c]]


undefined4 FUN_007e08e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b524bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_005c2ad0(param_2);
  iVar2 = FUN_00aae9af(0x14c);
  local_8 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_007ea410(iVar2,uVar1,param_3);
  }
  local_8 = 0xffffffff;
  (**(code **)(*unaff_EDI + 0x10))(uVar1);
  ExceptionList = local_10;
  return uVar1;
}

