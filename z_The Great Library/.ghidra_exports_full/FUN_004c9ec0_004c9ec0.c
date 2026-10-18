// FUN_004c9ec0 @ 004c9ec0 body=[[004c9ec0, 004c9f21]]


void FUN_004c9ec0(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[2];
  lua_rawgeti(*puVar1,0xffffd8f0,*(undefined4 *)(puVar1[2] + 4));
  lua_pushvalue(*puVar1,puVar1[1]);
  lua_gettable(*puVar1,0xfffffffe);
  lua_remove(*puVar1,0xfffffffe);
  lua_pushvalue(*unaff_EDI,unaff_EDI[1]);
  lua_gettable(*unaff_EDI,0xfffffffe);
  lua_remove(*unaff_EDI,0xfffffffe);
  return;
}

