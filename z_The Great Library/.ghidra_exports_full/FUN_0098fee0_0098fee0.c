// FUN_0098fee0 @ 0098fee0 body=[[0098fee0, 0098ff3c] [0098ff40, 0098ff48] [0098ff53, 0098ff7c]]


void FUN_0098fee0(void)

{
  int *in_ECX;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a2c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = (int)&PTR_FUN_00e37c10;
  local_8 = 0;
  local_14 = local_14 & 0xffffff00;
  if (in_ECX[1] != 0) {
    FUN_00991290(in_ECX[1],local_14);
  }
  (**(code **)(*in_ECX + 0x1c))(in_ECX[1]);
  in_ECX[1] = 0;
  if (in_ECX[5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[3] = 0;
  local_8 = 0xffffffff;
  FUN_00a5c580();
  ExceptionList = local_10;
  return;
}

