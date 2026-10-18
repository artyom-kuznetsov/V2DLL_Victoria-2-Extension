// FUN_00a03b30 @ 00a03b30 body=[[00a03b30, 00a03c1c] [00a03c20, 00a03c93]]


undefined4 * FUN_00a03b30(undefined4 *param_1)

{
  undefined4 uVar1;
  int unaff_EDI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b491e1;
  local_10 = ExceptionList;
  local_14 = *(undefined4 *)(unaff_EDI + 0x24);
  local_18 = (uint)*(ushort *)(unaff_EDI + 0x28);
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0xe3;
  param_1[0xc] = 0xe3;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = local_14;
  *(undefined2 *)(param_1 + 10) = (undefined2)local_18;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3e82c;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 2;
  param_1[0xf] = 0;
  param_1[0x10] = DAT_01268fec;
  param_1[0x11] = DAT_01268ff0;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(local_34,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00408ed0(unaff_EDI + 100,0,0xffffffff);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(unaff_EDI + 0x80);
  if (*(int *)(unaff_EDI + 0x84) != 0) {
    uVar1 = (**(code **)(**(int **)(unaff_EDI + 0x84) + 0x1c))();
    param_1[0x21] = uVar1;
    ExceptionList = local_10;
    return param_1;
  }
  param_1[0x21] = 0;
  ExceptionList = local_10;
  return param_1;
}

