// FUN_00827cd0 @ 00827cd0 body=[[00827cd0, 00827cfa] [00827d04, 00827d28] [00827d32, 00827d4d]]


void FUN_00827cd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CAIArmy::vftable;
  FUN_004e9430();
  if (in_ECX[0x2f] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2f]);
  }
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  if (in_ECX[0x2b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2b]);
  }
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  FUN_00825ec0();
  return;
}

