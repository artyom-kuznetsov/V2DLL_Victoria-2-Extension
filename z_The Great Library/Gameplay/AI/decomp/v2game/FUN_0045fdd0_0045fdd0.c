// FUN_0045fdd0 @ 0045fdd0 body=[[0045fdd0, 0045ff14]]


undefined4 * FUN_0045fdd0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46f5d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CNewsDataBase::vftable;
  _eh_vector_constructor_iterator_(param_1 + 3,0x10,0x15,FUN_004620f0,FUN_0045ff50);
  local_8 = 0;
  FUN_0045ffb0(param_1 + 0x57);
  local_8._0_1_ = 1;
  param_1[0x66] = 0xf;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 2;
  param_1[0x6d] = 0xf;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 3;
  param_1[0x74] = 0xf;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 4;
  param_1[0x77] = 0x18d;
  param_1[0x76] = CNewsOnCollection::vftable;
  param_1[0x7a] = 0;
  uVar1 = FUN_00462d60();
  param_1[0x79] = uVar1;
  *(undefined4 *)uVar1 = uVar1;
  *(undefined4 *)(param_1[0x79] + 4) = param_1[0x79];
  *(undefined4 *)(param_1[0x79] + 8) = param_1[0x79];
  *(undefined1 *)(param_1[0x79] + 0x38) = 1;
  *(undefined1 *)(param_1[0x79] + 0x39) = 1;
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar2 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  param_1[2] = puVar2;
  FUN_00466e90();
  ExceptionList = local_10;
  return param_1;
}

