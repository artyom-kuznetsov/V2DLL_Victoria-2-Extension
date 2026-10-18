// FUN_004461b0 @ 004461b0 body=[[004461b0, 004461d2] [004461d6, 004461f0] [004461f4, 004461fa]]


void FUN_004461b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMobilizationSchedule::vftable;
  FUN_00849e90();
  if (0xf < (uint)in_ECX[0xd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[8]);
  }
  in_ECX[0xd] = 0xf;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 8) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

