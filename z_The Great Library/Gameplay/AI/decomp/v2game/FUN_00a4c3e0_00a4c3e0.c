// FUN_00a4c3e0 @ 00a4c3e0 body=[[00a4c3e0, 00a4c512]]


undefined4 * FUN_00a4c3e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 in_ECX;
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41040;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *param_1 = &PTR_FUN_00e414a8;
  param_1[0x28] = 0xf;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x2e] = in_ECX;
  param_1[0x2f] = in_EDX;
  param_1[0x35] = 0xf;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x3c] = 0xf;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x43] = 0xf;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  local_8 = 4;
  param_1[0x45] = param_3;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = param_2;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  iVar1 = FUN_00aae9af(0x4010);
  if (iVar1 != 0) {
    bVar2 = 0x10 - ((byte)iVar1 & 0xf);
    iVar1 = iVar1 + (uint)bVar2;
    *(byte *)(iVar1 + -1) = bVar2;
    param_1[0x4a] = iVar1;
    ExceptionList = local_10;
    return param_1;
  }
  param_1[0x4a] = 0;
  ExceptionList = local_10;
  return param_1;
}

