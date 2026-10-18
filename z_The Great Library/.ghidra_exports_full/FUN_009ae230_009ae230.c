// FUN_009ae230 @ 009ae230 body=[[009ae230, 009ae31d]]


uint * FUN_009ae230(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                   uint param_9)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 in_XMM0_Da;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41be9;
  local_10 = ExceptionList;
  puVar1 = param_1 + 7;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 6) = 1;
  FUN_009eb500(puVar1,param_5,param_6,param_7,in_XMM0_Da);
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  local_8 = 1;
  *param_1 = param_8 & 0xffff;
  param_1[1] = param_8 >> 0x10;
  param_1[2] = param_9 & 0xffff;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  param_1[3] = param_9 >> 0x10;
  pcVar2 = *(code **)(*puVar1 + 0x180);
  param_1[4] = 0;
  param_1[5] = DAT_00f092fc;
  (*pcVar2)(param_3);
  (**(code **)(*puVar1 + 0x17c))(param_2);
  (**(code **)(*puVar1 + 0x184))(param_4);
  FUN_009ae320(param_1);
  ExceptionList = local_10;
  return param_1;
}

