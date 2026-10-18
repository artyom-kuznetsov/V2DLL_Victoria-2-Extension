// FUN_004d11b0 @ 004d11b0 body=[[004d11b0, 004d12e1] [004d12e5, 004d132a] [004d1330, 004d14db]]


/* WARNING: Removing unreachable block (ram,0x004d1453) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004d11b0(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined *local_64;
  undefined **local_60;
  undefined *local_44;
  int local_40;
  undefined *local_3c;
  undefined4 local_34;
  undefined1 *local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b466c7;
  local_10 = ExceptionList;
  local_24 = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  uVar3 = *(undefined4 *)(param_1 + 0x5c);
  ExceptionList = &local_10;
  param_2[1] = 0x18d;
  *param_2 = CUpperHouse::vftable;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  local_8 = 1;
  local_30 = (undefined1 *)&local_64;
  local_64 = (undefined *)0x0;
  local_60 = (undefined **)0x0;
  FUN_004bea40();
  local_8 = 0;
  piVar12 = *(int **)(param_1 + 0x48);
  local_24 = 1;
  iVar9 = DAT_0131bb34;
  do {
    do {
      if ((piVar12 < *(int **)(param_1 + 0x48)) || (*(int **)(param_1 + 0x4c) <= piVar12)) {
        local_64 = (undefined *)0x4d14c7;
        local_60 = (undefined **)param_2;
        FUN_00979430();
        ExceptionList = local_10;
        return param_2;
      }
      local_28 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar12 * 4);
      local_34 = *(undefined4 *)(param_1 + 0x58);
      local_2c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x5c) * 4);
      piVar12 = piVar12 + 1;
      local_18 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
      if (iVar9 == 0) {
        local_60 = (undefined **)0x188;
        local_64 = (undefined *)0x4d129b;
        local_30 = (undefined1 *)FUN_00aae9af();
        local_8 = 2;
        if (local_30 == (undefined1 *)0x0) {
          iVar9 = 0;
        }
        else {
          local_60 = (undefined **)0x4d12b3;
          iVar9 = FUN_0041a160();
        }
        iVar10 = DAT_0131bb34;
        local_8 = 3;
        local_30 = (undefined1 *)0x0;
        if ((iVar9 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
          local_60 = (undefined **)DAT_0131bb34;
          local_64 = (undefined *)0x4d12dc;
          FUN_0096dd80();
          local_60 = (undefined **)iVar10;
                    /* WARNING: Subroutine does not return */
          local_64 = &UNK_004d12e2;
          FUN_00aae91b();
        }
        local_8 = 0;
        DAT_0131bb34 = iVar9;
      }
      iVar10 = *(int *)(iVar9 + 0x10) - *(int *)(iVar9 + 0xc) >> 2;
    } while (iVar10 < 1);
    local_14 = 0;
    local_20 = iVar10;
    do {
      puVar8 = *(undefined1 **)(local_14 + *(int *)(local_28 + 0x194));
      iVar9 = DAT_0131bb34;
joined_r0x004d1323:
      puVar6 = puVar8;
      DAT_0131bb34 = iVar9;
      if (puVar6 != (undefined1 *)0x0) {
        local_1c = *(undefined1 **)(puVar6 + 0x27c);
        puVar8 = local_1c;
        local_30 = puVar6;
        if (*(char *)(*(int *)(puVar6 + 0x68) + 0x2c) != '\0') {
          local_60 = &local_44;
          local_64 = puVar6;
          FUN_00963d10();
          iVar10 = local_40;
          puVar7 = local_44;
          puVar8 = local_1c;
          iVar9 = DAT_0131bb34;
          if ((-1 < local_40) && ((0 < local_40 || (local_44 != (undefined *)0x0)))) {
            uVar4 = *(uint *)(puVar6 + 0x58);
            if ((_DAT_013f2448 & 1) == 0) {
              _DAT_013f2448 = _DAT_013f2448 | 1;
              DAT_013f2440 = (undefined *)0xc3500000;
              DAT_013f2444 = 0;
            }
            local_60 = (undefined **)DAT_013f2444;
            local_64 = DAT_013f2440;
            uVar13 = __alldiv(uVar4 << 0x1e,
                              (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf |
                              (uVar4 & 0x1ffff) >> 2);
            local_60 = (undefined **)iVar10;
            local_64 = puVar7;
            uVar14 = __allmul(uVar13);
            lVar15 = (longlong)uVar14 >> 0xf;
            local_3c = (undefined *)lVar15;
            if (*(char *)(local_2c + 0xb68) == '\0') {
              if (*(char *)(local_2c + 0xb70) != '\0') {
                for (piVar5 = *(int **)(local_2c + 0xe54); piVar5 != (int *)0x0;
                    piVar5 = (int *)piVar5[2]) {
                  if (*piVar5 == *(int *)(puVar6 + 0x6c)) goto LAB_004d144d;
                }
                if (*(int *)(puVar6 + 0x6c) != *(int *)(local_2c + 0xe64)) {
LAB_004d1433:
                  local_60 = (undefined **)0x0;
                  local_64 = (undefined *)0x10000;
                  lVar15 = __alldiv((int)(uVar14 & 0x7fffffff8000),
                                    (int)((ulonglong)lVar15 >> 0x20) << 0xf |
                                    (uint)((uVar14 & 0x7fffffff8000) >> 0x20));
                }
              }
            }
            else if (*(int *)(local_2c + 0xe64) != *(int *)(puVar6 + 0x6c)) {
              for (piVar5 = *(int **)(local_2c + 0xe54); puVar8 = local_1c, iVar9 = DAT_0131bb34,
                  piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
                if (*piVar5 == *(int *)(puVar6 + 0x6c)) goto LAB_004d1433;
              }
              goto joined_r0x004d1323;
            }
LAB_004d144d:
            local_3c = (undefined *)lVar15;
            puVar8 = local_1c;
            iVar9 = DAT_0131bb34;
            if ((0 < lVar15) && (iVar10 = 1, 1 < local_18)) {
              do {
                puVar1 = (uint *)(param_2[4] + iVar10 * 8);
                local_64 = local_3c;
                local_60 = (undefined **)(int)((ulonglong)lVar15 >> 0x20);
                lVar16 = __allmul(*(undefined4 *)(*(int *)(local_30 + 0x7c) + iVar10 * 8),
                                  *(undefined4 *)(*(int *)(local_30 + 0x7c) + 4 + iVar10 * 8));
                uVar11 = (uint)(lVar16 >> 0xf);
                uVar4 = *puVar1;
                iVar10 = iVar10 + 1;
                *puVar1 = uVar11 + *puVar1;
                puVar1[1] = (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) + puVar1[1] +
                            (uint)CARRY4(uVar11,uVar4);
                puVar8 = local_1c;
                iVar9 = DAT_0131bb34;
              } while (iVar10 < local_18);
            }
          }
        }
        goto joined_r0x004d1323;
      }
      local_14 = local_14 + 0x10;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_20 = 0;
  } while( true );
}

