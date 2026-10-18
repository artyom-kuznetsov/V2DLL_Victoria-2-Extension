// FUN_00869cd0 @ 00869cd0 body=[[00869cd0, 00869d51]]


void FUN_00869cd0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  FUN_00401000();
  iVar1 = FUN_00b31c00();
  __alldiv((longlong)*param_3 * (longlong)iVar1,1000,0);
  lua_pushnumber();
  return;
}

