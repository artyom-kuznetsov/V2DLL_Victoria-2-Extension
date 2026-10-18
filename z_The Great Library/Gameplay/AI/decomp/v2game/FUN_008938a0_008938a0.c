// FUN_008938a0 @ 008938a0 body=[[008938a0, 00893928]]


undefined4 * FUN_008938a0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b90b63;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = 0x18d;
  *(undefined2 *)(param_1 + 7) = 0;
  iVar1 = DAT_012587ec;
  local_8 = 0;
  *param_1 = CPrimaryCultureEffect::vftable;
  if (iVar1 == 0) {
    iVar1 = FUN_00aae9af(0x98);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (iVar1 == 0) {
      iVar1 = 0;
      DAT_012587ec = iVar1;
    }
    else {
      iVar1 = FUN_00561080(iVar1);
      DAT_012587ec = iVar1;
    }
  }
  param_1[8] = iVar1;
  ExceptionList = local_10;
  return param_1;
}

