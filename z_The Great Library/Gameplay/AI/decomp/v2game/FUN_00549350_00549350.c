// FUN_00549350 @ 00549350 body=[[00549350, 005493ef]]


void FUN_00549350(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Lockit local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41a68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_00446040(&local_14);
  local_8 = 0;
  piVar3 = (int *)FUN_00549710(uVar2);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    std::_Lockit::_Lockit(local_18,0);
    iVar1 = *(int *)(local_14 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(local_14 + 4) = iVar1 + -1;
    }
    iVar1 = *(int *)(local_14 + 4);
    FUN_00aad9f1();
    puVar4 = (undefined4 *)(~-(uint)(iVar1 != 0) & local_14);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  (**(code **)(*piVar3 + 0x18))(param_1);
  ExceptionList = local_10;
  return;
}

