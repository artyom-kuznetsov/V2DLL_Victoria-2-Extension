// FUN_0043c2c0 @ 0043c2c0 body=[[0043c2c0, 0043c311] [0043c315, 0043c327]]


void FUN_0043c2c0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b1e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CFlags::vftable;
  in_ECX[9] = CFlags::vftable;
  local_8 = 0;
  FUN_0043c390();
  local_8 = 0xffffffff;
  FUN_0043c580();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

