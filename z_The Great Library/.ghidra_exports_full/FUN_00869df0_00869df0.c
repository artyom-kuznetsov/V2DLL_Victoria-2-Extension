// FUN_00869df0 @ 00869df0 body=[[00869df0, 00869e40]]


void FUN_00869df0(undefined4 param_1,float param_2,int *param_3)

{
  int iVar1;
  
  FUN_00401000((param_2 + 0.0005) * 1000.0);
  iVar1 = FUN_00b31c00();
  lua_pushboolean(param_1,*param_3 < iVar1);
  return;
}

