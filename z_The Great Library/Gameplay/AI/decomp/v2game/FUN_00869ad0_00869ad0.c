// FUN_00869ad0 @ 00869ad0 body=[[00869ad0, 00869b20]]


void FUN_00869ad0(undefined4 param_1,int *param_2,float param_3)

{
  int iVar1;
  
  FUN_00401000((param_3 + 0.0005) * 1000.0);
  iVar1 = FUN_00b31c00();
  lua_pushboolean(param_1,*param_2 == iVar1);
  return;
}

