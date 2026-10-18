// FUN_007d99d0 @ 007d99d0 body=[[007d99d0, 007d9b9e] [007d9ba2, 007d9bb6]]


undefined4 *
FUN_007d99d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b61e27;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,in_ECX);
  uVar2 = DAT_00f092fc;
  param_1[0x50] = param_2;
  *param_1 = CCounterObject::vftable;
  param_1[0x4f] = in_ECX;
  param_1[0x51] = param_3;
  param_1[0x52] = param_4;
  param_1[0x53] = 0;
  param_1[0x54] = 0xffffffff;
  param_1[0x56] = 0x18d;
  param_1[0x55] = CColor::vftable;
  param_1[0x57] = uVar2;
  param_1[0x58] = uVar2;
  param_1[0x59] = uVar2;
  param_1[0x5a] = uVar2;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  param_1[0x5c] = 0;
  param_1[0x62] = 0xf;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x69] = 0xf;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  param_1[0x6b] = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  local_18 = *(float *)(in_ECX + 0x1c4) * *(float *)(in_ECX + 0x9c);
  local_14 = *(float *)(in_ECX + 0x1c8) * *(float *)(in_ECX + 0x9c);
  iVar1 = FUN_00aae9af(0x23c);
  local_8._0_1_ = 3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_008166b0(iVar1,1,local_18,local_14);
  }
  local_8._0_1_ = 2;
  param_1[0x5c] = uVar2;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("counter_arrow",0xd);
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar3 = (int *)FUN_005c2ad0(local_34);
  uVar2 = (**(code **)(*piVar3 + 0x48))();
  param_1[0x6d] = uVar2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

