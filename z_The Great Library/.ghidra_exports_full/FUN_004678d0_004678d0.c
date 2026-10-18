// FUN_004678d0 @ 004678d0 body=[[004678d0, 00468083] [00468087, 0046813d] [00468141, 004681c0] [004681c4, 004681d1] [004681d5, 004681e8] [004681ec, 00468204]]


int FUN_004678d0(undefined4 param_1,int param_2,int param_3,int *****param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  int ****ppppiVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int ******ppppppiVar8;
  int ******ppppppiVar9;
  int iVar10;
  undefined1 *puVar11;
  int *****pppppiVar12;
  int iVar13;
  int ******ppppppiVar14;
  bool bVar15;
  undefined1 auStack_e8 [4];
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined1 *puStack_d4;
  int ***pppiStack_d0;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  int **ppiStack_c0;
  int **ppiStack_bc;
  uint *puStack_b8;
  int *****pppppiStack_b4;
  int ****local_9c;
  int local_98;
  int *****local_94 [5];
  int ***pppiStack_80;
  int ***pppiStack_7c;
  int *****local_78;
  int *****local_74;
  int *****local_70;
  int *****local_68 [4];
  uint auStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 local_34 [5];
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8f920;
  pvStack_14 = ExceptionList;
  pppppiStack_b4 = (int *****)param_1;
  puStack_b8 = (uint *)0x467902;
  ExceptionList = &pvStack_14;
  iVar2 = FUN_00467240();
  local_68[0] = param_4;
  local_68[1] = (int *****)param_5;
  local_68[2] = (int *****)param_6;
  local_68[3] = (int *****)param_7;
  local_9c = (int ****)0x0;
  do {
    pppppiVar12 = local_68[(int)local_9c];
    ppppiVar3 = *pppppiVar12;
    iVar10 = 0;
    if (0 < (int)((int)pppppiVar12[1] - (int)ppppiVar3 & 0xfffffff8U)) {
      local_94[3] = (int *****)0x2d2d2d;
      do {
        pppppiStack_b4 = (int *****)0x0;
        ppiStack_bc = (int **)ppppiVar3[iVar10 * 2 + 1];
        puStack_b8 = (uint *)local_94[3];
        ppiStack_c0 = (int **)ppppiVar3[iVar10 * 2];
        iStack_c8 = iVar2 + 0x24;
        uStack_cc = 0x46796a;
        iStack_c4 = iVar10;
        FUN_00465e90();
        ppppiVar3 = *pppppiVar12;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)pppppiVar12[1] - (int)ppppiVar3 >> 3);
    }
    local_9c = (int ****)((int)local_9c + 1);
  } while ((int)local_9c < 4);
  ppiStack_bc = *(int ***)(param_2 + 0x90);
  ppiStack_c0 = *(int ***)(param_2 + 0x8c);
  pppppiStack_b4 = (int *****)0x0;
  local_94[3] = (int *****)0x2d2d2d;
  puStack_b8 = (uint *)0x2d2d2d;
  iStack_c4 = 0;
  uStack_cc = 0x4679b9;
  iStack_c8 = iVar2 + 0x24;
  FUN_00465e90();
  puStack_d4 = *(undefined1 **)(param_2 + 0x98);
  iStack_d8 = *(undefined4 *)(param_2 + 0x94);
  uStack_cc = 0;
  local_94[3] = (int *****)0x2d2d2d;
  pppiStack_d0 = (int ***)0x2d2d2d;
  uStack_dc = 1;
  uStack_e4 = 0x4679e0;
  iStack_e0 = iVar2 + 0x24;
  FUN_00465e90();
  puStack_d4 = *(undefined1 **)(param_2 + 0xa8);
  local_94[3] = (int *****)&uStack_cc;
  pppiStack_d0 = (int ***)&uStack_cc;
  iStack_d8 = 0x4679f6;
  FUN_0090a830();
  pppiStack_d0 = (int ***)0x0;
  puStack_d4 = (undefined1 *)0x9;
  uStack_dc = 0x467a03;
  iStack_d8 = iVar2;
  FUN_00464b30();
  pppppiStack_b4 = (int *****)local_34;
  puStack_b8 = (uint *)(param_2 + 0x9c);
  ppiStack_bc = (int **)0x467a14;
  FUN_0094dbd0();
  pppppiStack_b4 = (int *****)&DAT_00ded950;
  puStack_b8 = local_34;
  local_c = 0;
  ppiStack_bc = (int **)0x467a32;
  FUN_00989720();
  local_94[3] = (int *****)&uStack_cc;
  pppiStack_d0 = (int ***)0x467a47;
  FUN_0046d310();
  pppiStack_d0 = (int ***)0x1;
  puStack_d4 = (undefined1 *)0x9;
  uStack_dc = 0x467a55;
  iStack_d8 = iVar2;
  FUN_00464b30();
  local_78 = (int *****)0x0;
  local_74 = (int *****)0x0;
  local_70 = (int *****)0x0;
  local_68[0] = (int *****)0x0;
  local_68[1] = (int *****)0x0;
  local_68[2] = (int *****)0x0;
  local_c = CONCAT31(local_c._1_3_,2);
  puVar11 = (undefined1 *)
            ((*(int *)(param_3 + 0x40) - *(int *)(param_3 + 0x3c) >> 6) +
            (*(int *)(param_3 + 0x30) - *(int *)(param_3 + 0x2c) >> 6));
  puStack_b8 = (uint *)0x467a9a;
  pppppiStack_b4 = (int *****)puVar11;
  local_94[2] = (int *****)puVar11;
  FUN_004bf300();
  puStack_b8 = (uint *)0x467aa4;
  pppppiStack_b4 = (int *****)puVar11;
  FUN_004bf300();
  local_98 = 0;
  iVar10 = *(int *)(param_3 + 0x30) - *(int *)(param_3 + 0x2c) >> 6;
  if (0 < iVar10) {
    local_94[0] = (int *****)0x0;
    ppppppiVar9 = (int ******)local_68[1];
    do {
      pppppiVar12 = (int *****)(*(int *)(param_3 + 0x2c) + (int)local_94[0]);
      local_9c = (int ****)pppppiVar12;
      if (pppppiVar12[3] != (int ****)0x0) {
        pppppiStack_b4 = (int *****)0x467aee;
        cVar1 = (*(code *)(*pppppiVar12[3])[7])();
        if (cVar1 != '\0') {
          if ((&local_9c < local_74) && (local_78 <= &local_9c)) {
            iVar13 = (int)&local_9c - (int)local_78;
            if (local_74 == local_70) {
              uVar4 = (int)local_74 - (int)local_78 >> 2;
              if (0x3ffffffe < uVar4) goto LAB_00467d66;
              puVar11 = (undefined1 *)(uVar4 + 1);
              puVar7 = (undefined1 *)((int)local_70 - (int)local_78 >> 2);
              if (puVar7 < puVar11) {
                if ((undefined1 *)(0x3fffffff - ((uint)puVar7 >> 1)) < puVar7) {
                  pppppiStack_b4 = (int *****)0x0;
                }
                else {
                  pppppiStack_b4 = (int *****)(puVar7 + ((uint)puVar7 >> 1));
                }
                if (pppppiStack_b4 < puVar11) {
                  pppppiStack_b4 = (int *****)puVar11;
                }
                puStack_b8 = (uint *)0x467b57;
                FUN_004bf300();
                ppppppiVar9 = (int ******)local_68[1];
              }
            }
            if ((int ******)local_74 != (int ******)0x0) {
              *local_74 = local_78[iVar13 >> 2];
            }
          }
          else {
            if (local_74 == local_70) {
              uVar4 = (int)local_74 - (int)local_78 >> 2;
              if (0x3ffffffe < uVar4) goto LAB_00467d66;
              puVar11 = (undefined1 *)(uVar4 + 1);
              puVar7 = (undefined1 *)((int)local_70 - (int)local_78 >> 2);
              if (puVar7 < puVar11) {
                if ((undefined1 *)(0x3fffffff - ((uint)puVar7 >> 1)) < puVar7) {
                  pppppiStack_b4 = (int *****)0x0;
                }
                else {
                  pppppiStack_b4 = (int *****)(puVar7 + ((uint)puVar7 >> 1));
                }
                if (pppppiStack_b4 < puVar11) {
                  pppppiStack_b4 = (int *****)puVar11;
                }
                puStack_b8 = (uint *)0x467bb4;
                FUN_004bf300();
                ppppppiVar9 = (int ******)local_68[1];
              }
            }
            if ((int ******)local_74 != (int ******)0x0) {
              *local_74 = (int ****)pppppiVar12;
            }
          }
          local_74 = local_74 + 1;
          pppppiVar12 = (int *****)(uint)(*(int *)(*(int *)(param_3 + 0xc) + local_98 * 4) != 0);
          local_9c = (int ****)pppppiVar12;
          if ((&local_9c < ppppppiVar9) && (local_68[0] <= &local_9c)) {
            iVar13 = (int)&local_9c - (int)local_68[0];
            if (ppppppiVar9 == (int ******)local_68[2]) {
              uVar4 = (int)ppppppiVar9 - (int)local_68[0] >> 2;
              if (0x3ffffffe < uVar4) goto LAB_00467d66;
              puVar11 = (undefined1 *)(uVar4 + 1);
              puVar7 = (undefined1 *)((int)local_68[2] - (int)local_68[0] >> 2);
              if (puVar7 < puVar11) {
                if ((undefined1 *)(0x3fffffff - ((uint)puVar7 >> 1)) < puVar7) {
                  pppppiStack_b4 = (int *****)0x0;
                }
                else {
                  pppppiStack_b4 = (int *****)(puVar7 + ((uint)puVar7 >> 1));
                }
                if (pppppiStack_b4 < puVar11) {
                  pppppiStack_b4 = (int *****)puVar11;
                }
                puStack_b8 = (uint *)0x467c42;
                FUN_004bf300();
                ppppppiVar9 = (int ******)local_68[1];
              }
            }
            if (ppppppiVar9 != (int ******)0x0) {
              *ppppppiVar9 = (int *****)local_68[0][iVar13 >> 2];
            }
          }
          else {
            if (ppppppiVar9 == (int ******)local_68[2]) {
              uVar4 = (int)ppppppiVar9 - (int)local_68[0] >> 2;
              if (0x3ffffffe < uVar4) goto LAB_00467d66;
              puVar11 = (undefined1 *)(uVar4 + 1);
              puVar7 = (undefined1 *)((int)local_68[2] - (int)local_68[0] >> 2);
              if (puVar7 < puVar11) {
                if ((undefined1 *)(0x3fffffff - ((uint)puVar7 >> 1)) < puVar7) {
                  pppppiStack_b4 = (int *****)0x0;
                }
                else {
                  pppppiStack_b4 = (int *****)(puVar7 + ((uint)puVar7 >> 1));
                }
                if (pppppiStack_b4 < puVar11) {
                  pppppiStack_b4 = (int *****)puVar11;
                }
                puStack_b8 = (uint *)0x467c9d;
                FUN_004bf300();
                ppppppiVar9 = (int ******)local_68[1];
              }
            }
            if (ppppppiVar9 != (int ******)0x0) {
              *ppppppiVar9 = pppppiVar12;
            }
          }
          ppppppiVar9 = ppppppiVar9 + 1;
          local_68[1] = (int *****)ppppppiVar9;
        }
      }
      local_94[0] = local_94[0] + 0x10;
      local_98 = local_98 + 1;
    } while (local_98 < iVar10);
  }
  local_94[1] = (int *****)(*(int *)(param_3 + 0x40) - *(int *)(param_3 + 0x3c) >> 6);
  local_98 = 0;
  if (0 < (int)local_94[1]) {
    local_9c = (int ****)0x0;
    ppppppiVar9 = (int ******)local_68[1];
    ppppppiVar8 = (int ******)local_74;
    do {
      ppppppiVar14 = (int ******)(*(int *)(param_3 + 0x3c) + (int)local_9c);
      local_94[0] = (int *****)ppppppiVar14;
      if (ppppppiVar14[3] != (int *****)0x0) {
        pppppiStack_b4 = (int *****)0x467d12;
        cVar1 = (*(code *)(*ppppppiVar14[3])[7])();
        if (cVar1 != '\0') {
          if ((local_94 < ppppppiVar8) && (local_78 <= local_94)) {
            iVar10 = (int)local_94 - (int)local_78;
            if (ppppppiVar8 == (int ******)local_70) {
              uVar4 = (int)ppppppiVar8 - (int)local_78 >> 2;
              if (0x3ffffffe < uVar4) goto LAB_00467d66;
              puVar11 = (undefined1 *)(uVar4 + 1);
              puVar7 = (undefined1 *)((int)local_70 - (int)local_78 >> 2);
              if (puVar7 < puVar11) {
                if ((undefined1 *)(0x3fffffff - ((uint)puVar7 >> 1)) < puVar7) {
                  pppppiStack_b4 = (int *****)0x0;
                }
                else {
                  pppppiStack_b4 = (int *****)(puVar7 + ((uint)puVar7 >> 1));
                }
                if (pppppiStack_b4 < puVar11) {
                  pppppiStack_b4 = (int *****)puVar11;
                }
                puStack_b8 = (uint *)0x467d81;
                FUN_004bf300();
                ppppppiVar8 = (int ******)local_74;
              }
            }
            if (ppppppiVar8 != (int ******)0x0) {
              *ppppppiVar8 = (int *****)local_78[iVar10 >> 2];
            }
          }
          else {
            if (ppppppiVar8 == (int ******)local_70) {
              uVar4 = (int)ppppppiVar8 - (int)local_78 >> 2;
              if (0x3ffffffe < uVar4) {
LAB_00467d66:
                pppppiStack_b4 = (int *****)0xdeda30;
                    /* WARNING: Subroutine does not return */
                puStack_b8 = (uint *)0x467d70;
                FUN_00aad3ad();
              }
              puVar11 = (undefined1 *)(uVar4 + 1);
              puVar7 = (undefined1 *)((int)local_70 - (int)local_78 >> 2);
              if (puVar7 < puVar11) {
                if ((undefined1 *)(0x3fffffff - ((uint)puVar7 >> 1)) < puVar7) {
                  pppppiStack_b4 = (int *****)0x0;
                }
                else {
                  pppppiStack_b4 = (int *****)(puVar7 + ((uint)puVar7 >> 1));
                }
                if (pppppiStack_b4 < puVar11) {
                  pppppiStack_b4 = (int *****)puVar11;
                }
                puStack_b8 = (uint *)0x467dd8;
                FUN_004bf300();
                ppppppiVar8 = (int ******)local_74;
              }
            }
            if (ppppppiVar8 != (int ******)0x0) {
              *ppppppiVar8 = (int *****)ppppppiVar14;
            }
          }
          local_74 = (int *****)(ppppppiVar8 + 1);
          ppppppiVar8 = (int ******)(uint)(*(int *)(*(int *)(param_3 + 0x1c) + local_98 * 4) != 0);
          local_94[0] = (int *****)ppppppiVar8;
          if ((local_94 < ppppppiVar9) && (local_68[0] <= local_94)) {
            iVar10 = (int)local_94 - (int)local_68[0];
            if (ppppppiVar9 == (int ******)local_68[2]) {
              uVar4 = (int)ppppppiVar9 - (int)local_68[0] >> 2;
              if (0x3ffffffe < uVar4) goto LAB_00467d66;
              puVar11 = (undefined1 *)(uVar4 + 1);
              puVar7 = (undefined1 *)((int)local_68[2] - (int)local_68[0] >> 2);
              if (puVar7 < puVar11) {
                if ((undefined1 *)(0x3fffffff - ((uint)puVar7 >> 1)) < puVar7) {
                  pppppiStack_b4 = (int *****)0x0;
                }
                else {
                  pppppiStack_b4 = (int *****)(puVar7 + ((uint)puVar7 >> 1));
                }
                if (pppppiStack_b4 < puVar11) {
                  pppppiStack_b4 = (int *****)puVar11;
                }
                puStack_b8 = (uint *)0x467e62;
                FUN_004bf300();
                ppppppiVar9 = (int ******)local_68[1];
              }
            }
            if (ppppppiVar9 != (int ******)0x0) {
              *ppppppiVar9 = (int *****)local_68[0][iVar10 >> 2];
            }
          }
          else {
            if (ppppppiVar9 == (int ******)local_68[2]) {
              uVar4 = (int)ppppppiVar9 - (int)local_68[0] >> 2;
              if (0x3ffffffe < uVar4) goto LAB_00467d66;
              puVar11 = (undefined1 *)(uVar4 + 1);
              puVar7 = (undefined1 *)((int)local_68[2] - (int)local_68[0] >> 2);
              if (puVar7 < puVar11) {
                if ((undefined1 *)(0x3fffffff - ((uint)puVar7 >> 1)) < puVar7) {
                  pppppiStack_b4 = (int *****)0x0;
                }
                else {
                  pppppiStack_b4 = (int *****)(puVar7 + ((uint)puVar7 >> 1));
                }
                if (pppppiStack_b4 < puVar11) {
                  pppppiStack_b4 = (int *****)puVar11;
                }
                puStack_b8 = (uint *)0x467ec1;
                FUN_004bf300();
                ppppppiVar9 = (int ******)local_68[1];
              }
            }
            if (ppppppiVar9 != (int ******)0x0) {
              *ppppppiVar9 = (int *****)ppppppiVar8;
            }
          }
          ppppppiVar9 = ppppppiVar9 + 1;
          ppppppiVar8 = (int ******)local_74;
          local_68[1] = (int *****)ppppppiVar9;
        }
      }
      local_9c = local_9c + 0x10;
      local_98 = local_98 + 1;
    } while (local_98 < (int)local_94[1]);
  }
  pppiStack_80 = (int ***)0x0;
  pppiStack_7c = (int ***)0x0;
  local_98 = 0;
  if (0 < (int)local_94[2]) {
    local_94[0] = local_68[0];
    local_94[1] = local_94[2];
    local_94[2] = (int *****)((int)local_78 - (int)local_68[0]);
    do {
      iVar10 = *(int *)((int)local_94[2] + (int)local_94[0]);
      pppppiVar12 = (int *****)&pppiStack_80;
      iVar13 = 5;
      if ((int *****)*local_94[0] != (int *****)0x0) {
        iVar13 = 1;
        local_98 = local_98 + 1;
        pppppiVar12 = (int *****)&pppiStack_7c;
      }
      local_94[3] = (int *****)&uStack_cc;
      pppiStack_d0 = (int ***)0xffffffff;
      puStack_d4 = (undefined1 *)0x0;
      iStack_d8 = *(int *)(iVar10 + 0xc) + 0x14;
      puStack_b8 = (uint *)0xf;
      ppiStack_bc = (int **)0x0;
      uStack_cc = uStack_cc & 0xffffff00;
      uStack_dc = 0x467f78;
      local_9c = (int ****)pppppiVar12;
      FUN_00408ed0();
      ppppiVar3 = *pppppiVar12;
      uStack_dc = 0x467f86;
      iStack_d8 = iVar2;
      puStack_d4 = (undefined1 *)iVar13;
      pppiStack_d0 = (int ***)ppppiVar3;
      FUN_00464b30();
      pcVar5 = (char *)(iVar10 + 0x18);
      local_94[3] = (int *****)(iVar10 + 0x19);
      puStack_b8 = (uint *)0xf;
      ppiStack_bc = (int **)0x0;
      uStack_cc = uStack_cc & 0xffffff00;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppiStack_d0 = (int ***)((int)pcVar5 - (int)local_94[3]);
      puStack_d4 = (undefined1 *)(iVar10 + 0x18);
      iStack_d8 = 0x467fc5;
      FUN_00409350();
      puStack_d4 = (undefined1 *)(iVar13 + 1);
      uStack_dc = 0x467fd4;
      iStack_d8 = iVar2;
      pppiStack_d0 = (int ***)ppppiVar3;
      FUN_00464b30();
      pcVar5 = (char *)(iVar10 + 0x20);
      local_94[3] = (int *****)(iVar10 + 0x21);
      puStack_b8 = (uint *)0xf;
      ppiStack_bc = (int **)0x0;
      uStack_cc = uStack_cc & 0xffffff00;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppiStack_d0 = (int ***)((int)pcVar5 - (int)local_94[3]);
      puStack_d4 = (undefined1 *)(iVar10 + 0x20);
      iStack_d8 = 0x46800d;
      FUN_00409350();
      puStack_d4 = (undefined1 *)(iVar13 + 2);
      uStack_dc = 0x46801c;
      iStack_d8 = iVar2;
      pppiStack_d0 = (int ***)ppppiVar3;
      FUN_00464b30();
      pppppiStack_b4 = (int *****)auStack_58;
      ppiStack_bc = (int **)0x468027;
      puStack_b8 = (uint *)iVar10;
      FUN_0094c600();
      pppppiStack_b4 = (int *****)&DAT_00ded950;
      puStack_b8 = auStack_58;
      local_c._0_1_ = 3;
      ppiStack_bc = (int **)0x468043;
      FUN_00989720();
      local_94[3] = (int *****)&uStack_cc;
      pppiStack_d0 = (int ***)0x468055;
      FUN_0046d310();
      puStack_d4 = (undefined1 *)(iVar13 + 3);
      uStack_dc = 0x468064;
      iStack_d8 = iVar2;
      pppiStack_d0 = (int ***)ppppiVar3;
      FUN_00464b30();
      local_c = CONCAT31(local_c._1_3_,2);
      bVar15 = 0xf < uStack_44;
      *local_9c = (int ***)((int)ppppiVar3 + 1);
      if (bVar15) {
        pppppiStack_b4 = (int *****)auStack_58[0];
                    /* WARNING: Subroutine does not return */
        puStack_b8 = (uint *)&UNK_00468084;
        FUN_00aae91b();
      }
      local_94[0] = local_94[0] + 1;
      local_94[1] = (int *****)((int)local_94[1] + -1);
    } while (local_94[1] != (int *****)0x0);
  }
  pppppiStack_b4 = (int *****)0xffffffff;
  ppiStack_bc = (int **)(param_2 + 0x10);
  puStack_b8 = (uint *)0x0;
  uStack_44 = 0xf;
  uStack_48 = 0;
  auStack_58[0] = auStack_58[0] & 0xffffff00;
  ppiStack_c0 = (int **)0x4680bd;
  FUN_00408ed0();
  local_94[3] = (int *****)&uStack_cc;
  local_c._0_1_ = 4;
  pppiStack_d0 = (int ***)0x0;
  puStack_b8 = (uint *)0xf;
  ppiStack_bc = (int **)0x0;
  puStack_d4 = &DAT_00ded94d;
  uStack_cc = uStack_cc & 0xffffff00;
  iStack_d8 = 0x4680e2;
  FUN_00409350();
  local_94[2] = (int *****)auStack_e8;
  local_c._0_1_ = 5;
  puStack_d4 = (undefined1 *)0xf;
  iStack_d8 = 0;
  auStack_e8[0] = 0;
  FUN_00408ed0(auStack_58,0,0xffffffff);
  local_c._0_1_ = 4;
  FUN_004661f0(0,0);
  local_c = CONCAT31(local_c._1_3_,2);
  if (0xf < uStack_44) {
    pppppiStack_b4 = (int *****)auStack_58[0];
                    /* WARNING: Subroutine does not return */
    puStack_b8 = (uint *)&UNK_0046813e;
    FUN_00aae91b();
  }
  iVar10 = iVar2 + 0x34;
  pppppiStack_b4 = (int *****)(uint)(*(char *)(param_2 + 0xfc) != '\0');
  puStack_b8 = (uint *)0x0;
  ppiStack_c0 = (int **)0x46815b;
  ppiStack_bc = (int **)iVar10;
  FUN_00466050();
  pppppiStack_b4 = (int *****)(uint)(*(char *)(param_3 + 8) != '\0');
  puStack_b8 = (uint *)0x1;
  ppiStack_c0 = (int **)0x468172;
  ppiStack_bc = (int **)iVar10;
  FUN_00466050();
  pppppiStack_b4 = (int *****)local_98;
  puStack_b8 = (uint *)0x3;
  ppiStack_c0 = (int **)0x468182;
  ppiStack_bc = (int **)iVar10;
  FUN_00466050();
  pppppiStack_b4 = (int *****)0x468191;
  puVar6 = (undefined4 *)FUN_00936640();
  pppppiStack_b4 = (int *****)*puVar6;
  puStack_b8 = (uint *)0x0;
  ppiStack_bc = (int **)0x46819d;
  FUN_00464bd0();
  pppppiStack_b4 = *(int ******)(DAT_012588e8 + 0xb0c);
  puStack_b8 = (uint *)0x1;
  ppiStack_bc = (int **)0x4681b3;
  FUN_00464bd0();
  if ((int ******)local_68[0] == (int ******)0x0) {
    if ((int ******)local_78 != (int ******)0x0) {
      pppppiStack_b4 = local_78;
                    /* WARNING: Subroutine does not return */
      puStack_b8 = (uint *)&UNK_004681d2;
      FUN_00aae91b();
    }
    if (uStack_20 < 0x10) {
      ExceptionList = pvStack_14;
      return iVar2;
    }
    pppppiStack_b4 = (int *****)local_34[0];
                    /* WARNING: Subroutine does not return */
    puStack_b8 = (uint *)&UNK_004681e9;
    FUN_00aae91b();
  }
  pppppiStack_b4 = local_68[0];
                    /* WARNING: Subroutine does not return */
  puStack_b8 = (uint *)&UNK_004681c1;
  FUN_00aae91b();
}

