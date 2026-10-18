// FUN_0086e200 @ 0086e200 body=[[0086e200, 0086e242] [0086e246, 0086e25e]]


void FUN_0086e200(void)

{
  undefined4 local_24 [5];
  uint local_10;
  TypeDescriptor *local_8;
  
  local_8 = &CArray<CCountry*>::RTTI_Type_Descriptor;
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

