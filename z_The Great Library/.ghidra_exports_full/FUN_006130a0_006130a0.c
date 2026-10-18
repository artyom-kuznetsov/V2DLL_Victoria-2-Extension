// FUN_006130a0 @ 006130a0 body=[[006130a0, 00613160] [00613164, 0061318a] [0061318e, 0061320e]]


/* WARNING: Removing unreachable block (ram,0x0061310f) */

void FUN_006130a0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_50;
  uint local_3c;
  uint local_34;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e920;
  local_10 = ExceptionList;
  ppvVar3 = &local_10;
  if (param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    ExceptionList = ppvVar3;
    local_8 = 0xffffffff;
    iVar7 = (param_2 + -1) / 2;
    iVar4 = FUN_005fce10();
    local_8 = 0;
    iVar5 = FUN_005fce10();
    uVar1 = *(uint *)(iVar5 + 0x10);
    uVar2 = *(uint *)(iVar4 + 0x10);
    uVar6 = uVar1;
    if (uVar2 < uVar1) {
      uVar6 = uVar2;
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
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_34 = local_34 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
    if (-1 < (int)uVar6) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
    ppvVar3 = ExceptionList;
    param_2 = iVar7;
    if (iVar7 <= param_3) {
      *(undefined4 *)(param_1 + iVar7 * 4) = *param_4;
      ExceptionList = local_10;
      return;
    }
  }
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  ExceptionList = local_10;
  return;
}

