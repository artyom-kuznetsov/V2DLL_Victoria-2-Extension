// FUN_0080e570 @ 0080e570 body=[[0080e570, 0080e592] [0080e596, 0080e59c]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0080e570(byte param_1)

{
  undefined4 *in_ECX;
  
  _DAT_012589e8 = _DAT_012589e8 + -1;
  *in_ECX = CProvinceWaterObject::vftable;
  FUN_007d9930();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

