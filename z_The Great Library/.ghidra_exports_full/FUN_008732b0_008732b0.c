// FUN_008732b0 @ 008732b0 body=[[008732b0, 008732fd] [00873301, 00873327]]


void FUN_008732b0(void)

{
  undefined4 local_24 [5];
  uint local_10;
  TypeDescriptor *local_8;
  
  lua_pushstring();
  local_8 = &.M::RTTI_Type_Descriptor;
  FUN_00aab050(local_24);
  lua_pushstring();
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_24[0]);
  }
  lua_pushstring();
  FUN_008703e0();
  lua_pushstring();
  lua_concat();
  return;
}

