// FUN_005e6780 @ 005e6780 body=[[005e6780, 005e68ad]]


void FUN_005e6780(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_58 [32];
  int local_38;
  int *local_34;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53210;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00988530();
  local_8 = 0;
  piVar1 = (int *)FUN_00466dd0();
  local_14 = *piVar1;
  while (local_14 != 0) {
    local_38 = local_14;
    local_14 = *(int *)(local_14 + 8);
    puVar2 = (undefined4 *)FUN_0043a900();
    local_34 = (int *)*puVar2;
    iVar3 = FUN_00424a50();
    if (iVar3 < 2) {
      (**(code **)(*local_34 + 4))(param_1);
    }
    else {
      puVar5 = local_58;
      uVar4 = FUN_004a81e0(puVar5);
      FUN_0043acd0(uVar4,puVar5);
      local_8._0_1_ = 1;
      FUN_004012e0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00408ad0();
      FUN_0099f160(local_34);
    }
  }
  local_8 = 0xffffffff;
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

