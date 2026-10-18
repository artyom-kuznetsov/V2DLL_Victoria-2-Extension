// FUN_007ff880 @ 007ff880 body=[[007ff880, 0080025d] [00800261, 00800277]]


/* WARNING: Removing unreachable block (ram,0x008001bd) */
/* WARNING: Removing unreachable block (ram,0x008001c0) */
/* WARNING: Removing unreachable block (ram,0x008001c4) */
/* WARNING: Removing unreachable block (ram,0x008001cb) */
/* WARNING: Removing unreachable block (ram,0x0080011c) */
/* WARNING: Removing unreachable block (ram,0x0080019c) */
/* WARNING: Removing unreachable block (ram,0x008001cf) */
/* WARNING: Removing unreachable block (ram,0x00800122) */
/* WARNING: Removing unreachable block (ram,0x0080018a) */
/* WARNING: Removing unreachable block (ram,0x00800156) */
/* WARNING: Removing unreachable block (ram,0x00800258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ff880(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_b0;
  int iStack_a8;
  int local_a4;
  int local_80;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b42e78;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2 != 0) {
    ExceptionList = &local_14;
    FUN_00401000(0x447a1fff);
    iVar2 = FUN_00b31c00();
    local_80 = 0;
    iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    if (*(char *)(*(int *)(iVar3 + 0x20) + 0x67) != '\0') {
      iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
      iVar3 = *(int *)(iVar3 + 0x24);
      if (iVar3 != 0) {
        local_80 = *(int *)(iVar3 + 0x134);
        uVar4 = *(undefined4 *)(iVar3 + 0x130);
        if ((local_80 == 0) ||
           ((((char)uVar4 == 'R' && ((char)((uint)uVar4 >> 8) == 'E')) &&
            ((char)((uint)uVar4 >> 0x10) == 'B')))) {
          local_80 = 0;
        }
      }
    }
    if (local_80 == 0) {
      if ((_DAT_013f23d8 & 1) == 0) {
        _DAT_013f23d8 = _DAT_013f23d8 | 1;
        DAT_013f23c4._0_4_ = DAT_00f17898;
        DAT_013f23c4._4_4_ = DAT_00f17898;
        DAT_013f23cc._0_4_ = DAT_00f17898;
        DAT_013f23c0 = 0x18d;
        _DAT_013f23bc = CColor::vftable;
        DAT_013f23cc._4_4_ = DAT_00f092fc;
        DAT_013f23d4 = 0;
        _atexit((_func_4879 *)&DAT_00c83e10);
      }
      iVar2 = DAT_012587e4;
      local_a4 = 1;
      iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
      if (1 < iVar3) {
        do {
          puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + local_a4 * 4);
          iVar9 = puVar1[3];
          if ((*(int *)(iVar9 + 300) != 0) &&
             (((*(char *)(iVar9 + 0x128) != 'R' || (*(char *)(iVar9 + 0x129) != 'E')) ||
              (*(char *)(iVar9 + 0x12a) != 'B')))) {
            if (*(char *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(iVar9 + 300) * 4) + 0x31) == '\0')
            {
              if (*(int *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(iVar9 + 300) * 4) + 0x142c) != 0)
              {
                FUN_004fb5c0();
                FUN_004fb5c0();
              }
            }
            else {
              FUN_004fb5c0();
              FUN_004fb5c0();
            }
          }
          uVar4 = FUN_009b6df0();
          *puVar1 = uVar4;
          uVar4 = FUN_009b6df0();
          iVar9 = local_a4 * 4;
          local_a4 = local_a4 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 4) = uVar4;
        } while (local_a4 < iVar3);
        ExceptionList = local_14;
        return;
      }
    }
    else {
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_80 * 4);
      iStack_a8 = local_80;
      if (*(char *)(iVar3 + 0x31) == '\0') {
        iStack_a8 = *(int *)(iVar3 + 0x142c);
      }
      uStack_c = 0;
      if (iStack_a8 == 0) {
        piVar7 = (int *)(DAT_012588e8 + 0xbe0);
        iVar3 = *(int *)(DAT_012588e8 + 0xbe4) - *(int *)(DAT_012588e8 + 0xbe0) >> 2;
        iVar9 = 0;
        if (0 < iVar3) {
          do {
            if (DAT_01258a08 == 0) {
              iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(*piVar7 + iVar9 * 4) + 0xbe8) +
                                       local_80 * 4) + 0x48);
            }
            else {
              iVar5 = 100000;
            }
            if (iVar2 <= iVar5) {
              FUN_004e9b90();
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar3);
        }
      }
      if ((_DAT_013f23d8 & 2) == 0) {
        _DAT_013f23d8 = _DAT_013f23d8 | 2;
        DAT_013f23a4 = 0x18d;
        _DAT_013f23a0 = CColor::vftable;
        DAT_013f23a8._0_4_ = DAT_00f17898;
        DAT_013f23a8._4_4_ = DAT_00f17898;
        DAT_013f23b0._0_4_ = DAT_00f17898;
        DAT_013f23b0._4_4_ = DAT_00f092fc;
        DAT_013f23b8 = 0;
        _atexit((_func_4879 *)&DAT_00c83e00);
      }
      if ((_DAT_013f23d8 & 4) == 0) {
        _DAT_013f23d8 = _DAT_013f23d8 | 4;
        DAT_013f2388 = 0x18d;
        _DAT_013f2384 = CColor::vftable;
        DAT_013f238c._0_4_ = DAT_00f1783c;
        DAT_013f238c._4_4_ = DAT_00f1783c;
        DAT_013f2394._0_4_ = 0;
        DAT_013f2394._4_4_ = DAT_00f092fc;
        DAT_013f239c = 0;
        _atexit((_func_4879 *)&DAT_00c83df0);
      }
      if ((_DAT_013f23d8 & 8) == 0) {
        _DAT_013f23d8 = _DAT_013f23d8 | 8;
        DAT_013f236c = 0x18d;
        _DAT_013f2368 = CColor::vftable;
        DAT_013f2370._0_4_ = 0;
        DAT_013f2378._0_4_ = 0;
        DAT_013f2380 = 0;
        DAT_013f2370._4_4_ = DAT_00f092fc;
        DAT_013f2378._4_4_ = DAT_00f092fc;
        _atexit((_func_4879 *)&DAT_00c83de0);
      }
      if ((_DAT_013f23d8 & 0x10) == 0) {
        _DAT_013f23d8 = _DAT_013f23d8 | 0x10;
        DAT_013f2350 = 0x18d;
        _DAT_013f234c = CColor::vftable;
        DAT_013f2354._4_4_ = 0;
        DAT_013f235c._0_4_ = 0;
        DAT_013f2364 = 0;
        DAT_013f2354._0_4_ = DAT_00f092fc;
        DAT_013f235c._4_4_ = DAT_00f092fc;
        _atexit((_func_4879 *)&DAT_00c83dd0);
      }
      if ((_DAT_013f23d8 & 0x20) == 0) {
        _DAT_013f23d8 = _DAT_013f23d8 | 0x20;
        DAT_013f2338._0_4_ = 0x3de147ae;
        DAT_013f2338._4_4_ = DAT_00f14a8c;
        DAT_013f2334 = 0x18d;
        _DAT_013f2330 = CColor::vftable;
        DAT_013f2340._0_4_ = 0x3f59999a;
        DAT_013f2348 = 0;
        DAT_013f2340._4_4_ = DAT_00f092fc;
        _atexit((_func_4879 *)&DAT_00c83dc0);
      }
      iStack_b0 = 1;
      iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
      if (1 < iVar3) {
        do {
          puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + iStack_b0 * 4);
          iVar9 = puVar1[3];
          iVar5 = *(int *)(iVar9 + 0x134);
          if ((iVar5 != 0) &&
             ((((*(char *)(iVar9 + 0x130) != 'R' || (*(char *)(iVar9 + 0x131) != 'E')) ||
               (*(char *)(iVar9 + 0x132) != 'B')) && (iStack_a8 != 0)))) {
            iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + iStack_a8 * 4);
            for (uVar6 = *(uint *)(iVar9 + 0x1418);
                (uVar6 != *(uint *)(iVar9 + 0x141c) && (*(int *)(uVar6 + 4) != iVar5));
                uVar6 = uVar6 + 8) {
            }
            if ((uVar6 < *(uint *)(iVar9 + 0x1418)) || (*(uint *)(iVar9 + 0x141c) <= uVar6)) {
              if (iStack_a8 != iVar5) {
                if (DAT_01258a08 == 0) {
                  iVar9 = *(int *)(*(int *)(*(int *)(iVar9 + 0xbe8) + iVar5 * 4) + 0x48);
                }
                else {
                  iVar9 = 100000;
                }
                if (iVar2 <= iVar9) goto LAB_0080005d;
              }
            }
            else {
LAB_0080005d:
              piVar7 = *(int **)(DAT_012588e8 + 0xbe0);
              iVar9 = *(int *)(DAT_012588e8 + 0xbe4) - (int)piVar7 >> 2;
              iVar10 = 0;
              if (0 < iVar9) {
                do {
                  if (DAT_01258a08 == 0) {
                    iVar8 = *(int *)(*(int *)(*(int *)(*piVar7 + 0xbe8) + iVar5 * 4) + 0x48);
                  }
                  else {
                    iVar8 = 100000;
                  }
                  if ((iVar2 <= iVar8) && (*(int *)(*piVar7 + 0x20) != iStack_a8)) break;
                  iVar10 = iVar10 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar10 < iVar9);
              }
            }
          }
          uVar4 = FUN_009b6df0();
          *puVar1 = uVar4;
          uVar4 = FUN_009b6df0();
          iVar9 = iStack_b0 * 4;
          iStack_b0 = iStack_b0 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 4) = uVar4;
        } while (iStack_b0 < iVar3);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

