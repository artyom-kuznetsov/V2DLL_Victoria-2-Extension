// FUN_004435f0 @ 004435f0 body=[[004435f0, 004436c1] [004436c5, 004436d8]]


undefined4 * FUN_004435f0(undefined4 *param_1)

{
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d768;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMapIconManager<5>::vftable;
  _eh_vector_constructor_iterator_(param_1 + 1,0x10,5,FUN_00413490,FUN_00aa8540);
  local_8 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x15,0x10,5,FUN_00413490,FUN_00aa8540);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  local_8 = 1;
  *param_1 = CMapIconManagerImpl::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("interface/mapicons.gui",0x16);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_009a4bd0(local_2c,param_1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

