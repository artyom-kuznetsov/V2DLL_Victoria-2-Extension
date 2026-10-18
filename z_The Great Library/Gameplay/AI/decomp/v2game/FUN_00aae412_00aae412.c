// FUN_00aae412 @ 00aae412 body=[[00aae412, 00aae430] [00aae432, 00aae438]]


void FUN_00aae412(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = std::exception::vftable;
  std::exception::_Tidy(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

