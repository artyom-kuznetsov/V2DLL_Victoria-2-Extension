// FUN_0045b020 @ 0045b020 body=[[0045b020, 0045b0c8]]


undefined4 * FUN_0045b020(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46fdc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CNewsPaperSet::vftable;
  param_1[2] = DAT_0125ac7c;
  _eh_vector_constructor_iterator_(param_1 + 3,0x10,3,FUN_00413490,FUN_00aa8540);
  local_8 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0xf,0x10,3,FUN_00413490,FUN_00aa8540);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x20] = 0xf;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  ExceptionList = local_10;
  return param_1;
}

