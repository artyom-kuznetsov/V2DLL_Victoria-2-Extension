// FUN_0079ebf0 @ 0079ebf0 body=[[0079ebf0, 0079ec96] [0079ec9a, 0079ecc4]]


void FUN_0079ebf0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43840;
  local_10 = ExceptionList;
  if (0x5d1745d < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x2c) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00a40840();
    local_8 = 0;
    FUN_0079f750(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_0079ef90(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x2c + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x2c) * 0x2c + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

