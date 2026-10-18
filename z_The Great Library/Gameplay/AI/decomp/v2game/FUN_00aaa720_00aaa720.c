// FUN_00aaa720 @ 00aaa720 body=[[00aaa720, 00aaa77b]]


void FUN_00aaa720(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  iVar1 = *param_1;
  iVar3 = -2;
  if (iVar1 != 0) {
    lua_rawgeti(iVar1,0xffffd8f0,param_1[1]);
    iVar3 = luaL_ref(iVar1,0xffffd8f0);
  }
  iVar2 = *in_ECX;
  *in_ECX = iVar1;
  iVar1 = in_ECX[1];
  in_ECX[1] = iVar3;
  if ((iVar2 != 0) && (iVar1 != -2)) {
    luaL_unref(iVar2,0xffffd8f0,iVar1);
  }
  return;
}

