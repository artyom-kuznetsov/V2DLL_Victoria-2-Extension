// FUN_00992c60 @ 00992c60 body=[[00992c60, 00992c97] [00992c9b, 00992cb8] [00992cbc, 00992cc2]]


void FUN_00992c60(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e37dc0;
  if (in_ECX[0xc] != 0) {
    PHYSFS_close(in_ECX[0xc]);
    in_ECX[0xc] = 0;
  }
  *in_ECX = &PTR_FUN_00e3b540;
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[10] = 0xf;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

