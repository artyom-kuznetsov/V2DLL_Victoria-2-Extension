// FUN_009f2a50 @ 009f2a50 body=[[009f2a50, 009f2b02]]


undefined4 *
FUN_009f2a50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined1 param_5)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b418c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3cffc;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8 = 0;
  *(undefined1 *)(param_1 + 9) = param_5;
  *param_1 = &PTR_FUN_00e3d068;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  iVar2 = *param_4;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x20);
    FUN_00408db0(iVar2);
    iVar2 = iVar1;
  }
  ExceptionList = local_10;
  return param_1;
}

