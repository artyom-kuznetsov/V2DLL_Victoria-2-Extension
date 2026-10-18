// FUN_00a18100 @ 00a18100 body=[[00a18100, 00a181b5]]


undefined1 *
FUN_00a18100(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined2 param_6,undefined4 param_7)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b8e3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  *(undefined2 *)(param_1 + 0x40) = param_6;
  *(undefined4 *)(param_1 + 0x58) = 0xf;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x44] = 0;
  FUN_00408ed0(param_7,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  ExceptionList = local_10;
  return param_1;
}

