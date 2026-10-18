// FUN_004f61c0 @ 004f61c0 body=[[004f61c0, 004f61fd] [004f6201, 004f6207]]


void FUN_004f61c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = std::ctype<char>::vftable;
  if ((int)in_ECX[5] < 1) {
    if ((int)in_ECX[5] < 0) {
      FUN_00aaea59(in_ECX[4]);
    }
  }
  else {
    _free((void *)in_ECX[4]);
  }
  *in_ECX = std::locale::facet::vftable;
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

