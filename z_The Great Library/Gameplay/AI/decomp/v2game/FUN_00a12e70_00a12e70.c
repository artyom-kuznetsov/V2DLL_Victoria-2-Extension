// FUN_00a12e70 @ 00a12e70 body=[[00a12e70, 00a12f6e]]


undefined4 *
FUN_00a12e70(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41499;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x158;
  param_1[0xc] = 0x158;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  local_8 = 1;
  param_1[0xf] = param_6;
  *param_1 = &PTR_FUN_00e3ef00;
  param_1[0x10] = param_2;
  FUN_00a15730(param_1 + 0x11,param_3);
  local_8._0_1_ = 2;
  param_1[0x1b] = unaff_EDI;
  param_1[0x1c] = param_5;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0(param_4,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = *(int *)(param_3 + 0x8c);
  uVar3 = (**(code **)(**(int **)(iVar1 + 0x38) + 0x44))();
  param_1[9] = uVar3;
  uVar2 = (**(code **)(**(int **)(iVar1 + 0x38) + 0x48))();
  *(undefined2 *)(param_1 + 10) = uVar2;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  ExceptionList = local_10;
  return param_1;
}

