// FUN_00632020 @ 00632020 body=[[00632020, 006320dc] [006320e0, 00632106] [0063210a, 00632165]]


/* WARNING: Removing unreachable block (ram,0x0063208b) */

void FUN_00632020(int param_1,int param_2,int param_3,undefined4 *param_4)

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
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar3, param_3 < param_2) {
    local_8 = 0xffffffff;
    iVar7 = (param_2 + -1) / 2;
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
    *(undefined4 *)(param_1 + param_2 * 8) = *(undefined4 *)(param_1 + iVar7 * 8);
    *(undefined4 *)(param_1 + 4 + param_2 * 8) = *(undefined4 *)(param_1 + iVar7 * 8 + 4);
    ppvVar3 = ExceptionList;
    param_2 = iVar7;
  }
  *(undefined4 *)(param_1 + param_2 * 8) = *param_4;
  *(undefined4 *)(param_1 + 4 + param_2 * 8) = param_4[1];
  ExceptionList = local_10;
  return;
}

