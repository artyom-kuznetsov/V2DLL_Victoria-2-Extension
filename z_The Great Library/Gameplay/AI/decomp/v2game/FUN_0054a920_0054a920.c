// FUN_0054a920 @ 0054a920 body=[[0054a920, 0054a9c2]]


undefined4 FUN_0054a920(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  bVar3 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af(8);
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
      bVar3 = true;
      puVar1[1] = 0;
      *puVar1 = std::codecvt<char,char,int>::vftable;
    }
    local_8 = 0xffffffff;
    *param_1 = (int)puVar1;
    if (bVar3) {
      FUN_00445ea0();
    }
  }
  ExceptionList = local_10;
  return 2;
}

