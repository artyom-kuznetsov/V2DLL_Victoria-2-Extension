// FUN_004c95f0 @ 004c95f0 body=[[004c95f0, 004c962e]]


void FUN_004c95f0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  
  uVar1 = *in_EAX;
  FUN_004c9ec0();
  uVar2 = *in_EAX;
  *unaff_ESI = uVar2;
  unaff_ESI[1] = 0xfffffffe;
  lua_pushvalue(uVar2,0xffffffff);
  uVar2 = luaL_ref(uVar2,0xffffd8f0);
  unaff_ESI[1] = uVar2;
  lua_settop(uVar1,0xfffffffe);
  return;
}

