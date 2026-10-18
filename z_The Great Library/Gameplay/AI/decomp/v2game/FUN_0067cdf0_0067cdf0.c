// FUN_0067cdf0 @ 0067cdf0 body=[[0067cdf0, 0067ce60] [0067ce64, 0067ce77]]


void FUN_0067cdf0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b44e9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CEU3Minimap::vftable;
  in_ECX[0x15] = CEU3Minimap::vftable;
  local_8 = 0;
  FUN_009963d0(in_ECX[0x49]);
  FUN_009963d0(in_ECX[0x4a]);
  local_8 = 0xffffffff;
  FUN_009c41d0(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

