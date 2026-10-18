// FUN_00448df0 @ 00448df0 body=[[00448df0, 00448e9d]]


undefined4 FUN_00448df0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  _Cvtvec *p_Var3;
  undefined4 extraout_EDX;
  bool bVar4;
  _Cvtvec *unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  bVar4 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af(0x10);
    local_8 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar2 = *(int *)(*param_2 + 0x18);
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      FUN_00445e00(iVar2);
      bVar4 = true;
      puVar1[1] = 0;
      *puVar1 = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      p_Var3 = __Getcvt(unaff_ESI);
      puVar1[2] = p_Var3;
      puVar1[3] = extraout_EDX;
    }
    local_8 = 0xffffffff;
    *param_1 = (int)puVar1;
    if (bVar4) {
      FUN_00445ea0();
    }
  }
  ExceptionList = local_10;
  return 4;
}

