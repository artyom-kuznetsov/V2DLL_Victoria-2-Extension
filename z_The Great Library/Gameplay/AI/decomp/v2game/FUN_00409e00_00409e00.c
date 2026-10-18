// FUN_00409e00 @ 00409e00 body=[[00409e00, 00409ea6]]


void FUN_00409e00(uint *param_1)

{
  uint uVar1;
  uint in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e412;
  local_10 = ExceptionList;
  uVar1 = param_1[1];
  if ((in_ECX < uVar1) && (*param_1 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar1 == param_1[2]) {
      ExceptionList = &local_10;
      FUN_00409f90();
    }
    uVar1 = param_1[1];
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == param_1[2]) {
      ExceptionList = &local_10;
      FUN_00409f90();
    }
    uVar1 = param_1[1];
    local_8 = 1;
  }
  if (uVar1 != 0) {
    FUN_004014c0(uVar1);
  }
  param_1[1] = param_1[1] + 0x58;
  ExceptionList = local_10;
  return;
}

