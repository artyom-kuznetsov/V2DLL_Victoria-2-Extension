// FUN_004801c0 @ 004801c0 body=[[004801c0, 004802d0] [004802d4, 0048040c]]


void FUN_004801c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x120) + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x280) + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x2d8) + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 8) + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x60) + 4))(param_1);
  for (piVar1 = *(int **)(in_ECX + 0x330); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x17]) {
    FUN_009a0940(param_1);
    (**(code **)(*piVar1 + 4))(param_1);
  }
  FUN_0043acd0(in_ECX + 0x340,local_30);
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (local_1c < 0x10) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_009a0940(param_1);
    (**(code **)(*(int *)(in_ECX + 0x344) + 4))(param_1);
    FUN_009a0940(param_1);
    (**(code **)(*(int *)(in_ECX + 0x39c) + 4))(param_1);
    FUN_009a0940(param_1);
    (**(code **)(*(int *)(in_ECX + 0x434) + 4))(param_1);
    FUN_009a0940(param_1);
    (**(code **)(*(int *)(in_ECX + 0x4f4) + 4))(param_1);
    FUN_009a0940(param_1);
    (**(code **)(*(int *)(in_ECX + 0x1d0) + 4))(param_1);
    FUN_009a0940(param_1);
    (**(code **)(*(int *)(in_ECX + 0x178) + 4))(param_1);
    FUN_009a0940(param_1);
    (**(code **)(*(int *)(in_ECX + 0x5b4) + 4))(param_1);
    local_14 = (*(int *)(in_ECX + 0x828) - *(int *)(in_ECX + 0x824)) / 0x58;
    if (0 < local_14) {
      param_1 = 0;
      do {
        iVar2 = *(int *)(in_ECX + 0x824);
        FUN_009a0940(uVar3);
        (**(code **)(*(int *)(iVar2 + param_1) + 4))(uVar3);
        param_1 = param_1 + 0x58;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

