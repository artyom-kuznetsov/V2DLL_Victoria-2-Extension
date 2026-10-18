// FUN_004aa4b0 @ 004aa4b0 body=[[004aa4b0, 004aa60a] [004aa60e, 004aa66c] [004aa670, 004aa6ce] [004aa6d2, 004aa7c7] [004aa7cb, 004aa8f7] [004aa8fb, 004aa969] [004aa970, 004aa978] [004aa982, 004aa9fe] [004aaa0a, 004aaa40] [004aaa4c, 004aaaa9] [004aaab0, 004aaad8] [004aaae2, 004aab3c] [004aab46, 004aab6a] [004aab74, 004aabc6] [004aabd0, 004aacbe] [004aacc2, 004aad41] [004aad51, 004aae0c] [004aae18, 004aaebc] [004aaec0, 004aaefb] [004aaeff, 004aaf5f] [004aaf63, 004aaf84]]


/* WARNING: Removing unreachable block (ram,0x004aab0a) */
/* WARNING: Removing unreachable block (ram,0x004aab10) */
/* WARNING: Removing unreachable block (ram,0x004aae63) */
/* WARNING: Removing unreachable block (ram,0x004aae70) */

void FUN_004aa4b0(int param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined4 *local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb6add;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_004c3be0(*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_004bed60((undefined4 *)(param_1 + 0x30c),local_34,*(undefined4 *)(param_1 + 0x30c),
               *(undefined4 *)(param_1 + 0x310));
  puVar3 = DAT_0125872c;
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_00aae9af(0x290);
    local_c = 0;
    local_34[0] = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_004cda50(puVar3);
      *puVar3 = CNullState::vftable;
      puVar3[0xc] = CNullState::vftable;
    }
    local_c = 0xffffffff;
    DAT_0125872c = puVar3;
  }
  *(undefined4 **)(param_1 + 0x188) = puVar3;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x114) = 100000;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  FUN_004bec80((undefined4 *)(param_1 + 0x2a8),local_34,*(undefined4 *)(param_1 + 0x2a8),
               *(undefined4 *)(param_1 + 0x2ac));
  FUN_008601b0(param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (DAT_01258714 == 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined4 *)((uint)local_34[0] & 0xffffff00);
    FUN_00409350("mediterranean_region",0x14);
    local_c = 1;
    DAT_01258714 = FUN_004a2f70(local_34);
    local_c = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  if (DAT_01258718 == 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined4 *)((uint)local_34[0] & 0xffffff00);
    FUN_00409350("black_sea_region",0x10);
    local_c = 2;
    DAT_01258718 = FUN_004a2f70(local_34);
    local_c = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  if (DAT_0125871c == 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (undefined4 *)((uint)local_34[0] & 0xffffff00);
    FUN_00409350("baltic_sea_region",0x11);
    local_c = 3;
    DAT_0125871c = FUN_004a2f70(local_34);
    local_c = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) & 0xfffffffcU) == 0) {
    if (DAT_0125ce80 == (int *)0x0) {
      local_34[0] = (undefined4 *)FUN_00aae9af(0x3c);
      local_c = 4;
      if (local_34[0] == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_004dada0();
      }
      local_c = 0xffffffff;
      FUN_004dc340(uVar4);
    }
    local_38 = (int *)(DAT_0125ce80[8] - DAT_0125ce80[7] >> 2);
    FUN_004bf300(local_38);
    local_3c = 0;
    if (0 < (int)local_38) {
      do {
        if (DAT_0125ce80 == (int *)0x0) {
          local_34[0] = (undefined4 *)FUN_00aae9af(0x3c);
          local_c = 5;
          if (local_34[0] == (undefined4 *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = (int *)FUN_004dada0();
          }
          local_c = 6;
          local_34[0] = (undefined4 *)0x0;
          if ((piVar5 != DAT_0125ce80) && (local_40 = DAT_0125ce80, DAT_0125ce80 != (int *)0x0)) {
            FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_40);
          }
          local_c = 0xffffffff;
          DAT_0125ce80 = piVar5;
        }
        uVar4 = *(undefined4 *)(DAT_0125ce80[7] + local_3c * 4);
        local_34[0] = (undefined4 *)FUN_00aae9af(0x28);
        local_c = 7;
        if (local_34[0] == (undefined4 *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)FUN_004db720(local_34[0],uVar4,param_1);
        }
        local_c = 0xffffffff;
        ppiVar1 = *(int ***)(param_1 + 0x11c);
        local_40 = piVar5;
        if ((&local_40 < ppiVar1) && (ppiVar2 = *(int ***)(param_1 + 0x118), ppiVar2 <= &local_40))
        {
          if (ppiVar1 == *(int ***)(param_1 + 0x120)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x11c) =
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x118) + ((int)&local_40 - (int)ppiVar2 >> 2) * 4);
          }
        }
        else {
          if (ppiVar1 == *(int ***)(param_1 + 0x120)) {
            FUN_00a513f0();
          }
          if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
            **(int **)(param_1 + 0x11c) = (int)piVar5;
          }
        }
        *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 4;
        local_3c = local_3c + 1;
      } while (local_3c < (int)local_38);
    }
    if (DAT_0125ce80 == (int *)0x0) {
      local_34[0] = (undefined4 *)FUN_00aae9af(0x3c);
      local_c = 8;
      if (local_34[0] == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_004dada0();
      }
      piVar8 = DAT_0125ce80;
      local_c = 9;
      local_34[0] = (undefined4 *)0x0;
      if ((piVar5 != DAT_0125ce80) && (DAT_0125ce80 != (int *)0x0)) {
        FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar8);
      }
      local_c = 0xffffffff;
      DAT_0125ce80 = piVar5;
    }
    DAT_01258720 = *(undefined4 *)(DAT_0125ce80[0xc] + 0x134);
  }
  else {
    iVar7 = 0;
    if (0 < (int)(*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) & 0xfffffffcU)) {
      do {
        iVar9 = *(int *)(*(int *)(param_1 + 0x118) + iVar7 * 4);
        *(undefined4 *)(iVar9 + 0x24) = 0;
        *(undefined4 *)(iVar9 + 0x20) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) >> 2);
    }
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x6c));
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x68) = DAT_01259abc;
  *(undefined4 *)(param_1 + 300) = 0;
  local_34[0] = (undefined4 *)0x2d2d2d;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0x2d2d2d;
  *(undefined4 *)(param_1 + 0x130) = 0x2d2d2d;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  piVar5 = *(int **)(param_1 + 200);
  if (piVar5 != (int *)0x0) {
    local_38 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar5);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  piVar5 = *(int **)(param_1 + 0xb8);
  if (piVar5 != (int *)0x0) {
    local_38 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar5);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  iVar9 = 0;
  local_38 = (int *)(DAT_0125a5b8 - DAT_0125a5b4 >> 2);
  if (0 < (int)local_38) {
    FUN_00401000(0x3f000000);
    uVar4 = FUN_00b31c00();
    do {
      iVar6 = iVar9 * 8;
      iVar9 = iVar9 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar6) = uVar4;
    } while (iVar9 < (int)local_38);
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x8c));
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x14c)) {
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x148);
  }
  if (*(int *)(param_1 + 0xec) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xec));
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xfc));
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x171) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x29) = 0;
  FUN_004c8140(*(undefined4 *)(param_1 + 0x5c));
  iVar9 = *(int *)(param_1 + 0x178);
  iVar6 = 0;
  if (DAT_00f092fb == '\0') {
    if (0 < iVar9) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x174) + iVar6 * 4) = 2;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar9);
    }
  }
  else if (0 < iVar9) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x174) + iVar6 * 4) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar9);
  }
  if (DAT_01258728 != (int *)0x0) {
    iVar9 = *(int *)(param_1 + 0x58) * 0xb0 + *DAT_01258728;
    *(int *)(iVar9 + 0xc) = DAT_012587f0 + 0x48;
    if (DAT_01258734 == 0) {
      local_34[0] = (undefined4 *)FUN_00aae9af(0x170);
      local_c = 10;
      if (local_34[0] == (undefined4 *)0x0) {
        DAT_01258734 = 0;
      }
      else {
        DAT_01258734 = FUN_004de5f0(local_34[0]);
      }
      local_c = 0xffffffff;
    }
    *(int *)(iVar9 + 8) = DAT_01258734 + 0x10;
    FUN_004ef470();
  }
  if ((*(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x194) & 0xfffffff0U) == 0) {
    if (DAT_0131bb34 == 0) {
      local_34[0] = (undefined4 *)FUN_00aae9af(0x188);
      local_c = 0xb;
      if (local_34[0] != (undefined4 *)0x0) {
        iVar7 = FUN_0041a160();
      }
      iVar9 = DAT_0131bb34;
      local_c = 0xc;
      local_34[0] = (undefined4 *)0x0;
      if ((iVar7 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar9);
      }
      local_c = 0xffffffff;
      DAT_0131bb34 = iVar7;
    }
    FUN_004be240();
  }
  else {
    local_38 = (int *)0x0;
    if (0 < (int)(*(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x194) & 0xfffffff0U)) {
      local_40 = (int *)0x0;
      do {
        piVar5 = (int *)(*(int *)(param_1 + 0x194) + (int)local_40);
        local_3c = *piVar5;
        if (local_3c != 0) {
          local_34[0] = *(undefined4 **)(local_3c + 0x27c);
          FUN_00955ae0(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_3c);
        }
        local_40 = local_40 + 4;
        *piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
        local_38 = (int *)((int)local_38 + 1);
        local_3c = 0;
      } while ((int)local_38 < *(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x194) >> 4);
    }
  }
  FUN_00401000(0x3f000000);
  uVar4 = FUN_00b31c00();
  *(undefined4 *)(param_1 + 0x2b8) = uVar4;
  local_34[0] = (undefined4 *)((uint)local_34[0] & 0xffffff00);
  if (*(int *)(param_1 + 0x32c) != 0) {
    FUN_0043c6a0(*(int *)(param_1 + 0x32c),local_34[0]);
  }
  (**(code **)(*(int *)(param_1 + 0x328) + 0x1c))(*(undefined4 *)(param_1 + 0x32c));
  *(undefined4 *)(param_1 + 0x32c) = 0;
  iVar7 = *(int *)(param_1 + 0x33c);
  if (iVar7 != 0) {
    local_38 = *(int **)(iVar7 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar7);
  }
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x354) = DAT_01259abc;
  *(undefined4 *)(param_1 + 0x358) = DAT_01259abc;
  piVar5 = *(int **)(param_1 + 0x364);
  if (piVar5 != *(int **)(param_1 + 0x368)) {
    local_38 = *(int **)(param_1 + 0x368);
    local_40 = piVar5;
    if (piVar5 != local_38) {
      do {
        (**(code **)*local_40)(0);
        local_40 = local_40 + 7;
      } while (local_40 != local_38);
    }
    *(int **)(param_1 + 0x368) = piVar5;
  }
  ppiVar1 = (int **)(param_1 + 0x374);
  if (ppiVar1 != &local_38) {
    if (*ppiVar1 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*ppiVar1);
    }
    *ppiVar1 = (int *)0x0;
    *(undefined4 *)(param_1 + 0x378) = 0;
    *(undefined4 *)(param_1 + 0x37c) = 0;
  }
  puStack_10 = (undefined1 *)0xffffffff;
  piVar5 = *(int **)(param_1 + 900);
  iVar7 = *(int *)(param_1 + 0x388) - (int)piVar5 >> 2;
  if ((iVar7 != 0) && (piVar8 = piVar5 + iVar7, local_38 = piVar8, piVar5 != piVar8)) {
    do {
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
        piVar8 = local_38;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar8);
  }
  ppiVar1 = (int **)(param_1 + 0x14);
  if (ppiVar1 != &local_38) {
    if (*ppiVar1 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*ppiVar1);
    }
    *ppiVar1 = (int *)0x0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x394) = 0;
  ExceptionList = pvStack_18;
  return;
}

