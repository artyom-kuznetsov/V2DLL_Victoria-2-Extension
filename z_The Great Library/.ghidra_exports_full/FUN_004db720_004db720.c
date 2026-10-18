// FUN_004db720 @ 004db720 body=[[004db720, 004db7c7]]


undefined4 * FUN_004db720(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b51613;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CSelectable::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = DAT_012586ec;
  local_8 = 0;
  param_1[4] = 0;
  if (iVar1 == 0) {
    iVar1 = FUN_00aae9af(0x2c);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (iVar1 == 0) {
      iVar1 = 0;
      DAT_012586ec = iVar1;
    }
    else {
      iVar1 = FUN_0044bbb0(iVar1);
      DAT_012586ec = iVar1;
    }
  }
  param_1[5] = iVar1;
  param_1[3] = 0x18d;
  param_1[6] = param_2;
  param_1[7] = param_3;
  *param_1 = CProvinceBuilding::vftable;
  param_1[2] = CProvinceBuilding::vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[5] = *(undefined4 *)(param_1[6] + 0xc);
  param_1[9] = 0;
  param_1[8] = 0;
  ExceptionList = local_10;
  return param_1;
}

