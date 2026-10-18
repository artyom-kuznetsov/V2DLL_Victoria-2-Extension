// FUN_004486f0 @ 004486f0 body=[[004486f0, 0044872b] [0044872f, 00448735]]


void FUN_004486f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = std::numpunct<char>::vftable;
  FUN_00aaea59(in_ECX[2]);
  FUN_00aaea59(in_ECX[4]);
  FUN_00aaea59(in_ECX[5]);
  *in_ECX = std::locale::facet::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

