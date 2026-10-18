// FUN_004712c0 @ 004712c0 body=[[004712c0, 00471305] [00471309, 0047131d] [00471321, 00471328]]


/* WARNING: Removing unreachable block (ram,0x004712dd) */
/* WARNING: Removing unreachable block (ram,0x004712e0) */

void FUN_004712c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CRallyPoint::vftable;
  if (in_ECX[4] != in_ECX[5]) {
    in_ECX[5] = in_ECX[4];
  }
  if (in_ECX[4] == 0) {
    in_ECX[4] = 0;
    in_ECX[5] = 0;
    in_ECX[6] = 0;
    if ((param_1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[4]);
}

