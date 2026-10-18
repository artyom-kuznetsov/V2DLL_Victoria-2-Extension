// FUN_00b19ee0 @ 00b19ee0 body=[[00b19ee0, 00b19efb]]


void FUN_00b19ee0(void)

{
  int in_ECX;
  
  if (*(FILE **)(in_ECX + 0x10) != (FILE *)0x0) {
    _fclose(*(FILE **)(in_ECX + 0x10));
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  return;
}

