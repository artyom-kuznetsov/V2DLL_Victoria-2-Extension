// FUN_0042e250 @ 0042e250 body=[[0042e250, 0042e292]]


void FUN_0042e250(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *param_1;
  *in_ECX = iVar1;
  in_ECX[1] = -2;
  if (iVar1 != 0) {
    lua_rawgeti(iVar1,0xffffd8f0,param_1[1]);
    iVar1 = luaL_ref(*in_ECX,0xffffd8f0);
    in_ECX[1] = iVar1;
  }
  return;
}

