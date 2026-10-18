// FUN_009f9340 @ 009f9340 body=[[009f9340, 009f9459]]


undefined4 * FUN_009f9340(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b526c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009d9070(param_1,param_2);
  param_1[0x53] = CLostDeviceInterface::vftable;
  *param_1 = &PTR_FUN_00e3d3d8;
  param_1[0x53] = &PTR_LAB_00e3d548;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  uVar2 = DAT_00f092fc;
  local_8 = 1;
  param_1[0x5c] = param_3;
  param_1[0x445] = 0;
  param_1[0x448] = uVar2;
  param_1[0x449] = uVar2;
  param_1[0x44a] = uVar2;
  param_1[1099] = uVar2;
  uVar2 = DAT_00f092b0;
  param_1[0x447] = 0x18d;
  param_1[0x446] = CColor::vftable;
  *(undefined1 *)(param_1 + 0x44c) = 1;
  param_1[0x44d] = uVar2;
  FUN_0068f390();
  D3DXCreateLine(*(undefined4 *)(param_1[0x5c] + 100),param_1 + 0x5b);
  piVar1 = (int *)param_1[0x5b];
  (**(code **)(*piVar1 + 0x2c))(piVar1,param_1[0x44d]);
  ExceptionList = local_10;
  return param_1;
}

