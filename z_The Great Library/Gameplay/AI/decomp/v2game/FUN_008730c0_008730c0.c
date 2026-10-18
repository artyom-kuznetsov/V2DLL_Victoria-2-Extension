// FUN_008730c0 @ 008730c0 body=[[008730c0, 0087312d] [00873131, 00873134]]


void FUN_008730c0(void)

{
  undefined4 local_24 [5];
  uint local_10;
  TypeDescriptor *local_8;
  
  lua_pushstring();
  FUN_008703e0();
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

