// FUN_00448ea0 @ 00448ea0 body=[[00448ea0, 00448f4e]]


undefined4 FUN_00448ea0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b19c;
  local_10 = ExceptionList;
  bVar3 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af(0x18);
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
      local_8 = 2;
      *puVar1 = std::numpunct<char>::vftable;
      FUN_00448f50(puVar1);
    }
    *param_1 = (int)puVar1;
    local_8 = 0xffffffff;
    if (bVar3) {
      FUN_00445ea0();
    }
  }
  ExceptionList = local_10;
  return 4;
}

