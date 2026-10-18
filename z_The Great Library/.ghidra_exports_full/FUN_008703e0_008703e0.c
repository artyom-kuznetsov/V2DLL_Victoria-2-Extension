// FUN_008703e0 @ 008703e0 body=[[008703e0, 00870422] [00870426, 0087043e]]


void FUN_008703e0(void)

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

