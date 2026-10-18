// FUN_007d1cb0 @ 007d1cb0 body=[[007d1cb0, 007d1d76] [007d1d7a, 007d1da0] [007d1da4, 007d1e22]]


/* WARNING: Removing unreachable block (ram,0x007d1d2c) */

void FUN_007d1cb0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  void **ppvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_4c [5];
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8b610;
  local_10 = ExceptionList;
  ppvVar4 = &local_10;
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    ExceptionList = ppvVar4;
    local_8 = 0xffffffff;
    iVar8 = (param_2 + -1) / 2;
    piVar1 = *(int **)(*(int *)(param_1 + iVar8 * 4) + 100);
    iVar5 = (**(code **)(**(int **)(*param_4 + 100) + 0x1c))(local_4c);
    local_8 = 0;
    iVar6 = (**(code **)(*piVar1 + 0x1c))(local_30);
    uVar2 = *(uint *)(iVar5 + 0x10);
    uVar3 = *(uint *)(iVar6 + 0x10);
    uVar7 = uVar3;
    if (uVar2 <= uVar3) {
      uVar7 = uVar2;
    }
    uVar7 = FUN_00414bd0(uVar7);
    if (uVar7 == 0) {
      if (uVar3 < uVar2) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)(uVar3 != uVar2);
      }
    }
    local_11 = (int)uVar7 < 0;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    if (!(bool)local_11) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar8 * 4);
    ppvVar4 = ExceptionList;
    param_2 = iVar8;
    if (iVar8 <= param_3) {
      *(int *)(param_1 + iVar8 * 4) = *param_4;
      ExceptionList = local_10;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  ExceptionList = local_10;
  return;
}

