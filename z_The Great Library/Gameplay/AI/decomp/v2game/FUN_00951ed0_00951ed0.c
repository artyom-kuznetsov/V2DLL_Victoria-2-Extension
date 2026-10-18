// FUN_00951ed0 @ 00951ed0 body=[[00951ed0, 009521e5] [009521ef, 0095222b]]


void FUN_00951ed0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  int local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6342b;
  local_14 = ExceptionList;
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
    FUN_00423700(uVar5);
  }
  iVar4 = *(int *)(DAT_012586dc + 0x30);
  iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x100);
  iVar10 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  uVar6 = __alldiv((longlong)iVar7 * (longlong)*(int *)(iVar4 + 0x2dc),1000,0);
  uVar11 = __alldiv(uVar6 << 0x1e,((int)uVar6 >> 0x1f) << 0x1e | uVar6 >> 2,0x1f40000,0);
  iVar8 = *(int *)(iVar4 + 0x2e0);
  iVar2 = *(int *)(DAT_012587e4 + 4);
  iVar3 = *(int *)(iVar2 + *(int *)(param_1 + 0x1c) * 4);
  iVar4 = __alldiv((longlong)(*(int *)(*(int *)(iVar3 + 0xbcc) + 0x28c) + *(int *)(iVar3 + 0xea0)) *
                   (longlong)-*(int *)(iVar4 + 0x2e4),1000,0);
  if (iVar4 < -iVar8) {
    iVar4 = -iVar8;
  }
  iVar7 = __alldiv((longlong)iVar7 * (longlong)iVar4,1000,0);
  iVar8 = -iVar7;
  iVar4 = *(int *)(iVar2 + *(int *)(param_1 + 0x1c) * 4);
  if (iVar7 != 0 && -1 < iVar8) {
    iVar8 = __alldiv((longlong)(*(int *)(*(int *)(iVar4 + 0xbcc) + 0x288) + 1000) * (longlong)iVar8,
                     1000,0);
  }
  *(int *)(iVar4 + 0xea0) = *(int *)(iVar4 + 0xea0) + iVar8;
  if (*(int *)(iVar4 + 0xea0) < 0) {
    *(undefined4 *)(iVar4 + 0xea0) = 0;
  }
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x1c) * 4);
  piVar9 = *(int **)(iVar4 + 0x9d8);
  while ((*(int **)(iVar4 + 0x9d8) <= piVar9 && (piVar9 < *(int **)(iVar4 + 0x9dc)))) {
    iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar9 * 4);
    piVar9 = piVar9 + 1;
    if (0 < iVar10) {
      iVar8 = 0;
      local_30 = iVar10;
      do {
        iVar2 = *(int *)(iVar8 + *(int *)(iVar7 + 0x194));
joined_r0x009520a7:
        iVar3 = iVar2;
        if (iVar3 != 0) {
          iVar2 = *(int *)(iVar3 + 0x27c);
          puVar1 = (uint *)(iVar3 + 0x120);
          uVar6 = *puVar1;
          *puVar1 = *puVar1 + (uint)uVar11;
          *(int *)(iVar3 + 0x124) =
               *(int *)(iVar3 + 0x124) + (int)((ulonglong)uVar11 >> 0x20) +
               (uint)CARRY4(uVar6,(uint)uVar11);
          if (*(int *)(iVar3 + 0x124) < 1) goto code_r0x009520d4;
          goto LAB_00952100;
        }
        iVar8 = iVar8 + 0x10;
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
  }
  piVar9 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
  if (piVar9 != (int *)0x0) {
    while (*piVar9 != 0xa4c) {
      piVar9 = (int *)piVar9[2];
      if (piVar9 == (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x1c) * 4);
      for (piVar9 = *(int **)(iVar4 + 0x149c); piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
        if (*piVar9 == *(int *)(param_1 + 0x3c)) {
          if (piVar9 != (int *)0x0) {
            if (*(char *)(iVar4 + 0x14a8) == '\0') {
              iVar7 = piVar9[1];
              iVar8 = piVar9[2];
              if (iVar7 != 0) {
                *(int *)(iVar7 + 8) = iVar8;
              }
              if (iVar8 != 0) {
                *(int *)(iVar8 + 4) = iVar7;
              }
              if (piVar9 == *(int **)(iVar4 + 0x149c)) {
                *(int *)(iVar4 + 0x149c) = iVar8;
              }
              if (piVar9 == *(int **)(iVar4 + 0x14a0)) {
                *(int *)(iVar4 + 0x14a0) = iVar7;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar9);
            }
            *(undefined1 *)(piVar9 + 3) = 1;
          }
          break;
        }
      }
      FUN_004cb210();
      FUN_00545be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x1c) * 4));
    }
  }
  ExceptionList = local_14;
  return;
code_r0x009520d4:
  if (*(int *)(iVar3 + 0x124) < 0) {
    *(undefined4 *)(iVar3 + 0x120) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
  }
  if ((-1 < *(int *)(iVar3 + 0x124)) &&
     ((0 < *(int *)(iVar3 + 0x124) || (0x50000 < *(uint *)(iVar3 + 0x120))))) {
LAB_00952100:
    *(undefined4 *)(iVar3 + 0x120) = 0x50000;
    *(undefined4 *)(iVar3 + 0x124) = 0;
  }
  goto joined_r0x009520a7;
}

