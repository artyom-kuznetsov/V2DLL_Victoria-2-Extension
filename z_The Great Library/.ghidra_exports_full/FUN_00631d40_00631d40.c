// FUN_00631d40 @ 00631d40 body=[[00631d40, 00631dfa] [00631dfe, 00631e25] [00631e29, 00631eae]]


/* WARNING: Removing unreachable block (ram,0x00631db0) */

void FUN_00631d40(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_50;
  uint local_3c;
  uint local_34;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e920;
  local_10 = ExceptionList;
  iVar3 = param_2;
  ExceptionList = &local_10;
  while( true ) {
    iVar7 = iVar3 * 2 + 2;
    if (param_3 <= iVar7) {
      local_8 = 0xffffffff;
      iVar4 = iVar3;
      if (iVar7 == param_3) {
        *(undefined4 *)(param_1 + iVar3 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
        iVar4 = param_3 + -1;
        *(undefined4 *)(param_1 + 4 + iVar3 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
      }
      FUN_00632020(param_1,iVar4,param_2,param_4,param_5);
      ExceptionList = local_10;
      return;
    }
    local_8 = 0xffffffff;
    iVar4 = FUN_0055dd40();
    local_8 = 0;
    iVar5 = FUN_0055dd40();
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
    if (0xf < local_20) break;
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_34 = local_34 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
    local_3c = 0xf;
    local_50 = local_50 & 0xffffff00;
    if ((int)uVar6 < 0) {
      iVar7 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 8) = *(undefined4 *)(param_1 + iVar7 * 8);
    *(undefined4 *)(param_1 + 4 + iVar3 * 8) = *(undefined4 *)(param_1 + 4 + iVar7 * 8);
    iVar3 = iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34);
}

