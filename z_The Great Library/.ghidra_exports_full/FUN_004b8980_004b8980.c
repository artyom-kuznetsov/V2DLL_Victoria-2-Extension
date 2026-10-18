// FUN_004b8980 @ 004b8980 body=[[004b8980, 004b89a4] [004b89a8, 004b89ae]]


void FUN_004b8980(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMapProvince::vftable;
  in_ECX[2] = CMapProvince::vftable;
  FUN_004a8840(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

