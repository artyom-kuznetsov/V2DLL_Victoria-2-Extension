// FUN_00a81f60 @ 00a81f60 body=[[00a81f60, 00a8209f]]


undefined4 * FUN_00a81f60(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48196;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,in_ECX);
  local_8 = 0;
  param_1[0x51] = DAT_00f092dc;
  *param_1 = &PTR_FUN_00e441f0;
  param_1[0x4f] = in_ECX;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x5b] = 0xf;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x5d] = param_2;
  param_1[0x5e] = 0xffffffff;
  piVar3 = *(int **)(in_ECX + 0xac);
  param_2 = 0;
  iVar2 = *piVar3;
  uVar1 = (**(code **)(*piVar3 + 0x18))(piVar3,&param_2);
  uVar1 = (**(code **)(*piVar3 + 0x14))(piVar3,uVar1);
  uVar1 = (**(code **)(*piVar3 + 0x10))(piVar3,uVar1);
  uVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,uVar1);
  iVar2 = (**(code **)(iVar2 + 0xa4))(piVar3,uVar1);
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  piVar3 = (int *)((iVar2 < 0) - 1 & param_2);
  param_1[0x60] = piVar3;
  (**(code **)(*piVar3 + 0x34))(piVar3,0,0);
  ExceptionList = local_10;
  return param_1;
}

