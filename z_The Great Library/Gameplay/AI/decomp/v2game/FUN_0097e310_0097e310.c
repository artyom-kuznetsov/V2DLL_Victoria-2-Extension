// FUN_0097e310 @ 0097e310 body=[[0097e310, 0097e3dd] [0097e3e1, 0097e49c] [0097e4a0, 0097e5ac] [0097e5b0, 0097e5ca] [0097e5ce, 0097e5e0]]


/* WARNING: Removing unreachable block (ram,0x0097e351) */

void FUN_0097e310(char *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  code *pcVar4;
  longlong lVar5;
  char *local_9c;
  char **local_98;
  char *local_84 [4];
  undefined4 local_74;
  uint local_70;
  char *local_68 [4];
  undefined4 local_58;
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
  puStack_c = &LAB_00b41f70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(char **)(in_ECX + 0x30) = param_1;
  *(int *)(in_ECX + 0x34) = param_2;
  local_98 = (char **)0x97e347;
  lVar5 = FUN_00b31c36();
  if (CONCAT44(param_2,param_1) < lVar5) {
    local_98 = (char **)0x5;
    local_9c = "value";
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (char *)((uint)local_4c[0]._1_3_ << 8);
    FUN_00409350();
    local_8 = 0;
    piVar1 = *(int **)(in_ECX + 0x20);
    local_98 = (char **)0x6;
    local_9c = "< 0.01";
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (char *)((uint)local_30[0] & 0xffffff00);
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_98 = local_4c;
    local_9c = (char *)0x97e3a7;
    (**(code **)(*piVar1 + 0x3c))();
    local_9c = (char *)0xffffffff;
    FUN_00408ed0(local_30,0);
    local_9c = (char *)0x0;
    FUN_00a5ecc0(local_30);
    if (0xf < local_1c) {
      local_9c = local_30[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (char *)((uint)local_30[0] & 0xffffff00);
    if (local_38 < 0x10) {
      ExceptionList = local_10;
      return;
    }
    local_9c = local_4c[0];
    goto LAB_0097e5c6;
  }
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < (char *)0x18000)) {
      local_98 = (char **)0x5;
      local_9c = "value";
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = (char *)((uint)local_4c[0]._1_3_ << 8);
      FUN_00409350();
      local_8 = 2;
      piVar1 = *(int **)(in_ECX + 0x20);
      local_14 = (undefined1 *)&local_9c;
      local_9c = param_1;
      local_98 = (char **)param_2;
      uVar3 = FUN_00988bb0(local_30,2);
      local_8 = CONCAT31(local_8._1_3_,3);
      pcVar4 = *(code **)(*piVar1 + 0x3c);
    }
    else {
      if ((0 < param_2) || ((-1 < param_2 && ((char *)0x31ffff < param_1)))) goto LAB_0097e525;
      local_98 = (char **)0x5;
      local_9c = "value";
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = (char *)((uint)local_4c[0]._1_3_ << 8);
      FUN_00409350();
      local_8 = 4;
      piVar1 = *(int **)(in_ECX + 0x20);
      local_14 = (undefined1 *)&local_9c;
      local_9c = param_1;
      local_98 = (char **)param_2;
      uVar3 = FUN_00988bb0(local_30,1);
      local_8 = CONCAT31(local_8._1_3_,5);
      pcVar4 = *(code **)(*piVar1 + 0x3c);
    }
    local_98 = local_4c;
    local_9c = (char *)0x97e46c;
    (*pcVar4)();
    local_9c = (char *)0xffffffff;
    FUN_00408ed0(uVar3,0);
    local_9c = (char *)0x0;
    FUN_00a5ecc0(uVar3);
    if (0xf < local_1c) {
      local_9c = local_30[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (char *)((uint)local_30[0] & 0xffffff00);
    local_9c = local_4c[0];
    uVar2 = local_38;
  }
  else {
LAB_0097e525:
    local_98 = (char **)0x5;
    local_9c = "value";
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 6;
    piVar1 = *(int **)(in_ECX + 0x20);
    local_14 = (undefined1 *)&local_9c;
    local_9c = param_1;
    local_98 = (char **)param_2;
    uVar3 = FUN_00988bb0(local_84,1);
    local_8 = CONCAT31(local_8._1_3_,7);
    local_98 = local_68;
    local_9c = (char *)0x97e57c;
    (**(code **)(*piVar1 + 0x3c))();
    local_9c = (char *)0xffffffff;
    FUN_00408ed0(uVar3,0);
    local_9c = (char *)0x0;
    FUN_00a5ecc0(uVar3);
    if (0xf < local_70) {
      local_9c = local_84[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = (char *)((uint)local_84[0] & 0xffffff00);
    local_9c = local_68[0];
    uVar2 = local_54;
  }
  if (uVar2 < 0x10) {
    ExceptionList = local_10;
    return;
  }
LAB_0097e5c6:
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

