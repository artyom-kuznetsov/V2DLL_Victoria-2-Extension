// FUN_004237e0 @ 004237e0 body=[[004237e0, 0042385c] [00423860, 00423883]]


void FUN_004237e0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b320;
  local_10 = ExceptionList;
  if (0x1fffffff < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 3) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00810880();
    local_8 = 0;
    FUN_007e72f0(*in_ECX,param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = iVar2 + param_1 * 8;
    in_ECX[1] = iVar2 + (in_ECX[1] - iVar1 >> 3) * 8;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

