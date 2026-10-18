// FUN_004548e0 @ 004548e0 body=[[004548e0, 00454997] [0045499b, 004549c1] [004549c5, 00454a38]]


/* WARNING: Removing unreachable block (ram,0x0045494e) */

void FUN_004548e0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_4c;
  uint local_38;
  uint local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8b610;
  local_10 = ExceptionList;
  iVar3 = param_2;
  ExceptionList = &local_10;
  while( true ) {
    iVar7 = iVar3 * 2 + 2;
    if (param_3 <= iVar7) {
      local_8 = 0xffffffff;
      iVar4 = iVar3;
      if (iVar7 == param_3) {
        iVar4 = param_3 + -1;
        *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
      }
      FUN_00454b30(param_1,iVar4,param_2,param_4,param_5);
      ExceptionList = local_10;
      return;
    }
    local_8 = 0xffffffff;
    iVar4 = FUN_004f97a0();
    local_8 = 0;
    iVar5 = FUN_004f97a0();
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
    if (0xf < local_1c) break;
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_30 = local_30 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    local_38 = 0xf;
    local_4c = local_4c & 0xffffff00;
    if ((int)uVar6 < 0) {
      iVar7 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
    iVar3 = iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30);
}

