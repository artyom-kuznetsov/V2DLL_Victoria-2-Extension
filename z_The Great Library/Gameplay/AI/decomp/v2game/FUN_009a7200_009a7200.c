// FUN_009a7200 @ 009a7200 body=[[009a7200, 009a7229] [009a722d, 009a7233]]


void FUN_009a7200(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = DAT_01258a8c;
  *in_ECX = &PTR_FUN_00e38ad0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

