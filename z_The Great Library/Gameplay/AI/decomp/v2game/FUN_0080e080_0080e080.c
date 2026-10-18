// FUN_0080e080 @ 0080e080 body=[[0080e080, 0080e0d4] [0080e0d8, 0080e0ea]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0080e080(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b42e58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CProvinceObject::vftable;
  local_8 = 0;
  piVar1 = (int *)in_ECX[0x54];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  _DAT_012589e4 = _DAT_012589e4 + -1;
  FUN_007d9930();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

