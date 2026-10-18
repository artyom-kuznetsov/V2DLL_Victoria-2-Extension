// FUN_009f7850 @ 009f7850 body=[[009f7850, 009f7940] [009f7944, 009f795f] [009f7963, 009f797e] [009f7982, 009f79a4] [009f79a8, 009f7a08] [009f7a0c, 009f7a24]]


int FUN_009f7850(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_a0;
  uint local_8c;
  undefined4 local_84;
  uint local_70;
  undefined4 local_68;
  uint local_54;
  undefined4 local_4c;
  uint local_38;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e98b;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0xa0) <= iVar1) {
    return 0;
  }
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    uVar4 = FUN_009895f0(iVar1);
    local_8 = 0;
    uVar3 = FUN_009f7c00(*(undefined2 *)(param_1 + 0x3a),*(undefined2 *)(param_1 + 0x38));
    FUN_009895f0(uVar3);
    local_8._0_1_ = 1;
    FUN_00988f20(param_2);
    local_8._0_1_ = 2;
    uVar4 = FUN_00988f20(uVar4);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68);
    }
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30);
    }
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    local_8 = 0xffffffff;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84);
    }
  }
  else {
    FUN_00448aa0(param_2,0,0xffffffff);
  }
  if (*(char *)(param_1 + 0x99) == '\0') {
    FUN_00448aa0(param_2,0,0xffffffff);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x3c) + 4))();
    uVar4 = FUN_009895f0(uVar2);
    local_8 = 4;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a0);
    }
  }
  ExceptionList = local_10;
  return *(int *)(param_1 + 0x28) - iVar1;
}

