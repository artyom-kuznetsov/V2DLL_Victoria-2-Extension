// FUN_00a7f960 @ 00a7f960 body=[[00a7f960, 00a7fa38] [00a7fa40, 00a7faec] [00a7faf0, 00a7fdf3]]


/* WARNING: Removing unreachable block (ram,0x00a7f9c1) */
/* WARNING: Removing unreachable block (ram,0x00a7f9c5) */

void FUN_00a7f960(undefined8 *param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  void *pvVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined4 uVar17;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  pvVar12 = (void *)*param_3;
  if (pvVar12 != (void *)param_3[1]) {
    FID_conflict__memcpy(pvVar12,(void *)param_3[1],0);
    param_3[1] = (int)pvVar12;
  }
  uVar17 = 0;
  local_28 = (*(int *)(param_4 + 0x54) - *(int *)(param_4 + 0x50)) / 0x60;
  if (0 < local_28) {
    local_14 = 0;
    do {
      pbVar6 = (byte *)(*(int *)(param_4 + 0x50) + local_14);
      pcVar13 = "object";
      pbVar7 = pbVar6;
      do {
        bVar3 = *pbVar7;
        bVar16 = bVar3 < (byte)*pcVar13;
        if (bVar3 != *pcVar13) {
LAB_00a7fa71:
          iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00a7fa76;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar7[1];
        bVar16 = bVar3 < (byte)pcVar13[1];
        if (bVar3 != pcVar13[1]) goto LAB_00a7fa71;
        pbVar7 = pbVar7 + 2;
        pcVar13 = pcVar13 + 2;
      } while (bVar3 != 0);
      iVar8 = 0;
LAB_00a7fa76:
      if ((iVar8 == 0) &&
         (local_24 = (*(int *)(pbVar6 + 0x54) - *(int *)(pbVar6 + 0x50)) / 0x60, 0 < local_24)) {
        local_10 = 0;
        do {
          iVar8 = *(int *)(pbVar6 + 0x50);
          local_20 = (*(int *)(local_10 + 0x54 + iVar8) - *(int *)(local_10 + 0x50 + iVar8)) / 0x60;
          if (0 < local_20) {
            local_c = 0;
            do {
              pbVar7 = (byte *)(*(int *)(local_10 + 0x50 + iVar8) + local_c);
              pbVar14 = &DAT_00dee2d0;
              do {
                bVar3 = *pbVar7;
                bVar16 = bVar3 < *pbVar14;
                if (bVar3 != *pbVar14) {
LAB_00a7fb20:
                  iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                  goto LAB_00a7fb25;
                }
                if (bVar3 == 0) break;
                bVar3 = pbVar7[1];
                bVar16 = bVar3 < pbVar14[1];
                if (bVar3 != pbVar14[1]) goto LAB_00a7fb20;
                pbVar7 = pbVar7 + 2;
                pbVar14 = pbVar14 + 2;
              } while (bVar3 != 0);
              iVar9 = 0;
LAB_00a7fb25:
              if (((iVar9 == 0) && (iVar9 = FUN_00a7cca0("material"), iVar9 != 0)) &&
                 (iVar9 = FUN_00a7cc10("shader"), iVar9 != 0)) {
                iVar9 = FUN_00a7cc10("shader");
                if ((*(int *)(iVar9 + 0x14) != 0) &&
                   ((*(int *)(iVar9 + 0x10) == 4 || (*(int *)(iVar9 + 0x10) == 5)))) {
                  if (*(int *)(iVar9 + 0x14) == 1) {
                    puVar10 = (undefined4 *)(iVar9 + 0x18);
                  }
                  else {
                    puVar10 = *(undefined4 **)(iVar9 + 0x18);
                  }
                  if (puVar10 != (undefined4 *)0x0) {
                    pbVar7 = (byte *)*puVar10;
                    pcVar13 = "Collision";
                    do {
                      bVar3 = *pbVar7;
                      bVar16 = bVar3 < (byte)*pcVar13;
                      if (bVar3 != *pcVar13) {
LAB_00a7fbc0:
                        iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                        goto LAB_00a7fbc5;
                      }
                      if (bVar3 == 0) break;
                      bVar3 = pbVar7[1];
                      bVar16 = bVar3 < (byte)pcVar13[1];
                      if (bVar3 != pcVar13[1]) goto LAB_00a7fbc0;
                      pbVar7 = pbVar7 + 2;
                      pcVar13 = pcVar13 + 2;
                    } while (bVar3 != 0);
                    iVar9 = 0;
LAB_00a7fbc5:
                    if (iVar9 == 0) {
                      iVar9 = FUN_00a7cca0(&DAT_00dee318);
                      if (iVar9 == 0) {
                        *param_1 = CONCAT44(uVar17,uVar17);
                        *(undefined4 *)((int)param_1 + 0xc) = uVar17;
                        *(undefined4 *)(param_1 + 2) = uVar17;
                        *(undefined4 *)(param_1 + 1) = uVar17;
                        *(undefined4 *)((int)param_1 + 0x14) = uVar17;
                      }
                      else {
                        iVar9 = FUN_00a7cc10(&DAT_00dee380);
                        if ((*(int *)(iVar9 + 0x14) == 0) ||
                           ((*(int *)(iVar9 + 0x10) != 0 && (*(int *)(iVar9 + 0x10) != 1)))) {
                          puVar15 = (undefined8 *)0x0;
                        }
                        else if (*(int *)(iVar9 + 0x14) == 1) {
                          puVar15 = (undefined8 *)(iVar9 + 0x18);
                        }
                        else {
                          puVar15 = *(undefined8 **)(iVar9 + 0x18);
                        }
                        iVar9 = FUN_00a7cc10(&DAT_00dee380);
                        if ((*(int *)(iVar9 + 0x14) == 0) ||
                           ((*(int *)(iVar9 + 0x10) != 0 && (*(int *)(iVar9 + 0x10) != 1)))) {
                          puVar10 = (undefined4 *)0x0;
                        }
                        else if (*(int *)(iVar9 + 0x14) == 1) {
                          puVar10 = (undefined4 *)(iVar9 + 0x18);
                        }
                        else {
                          puVar10 = *(undefined4 **)(iVar9 + 0x18);
                        }
                        uVar1 = *(undefined4 *)(puVar15 + 1);
                        *param_1 = *puVar15;
                        *(undefined4 *)(param_1 + 1) = uVar1;
                        uVar1 = puVar10[1];
                        uVar2 = puVar10[2];
                        *(undefined4 *)((int)param_1 + 0xc) = *puVar10;
                        *(undefined4 *)(param_1 + 2) = uVar1;
                        *(undefined4 *)((int)param_1 + 0x14) = uVar2;
                      }
                      iVar11 = FUN_00a7cc10(&DAT_00dee320);
                      iVar9 = FUN_00a7cc10(&DAT_00dee33c);
                      if ((((iVar11 != 0) && (iVar9 != 0)) &&
                          (iVar5 = *(int *)(iVar11 + 0x14) >> 0x1f, iVar4 = *(int *)(iVar9 + 0x14),
                          *(int *)(iVar11 + 0x14) / 3 + iVar5 != iVar5)) && (iVar4 != 0)) {
                        FUN_00a800a0();
                        FUN_007d85d0(iVar4);
                        if ((*(int *)(iVar9 + 0x14) == 0) ||
                           ((*(int *)(iVar9 + 0x10) != 2 && (*(int *)(iVar9 + 0x10) != 3)))) {
                          iVar9 = 0;
                        }
                        else if (*(int *)(iVar9 + 0x14) == 1) {
                          iVar9 = iVar9 + 0x18;
                        }
                        else {
                          iVar9 = *(int *)(iVar9 + 0x18);
                        }
                        iVar5 = *(int *)(iVar11 + 0x14);
                        if ((iVar5 == 0) ||
                           ((*(int *)(iVar11 + 0x10) != 0 && (*(int *)(iVar11 + 0x10) != 1)))) {
                          pvVar12 = (void *)0x0;
                        }
                        else if (iVar5 == 1) {
                          pvVar12 = (void *)(iVar11 + 0x18);
                        }
                        else {
                          pvVar12 = *(void **)(iVar11 + 0x18);
                        }
                        FID_conflict__memcpy((void *)*param_2,pvVar12,iVar5 * 4);
                        iVar11 = 0;
                        if (0 < iVar4) {
                          do {
                            *(undefined2 *)(*param_3 + iVar11 * 2) =
                                 *(undefined2 *)(iVar9 + iVar11 * 4);
                            iVar11 = iVar11 + 1;
                          } while (iVar11 < iVar4);
                        }
                        uVar17 = 0;
                      }
                    }
                  }
                }
              }
              local_c = local_c + 0x60;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          local_10 = local_10 + 0x60;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      local_14 = local_14 + 0x60;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  return;
}

