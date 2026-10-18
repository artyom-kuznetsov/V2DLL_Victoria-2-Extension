// FUN_00870610 @ 00870610 body=[[00870610, 00870688] [0087068c, 0087068f]]


void FUN_00870610(void)

{
  undefined4 local_24 [5];
  uint local_10;
  TypeDescriptor *local_8;
  
  lua_pushstring();
  lua_pushstring();
  lua_concat();
  lua_pushstring();
  lua_concat();
  lua_pushstring();
  local_8 = &.M::RTTI_Type_Descriptor;
  FUN_00aab050(local_24);
  lua_pushstring();
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_24[0]);
  }
  return;
}

