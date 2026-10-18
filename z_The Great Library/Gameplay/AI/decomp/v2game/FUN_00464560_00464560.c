// FUN_00464560 @ 00464560 body=[[00464560, 00464701]]


undefined4 * FUN_00464560(undefined4 *param_1)

{
  int in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d3a2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CNewsScope::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(in_ECX + 8,0,0xffffffff);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  local_8 = 5;
  param_1[0x20] = *(undefined4 *)(in_ECX + 0x80);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(in_ECX + 0x84);
  local_18 = *(int *)(in_ECX + 0x28) - *(int *)(in_ECX + 0x24) >> 4;
  FUN_00466500(local_18);
  if (0 < local_18) {
    do {
      FUN_004669e0();
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_18 = *(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44) >> 4;
  FUN_0054ad80(local_18);
  if (0 < local_18) {
    do {
      FUN_00462dc0();
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_18 = *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34) >> 4;
  FUN_0068eef0(local_18);
  if (0 < local_18) {
    do {
      FUN_00466a90();
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if ((param_1[0x16] - param_1[0x15] & 0xfffffffc) == 0) {
    FUN_00466400((undefined4 *)(in_ECX + 0x54));
  }
  else {
    FUN_00466ba0(param_1[0x16],*(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0x58),param_1
                );
  }
  FUN_00408ed0(in_ECX + 100,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

