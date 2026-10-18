// FUN_009b37f0 @ 009b37f0 body=[[009b37f0, 009b39ee] [009b39f2, 009b3acb] [009b3acf, 009b3ae3]]


/* WARNING: Removing unreachable block (ram,0x009b39e6) */

undefined4 *
FUN_009b37f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined4 in_ECX;
  uint in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f429;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_009b3af0(param_1,in_ECX);
  *param_1 = &PTR_FUN_00e394b8;
  param_1[1] = &PTR_FUN_00e39538;
  param_1[0x2d] = param_6;
  param_1[0x2e] = in_ECX;
  param_1[0x2f] = param_2;
  param_1[0x30] = 0;
  param_1[0x36] = 0xf;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  local_8._0_1_ = 2;
  param_1[0x39] = param_4;
  param_1[0x3b] = in_stack_00000038;
  param_1[0x3e] = in_stack_00000048;
  param_1[0x3a] = param_5;
  param_1[0x3c] = in_stack_0000003c;
  param_1[0x3f] = in_stack_0000004c;
  param_1[0x3d] = in_stack_00000040;
  *(undefined2 *)(param_1 + 0x40) = 1;
  local_1c = *(undefined4 *)(param_1[0x2f] + 0x6b9bc);
  local_18 = *(undefined4 *)(param_1[0x2f] + 0x6b9c0);
  param_1[0x3e] = local_1c;
  param_1[0x3f] = local_18;
  puVar5 = (undefined4 *)FUN_00aae9af(300);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    iVar1 = param_1[0x2f];
    local_1c = *(undefined4 *)(iVar1 + 0x6b9bc);
    uVar2 = *(undefined4 *)(iVar1 + 0x6b9bc);
    local_18 = *(undefined4 *)(iVar1 + 0x6b9c0);
    uVar7 = (undefined2)local_18;
    FUN_009f8e80();
    uVar3 = DAT_00f092fc;
    local_8._0_1_ = 4;
    puVar5[0x41] = CONCAT22(uVar7,(short)uVar2);
    *puVar5 = &PTR_FUN_00e38350;
    puVar5[0x3e] = uVar3;
    puVar5[0x47] = 0xf;
    puVar5[0x46] = 0;
    *(undefined1 *)(puVar5 + 0x42) = 0;
    FUN_00409350(&DAT_00ded94d,0);
    *(undefined1 *)(puVar5 + 0x49) = 1;
    *(undefined4 *)((int)puVar5 + 0x126) = 0;
  }
  local_8._0_1_ = 2;
  param_1[0x30] = puVar5;
  puVar5[0x37] = 0;
  (**(code **)(*(int *)param_1[0x30] + 0x74))(param_1[0x2f] + 0x6b9e0);
  *(undefined4 *)(param_1[0x30] + 0x126) = param_1[0x3a];
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 5;
  cVar4 = FUN_00416db0();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (cVar4 == '\0') {
    piVar6 = (int *)FUN_00996520(param_3,0,&DAT_00f0ec98);
    param_1[0x38] = piVar6;
    (**(code **)(*piVar6 + 0x100))(param_1[0x3a]);
    local_1c = 0;
    local_18 = 0;
    (**(code **)(*(int *)param_1[0x38] + 0xcc))(&local_1c);
    (**(code **)(*(int *)param_1[0x38] + 0x5c))(1);
    (**(code **)(*(int *)param_1[0x38] + 0x80))();
    (**(code **)(*(int *)param_1[0x38] + 0x74))(param_1[0x30]);
  }
  else {
    param_1[0x38] = 0;
  }
  puVar5 = (undefined4 *)param_1[0x18];
  param_1[0x2d] = 0x42bc0000;
  for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)puVar5[2]) {
    (**(code **)(*(int *)*puVar5 + 0xc))(0x42bc3333);
  }
  FUN_009b3e90(param_1[0x39]);
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  if (in_stack_00000030 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_7);
}

