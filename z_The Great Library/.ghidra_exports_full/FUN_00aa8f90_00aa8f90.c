// FUN_00aa8f90 @ 00aa8f90 body=[[00aa8f90, 00aa9049] [00aa904d, 00aa907a]]


void FUN_00aa8f90(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36580;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xccccccc < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x14) < param_1) {
    iVar2 = FUN_00aa7450(param_1);
    local_8 = 0;
    FUN_00aa8e60(*in_ECX,in_ECX[1],iVar2,in_ECX + 3,0,param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
      FUN_00aa8f10(iVar1,in_ECX[1],in_ECX + 3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar2 + param_1 * 0x14;
    in_ECX[1] = iVar2 + ((in_ECX[1] - iVar1) / 0x14) * 0x14;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

