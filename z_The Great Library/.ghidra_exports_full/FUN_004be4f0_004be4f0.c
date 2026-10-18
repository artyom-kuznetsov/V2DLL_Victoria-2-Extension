// FUN_004be4f0 @ 004be4f0 body=[[004be4f0, 004be5a1]]


undefined4 * FUN_004be4f0(undefined4 *param_1)

{
  int *piVar1;
  uint in_ECX;
  uint uVar2;
  int local_28;
  undefined1 **local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b400e6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CDataSpread<fpml::fixed_point<__int64,48,15>,int,100>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  piVar1 = param_1 + 6;
  *piVar1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_8 = 1;
  if (0 < (int)in_ECX) {
    local_14 = (undefined1 *)&local_28;
    local_28 = 0;
    local_24 = (undefined1 **)0x0;
    FUN_004bea40();
    local_24 = (undefined1 **)param_1[7];
    uVar2 = (int)local_24 - *piVar1 >> 2;
    local_14 = (undefined1 *)0x0;
    if (uVar2 < in_ECX) {
      local_28 = (int)local_24;
      local_24 = &local_14;
      FUN_0043cb20(piVar1);
    }
    else if (in_ECX < uVar2) {
      local_28 = *piVar1 + in_ECX * 4;
      FUN_0054ab90(piVar1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

