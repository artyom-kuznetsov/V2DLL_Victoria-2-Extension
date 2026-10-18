// FUN_007afdb0 @ 007afdb0 body=[[007afdb0, 007afe68] [007afe6c, 007afe98]]


void FUN_007afdb0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b432a0;
  local_10 = ExceptionList;
  if (0x71c71c7 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x24) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00779af0();
    local_8 = 0;
    FUN_007b0380(in_ECX[1],iVar2,param_1);
    local_8 = 0xffffffff;
    iVar1 = in_ECX[1];
    iVar3 = *in_ECX;
    if (iVar3 != 0) {
      for (; iVar3 != iVar1; iVar3 = iVar3 + 0x24) {
        FUN_007a91c0(iVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar2 + param_1 * 0x24;
    in_ECX[1] = iVar2 + ((iVar1 - iVar3) / 0x24) * 0x24;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

