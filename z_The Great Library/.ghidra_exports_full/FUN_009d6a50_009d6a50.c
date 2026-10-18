// FUN_009d6a50 @ 009d6a50 body=[[009d6a50, 009d6ae9]]


void FUN_009d6a50(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  _Lockit local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41a68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00446040(&local_14);
  local_8 = 0;
  piVar2 = (int *)FUN_0098a750();
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    std::_Lockit::_Lockit(local_18,0);
    iVar1 = *(int *)(local_14 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(local_14 + 4) = iVar1 + -1;
    }
    iVar1 = *(int *)(local_14 + 4);
    FUN_00aad9f1();
    puVar3 = (undefined4 *)(~-(uint)(iVar1 != 0) & local_14);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  (**(code **)(*piVar2 + 0x28))(0x20);
  ExceptionList = local_10;
  return;
}

