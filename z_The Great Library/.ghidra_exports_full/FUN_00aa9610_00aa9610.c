// FUN_00aa9610 @ 00aa9610 body=[[00aa9610, 00aa964c]]


void FUN_00aa9610(undefined4 param_1)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    do {
      lua_pushlightuserdata(param_1,uVar1 + in_ECX);
      lua_pushnil(param_1);
      lua_rawset(param_1,0xffffd8f0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x2c));
  }
  return;
}

