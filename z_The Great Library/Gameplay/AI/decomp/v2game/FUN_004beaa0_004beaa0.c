// FUN_004beaa0 @ 004beaa0 body=[[004beaa0, 004beb4c]]


void FUN_004beaa0(uint *param_1)

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
      FUN_004bece0();
    }
    uVar1 = param_1[1];
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == param_1[2]) {
      ExceptionList = &local_10;
      FUN_004bece0();
    }
    uVar1 = param_1[1];
    local_8 = 1;
  }
  if (uVar1 != 0) {
    FUN_004f2e50(uVar1);
  }
  param_1[1] = param_1[1] + 0x220;
  ExceptionList = local_10;
  return;
}

