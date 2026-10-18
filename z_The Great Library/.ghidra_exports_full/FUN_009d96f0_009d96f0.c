// FUN_009d96f0 @ 009d96f0 body=[[009d96f0, 009d9716] [009d971a, 009d9720]]


void FUN_009d96f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3b9b8;
  if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[1])(1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

