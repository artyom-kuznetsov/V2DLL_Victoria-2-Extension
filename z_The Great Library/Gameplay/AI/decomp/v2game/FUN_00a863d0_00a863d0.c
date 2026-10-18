// FUN_00a863d0 @ 00a863d0 body=[[00a863d0, 00a8655b]]


undefined4 *
FUN_00a863d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4df7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00a86bb0(param_1,param_3,param_4,param_5,param_6,param_7,in_EDX,param_8,param_9);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e44520;
  param_1[0x2f] = param_2;
  param_1[0x30] = param_3;
  param_1[0x31] = *(undefined4 *)(in_ECX + 0x94);
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((int)param_1 + 0xc9) = *(undefined1 *)(in_ECX + 0x9c);
  puVar4 = (undefined4 *)FUN_00aae9af(300);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1[0x2f] + 0x6b9bc);
    uVar2 = *(undefined4 *)(param_1[0x2f] + 0x6b9c0);
    FUN_009f8e80();
    uVar3 = DAT_00f092fc;
    local_8 = CONCAT31(local_8._1_3_,2);
    puVar4[0x41] = CONCAT22((short)uVar2,(short)uVar1);
    *puVar4 = &PTR_FUN_00e38350;
    puVar4[0x3e] = uVar3;
    puVar4[0x47] = 0xf;
    puVar4[0x46] = 0;
    *(undefined1 *)(puVar4 + 0x42) = 0;
    FUN_00409350(&DAT_00ded94d,0);
    *(undefined1 *)(puVar4 + 0x49) = 1;
    *(undefined4 *)((int)puVar4 + 0x126) = 0;
  }
  local_8 = local_8 & 0xffffff00;
  param_1[0x2e] = puVar4;
  puVar4[0x37] = 0;
  (**(code **)(*(int *)param_1[0x2e] + 0x74))(param_1[0x2f] + 0x6b9e0);
  param_3 = CONCAT22(*(undefined2 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x17));
  *(undefined4 *)(param_1[0x2e] + 0x126) = param_3;
  param_3 = CONCAT22(*(undefined2 *)(param_1 + 0x16),*(undefined2 *)(param_1 + 0x15));
  FUN_00a869f0(param_3);
  ExceptionList = local_10;
  return param_1;
}

