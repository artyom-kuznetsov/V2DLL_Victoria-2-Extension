// FUN_00463ca0 @ 00463ca0 body=[[00463ca0, 00463db2]]


undefined1 * FUN_00463ca0(undefined1 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4066d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(in_ECX,0,0xffffffff);
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  FUN_00408ed0(in_ECX + 0x1c,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined ***)(param_1 + 0x38) = CTrigger::vftable;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_8._0_1_ = 2;
  FUN_009beeb0(in_ECX + 0x40);
  param_1[0x50] = *(undefined1 *)(in_ECX + 0x50);
  param_1[0x51] = *(undefined1 *)(in_ECX + 0x51);
  *(undefined ***)(param_1 + 0x38) = CAndTrigger::vftable;
  local_8._0_1_ = 3;
  _eh_vector_copy_constructor_iterator_
            (param_1 + 0x54,(void *)(in_ECX + 0x54),0x10,3,FUN_00463dc0,FUN_0045d860);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(in_ECX + 0x88);
  FUN_00463f60(param_1 + 0x8c,in_ECX + 0x8c);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_009beeb0(in_ECX + 0x9c);
  ExceptionList = local_10;
  return param_1;
}

