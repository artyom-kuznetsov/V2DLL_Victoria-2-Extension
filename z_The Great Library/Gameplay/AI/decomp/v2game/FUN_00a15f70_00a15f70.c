// FUN_00a15f70 @ 00a15f70 body=[[00a15f70, 00a16054]]


undefined4 *
FUN_00a15f70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6)

{
  undefined4 in_ECX;
  uint in_EDX;
  undefined8 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48f61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3f050;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_8 = 0;
  param_1[7] = param_2;
  param_1[9] = in_ECX;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[10] = in_EDX & 0xffff;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  local_8._0_1_ = 1;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00408ed0(param_4,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1b) = param_5;
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00408ed0(param_6,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x23) = *unaff_EDI;
  *(undefined8 *)(param_1 + 0x25) = unaff_EDI[1];
  param_1[0x27] = *(undefined4 *)(unaff_EDI + 2);
  ExceptionList = local_10;
  return param_1;
}

