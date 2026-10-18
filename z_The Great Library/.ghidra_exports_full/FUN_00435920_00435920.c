// FUN_00435920 @ 00435920 body=[[00435920, 00435955]]


undefined4 * FUN_00435920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  uVar1 = *in_ECX;
  *param_1 = uVar1;
  iVar2 = lua_gettop(uVar1);
  param_1[1] = iVar2 + 1;
  uVar1 = *param_2;
  param_1[2] = in_ECX;
  lua_pushstring(*param_1,uVar1);
  return param_1;
}

