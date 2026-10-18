// FUN_008704a0 @ 008704a0 body=[[008704a0, 008704e2] [008704e6, 008704fe]]


void FUN_008704a0(void)

{
  undefined4 local_24 [5];
  uint local_10;
  TypeDescriptor *local_8;
  
  local_8 = &CEU3Date::RTTI_Type_Descriptor;
  FUN_00aab050(local_24);
  lua_pushstring();
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_24[0]);
  }
  lua_pushstring();
  lua_concat();
  return;
}

