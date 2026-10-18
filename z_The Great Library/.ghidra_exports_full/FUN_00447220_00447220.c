// FUN_00447220 @ 00447220 body=[[00447220, 00447239]]


void FUN_00447220(void)

{
  undefined4 *in_ECX;
  
  if ((void *)*in_ECX != (void *)0x0) {
    _free((void *)*in_ECX);
  }
  *in_ECX = 0;
  return;
}

