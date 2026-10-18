// FUN_00a09e20 @ 00a09e20 body=[[00a09e20, 00a09e3e] [00a09e42, 00a09e54] [00a09e58, 00a09e5f]]


void FUN_00a09e20(byte param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x1e];
  *in_ECX = &PTR_FUN_00e3ea84;
  if (iVar1 != 0) {
    FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  FUN_009fa970();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

