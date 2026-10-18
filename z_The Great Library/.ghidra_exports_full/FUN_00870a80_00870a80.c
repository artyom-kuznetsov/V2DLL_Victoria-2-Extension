// FUN_00870a80 @ 00870a80 body=[[00870a80, 00870ac2] [00870ac6, 00870ade]]


void FUN_00870a80(void)

{
  undefined4 local_24 [5];
  uint local_10;
  TypeDescriptor *local_8;
  
  local_8 = &CFixedPoint::RTTI_Type_Descriptor;
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

