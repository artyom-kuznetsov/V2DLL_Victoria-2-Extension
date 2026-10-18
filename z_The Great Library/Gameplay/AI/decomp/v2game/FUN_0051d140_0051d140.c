// FUN_0051d140 @ 0051d140 body=[[0051d140, 0051d48d]]


/* WARNING: Removing unreachable block (ram,0x0051d170) */
/* WARNING: Removing unreachable block (ram,0x0051d40e) */

void FUN_0051d140(int param_1,uint *param_2,int *param_3,char param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  int local_4c;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  int iStack_34;
  uint local_30;
  int iStack_2c;
  undefined8 local_28;
  int *local_18;
  
  iVar12 = *param_3;
  if (*(int *)(param_1 + 0x844) != param_3[1] - iVar12 >> 3) {
    if (iVar12 != param_3[1]) {
      param_3[1] = iVar12;
    }
    iVar12 = 0;
    if (0 < *(int *)(param_1 + 0x844)) {
      do {
        FUN_00423920();
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x844));
    }
  }
  lVar15 = FUN_00b31c36();
  if (0 < (int)(param_3[1] - *param_3 & 0xfffffff8U)) {
    iVar12 = 0;
    if (0 < *(int *)(param_1 + 0x844)) {
      do {
        iVar10 = *param_3;
        *(undefined4 *)(iVar10 + iVar12 * 8) = 0;
        *(undefined4 *)(iVar10 + 4 + iVar12 * 8) = 0;
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x844));
    }
    iVar12 = DAT_012588e8;
    local_18 = (int *)*param_2;
    while (((int *)*param_2 <= local_18 && (local_18 < (int *)param_2[1]))) {
      iVar10 = *local_18;
      local_18 = local_18 + 1;
      iVar10 = *(int *)(*(int *)(iVar12 + 0xacc) + iVar10 * 4);
      if (*(int *)(*(int *)(iVar10 + 0x188) + 0x84) < 1) {
        local_38 = 0;
        iStack_34 = 0;
        local_30 = 0;
        iStack_2c = 0;
        piVar6 = (int *)FUN_004b9cc0(iVar10,param_5,param_6);
        puVar7 = (uint *)*piVar6;
        iVar10 = piVar6[1] - (int)puVar7 >> 3;
        local_40 = 0;
        uStack_3c = 0;
        local_4c = 0;
        if (1 < iVar10) {
          iVar11 = (iVar10 - 2U >> 1) + 1;
          local_4c = iVar11 * 2;
          puVar9 = puVar7;
          do {
            bVar14 = CARRY4(local_38,*puVar9);
            local_38 = local_38 + *puVar9;
            iStack_34 = iStack_34 + puVar9[1] + (uint)bVar14;
            bVar14 = CARRY4(local_30,puVar9[2]);
            local_30 = local_30 + puVar9[2];
            iStack_2c = iStack_2c + puVar9[3] + (uint)bVar14;
            puVar9 = puVar9 + 4;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        if (local_4c < iVar10) {
          local_40 = puVar7[local_4c * 2];
          uStack_3c = puVar7[local_4c * 2 + 1];
        }
        iVar8 = iStack_34 + iStack_2c + (uint)CARRY4(local_38,local_30);
        uVar1 = local_40 + local_38 + local_30;
        uVar4 = (uint)CARRY4(local_40,local_38 + local_30);
        iVar13 = uStack_3c + iVar8;
        iVar11 = iVar13 + uVar4;
        if ((-1 < iVar11) &&
           ((iVar11 != 0 && SCARRY4(uStack_3c,iVar8) == SCARRY4(iVar13,uVar4) || (uVar1 != 0)))) {
          if (param_4 == '\0') {
            if (*(char *)(param_1 + 0xb80) == '\0') {
              if (*(char *)(param_1 + 0xb88) == '\0') {
                if ((*(char *)(param_1 + 0xb90) != '\0') && (iVar11 = 0, 0 < iVar10)) {
                  do {
                    uVar4 = puVar7[iVar11 * 2];
                    puVar9 = (uint *)(*param_3 + iVar11 * 8);
                    uVar1 = *puVar9;
                    *puVar9 = *puVar9 + uVar4;
                    puVar9[1] = puVar9[1] + puVar7[iVar11 * 2 + 1] + (uint)CARRY4(uVar1,uVar4);
                    puVar7 = (uint *)*piVar6;
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < piVar6[1] - (int)puVar7 >> 3);
                }
              }
              else {
                local_4c = 0;
                if (0 < iVar10) {
                  do {
                    uVar4 = puVar7[local_4c * 2];
                    uVar3 = puVar7[local_4c * 2 + 1];
                    lVar16 = __alldiv(uVar4 << 0xf,uVar3 << 0xf | uVar4 >> 0x11,uVar1,iVar11);
                    if (lVar15 < lVar16) {
                      puVar7 = (uint *)(*param_3 + local_4c * 8);
                      uVar2 = *puVar7;
                      *puVar7 = *puVar7 + uVar4;
                      puVar7[1] = puVar7[1] + uVar3 + (uint)CARRY4(uVar2,uVar4);
                    }
                    puVar7 = (uint *)*piVar6;
                    local_4c = local_4c + 1;
                  } while (local_4c < piVar6[1] - (int)puVar7 >> 3);
                }
              }
            }
            else {
              iVar13 = 0;
              local_4c = -1;
              local_28 = 0;
              if (0 < iVar10) {
                do {
                  uVar5 = local_28;
                  if ((local_28._4_4_ <= (int)puVar7[1]) &&
                     ((local_28._4_4_ < (int)puVar7[1] || ((uint)local_28 < *puVar7)))) {
                    local_4c = iVar13;
                    uVar5 = *(undefined8 *)puVar7;
                  }
                  local_28 = uVar5;
                  iVar13 = iVar13 + 1;
                  puVar7 = puVar7 + 2;
                } while (iVar13 < iVar10);
                if (-1 < local_4c) {
                  iVar10 = *param_3;
                  puVar7 = (uint *)(iVar10 + local_4c * 8);
                  uVar4 = *puVar7;
                  *puVar7 = *puVar7 + uVar1;
                  piVar6 = (int *)(iVar10 + local_4c * 8 + 4);
                  *piVar6 = *piVar6 + iVar11 + (uint)CARRY4(uVar4,uVar1);
                }
              }
            }
          }
          else {
            iVar11 = 0;
            if (0 < iVar10) {
              do {
                uVar4 = puVar7[iVar11 * 2];
                puVar9 = (uint *)(*param_3 + iVar11 * 8);
                uVar1 = *puVar9;
                *puVar9 = *puVar9 + uVar4;
                puVar9[1] = puVar9[1] + puVar7[iVar11 * 2 + 1] + (uint)CARRY4(uVar1,uVar4);
                puVar7 = (uint *)*piVar6;
                iVar11 = iVar11 + 1;
              } while (iVar11 < piVar6[1] - (int)puVar7 >> 3);
            }
          }
        }
      }
    }
  }
  return;
}

