// FUN_004638a0 @ 004638a0 body=[[004638a0, 0046395b] [0046395f, 0046398f]]


void FUN_004638a0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d3d0;
  local_10 = ExceptionList;
  if (0x17d05f4 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0xac) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00463a10();
    local_8 = 0;
    FUN_004641f0(in_ECX[1],iVar2,param_1);
    local_8 = 0xffffffff;
    iVar1 = in_ECX[1];
    iVar3 = *in_ECX;
    if (iVar3 != 0) {
      for (; iVar3 != iVar1; iVar3 = iVar3 + 0xac) {
        FUN_0045f8a0(iVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0xac + iVar2;
    in_ECX[1] = ((iVar1 - iVar3) / 0xac) * 0xac + iVar2;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

