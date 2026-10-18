// FUN_00522cf0 @ 00522cf0 body=[[00522cf0, 00522dda] [00522de0, 00523126]]


void FUN_00522cf0(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 local_34;
  int *local_2c;
  int local_28;
  longlong local_24;
  undefined8 local_1c;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar7 = DAT_012588e8;
  if (*(int *)(DAT_012588e8 + 0xb0c) <
      *(int *)(param_1 + 0xe9c) + (*(int *)(*(int *)(DAT_012586dc + 0x10) + 8) / 1000) * 0x2238) {
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  local_8 = *(int *)(*(int *)(param_1 + 0xa60) + 0x3c0) + 1000;
  uVar2 = __alldiv((longlong)(int)local_8 * (longlong)*(int *)(*(int *)(DAT_012586dc + 0x10) + 0x28)
                   ,1000,0);
  uVar10 = __alldiv(uVar2 << 0x1e,
                    (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2,
                    0x1f40000,0);
  local_1c = 0;
  local_24 = __allmul(*(undefined4 *)(param_1 + 0x1560),*(undefined4 *)(param_1 + 0x1564),uVar10);
  local_24 = local_24 >> 0xf;
  iVar3 = *(int *)(iVar7 + 0xae0) - *(int *)(iVar7 + 0xadc) >> 2;
  local_14 = 0;
  local_10 = iVar3;
  if (0 < iVar3) {
    do {
      iVar7 = *(int *)(*(int *)(iVar7 + 0xadc) + local_14 * 4);
      local_c = *(int *)(iVar7 + 0x20);
      if (((local_c != 0) &&
          (0 < (int)(*(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) & 0xfffffffcU))) &&
         ((local_c == *(int *)(param_1 + 0x20) ||
          (((*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + local_c * 4) + 0x34) == 0 &&
            (((*(char *)(iVar7 + 0x1c) != 'R' || (*(char *)(iVar7 + 0x1d) != 'E')) ||
             (*(char *)(iVar7 + 0x1e) != 'B')))) &&
           (((*(char *)(param_1 + 0x1c) != 'R' || (*(char *)(param_1 + 0x1d) != 'E')) ||
            (*(char *)(param_1 + 0x1e) != 'B')))))))) {
        local_2c = *(int **)(param_1 + 0xe8c);
        while( true ) {
          if ((local_2c < *(int **)(param_1 + 0xe8c)) || (*(int **)(param_1 + 0xe90) <= local_2c))
          goto LAB_00522e99;
          if (*(int *)(*local_2c + 0xc) == local_c) break;
          local_2c = local_2c + 1;
        }
        if (*(char *)(*local_2c + 0x20) == '\0') goto LAB_00522fe5;
LAB_00522e99:
        iVar3 = *(int *)(*(int *)(iVar7 + 0xa60) + 0x3c0);
        iVar7 = *(int *)(iVar7 + 0xe88);
        uVar2 = iVar3 + 1000;
        uVar10 = __alldiv(iVar3 * 0x40000000,
                          (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf |
                          (uVar2 & 0x1ffff) >> 2,0x1f40000,0);
        uVar10 = __allmul(*(uint *)(iVar7 + 0x10) - *(uint *)(iVar7 + 0x18),
                          (*(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x1c)) -
                          (uint)(*(uint *)(iVar7 + 0x10) < *(uint *)(iVar7 + 0x18)),uVar10);
        uVar2 = (uint)uVar10 >> 0xf | (int)((ulonglong)uVar10 >> 0x20) << 0x11;
        if (local_c == *(int *)(param_1 + 0x20)) {
          FUN_0048bfc0(local_24,uVar2 - DAT_0125db68);
        }
        else {
          local_34 = 0;
          if ((local_2c < *(int **)(param_1 + 0xe8c)) || (*(int **)(param_1 + 0xe90) <= local_2c)) {
            local_34._4_4_ = 0;
            local_34._0_4_ = (int *)0x0;
            piVar6 = (int *)local_34;
            uVar9 = local_34._4_4_;
          }
          else {
            piVar6 = *(int **)(*local_2c + 0x18);
            uVar9 = *(undefined4 *)(*local_2c + 0x1c);
          }
          FUN_0048bfc0(local_24 - CONCAT44(uVar9,piVar6),uVar2 - DAT_0125db68);
        }
        puVar4 = (uint *)FUN_004730d0();
        local_1c = CONCAT44((int)local_1c._4_4_ + puVar4[1] +
                            (uint)CARRY4((uint)(int *)local_1c,*puVar4),
                            (int)(int *)local_1c + *puVar4);
        iVar3 = local_10;
      }
LAB_00522fe5:
      local_14 = local_14 + 1;
      iVar7 = DAT_012588e8;
    } while (local_14 < iVar3);
  }
  uVar2 = *(uint *)(*(int *)(DAT_012586dc + 0x10) + 0x10);
  uVar10 = __alldiv(uVar2 << 0x1e,
                    (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2,
                    0x1f40000,0);
  if (1000 < (int)local_8) {
    local_8 = 1000;
  }
  uVar11 = __alldiv(local_8 << 0x1e,
                    (((int)local_8 >> 0x1f) << 0xf | local_8 >> 0x11) << 0xf |
                    (local_8 & 0x1ffff) >> 2,0x1f40000,0);
  lVar12 = __allmul(uVar11,uVar10);
  lVar12 = lVar12 >> 0xf;
  local_34 = CONCAT44(local_34._4_4_,(int)lVar12);
  local_28 = (int)((ulonglong)lVar12 >> 0x20);
  piVar6 = *(int **)(param_1 + 0xe8c);
  do {
    piVar8 = local_1c._4_4_;
    if ((piVar6 < *(int **)(param_1 + 0xe8c)) || (*(int **)(param_1 + 0xe90) <= piVar6))
    goto LAB_005230a9;
    iVar7 = *piVar6;
    piVar6 = piVar6 + 1;
  } while ((*(int *)(iVar7 + 0xc) != 0) || (*(char *)(iVar7 + 0x20) == '\0'));
  lVar12 = (lVar12 - *(longlong *)(iVar7 + 0x18)) + local_1c;
  local_1c = CONCAT44(local_1c._4_4_,(int)lVar12);
  piVar8 = (int *)((ulonglong)lVar12 >> 0x20);
LAB_005230a9:
  if ((*(int *)(param_1 + 0xe90) - *(int *)(param_1 + 0xe8c) & 0xfffffffcU) == 0) {
    local_2c = (int *)0x2d2d2d;
    cVar1 = FUN_00523130(param_1,0x2d2d2d,0,(int *)local_1c,piVar8);
    if (cVar1 != '\0') {
      piVar6 = (int *)local_34;
      local_2c = (int *)local_34;
      local_34 = CONCAT44(piVar8,(int *)local_1c);
      if (((int)piVar8 < local_28) || (((int)piVar8 <= local_28 && ((int *)local_1c <= piVar6)))) {
        ppiVar5 = &local_2c;
      }
      else {
        ppiVar5 = (int **)&local_34;
      }
      piVar8 = ppiVar5[1];
      local_1c = ZEXT48(*ppiVar5);
    }
  }
  param_2[1] = piVar8;
  *param_2 = (int *)local_1c;
  return;
}

