// FUN_00581660 @ 00581660 body=[[00581660, 00581738]]


undefined4 * FUN_00581660(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b9323e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x1cf;
  param_1[0xc] = 0x1cf;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  param_1[0x10] = 0;
  iVar1 = DAT_012587ec;
  *param_1 = CChangeCultureCommand::vftable;
  param_1[0xf] = 0x2d2d2d;
  if (iVar1 == 0) {
    iVar1 = FUN_00aae9af(0x98);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (iVar1 == 0) {
      iVar1 = 0;
      DAT_012587ec = iVar1;
    }
    else {
      iVar1 = FUN_00561080(iVar1);
      DAT_012587ec = iVar1;
    }
  }
  param_1[0x11] = iVar1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  ExceptionList = local_10;
  return param_1;
}

