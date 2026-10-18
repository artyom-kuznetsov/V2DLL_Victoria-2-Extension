// FUN_007095c0 @ 007095c0 body=[[007095c0, 0070968b] [0070968f, 007096b5] [007096b9, 0070971d]]


/* WARNING: Removing unreachable block (ram,0x0070963c) */

void FUN_007095c0(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_50 [5];
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e920;
  local_10 = ExceptionList;
  ppvVar2 = &local_10;
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    ExceptionList = ppvVar2;
    local_8 = 0xffffffff;
    iVar6 = (param_2 + -1) / 2;
    iVar4 = *(int *)(param_1 + iVar6 * 4);
    iVar3 = FUN_004a7140(*param_4 + 0x1c8,local_50);
    local_8 = 0;
    iVar4 = FUN_004a7140(iVar4 + 0x1c8,local_34);
    local_18 = *(uint *)(iVar3 + 0x10);
    uVar1 = *(uint *)(iVar4 + 0x10);
    uVar5 = local_18;
    if (uVar1 < local_18) {
      uVar5 = uVar1;
    }
    uVar5 = FUN_00414bd0(uVar5);
    if (uVar5 == 0) {
      if (uVar1 < local_18) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar1 != local_18);
      }
    }
    local_11 = (int)uVar5 < 0;
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
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
    local_11 = 1;
    ppvVar2 = ExceptionList;
    param_2 = iVar6;
  } while (param_3 < iVar6);
  *(int *)(param_1 + param_2 * 4) = *param_4;
  ExceptionList = local_10;
  return;
}

