// FUN_00532c90 @ 00532c90 body=[[00532c90, 00532e9e]]


/* WARNING: Removing unreachable block (ram,0x00532e73) */

longlong * FUN_00532c90(int param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int local_30;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  local_14 = ExceptionList;
  uVar7 = *(uint *)(param_1 + 0x12f4);
  if (uVar7 != 0) {
    iVar1 = *(int *)(param_1 + 0x133c);
    ExceptionList = &local_14;
    if (DAT_0131bb34 == 0) {
      ExceptionList = &local_14;
      iVar4 = FUN_00aae9af(0x188);
      local_c = 0;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0041a160();
      }
      local_c = 0xffffffff;
      FUN_00423700(uVar5);
    }
    uVar6 = *(int *)(*(int *)(param_1 + 0xa60) + 0x380) +
            *(int *)(*(int *)(param_1 + 0xbcc) + 0x60) + 1000;
    uVar8 = __alldiv(uVar6 * 0x40000000,((int)uVar6 >> 0x1f) << 0x1e | uVar6 >> 2,0x1f40000,0);
    uVar6 = *(uint *)(iVar1 + *(int *)(DAT_0131bb34 + 0x17c) * 4);
    uVar9 = __alldiv(uVar6 << 0x1e,uVar6 >> 2,uVar7 << 0xf,uVar7 >> 0x11);
    uVar10 = __allmul(uVar9,uVar8);
    iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x28);
    iVar4 = *(int *)(param_1 + 0x854) - *(int *)(param_1 + 0x850) >> 2;
    local_28 = 0;
    local_30 = 0;
    if (0 < iVar4) {
      do {
        cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x850) + local_30 * 4) + 0x34))();
        if ((cVar3 != '\0') &&
           (iVar2 = *(int *)(*(int *)(param_1 + 0x850) + local_30 * 4),
           *(char *)(*(int *)(iVar2 + 0x54) + 0x58) != '\0')) {
          local_28 = local_28 + *(int *)(iVar2 + 0x1b4);
        }
        local_30 = local_30 + 1;
      } while (local_30 < iVar4);
    }
    iVar4 = __alldiv((longlong)(local_28 * 1000) *
                     (longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x2c),1000,0);
    uVar7 = iVar4 + iVar1;
    uVar8 = __alldiv(uVar7 * 0x40000000,((int)uVar7 >> 0x1f) << 0x1e | uVar7 >> 2,0x1f40000,0);
    lVar11 = __alldiv((int)(uVar10 & 0x7fffffff8000),
                      (int)((longlong)uVar10 >> 0x2f) << 0xf |
                      (uint)((uVar10 & 0x7fffffff8000) >> 0x20),uVar8);
    if (0x8000 < lVar11) {
      lVar11 = 0x8000;
    }
    *param_2 = lVar11;
    ExceptionList = local_14;
    return param_2;
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  return param_2;
}

