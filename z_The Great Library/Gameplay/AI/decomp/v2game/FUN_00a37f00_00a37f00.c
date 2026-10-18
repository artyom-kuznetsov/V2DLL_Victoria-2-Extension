// FUN_00a37f00 @ 00a37f00 body=[[00a37f00, 00a37f46] [00a37f4a, 00a37f5c]]


void FUN_00a37f00(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a288;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)in_ECX[1])(1);
  }
  *in_ECX = &PTR_FUN_00e37854;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

