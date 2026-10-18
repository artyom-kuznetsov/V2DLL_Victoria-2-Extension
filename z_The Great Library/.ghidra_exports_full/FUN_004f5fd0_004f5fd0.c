// FUN_004f5fd0 @ 004f5fd0 body=[[004f5fd0, 004f6099]]


undefined4 FUN_004f5fd0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  _Ctypevec *p_Var3;
  bool bVar4;
  _Ctypevec local_24;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  bVar4 = false;
  local_14 = (undefined4 *)0x0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af(0x18);
    local_8 = 0;
    local_14 = puVar1;
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
      *puVar1 = std::ctype<char>::vftable;
      p_Var3 = __Getctype(&local_24);
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)p_Var3;
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)&p_Var3->_Delfl;
    }
    local_8 = 0xffffffff;
    *param_1 = (int)puVar1;
    if (bVar4) {
      FUN_00445ea0();
    }
  }
  ExceptionList = local_10;
  return 2;
}

