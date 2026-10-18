// FUN_00aabda0 @ 00aabda0 body=[[00aabda0, 00aabe2e] [00aabe32, 00aabe56]]


void FUN_00aabda0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36950;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x1fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 3) < param_1) {
    iVar2 = FUN_00aabbd0(param_1);
    local_8 = 0;
    FUN_00aa7800(*in_ECX,in_ECX[1],iVar2,in_ECX + 3,0,param_1);
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

