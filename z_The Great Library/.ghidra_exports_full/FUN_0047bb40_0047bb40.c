// FUN_0047bb40 @ 0047bb40 body=[[0047bb40, 0047bbec]]


void FUN_0047bb40(uint *param_1)

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
      FUN_0047bbf0();
    }
    local_8 = 0;
    if (param_1[1] != 0) {
      FUN_0047c040(param_1[1]);
    }
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == param_1[2]) {
      ExceptionList = &local_10;
      FUN_0047bbf0();
    }
    local_8 = 1;
    if (param_1[1] != 0) {
      FUN_0047c040(param_1[1]);
    }
  }
  param_1[1] = param_1[1] + 0x4c;
  ExceptionList = local_10;
  return;
}

