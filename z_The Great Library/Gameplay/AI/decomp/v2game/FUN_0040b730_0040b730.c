// FUN_0040b730 @ 0040b730 body=[[0040b730, 0040b754] [0040b758, 0040b782] [0040b786, 0040b78c]]


void FUN_0040b730(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CConfirmSavePlan::vftable;
  DAT_012586d4 = 0;
  if (0xf < (uint)in_ECX[0x21]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1c]);
  }
  in_ECX[0x21] = 0xf;
  in_ECX[0x20] = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  FUN_00640880();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

