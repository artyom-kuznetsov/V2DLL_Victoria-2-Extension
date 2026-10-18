// FUN_009b22e0 @ 009b22e0 body=[[009b22e0, 009b2422] [009b2426, 009b26a9]]


/* WARNING: Removing unreachable block (ram,0x009b241a) */

undefined4 *
FUN_009b22e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  short sVar5;
  undefined4 in_stack_0000002c;
  short local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f46d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408ed0(param_7,0,0xffffffff);
  FUN_009b37f0(param_1,param_2,param_4,param_5,param_6,0x42bc0000);
  *param_1 = &PTR_FUN_00e39380;
  param_1[1] = &PTR_FUN_00e39408;
  param_1[0x44] = &LAB_009b4ca0;
  param_1[0x42] = &PTR_FUN_00e42bc0;
  param_1[0x43] = param_1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *(undefined1 *)((int)param_1 + 0x146) = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0xffffffff;
  param_1[0x52] = in_stack_0000002c;
  FUN_00409350();
  local_8._0_1_ = 3;
  cVar3 = FUN_00416db0();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (cVar3 == '\0') {
    DAT_0131c898 = 1;
    piVar4 = (int *)(**(code **)(*(int *)param_1[0x2e] + 0x20))();
    param_1[0x41] = piVar4;
    (**(code **)(*piVar4 + 0x34))();
    FUN_009cb4a0();
  }
  else {
    param_1[0x41] = 0;
  }
  iVar1 = param_1[0x41];
  if (iVar1 != 0) {
    iVar2 = param_1[0x52];
    sVar5 = 0;
    local_18 = 0;
    if (iVar2 != 0) {
      sVar5 = (short)*(undefined4 *)(iVar2 + 0xfc);
      local_18 = (short)*(undefined4 *)(iVar2 + 0x100);
    }
    *(float *)(iVar1 + 0x80) = (float)(int)(short)(*(short *)(param_1 + 0x3a) + sVar5);
    *(float *)(iVar1 + 0x84) = (float)(int)local_18;
    (**(code **)(*(int *)(iVar1 + 0x260) + 0xcc))();
    (**(code **)(*(int *)(param_1[0x41] + 0x54) + 4))();
    (**(code **)(*(int *)param_1[0x41] + 0x38))();
    (**(code **)(*(int *)param_1[0x41] + 100))();
    iVar1 = param_1[0x41];
    FUN_00401000();
    FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))();
    iVar1 = *(int *)(param_1[0x41] + 0x54);
    FUN_0043d130();
    (**(code **)(iVar1 + 0x14))();
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  if (*(char *)(param_1[0x52] + 0x198) == '\0') {
    FUN_0099e960();
  }
  FUN_009b4530();
  ExceptionList = local_10;
  return param_1;
}

