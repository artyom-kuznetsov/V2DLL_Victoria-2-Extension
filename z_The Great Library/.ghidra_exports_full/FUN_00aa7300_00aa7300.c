// FUN_00aa7300 @ 00aa7300 body=[[00aa7300, 00aa732e]]


void FUN_00aa7300(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_00aa7260(param_1);
  lua_rawgeti(param_1,0xffffffff,*(undefined4 *)(*in_ECX + 8));
  lua_remove(param_1,0xfffffffe);
  return;
}

