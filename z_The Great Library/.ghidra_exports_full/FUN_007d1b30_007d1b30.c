// FUN_007d1b30 @ 007d1b30 body=[[007d1b30, 007d1b68] [007d1b70, 007d1bff] [007d1c03, 007d1c29] [007d1c2d, 007d1cae]]


/* WARNING: Removing unreachable block (ram,0x007d1bb5) */

void FUN_007d1b30(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_4c;
  uint local_38;
  uint local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8b610;
  local_10 = ExceptionList;
  ppvVar3 = &local_10;
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    ExceptionList = ppvVar3;
    iVar7 = (param_2 + -1) / 2;
    local_8 = 0xffffffff;
    iVar5 = *(int *)(param_1 + iVar7 * 4);
    iVar4 = FUN_00567250(*(undefined4 *)(*param_4 + 0x70));
    local_8 = 0;
    iVar5 = FUN_00567250(*(undefined4 *)(iVar5 + 0x70));
    uVar1 = *(uint *)(iVar4 + 0x10);
    uVar2 = *(uint *)(iVar5 + 0x10);
    uVar6 = uVar2;
    if (uVar1 <= uVar2) {
      uVar6 = uVar1;
    }
    uVar6 = FUN_00414bd0(uVar6);
    if (uVar6 == 0) {
      if (uVar2 < uVar1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(uVar2 != uVar1);
      }
    }
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_30 = local_30 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    if (-1 < (int)uVar6) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
    ppvVar3 = ExceptionList;
    param_2 = iVar7;
    if (iVar7 <= param_3) {
      *(int *)(param_1 + iVar7 * 4) = *param_4;
      ExceptionList = local_10;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  ExceptionList = local_10;
  return;
}

