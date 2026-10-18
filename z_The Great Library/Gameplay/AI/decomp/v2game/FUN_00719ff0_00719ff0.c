// FUN_00719ff0 @ 00719ff0 body=[[00719ff0, 0071a0b7] [0071a0bb, 0071a1bc] [0071a1c0, 0071a1da] [0071a1de, 0071a1f0]]


void FUN_00719ff0(char *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  char *local_9c;
  char **local_98;
  uint local_70;
  uint local_54;
  char *local_4c [4];
  undefined4 local_3c;
  uint local_38;
  char *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b506b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(char **)(in_ECX + 0x30) = param_1;
  *(int *)(in_ECX + 0x34) = param_2;
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < (char *)0x18000)) {
      local_98 = (char **)0x5;
      local_9c = "value";
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (char *)((uint)local_30[0]._1_3_ << 8);
      FUN_00409350();
      local_8 = 0;
      local_14 = (undefined1 *)&local_9c;
      local_9c = param_1;
      local_98 = (char **)param_2;
      uVar2 = FUN_009ca140(3);
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    else {
      if ((0 < param_2) || ((-1 < param_2 && ((char *)0x31ffff < param_1)))) goto LAB_0071a135;
      local_98 = (char **)0x5;
      local_9c = "value";
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (char *)((uint)local_30[0]._1_3_ << 8);
      FUN_00409350();
      local_8 = 2;
      local_14 = (undefined1 *)&local_9c;
      local_9c = param_1;
      local_98 = (char **)param_2;
      uVar2 = FUN_009ca140(2);
      local_8 = CONCAT31(local_8._1_3_,3);
    }
    local_98 = local_30;
    local_9c = (char *)0x71a087;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
    local_9c = (char *)0xffffffff;
    FUN_00408ed0(uVar2,0);
    local_9c = (char *)0x0;
    FUN_00a5ecc0(uVar2);
    local_9c = local_30[0];
    uVar1 = local_1c;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
LAB_0071a135:
    local_98 = (char **)0x5;
    local_9c = "value";
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (char *)((uint)local_4c[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 4;
    local_14 = (undefined1 *)&local_9c;
    local_9c = param_1;
    local_98 = (char **)param_2;
    uVar2 = FUN_009ca140(1);
    local_8 = CONCAT31(local_8._1_3_,5);
    local_98 = local_4c;
    local_9c = (char *)0x71a18c;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
    local_9c = (char *)0xffffffff;
    FUN_00408ed0(uVar2,0);
    local_9c = (char *)0x0;
    FUN_00a5ecc0(uVar2);
    local_9c = local_4c[0];
    uVar1 = local_38;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (uVar1 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

