// FUN_007d0860 @ 007d0860 body=[[007d0860, 007d0924] [007d0928, 007d094f] [007d0953, 007d09c4]]


/* WARNING: Removing unreachable block (ram,0x007d08da) */

void FUN_007d0860(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e920;
  local_10 = ExceptionList;
  local_18 = param_2;
  ExceptionList = &local_10;
  while( true ) {
    iVar7 = param_2 * 2 + 2;
    if (param_3 <= iVar7) {
      local_8 = 0xffffffff;
      iVar4 = param_2;
      if (iVar7 == param_3) {
        iVar4 = param_3 + -1;
        *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
      }
      FUN_007d1cb0(param_1,iVar4,local_18,param_4,param_5);
      ExceptionList = local_10;
      return;
    }
    local_8 = 0xffffffff;
    piVar1 = *(int **)(*(int *)(param_1 + iVar7 * 4) + 100);
    iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + -4 + iVar7 * 4) + 100) + 0x1c))(local_50);
    local_8 = 0;
    iVar5 = (**(code **)(*piVar1 + 0x1c))(local_34);
    uVar2 = *(uint *)(iVar4 + 0x10);
    uVar3 = *(uint *)(iVar5 + 0x10);
    uVar6 = uVar3;
    if (uVar2 <= uVar3) {
      uVar6 = uVar2;
    }
    uVar6 = FUN_00414bd0(uVar6);
    if (uVar6 == 0) {
      if (uVar3 < uVar2) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(uVar3 != uVar2);
      }
    }
    local_11 = (int)uVar6 < 0;
    if (0xf < local_20) break;
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if ((bool)local_11) {
      iVar7 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
    param_2 = iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

