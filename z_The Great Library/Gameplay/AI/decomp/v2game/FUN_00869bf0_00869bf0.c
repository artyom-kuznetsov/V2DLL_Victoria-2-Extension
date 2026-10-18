// FUN_00869bf0 @ 00869bf0 body=[[00869bf0, 00869c5e]]


void FUN_00869bf0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_3;
  FUN_00401000();
  iVar2 = FUN_00b31c00();
  lua_pushnumber(param_1,(double)((float)(iVar2 + iVar1) / 1000.0));
  return;
}

