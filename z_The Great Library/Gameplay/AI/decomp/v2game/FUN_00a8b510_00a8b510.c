// FUN_00a8b510 @ 00a8b510 body=[[00a8b510, 00a8b68d]]


undefined4 *
FUN_00a8b510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4dea1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a6a30(param_1,in_ECX);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  DAT_013f097c = DAT_013f097c + 1;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = &PTR_FUN_00e4497c;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  param_1[0x1b] = &PTR_LAB_00e44978;
  param_1[0x1d] = param_2;
  *param_1 = &PTR_LAB_00e449a0;
  param_1[0x15] = &PTR_LAB_00e44a70;
  param_1[0x1b] = &PTR_LAB_00e44978;
  uVar1 = *(undefined4 *)(in_ECX + 0x30);
  param_1[0x20] = param_3;
  param_1[0x1f] = uVar1;
  param_1[0x21] = param_4;
  param_1[0x22] = param_5;
  param_1[0x23] = param_6;
  local_1c = FUN_00aae9af(0x134);
  local_8._0_1_ = 4;
  if (local_1c == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar2 = param_1[0x1f];
    local_18 = *(undefined4 *)(iVar2 + 0x6b9bc);
    local_14 = CONCAT22((short)*(undefined4 *)(iVar2 + 0x6b9c0),
                        (short)*(undefined4 *)(iVar2 + 0x6b9bc));
    piVar3 = (int *)FUN_00a8b9f0(local_1c,local_14);
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1[0x1e] = piVar3;
  (**(code **)(*piVar3 + 0x74))(param_2);
  param_2 = CONCAT22(*(undefined2 *)(param_1 + 0x21),*(undefined2 *)(param_1 + 0x20));
  *(undefined4 *)(param_1[0x1e] + 0x126) = param_2;
  local_20 = (undefined4 *)param_1[0x22];
  local_1c = param_1[0x23];
  (**(code **)(*(int *)param_1[0x1e] + 0xcc))(&local_20);
  local_1c = param_1[0x1e];
  local_20 = param_1;
  FUN_0099e960();
  (**(code **)(*(int *)param_1[0x1e] + 0x34))();
  ExceptionList = local_10;
  return param_1;
}

