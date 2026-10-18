// FUN_00548f50 @ 00548f50 body=[[00548f50, 00548fe4]]


void FUN_00548f50(void)

{
  undefined4 *puVar1;
  _Locimp *p_Var2;
  int iVar3;
  undefined4 *in_ECX;
  _Lockit local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b03b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  std::_Mutex::_Mutex((_Mutex *)(in_ECX + 1));
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
  in_ECX[0xe] = puVar1;
  FUN_00549030();
  ExceptionList = local_10;
  return;
}

