// FUN_00808e40 @ 00808e40 body=[[00808e40, 00808ed4] [00808ed8, 00808f04]]


void FUN_00808e40(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ac00;
  local_10 = ExceptionList;
  if (0x38e38e3 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x48) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00804950();
    local_8 = 0;
    FUN_00808fa0(in_ECX[1],param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = iVar2 + param_1 * 0x48;
    in_ECX[1] = iVar2 + ((in_ECX[1] - iVar1) / 0x48) * 0x48;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

