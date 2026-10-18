// FUN_00869c60 @ 00869c60 body=[[00869c60, 00869ccc]]


void FUN_00869c60(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  FUN_00401000();
  iVar1 = FUN_00b31c00();
  lua_pushnumber(param_1,(double)((float)(*param_3 - iVar1) / 1000.0));
  return;
}

