// FUN_009c3c70 @ 009c3c70 body=[[009c3c70, 009c3def]]


undefined4 *
FUN_009c3c70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)

{
  undefined4 uVar1;
  undefined4 unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f2d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009ee0b0();
  param_1[0x27] = param_2;
  param_1[0x28] = param_5;
  *(undefined8 *)(param_1 + 0x29) = param_6;
  *param_1 = &PTR_FUN_00e3a930;
  param_1[0x15] = &PTR_LAB_00e3aa5c;
  param_1[0x25] = 0;
  param_1[0x26] = unaff_EDI;
  param_1[0x2b] = param_7;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  local_8 = 1;
  *(undefined1 *)(param_1 + 0x30) = param_8;
  param_1[0x32] = param_10;
  param_1[0x2e] = 0;
  param_1[0x33] = param_12;
  param_1[0x31] = param_9;
  uVar1 = DAT_00f092fc;
  param_1[0x34] = param_13;
  *(undefined2 *)(param_1 + 0x35) = 1;
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  param_1[0x3a] = uVar1;
  param_1[0x3b] = uVar1;
  param_1[0x37] = 0x18d;
  param_1[0x36] = CColor::vftable;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0xf6) = 0;
  param_1[0x3e] = param_11;
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(short *)(param_1 + 0x2c) = (short)(int)(float)param_1[0x29];
    *(short *)((int)param_1 + 0xb2) = (short)(int)(float)param_1[0x2a];
  }
  FUN_00408ed0(param_4,0,0xffffffff);
  FUN_009c3e20(param_1);
  ExceptionList = local_10;
  return param_1;
}

