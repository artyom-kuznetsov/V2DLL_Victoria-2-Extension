// FUN_0073acf0 @ 0073acf0 body=[[0073acf0, 0073adc6] [0073adca, 0073adf0] [0073adf4, 0073ae78]]


/* WARNING: Removing unreachable block (ram,0x0073ad7c) */

void FUN_0073acf0(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  void **ppvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_50 [5];
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined8 *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e920;
  ppvVar5 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar5, param_3 < param_2) {
    local_8 = 0xffffffff;
    iVar9 = (param_2 + -1) / 2;
    local_18 = (undefined8 *)(param_1 + iVar9 * 0x18);
    piVar2 = *(int **)(*(int *)((int)local_18 + 0xc) + 0x16c);
    iVar6 = (**(code **)(**(int **)(*(int *)((int)param_4 + 0xc) + 0x16c) + 0x18))(local_50);
    local_8 = 0;
    iVar7 = (**(code **)(*piVar2 + 0x18))(local_34);
    uVar3 = *(uint *)(iVar6 + 0x10);
    uVar4 = *(uint *)(iVar7 + 0x10);
    uVar8 = uVar4;
    if (uVar3 <= uVar4) {
      uVar8 = uVar3;
    }
    uVar8 = FUN_00414bd0(uVar8);
    if (uVar8 == 0) {
      if (uVar4 < uVar3) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)(uVar4 != uVar3);
      }
    }
    local_11 = (int)uVar8 < 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if (!(bool)local_11) break;
    puVar1 = (undefined8 *)(param_1 + param_2 * 0x18);
    *puVar1 = *local_18;
    puVar1[1] = local_18[1];
    puVar1[2] = local_18[2];
    ppvVar5 = ExceptionList;
    param_2 = iVar9;
  }
  puVar1 = (undefined8 *)(param_1 + param_2 * 0x18);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  ExceptionList = local_10;
  return;
}

