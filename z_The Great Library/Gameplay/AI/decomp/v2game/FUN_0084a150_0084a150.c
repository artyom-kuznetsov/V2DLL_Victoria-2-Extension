// FUN_0084a150 @ 0084a150 body=[[0084a150, 0084a344]]


undefined4 *
FUN_0084a150(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  void *_Dst;
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b42d99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00825e50(param_3,param_4);
  iVar2 = 0;
  local_8 = 0;
  *param_1 = CAIKing::vftable;
  param_1[0x1a] = 0x1ff;
  param_1[0x19] = 0;
  _Dst = (void *)FUN_00aad56b(0x7fc);
  param_1[0x1b] = _Dst;
  _memset(_Dst,0,param_1[0x1a] * 4);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  local_8._0_1_ = 3;
  _eh_vector_constructor_iterator_(param_1 + 0x2f,0x10,8,FUN_0084a380,FUN_00849e90);
  local_8._0_1_ = 4;
  _eh_vector_constructor_iterator_(param_1 + 0x4f,0x10,8,FUN_0084a380,FUN_00849e90);
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  local_8 = CONCAT31(local_8._1_3_,10);
  param_1[0x72] = 0;
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  param_1[0x73] = 0;
  param_1[0x75] = 0;
  param_1[0x97] = param_2;
  param_1[0x83] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x6f) = 0x100;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x8d) = 0;
  param_2 = param_1 + 0x8f;
  do {
    uVar1 = FUN_00852a90();
    *param_2 = uVar1;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  } while (iVar2 < 8);
  ExceptionList = local_10;
  return param_1;
}

