// FUN_00435b80 @ 00435b80 body=[[00435b80, 00435bfc] [00435c00, 00435c23]]


void FUN_00435b80(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b260;
  local_10 = ExceptionList;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 2) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_007055a0();
    local_8 = 0;
    FUN_009d45d0(*in_ECX,param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = iVar2 + param_1 * 4;
    in_ECX[1] = iVar2 + (in_ECX[1] - iVar1 >> 2) * 4;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

