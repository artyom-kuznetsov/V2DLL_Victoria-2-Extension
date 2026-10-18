// FUN_0073a6f0 @ 0073a6f0 body=[[0073a6f0, 0073a7bf] [0073a7c3, 0073a7e9] [0073a7ed, 0073a8a7]]


/* WARNING: Removing unreachable block (ram,0x0073a776) */

void FUN_0073a6f0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8b610;
  local_10 = ExceptionList;
  local_14 = param_2;
  ExceptionList = &local_10;
  while( true ) {
    iVar8 = param_2 * 2 + 2;
    if (param_3 <= iVar8) {
      local_8 = 0xffffffff;
      if (iVar8 == param_3) {
        iVar8 = param_1 + -0x18 + param_3 * 0x18;
        puVar1 = (undefined8 *)(param_1 + param_2 * 0x18);
        *puVar1 = *(undefined8 *)(param_1 + -0x18 + param_3 * 0x18);
        puVar1[1] = *(undefined8 *)(iVar8 + 8);
        param_2 = param_3 + -1;
        puVar1[2] = *(undefined8 *)(iVar8 + 0x10);
      }
      FUN_0073acf0(param_1,param_2,local_14,param_4,param_5);
      ExceptionList = local_10;
      return;
    }
    local_8 = 0xffffffff;
    piVar2 = *(int **)(*(int *)(param_1 + iVar8 * 0x18 + 0xc) + 0x16c);
    iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + -0xc + iVar8 * 0x18) + 0x16c) + 0x18))
                      (local_4c);
    local_8 = 0;
    iVar6 = (**(code **)(*piVar2 + 0x18))(local_30);
    uVar3 = *(uint *)(iVar5 + 0x10);
    uVar4 = *(uint *)(iVar6 + 0x10);
    uVar7 = uVar4;
    if (uVar3 <= uVar4) {
      uVar7 = uVar3;
    }
    uVar7 = FUN_00414bd0(uVar7);
    if (uVar7 == 0) {
      if (uVar4 < uVar3) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)(uVar4 != uVar3);
      }
    }
    if (0xf < local_1c) break;
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if ((int)uVar7 < 0) {
      iVar8 = param_2 * 2 + 1;
    }
    iVar5 = param_1 + iVar8 * 0x18;
    puVar1 = (undefined8 *)(param_1 + param_2 * 0x18);
    *puVar1 = *(undefined8 *)(param_1 + iVar8 * 0x18);
    puVar1[1] = *(undefined8 *)(iVar5 + 8);
    puVar1[2] = *(undefined8 *)(iVar5 + 0x10);
    param_2 = iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

