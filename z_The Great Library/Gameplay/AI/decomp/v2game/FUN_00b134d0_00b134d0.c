// FUN_00b134d0 @ 00b134d0 body=[[00b134d0, 00b13557]]


undefined4 FUN_00b134d0(code *param_1,code *param_2,code *param_3)

{
  undefined4 uVar1;
  
  if (DAT_00f209e4 != (undefined4 *)0x0) {
    return 1;
  }
  if (param_1 == (code *)0x0) {
    param_1 = FUN_00b132f0;
  }
  if (param_2 == (code *)0x0) {
    param_2 = FUN_00b13300;
  }
  if (param_3 == (code *)0x0) {
    param_3 = _free;
  }
  PTR_FUN_00f01b08 = param_1;
  PTR_FUN_00f01b0c = param_2;
  PTR__free_00f01b10 = param_3;
  DAT_00f209e4 = (undefined4 *)(*param_1)(0x18,0x12,4,0,"..\\..\\Source\\MCoreSystem.cpp",0x35);
  if (DAT_00f209e4 != (undefined4 *)0x0) {
    *DAT_00f209e4 = 0;
    DAT_00f209e4[1] = 0;
    DAT_00f209e4[3] = 0;
    DAT_00f209e4[4] = 0;
    DAT_00f209e4[2] = 0;
    uVar1 = FUN_00b13350();
    return uVar1;
  }
  DAT_00f209e4 = (undefined4 *)0x0;
  uVar1 = FUN_00b13350();
  return uVar1;
}

