// FUN_00a29f10 @ 00a29f10 body=[[00a29f10, 00a2a117]]


undefined4 * FUN_00a29f10(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined **local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b412d0;
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
  *param_1 = &PTR_FUN_00e3fb30;
  param_1[0x23] = param_2;
  param_1[0x24] = in_ECX;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  local_8 = 3;
  param_1[0x41] = 0;
  iVar2 = FUN_00aae9af(0x34);
  if (iVar2 != 0) {
    param_1[0x40] = iVar2;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x40];
    *(undefined4 *)(param_1[0x40] + 8) = param_1[0x40];
    uVar1 = DAT_00f17b58;
    *(undefined1 *)(param_1[0x40] + 0x30) = 1;
    *(undefined1 *)(param_1[0x40] + 0x31) = 1;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x47] = uVar1;
    param_1[0x48] = 0x7f7fffff;
    param_1[0x4e] = 0xf;
    param_1[0x4d] = 0;
    *(undefined1 *)(param_1 + 0x49) = 0;
    param_1[0x55] = 0xf;
    param_1[0x54] = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x29) = 0;
    param_1[0x2b] = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)((int)param_1 + 0x162) = 0;
    param_1[0x2e] = 0;
    *(undefined2 *)(param_1 + 0x57) = 0xffff;
    *(undefined4 *)((int)param_1 + 0x15e) = 0x10000;
    ExceptionList = local_10;
    return param_1;
  }
  param_2 = (char *)0x0;
  std::exception::exception((exception *)local_1c,&param_2);
  local_1c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_1c,&DAT_00e6fb20);
}

