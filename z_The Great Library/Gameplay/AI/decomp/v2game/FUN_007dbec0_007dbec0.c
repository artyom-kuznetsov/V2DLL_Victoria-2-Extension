// FUN_007dbec0 @ 007dbec0 body=[[007dbec0, 007dc19e] [007dc1a0, 007dc2cc] [007dc2d0, 007dc31e]]


/* WARNING: Removing unreachable block (ram,0x007dc2c7) */
/* WARNING: Removing unreachable block (ram,0x007dc2d0) */
/* WARNING: Removing unreachable block (ram,0x007dc2e5) */

void FUN_007dbec0(int param_1,int *param_2,int param_3,int param_4,int param_5,char param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar5 = *param_2;
  if (iVar5 != param_2[1]) {
    iVar1 = *(int *)(param_1 + 0x2ac0);
    iVar7 = *(int *)(param_1 + 0x2abc);
    iVar13 = (param_2[1] - iVar5 >> 3) + -1;
    if (-1 < iVar13) {
      piVar9 = (int *)(iVar5 + iVar13 * 8);
      do {
        iVar5 = *piVar9;
        iVar10 = piVar9[1];
        if ((((-1 < iVar5) && (iVar5 < iVar7)) && (-1 < iVar10)) && (iVar10 < iVar1)) {
          iVar12 = *(int *)(param_1 + 0x212c);
          iVar11 = *(int *)(iVar12 + 4) + -1;
          if (iVar5 <= iVar11) {
            iVar11 = iVar5;
          }
          iVar5 = *(int *)(iVar12 + 8) + -1;
          if (iVar5 < iVar10) {
            iVar10 = iVar5;
          }
          iVar5 = *(int *)(*(int *)(param_1 + 0x2aa4) +
                          (uint)*(ushort *)
                                 (*(int *)(iVar12 + 0x18) * iVar10 + *(int *)(iVar12 + 0xc) * iVar11
                                 + *(int *)(iVar12 + 0x20)) * 4);
          if ((iVar5 != 0) && (*(char *)(iVar5 + 0x2a) != '\0')) {
            if (((*(int *)(*(int *)(iVar5 + 0x18) + 300) == *(int *)(param_3 + 4)) ||
                (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                  *(int *)(*(int *)(iVar5 + 0x18) + 300) * 4) + 0xcfc) ==
                 *(int *)(param_3 + 4))) && (*(char *)(*(int *)(iVar5 + 0xb4) + param_4) == param_5)
               ) {
              FUN_0043a910(*param_2 + 8 + iVar13 * 8,param_2[1]);
              break;
            }
          }
        }
        piVar9 = piVar9 + -2;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    puVar2 = (undefined4 *)param_2[1];
    piVar9 = (int *)*param_2;
    iVar5 = (int)puVar2 - (int)piVar9 >> 3;
    local_34 = 0;
    if (0 < iVar5) {
      do {
        iVar13 = *piVar9;
        iVar10 = piVar9[1];
        if (((-1 < iVar13) && (iVar13 < iVar7)) && ((-1 < iVar10 && (iVar10 < iVar1)))) {
          iVar12 = *(int *)(param_1 + 0x212c);
          iVar11 = *(int *)(iVar12 + 4) + -1;
          if (iVar11 < iVar13) {
            iVar13 = iVar11;
          }
          iVar11 = *(int *)(iVar12 + 8) + -1;
          if (iVar11 < iVar10) {
            iVar10 = iVar11;
          }
          iVar13 = *(int *)(*(int *)(param_1 + 0x2aa4) +
                           (uint)*(ushort *)
                                  (*(int *)(iVar12 + 0x18) * iVar10 +
                                   *(int *)(iVar12 + 0xc) * iVar13 + *(int *)(iVar12 + 0x20)) * 4);
          if ((iVar13 != 0) && (*(char *)(iVar13 + 0x2a) != '\0')) {
            if (((*(int *)(*(int *)(iVar13 + 0x18) + 300) == *(int *)(param_3 + 4)) ||
                (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                  *(int *)(*(int *)(iVar13 + 0x18) + 300) * 4) + 0xcfc) ==
                 *(int *)(param_3 + 4))) &&
               (*(char *)(*(int *)(iVar13 + 0xb4) + param_4) == param_5)) {
              if (local_34 != 0) {
                puVar4 = (undefined4 *)*param_2;
                puVar3 = puVar4 + local_34 * 2;
                if (puVar4 != puVar3) {
                  puVar6 = puVar4;
                  if (puVar3 != puVar2) {
                    puVar8 = puVar3;
                    do {
                      *puVar6 = *puVar8;
                      puVar6[1] = *(undefined4 *)((int)puVar3 + (4 - (int)puVar4) + (int)puVar6);
                      puVar8 = puVar8 + 2;
                      puVar6 = puVar6 + 2;
                    } while (puVar8 != puVar2);
                  }
                  param_2[1] = (int)puVar6;
                }
              }
              break;
            }
          }
        }
        local_34 = local_34 + 1;
        piVar9 = piVar9 + 2;
      } while (local_34 < iVar5);
    }
    piVar9 = (int *)*param_2;
    iVar5 = param_2[1] - (int)piVar9 >> 3;
    local_38 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    if (0 < iVar5) {
      iVar1 = *(int *)(param_1 + 0x212c);
      iVar13 = *(int *)(iVar1 + 4) + -1;
      iVar7 = *(int *)(iVar1 + 8) + -1;
      do {
        iVar10 = piVar9[1];
        iVar12 = *piVar9;
        if (iVar13 < *piVar9) {
          iVar12 = iVar13;
        }
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        if (iVar7 < iVar10) {
          iVar10 = iVar7;
        }
        iVar10 = *(int *)(*(int *)(param_1 + 0x2aa4) +
                         (uint)*(ushort *)
                                (*(int *)(iVar1 + 0x18) * iVar10 + *(int *)(iVar1 + 0xc) * iVar12 +
                                *(int *)(iVar1 + 0x20)) * 4);
        if (*(char *)(*(int *)(iVar10 + 0xb4) + param_4) == param_5) {
          if ((*(int *)(*(int *)(iVar10 + 0x18) + 300) != *(int *)(param_3 + 4)) &&
             (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                               *(int *)(*(int *)(iVar10 + 0x18) + 300) * 4) + 0xcfc) !=
              *(int *)(param_3 + 4))) goto LAB_007dc234;
LAB_007dc251:
          local_38 = local_38 + 1;
        }
        else {
LAB_007dc234:
          if (*(char *)(iVar10 + 0x2a) != '\0') {
            if (*(int *)(*(int *)(iVar10 + 0x18) + 300) != 0) {
              if (*(char *)(iVar10 + 0x2a) == '\0') goto LAB_007dc24b;
              goto LAB_007dc260;
            }
            goto LAB_007dc251;
          }
LAB_007dc24b:
          if (param_6 != '\0') goto LAB_007dc251;
LAB_007dc260:
          if (local_30 < local_38) {
            local_2c = local_34 - local_38;
            local_30 = local_38;
          }
          local_38 = 0;
        }
        local_34 = local_34 + 1;
        piVar9 = piVar9 + 2;
      } while (local_34 < iVar5);
      if (local_30 < local_38) {
        local_2c = iVar5 - local_38;
        local_30 = local_38;
      }
      if (local_30 != 0) {
        iVar5 = *param_2 + (local_30 + local_2c) * 8;
        if (iVar5 != param_2[1]) {
          param_2[1] = iVar5;
        }
        puVar3 = (undefined4 *)*param_2;
        puVar2 = puVar3 + local_2c * 2;
        if (puVar3 != puVar2) {
          puVar4 = (undefined4 *)param_2[1];
          puVar6 = puVar3;
          if (puVar2 != puVar4) {
            puVar8 = puVar2;
            do {
              *puVar6 = *puVar8;
              puVar6[1] = *(undefined4 *)((int)puVar6 + (int)puVar2 + (4 - (int)puVar3));
              puVar8 = puVar8 + 2;
              puVar6 = puVar6 + 2;
            } while (puVar8 != puVar4);
          }
          param_2[1] = (int)puVar6;
        }
      }
    }
  }
  return;
}

