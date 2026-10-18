// FUN_005cf450 @ 005cf450  (requested 005CF450, first bytes: 55 8B EC 83 EC 30 53 8B)


int FUN_005cf450(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar7 = param_1;
  iVar8 = 0;
  local_c = 0;
  if (((((char)param_1[0x30] == 'R') && (*(char *)((int)param_1 + 0xc1) == 'E')) &&
      (*(char *)((int)param_1 + 0xc2) == 'B')) &&
     ((local_c = FUN_0068bae0(), local_c == 0 ||
      (*(char *)(*(int *)(local_c + 0x30) + 0x122) == '\0')))) {
    return 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x3c))();
  if (cVar2 == '\0') {
    iVar8 = param_1[0x37];
    iVar1 = (*(int *)(*(int *)(iVar8 + 0x5c) + 0xcc) - *(int *)(*(int *)(iVar8 + 0x5c) + 200)) /
            0x24;
    local_1c = iVar8;
    FUN_00401000(0x447a1fff);
    iVar3 = FUN_00b31c00();
    local_14 = 0;
    if (0 < iVar1) {
      local_18 = iVar3;
      FUN_00401000(0x3f000000);
      iVar4 = FUN_00b31c00();
      local_10 = 0;
      local_20 = iVar1;
      do {
        iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2238) +
                        *(int *)(*(int *)(*(int *)(iVar8 + 0x5c) + 200) + 4 + local_10) * 4);
        local_8 = iVar4;
        cVar2 = (**(code **)(*param_1 + 0x84))(iVar1);
        if (cVar2 != '\0') {
          iVar8 = *(int *)(iVar8 + 0x5c);
          iVar6 = (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24;
          iVar9 = 0;
          if (0 < iVar6) {
            piVar7 = (int *)(*(int *)(iVar8 + 200) + 4);
            do {
              if (*(int *)(iVar1 + 0x58) == *piVar7) break;
              iVar9 = iVar9 + 1;
              piVar7 = piVar7 + 9;
            } while (iVar9 < iVar6);
          }
          cVar2 = FUN_005b9690();
          iVar8 = local_1c;
          if (cVar2 == '\0') {
            if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x2a) == '\0') {
              if (local_c != 0) goto LAB_005cf866;
              local_8 = 3000;
            }
            else {
              if ((((*(char *)(*(int *)(param_1[0x37] + 0x5c) + 0x2a) == '\0') &&
                   (*(int *)(*(int *)(iVar1 + 0x5c) + 0xdc) != *(int *)(param_1[0x37] + 0x58))) ||
                  ((local_c != 0 && (cVar2 = FUN_004e1a50(), iVar8 = local_1c, cVar2 == '\0')))) ||
                 (cVar2 = FUN_005cf2e0(), iVar8 = local_1c, cVar2 == '\0')) goto LAB_005cf866;
              iVar8 = *(int *)(iVar1 + 300);
              if (iVar8 == 0) {
                uVar10 = 0x41a3ffff;
LAB_005cf6f5:
                FUN_00401000(uVar10);
                iVar8 = FUN_00b31c00();
                local_8 = local_8 + iVar8;
              }
              else {
                iVar6 = param_1[0x31];
                if (iVar8 != iVar6) {
                  if (*(int *)(iVar1 + 0x134) != iVar6) goto LAB_005cf741;
                  uVar10 = 0x453b8800;
                  goto LAB_005cf6f5;
                }
                if (*(int *)(iVar1 + 0x134) == iVar6) {
                  uVar10 = 0x457a0801;
                  goto LAB_005cf6f5;
                }
LAB_005cf741:
                if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                       *(int *)(iVar1 + 0x134) * 4) + 0xbe8) +
                                     iVar6 * 4) + 0x20) != 0) {
                  uVar10 = 0x451c4800;
                  goto LAB_005cf6f5;
                }
                if (iVar8 == iVar6) {
                  uVar10 = 0x44fa1000;
                  goto LAB_005cf6f5;
                }
                if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar8 * 4) +
                                              0xbe8) + iVar6 * 4) + 0x20) != 0) {
                  uVar10 = 0x44bb9000;
                  goto LAB_005cf6f5;
                }
                local_8 = local_8 + iVar3;
              }
              uVar5 = FUN_009b7950(0,0);
              uVar5 = uVar5 & 0x80000003;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
              }
              local_8 = local_8 + uVar5 * 1000;
              cVar2 = FUN_004b6e10(iVar1);
              if (cVar2 != '\0') {
                FUN_00401000(0x44fa1000);
                iVar8 = FUN_00b31c00();
                uVar11 = __allmul(local_8,local_8 >> 0x1f,1000,0);
                local_8 = __alldiv(uVar11,iVar8,iVar8 >> 0x1f);
              }
            }
            FUN_00401000(0x41280000);
            iVar6 = FUN_00b31c00();
            iVar8 = local_1c;
            if ((iVar6 < local_8) && ((local_14 == 0 || (local_18 < local_8)))) {
              local_18 = local_8;
              local_14 = iVar1;
            }
          }
        }
LAB_005cf866:
        local_10 = local_10 + 0x24;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  else {
    local_14 = 0;
    param_1 = (int *)0x5f5dd18;
    local_1c = (**(code **)(*DAT_012588e8 + 0x18))();
    if (0 < local_1c) {
      do {
        iVar1 = *(int *)(DAT_012588e8[0x2b3] + iVar8 * 4);
        if ((((*(int *)(iVar1 + 300) != 0) && (*(int *)(iVar1 + 0x158) != 0)) &&
            (cVar2 = (**(code **)(*piVar7 + 0x84))(iVar1), cVar2 != '\0')) &&
           ((0 < *(int *)(*(int *)(*(int *)(iVar1 + 0x118) + DAT_01258720 * 4) + 0x20) &&
            (FUN_004a0e80(DAT_0125870c,&local_20), local_20 < (int)param_1)))) {
          param_1 = (int *)local_20;
          local_14 = iVar1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_1c);
      return local_14;
    }
  }
  return local_14;
}

