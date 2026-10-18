// FUN_00401050 @ 00401050 body=[[00401050, 0040106b]]


void FUN_00401050(void)

{
  exception *in_ECX;
  
  std::exception::exception(in_ECX,(char **)&stack0x00000004);
  *(undefined ***)in_ECX = std::bad_alloc::vftable;
  return;
}

