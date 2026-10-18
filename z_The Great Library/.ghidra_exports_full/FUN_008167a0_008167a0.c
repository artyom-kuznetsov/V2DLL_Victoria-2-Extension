// FUN_008167a0 @ 008167a0 body=[[008167a0, 008167f9] [008167fd, 0081680f]]


void FUN_008167a0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3eb18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CShield3dObject::vftable;
  local_8 = 0;
  if (-1 < (int)in_ECX[0x54]) {
    FUN_009bcda0();
  }
  FUN_007d9930();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

