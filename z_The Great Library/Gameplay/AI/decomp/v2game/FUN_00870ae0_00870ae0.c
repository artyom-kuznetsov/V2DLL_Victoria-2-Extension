// FUN_00870ae0 @ 00870ae0 body=[[00870ae0, 00870b22] [00870b26, 00870b3e]]


void FUN_00870ae0(void)

{
  undefined4 local_24 [5];
  uint local_10;
  TypeDescriptor *local_8;
  
  local_8 = &CString::RTTI_Type_Descriptor;
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

