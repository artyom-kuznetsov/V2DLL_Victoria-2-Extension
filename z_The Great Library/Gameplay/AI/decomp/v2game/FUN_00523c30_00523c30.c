// FUN_00523c30 @ 00523c30 body=[[00523c30, 00523d29] [00523d30, 00523eab] [00523eb8, 00523f38] [00523f3c, 00524147] [0052414d, 005241e8]]


/* WARNING: Removing unreachable block (ram,0x00523ea2) */
/* WARNING: Removing unreachable block (ram,0x0052413e) */
/* WARNING: Removing unreachable block (ram,0x00523f2f) */
/* WARNING: Removing unreachable block (ram,0x00523e1f) */
/* WARNING: Removing unreachable block (ram,0x005241c6) */

void FUN_00523c30(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong local_158;
  int local_12c;
  int *local_124;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba706f;
  local_14 = ExceptionList;
  if ((*(int *)(param_1 + 0xe90) - *(int *)(param_1 + 0xe8c) & 0xfffffffcU) == 0) {
    return;
  }
  ExceptionList = &local_14;
  if (DAT_0125a69c == 0) {
    ExceptionList = &local_14;
    iVar6 = FUN_00aae9af();
    local_c = 0;
    if (iVar6 != 0) {
      FUN_008b0060();
    }
    local_c = 0xffffffff;
    FUN_0044ec00();
  }
  cVar5 = FUN_005068b0();
  if (cVar5 == '\0') {
    FUN_0044ce30();
    cVar5 = FUN_005068b0();
    bVar4 = false;
    if (cVar5 == '\0') goto LAB_00523ce8;
  }
  bVar4 = true;
LAB_00523ce8:
  FUN_0054c6e0(*(int *)(param_1 + 0xe8c),*(int *)(param_1 + 0xe90),
               *(int *)(param_1 + 0xe90) - *(int *)(param_1 + 0xe8c) >> 2);
  local_124 = *(int **)(param_1 + 0xe8c);
  local_158 = 0;
  do {
    while( true ) {
      if ((local_124 < *(int **)(param_1 + 0xe8c)) || (*(int **)(param_1 + 0xe90) <= local_124)) {
        lVar10 = FUN_00b31c36();
        if (lVar10 < local_158) {
          FUN_005241f0();
        }
        ExceptionList = local_14;
        return;
      }
      iVar6 = *local_124;
      local_124 = local_124 + 1;
      if (bVar4) break;
LAB_00523f45:
      uVar11 = __allmul(*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14));
      lVar10 = __alldiv((uint)uVar11 & 0xffff8000,(int)((ulonglong)uVar11 >> 0x20));
      if (*(int *)(param_1 + 0x20) != *(int *)(iVar6 + 0xc)) {
        uVar9 = *(uint *)(*(int *)(param_1 + 0xa60) + 0xa0);
        lVar10 = __alldiv(uVar9 << 0x1e,
                          (((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) << 0xf |
                          (uVar9 & 0x1ffff) >> 2);
        lVar10 = __allmul(lVar10 + 0x8000);
        lVar10 = lVar10 >> 0xf;
      }
      local_12c = (int)((ulonglong)lVar10 >> 0x20);
      uVar9 = (uint)lVar10;
      iVar8 = *(uint *)(param_1 + 0xe78) - uVar9;
      iVar7 = (*(int *)(param_1 + 0xe7c) - local_12c) - (uint)(*(uint *)(param_1 + 0xe78) < uVar9);
      if ((iVar7 < 1) && (iVar7 < 0)) {
        local_158 = local_158 + CONCAT44(-(iVar7 + (uint)(iVar8 != 0)),-iVar8);
        FUN_00525770(5);
        if (*(int *)(iVar6 + 0xc) != 0) {
          uVar3 = *(uint *)(param_1 + 0xe78);
          iVar7 = *(int *)(param_1 + 0xe7c);
          iVar8 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xc) * 4) + 0xe88)
          ;
          puVar1 = (uint *)(iVar8 + 0x20);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 + uVar3;
          piVar2 = (int *)(iVar8 + 0x24);
          *piVar2 = *piVar2 + iVar7 + (uint)CARRY4(uVar9,uVar3);
        }
        cVar5 = *(char *)(iVar6 + 0x20);
        *(undefined1 *)(iVar6 + 0x20) = 0;
        if (((cVar5 != '\0') && (*(int *)(iVar6 + 0xc) != *(int *)(param_1 + 0x20))) &&
           (*(int *)(iVar6 + 0xc) != 0)) {
          FUN_008a8650();
          FUN_00409350();
          local_c = 0xd;
          FUN_008b26e0();
          iVar6 = FUN_008b3060();
          if ((iVar6 != 0) && (iVar6 = FUN_008b24f0(), iVar6 != 0)) {
            FUN_008a6620();
            FUN_008a8120();
          }
          local_c = 0xffffffff;
        }
      }
      else {
        FUN_00525770(5);
        if (*(int *)(iVar6 + 0xc) != 0) {
          iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xc) * 4) + 0xe88)
          ;
          puVar1 = (uint *)(iVar7 + 0x20);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar9;
          piVar2 = (int *)(iVar7 + 0x24);
          *piVar2 = *piVar2 + local_12c + (uint)CARRY4(uVar3,uVar9);
        }
        *(undefined1 *)(iVar6 + 0x20) = 1;
      }
    }
    iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xc) * 4) +
                             0xbe8) + *(int *)(param_1 + 0x20) * 4);
    iVar8 = *(int *)(iVar7 + 0x30);
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x14) == *(int *)(iVar7 + 0xc))) goto LAB_00523f45;
    if (*(char *)(iVar6 + 0x20) != '\0') {
      FUN_008a8650();
      uVar9 = *(uint *)(*(int *)(DAT_012586dc + 0x10) + 0x50);
      lVar10 = __alldiv(uVar9 << 0x1e,
                        (((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) << 0xf |
                        (uVar9 & 0x1ffff) >> 2);
      if (lVar10 < *(longlong *)(iVar6 + 0x18)) {
        FUN_00409350();
        local_c = 1;
        FUN_008b26e0();
        iVar7 = FUN_008b3060();
        if ((iVar7 != 0) && (iVar7 = FUN_008b24f0(), iVar7 != 0)) {
          FUN_008a6620();
          FUN_008a8120();
        }
        local_c = 0xffffffff;
      }
      else {
        FUN_00409350();
        local_c = 7;
        FUN_008b26e0();
        iVar7 = FUN_008b3060();
        if ((iVar7 != 0) && (iVar7 = FUN_008b24f0(), iVar7 != 0)) {
          FUN_008a6620();
          FUN_008a8120();
        }
        local_c = 0xffffffff;
      }
    }
    *(undefined1 *)(iVar6 + 0x20) = 0;
  } while( true );
}

