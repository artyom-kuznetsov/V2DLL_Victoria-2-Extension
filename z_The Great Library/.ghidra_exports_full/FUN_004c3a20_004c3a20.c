// FUN_004c3a20 @ 004c3a20 body=[[004c3a20, 004c3a6c] [004c3a70, 004c3a91] [004c3a95, 004c3add]]


void FUN_004c3a20(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5b0bc;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_1 = CProvinceTemplate::vftable;
  param_1[2] = CProvinceTemplate::vftable;
  local_8 = 9;
  FUN_004c8140(param_1);
  if (param_1[0xd4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xd4]);
  }
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  if (param_1[0xd0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xd0]);
  }
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  local_8._0_1_ = 6;
  FUN_004c2560(param_1 + 0xcc);
  local_8 = CONCAT31(local_8._1_3_,10);
  FUN_00445600(*(undefined4 *)param_1[0x57],(undefined4 *)param_1[0x57]);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x57]);
}

