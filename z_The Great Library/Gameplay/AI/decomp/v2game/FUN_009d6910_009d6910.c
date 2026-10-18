// FUN_009d6910 @ 009d6910 body=[[009d6910, 009d69a2]]


undefined4 * FUN_009d6910(undefined4 *param_1)

{
  undefined4 *puVar1;
  _Locimp *p_Var2;
  int iVar3;
  _Lockit local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a7bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3b478;
  std::_Mutex::_Mutex((_Mutex *)(param_1 + 1));
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_00aae9af(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    p_Var2 = std::locale::_Init();
    *puVar1 = p_Var2;
    iVar3 = FUN_00aad69f();
    std::_Lockit::_Lockit(local_14,0);
    if (*(int *)(iVar3 + 4) != -1) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    }
    FUN_00aad9f1();
  }
  param_1[0xe] = puVar1;
  FUN_009d6af0();
  ExceptionList = local_10;
  return param_1;
}

