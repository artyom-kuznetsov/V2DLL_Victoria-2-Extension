// FUN_009884f0 @ 009884f0 body=[[009884f0, 0098851f] [00988523, 00988529]]


void FUN_009884f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e378b4;
  if (in_ECX[5] != 0) {
    _free((void *)in_ECX[4]);
  }
  *in_ECX = std::locale::facet::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

