// FUN_00ae6550 @ 00ae6550 body=[[00ae6550, 00ae657a] [00ae657e, 00ae6583]]


void FUN_00ae6550(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[1];
  *in_ECX = &PTR_FUN_00ddd998;
  in_ECX[1] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

