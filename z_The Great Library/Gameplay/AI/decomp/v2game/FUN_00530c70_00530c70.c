// FUN_00530c70 @ 00530c70 body=[[00530c70, 00530e3a]]


void FUN_00530c70(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int local_24;
  uint local_20;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6342b;
  local_10 = ExceptionList;
  piVar6 = *(int **)(param_1 + 0x9d8);
  uVar5 = 0;
  lVar10 = 0;
  local_20 = 0;
  ExceptionList = &local_10;
  for (; (*(int **)(param_1 + 0x9d8) <= piVar6 && (piVar6 < *(int **)(param_1 + 0x9dc)));
      piVar6 = piVar6 + 1) {
    iVar2 = FUN_004b8870(*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4));
    uVar5 = uVar5 + iVar2;
  }
  if (DAT_0125fdd8 == 0) {
    iVar2 = FUN_00aae9af(0x1c);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_008b0060();
    }
    FUN_005c2810(uVar3);
  }
  local_24 = *(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2;
  if (0 < local_24) {
    local_1c = *(int **)(*(int *)(param_1 + 0xbcc) + 0x310);
    do {
      iVar2 = *local_1c;
      if (*(char *)(iVar2 + 0x39) != '\0') {
        uVar4 = *(int *)(iVar2 + 0x234) + *(int *)(iVar2 + 0x230);
        uVar7 = __alldiv(uVar4 * 0x40000000,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
        uVar4 = *(uint *)(iVar2 + 0x238);
        uVar8 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
        lVar9 = __allmul(uVar8,uVar7);
        lVar10 = (lVar9 >> 0xf) + lVar10;
        local_20 = local_20 + 1;
      }
      local_1c = local_1c + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
    if (local_20 != 0) {
      uVar7 = __alldiv(lVar10 << 0xf,local_20 << 0xf,
                       ((int)local_20 >> 0x1f) << 0xf | local_20 >> 0x11);
      goto LAB_00530de8;
    }
  }
  uVar7 = 0;
LAB_00530de8:
  lVar10 = __allmul(uVar5 << 0xf,((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11,uVar7);
  *(longlong *)(param_1 + 0x1a0) = lVar10 >> 0xf;
  uVar4 = *(uint *)(param_1 + 0xbdc);
  puVar1 = (uint *)(param_1 + 0x1a0);
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + uVar4 * 0x8000;
  *(int *)(param_1 + 0x1a4) =
       *(int *)(param_1 + 0x1a4) + (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) +
       (uint)CARRY4(uVar5,uVar4 * 0x8000);
  ExceptionList = local_10;
  return;
}

