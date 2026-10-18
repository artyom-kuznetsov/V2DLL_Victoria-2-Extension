// FUN_0042d7e0 @ 0042d7e0 body=[[0042d7e0, 0042d81b]]


void FUN_0042d7e0(void)

{
  undefined4 uVar1;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  
  lua_pushvalue();
  *unaff_EDI = unaff_ESI;
  unaff_EDI[1] = 0xfffffffe;
  lua_pushvalue();
  uVar1 = luaL_ref();
  unaff_EDI[1] = uVar1;
  lua_settop();
  return;
}

