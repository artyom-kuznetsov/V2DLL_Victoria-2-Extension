// FUN_005b91b0 @ 005b91b0 body=[[005b91b0, 005b92de] [005b92e9, 005b9310] [005b931c, 005b95db] [005b95f0, 005b9626] [005b962d, 005b966e]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x005b92d2) */
/* WARNING: Removing unreachable block (ram,0x005b92d7) */
/* WARNING: Removing unreachable block (ram,0x005b92e9) */
/* WARNING: Removing unreachable block (ram,0x005b92fd) */
/* WARNING: Removing unreachable block (ram,0x005b92f8) */
/* WARNING: Removing unreachable block (ram,0x005b9302) */
/* WARNING: Removing unreachable block (ram,0x005b9307) */
/* WARNING: Removing unreachable block (ram,0x005b931c) */
/* WARNING: Removing unreachable block (ram,0x005b9337) */
/* WARNING: Removing unreachable block (ram,0x005b933a) */
/* WARNING: Removing unreachable block (ram,0x005b9342) */
/* WARNING: Removing unreachable block (ram,0x005b9401) */
/* WARNING: Removing unreachable block (ram,0x005b941a) */
/* WARNING: Removing unreachable block (ram,0x005b9405) */
/* WARNING: Removing unreachable block (ram,0x005b92ce) */
/* WARNING: Removing unreachable block (ram,0x005b95b1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b91b0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uStack_84;
  undefined8 uStack_80;
  int aiStack_78 [2];
  int *local_60;
  int *local_5c;
  int local_58;
  int local_28;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  piVar4 = DAT_0125870c;
  puStack_c = &LAB_00b46010;
  local_10 = ExceptionList;
  local_8 = 1;
  aiStack_78[1] = 0x5b9203;
  ExceptionList = &local_10;
  iVar7 = (**(code **)(*DAT_0125870c + 0x24))();
  aiStack_78[1] = 0x5b920a;
  iVar3 = -iVar7;
  *(int *)((int)aiStack_78 + iVar3 + 4) = iVar7;
  *(undefined4 *)((int)aiStack_78 + iVar3) = 0;
  *(undefined1 **)((int)aiStack_78 + iVar3 + -4) = &stack0xffffff90 + iVar3;
  *(undefined4 *)((int)&uStack_80 + iVar3) = 0x5b9217;
  _memset(*(void **)((int)aiStack_78 + iVar3 + -4),*(int *)((int)aiStack_78 + iVar3),
          *(size_t *)((int)aiStack_78 + iVar3 + 4));
  (&stack0xffffff90)[*(int *)(param_1 + 0x58) + iVar3] = 1;
  iVar7 = DAT_0125870c[0xaaf];
  *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x10;
  *(undefined4 *)((int)aiStack_78 + iVar3) = 0x5b9239;
  piVar8 = (int *)FUN_00aae9af();
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = extraout_ECX;
    *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x3f000000;
    *(undefined4 *)((int)aiStack_78 + iVar3) = 0x5b926e;
    FUN_00401000();
    *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x5b9276;
    iVar9 = FUN_00b31c00();
    *piVar8 = param_1;
    piVar8[1] = iVar9;
    piVar8[2] = 0;
    piVar8[3] = 0;
  }
  *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x5b928f;
  FUN_005b9f50();
  *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x10;
  *(undefined4 *)((int)aiStack_78 + iVar3) = 0x5b9296;
  local_60 = (int *)FUN_00aae9af();
  if (local_60 == (int *)0x0) {
    local_60 = (int *)0x0;
  }
  else {
    *local_60 = (int)piVar8;
    local_60[1] = 0;
    local_60[2] = 0;
    *(undefined1 *)(local_60 + 3) = 0;
  }
  iVar5 = DAT_012588e8;
  iVar9 = _DAT_00000000;
  local_58 = 1;
  if (param_2 == _DAT_00000000) {
    *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0;
    *(undefined4 *)((int)aiStack_78 + iVar3) = 0x5b95c3;
    FUN_005b8450();
  }
  else {
    iVar1 = *(int *)(_DAT_00000000 + 0x5c);
    local_24 = 0;
    if (0 < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24) {
      local_28 = 0;
      local_5c = local_60;
      do {
        iVar2 = *(int *)(piVar4[0x88e] + *(int *)(local_28 + 4 + *(int *)(iVar1 + 200)) * 4);
        if ((*(int *)(local_28 + *(int *)(iVar1 + 200)) != 4) &&
           ((iVar13 = local_28 + *(int *)(iVar1 + 200),
            *(int *)(local_28 + *(int *)(iVar1 + 200)) != 3 ||
            (*(int *)(*(int *)(iVar5 + 8) + *(int *)(iVar13 + 0xc) * 4) != 0)))) {
          if (iVar2 == param_2) {
            if ((iVar9 == param_1) && (*(char *)(*(int *)(iVar9 + 0x5c) + 0x2a) != '\0')) {
              cVar6 = *(char *)(*(int *)(param_2 + 0x5c) + 0x2a);
              goto joined_r0x005b943a;
            }
LAB_005b9440:
            if ((&stack0xffffff90)[*(int *)(iVar2 + 0x58) + iVar3] == '\0') {
              iVar13 = *(int *)(iVar13 + 0x10);
              if (-1 < iVar13) {
                iVar12 = *(int *)(*(int *)(param_2 + 0x5c) + 0x34) -
                         *(int *)(*(int *)(iVar2 + 0x5c) + 0x34);
                iVar14 = *(int *)(*(int *)(param_2 + 0x5c) + 0x38) -
                         *(int *)(*(int *)(iVar2 + 0x5c) + 0x38);
                if (iVar12 < -(iVar7 / 2)) {
                  iVar12 = iVar12 + iVar7;
                }
                if (iVar7 / 2 < iVar12) {
                  iVar12 = iVar12 - iVar7;
                }
                iVar15 = iVar14 * iVar14 + iVar12 * iVar12;
                iVar12 = iVar15 / 2;
                iVar14 = iVar15;
                if (1 < iVar15) {
                  do {
                    iVar14 = iVar12;
                    iVar12 = (iVar15 / iVar14 + iVar14) / 2;
                  } while (iVar12 < iVar14);
                }
                *(int *)((int)aiStack_78 + iVar3 + 4) = iVar12;
                *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x449c5000;
                *(undefined4 *)((int)aiStack_78 + iVar3) = 0x5b94d4;
                FUN_00401000();
                *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x5b94dc;
                iVar12 = FUN_00b31c00();
                *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0;
                *(undefined4 *)((int)aiStack_78 + iVar3) = 1000;
                *(longlong *)((int)&uStack_80 + iVar3) =
                     (longlong)iVar12 * (longlong)(iVar14 * 1000);
                *(undefined4 *)((int)&uStack_84 + iVar3) = 0x5b94ec;
                iVar12 = __alldiv();
                *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x10;
                *(undefined4 *)((int)aiStack_78 + iVar3) = 0x5b94f5;
                piVar8 = (int *)FUN_00aae9af();
                if (piVar8 == (int *)0x0) {
                  piVar8 = (int *)0x0;
                }
                else {
                  iVar14 = _DAT_00000008 + iVar13;
                  iVar13 = _DAT_00000008 + iVar13;
                  *piVar8 = iVar2;
                  piVar8[1] = iVar13 + iVar12;
                  piVar8[2] = iVar14;
                  piVar8[3] = 0;
                }
                *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x10;
                *(undefined4 *)((int)aiStack_78 + iVar3) = 0x5b9527;
                piVar10 = (int *)FUN_00aae9af();
                if (piVar10 == (int *)0x0) {
                  piVar10 = (int *)0x0;
                }
                else {
                  *piVar10 = (int)piVar8;
                  piVar10[1] = (int)local_5c;
                  piVar10[2] = 0;
                  *(undefined1 *)(piVar10 + 3) = 0;
                }
                piVar8 = piVar10;
                if (local_58 != 0) {
                  local_5c[2] = (int)piVar10;
                  piVar8 = local_60;
                }
                local_60 = piVar8;
                *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x5b9562;
                FUN_005b9f50();
                local_5c = piVar10;
                local_58 = local_58 + 1;
              }
              (&stack0xffffff90)[*(int *)(iVar2 + 0x58) + iVar3] = 1;
            }
          }
          else if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x2a) == '\0') {
            *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x5b93f4;
            cVar6 = FUN_004c3e20();
joined_r0x005b943a:
            if (cVar6 == '\0') goto LAB_005b9440;
          }
        }
        local_24 = local_24 + 1;
        local_28 = local_28 + 0x24;
      } while (local_24 < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24);
    }
  }
  if (local_60 != (int *)0x0) {
    *(int *)((int)aiStack_78 + iVar3 + 4) = *local_60;
                    /* WARNING: Subroutine does not return */
    *(undefined **)((int)aiStack_78 + iVar3) = &UNK_005b95dc;
    FUN_00aae91b();
  }
  if (param_3[2] < 1) {
    local_8 = (uint)local_8._1_3_ << 8;
    *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x5b9657;
    FUN_005b9fb0();
    uVar11 = 0;
  }
  else {
    iVar7 = *param_3;
    if (iVar7 != 0) {
      if ((char)param_3[3] == '\0') {
        iVar9 = *(int *)(iVar7 + 8);
        *param_3 = iVar9;
        if (iVar9 == 0) {
          param_3[1] = 0;
        }
        else {
          *(undefined4 *)(iVar9 + 4) = 0;
        }
        *(int *)((int)aiStack_78 + iVar3 + 4) = iVar7;
                    /* WARNING: Subroutine does not return */
        *(undefined **)((int)aiStack_78 + iVar3) = &UNK_005b9627;
        FUN_00aae91b();
      }
      *(undefined1 *)(iVar7 + 0xc) = 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    *(undefined4 *)((int)aiStack_78 + iVar3 + 4) = 0x5b9640;
    FUN_005b9fb0();
    uVar11 = 1;
  }
  ExceptionList = local_10;
  return uVar11;
}

