// FUN_0072aab0 @ 0072aab0 body=[[0072aab0, 0072aad9] [0072aadd, 0072aaf7] [0072aafb, 0072ab02]]


void FUN_0072aab0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CSelectBookmark::vftable;
  FUN_00753c40();
  *in_ECX = CCommand::vftable;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

