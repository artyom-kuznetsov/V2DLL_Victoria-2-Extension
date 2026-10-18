// FUN_009b19e0 @ 009b19e0 body=[[009b19e0, 009b1a92]]


void FUN_009b19e0(uint *param_1)

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
      FUN_009b1aa0();
    }
    local_8 = 0;
    if (param_1[1] != 0) {
      FUN_00648af0(param_1[1]);
    }
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == param_1[2]) {
      ExceptionList = &local_10;
      FUN_009b1aa0();
    }
    local_8 = 1;
    if (param_1[1] != 0) {
      FUN_00648af0(param_1[1]);
    }
  }
  param_1[1] = param_1[1] + 0xa4;
  ExceptionList = local_10;
  return;
}

