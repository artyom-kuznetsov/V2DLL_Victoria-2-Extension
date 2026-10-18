// FUN_006a1190 @ 006a1190 body=[[006a1190, 006a1338]]


void FUN_006a1190(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 local_50 [28];
  undefined1 local_34 [28];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  local_14 = ExceptionList;
  switch(param_2) {
  case 0:
    ExceptionList = &local_14;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(local_50);
    puStack_10 = (undefined1 *)0x0;
    *param_3 = 3;
    FUN_00408ed0(uVar2,0,0xffffffff);
    FUN_00408ad0();
    ExceptionList = pvStack_18;
    return;
  case 1:
    ExceptionList = &local_14;
    uVar2 = FUN_005659c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 300) + 0x80),local_34);
    local_c = 1;
    *param_3 = 3;
    FUN_00408ed0(uVar2,0,0xffffffff);
    FUN_00408ad0();
    ExceptionList = local_14;
    return;
  case 2:
    uVar2 = *(undefined4 *)(param_1 + 0xd8);
    uVar1 = *(undefined4 *)(param_1 + 0xdc);
    *param_3 = 8;
    param_3[0x14] = uVar2;
    param_3[0x15] = uVar1;
    param_3[1] = 2;
    return;
  case 3:
    ExceptionList = &local_14;
    puVar3 = (uint *)FUN_004a4500();
    uVar4 = __alldiv(*puVar3 << 0xf,puVar3[1] << 0xf | *puVar3 >> 0x11,DAT_00f0bd30,DAT_00f0bd34);
    *param_3 = 8;
    *(undefined8 *)(param_3 + 0x14) = uVar4;
    param_3[1] = 2;
    ExceptionList = local_14;
    return;
  case 4:
    uVar2 = *(undefined4 *)(param_1 + 0x128);
    *param_3 = 0xb;
    param_3[0x16] = uVar2;
    param_3[1] = 2;
    return;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    *param_3 = 0xb;
    param_3[0x16] = uVar2;
  }
  return;
}

