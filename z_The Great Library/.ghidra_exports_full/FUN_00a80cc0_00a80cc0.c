// FUN_00a80cc0 @ 00a80cc0 body=[[00a80cc0, 00a80d6c] [00a80d70, 00a80d89] [00a80d8d, 00a80fdd] [00a80fe1, 00a8103a] [00a8103e, 00a810a7] [00a810ab, 00a8117c] [00a81180, 00a811b9] [00a811bd, 00a81239] [00a8123d, 00a81296] [00a8129a, 00a81386] [00a8138a, 00a813d1] [00a813d5, 00a814cb] [00a814cf, 00a81505] [00a81509, 00a8152d] [00a81531, 00a81552] [00a81556, 00a815b1] [00a815b7, 00a81616] [00a8161a, 00a81647] [00a8164b, 00a81676] [00a8167a, 00a8174c]]


undefined4
FUN_00a80cc0(int param_1,char *param_2,int param_3,void *param_4,undefined4 param_5,uint param_6,
            void *param_7,int *param_8,undefined4 *param_9)

{
  char *pcVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  void *_Dst;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char ****ppppcVar13;
  int unaff_ESI;
  char ****ppppcVar14;
  undefined4 *unaff_EDI;
  undefined4 *puVar15;
  undefined1 *puVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  uint uStack_164;
  undefined4 *local_160;
  undefined4 uStack_158;
  char ***pppcStack_154;
  uint uStack_150;
  int *piStack_148;
  char ***pppcStack_144;
  uint uStack_140;
  undefined4 local_138;
  int *local_134;
  uint uStack_130;
  undefined4 uStack_128;
  char *pcStack_124;
  uint auStack_11c [4];
  undefined4 uStack_10c;
  uint uStack_108;
  uint auStack_104 [4];
  undefined4 uStack_f4;
  uint uStack_f0;
  char ***apppcStack_e4 [4];
  undefined4 uStack_d4;
  uint uStack_d0;
  uint uStack_c8;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  uint uStack_84;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_5c [8];
  uint uStack_54;
  undefined2 uStack_44;
  undefined2 uStack_40;
  undefined1 auStack_38 [24];
  undefined2 uStack_20;
  undefined2 uStack_1c;
  
  *param_9 = 0;
  piVar2 = *(int **)(param_3 + 4);
  local_138 = 0;
  local_134 = piVar2;
  puVar5 = (undefined4 *)FUN_00aae9af();
  local_160 = puVar5;
  _memset(puVar5,0,0x50);
  pcVar7 = param_2;
  if (param_2 != (char *)0x0) {
    do {
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    uVar6 = FUN_00aad56b();
    *puVar5 = uVar6;
    uStack_140 = 0xf;
    pppcStack_144 = (char ***)0x0;
    pppcStack_154 = (char ***)((uint)pppcStack_154 & 0xffffff00);
    pcVar7 = param_2;
    do {
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    FUN_00409350(param_2);
    ppppcVar13 = (char ****)pppcStack_154;
    if (uStack_140 < 0x10) {
      ppppcVar13 = &pppcStack_154;
    }
    pcVar7 = (char *)*puVar5;
    do {
      cVar4 = *(char *)ppppcVar13;
      *pcVar7 = cVar4;
      ppppcVar13 = (char ****)((int)ppppcVar13 + 1);
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    if (0xf < uStack_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  piVar17 = piVar2;
  (**(code **)(*piVar2 + 0x28))();
  iVar8 = (**(code **)(*piVar2 + 0x10))(piVar2);
  puVar5[2] = piVar2;
  puVar5[1] = 1;
  (**(code **)(*piVar2 + 4))(piVar2);
  uVar19 = 1;
  if (param_6 != 0) {
    uVar19 = param_6;
  }
  puVar5[5] = uVar19;
  uVar6 = FUN_00aad56b(-(uint)((int)((ulonglong)uVar19 * 0x48 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar19 * 0x48));
  puVar5[3] = uVar6;
  uVar6 = FUN_00aad56b(-(uint)((int)((ulonglong)(uint)puVar5[5] * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)puVar5[5] * 4));
  puVar5[9] = uVar6;
  lVar3 = (ulonglong)(uint)(iVar8 * 3) * 4;
  _Dst = (void *)FUN_00aad56b(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
  puVar5[6] = _Dst;
  FID_conflict__memcpy(_Dst,param_7,iVar8 * 0xc);
  _memset((void *)puVar5[9],0,puVar5[5] * 4);
  if (param_6 != 0) {
    FID_conflict__memcpy((void *)puVar5[3],param_4,param_6 * 0x48);
    uVar19 = 0;
    if (param_6 != 0) {
      uVar18 = 0;
      do {
        uStack_d0 = 0xf;
        uStack_d4 = 0;
        apppcStack_e4[0] = (char ***)((uint)apppcStack_e4[0] & 0xffffff00);
        pcVar7 = *(char **)(uVar18 + 0x44 + puVar5[3]);
        uVar10 = uVar18;
        if (pcVar7 != (char *)0x0) {
          pcVar9 = pcVar7;
          do {
            cVar4 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar4 != '\0');
          FUN_00409350(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
        }
        if (*(int *)(param_1 + 0xc) == 0) {
          if (DAT_00f20c18 == (int *)0x0) {
            DAT_00f20c18 = (int *)FUN_00aae9af(4);
            if (DAT_00f20c18 == (int *)0x0) {
              DAT_00f20c18 = (int *)0x0;
            }
            else {
              *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
            }
          }
          cVar4 = (**(code **)(*DAT_00f20c18 + 0x24))(apppcStack_e4);
          if (cVar4 == '\0') goto LAB_00a810c5;
          if (*(int *)(param_1 + 0xc) != 0) {
            FUN_009bcbf0(apppcStack_e4,1);
            pcVar9 = *(char **)((int)param_4 + uVar18 + 0x44);
            pcVar7 = pcVar9 + 1;
            do {
              cVar4 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar4 != '\0');
            uVar6 = FUN_00aad56b(pcVar9 + (1 - (int)pcVar7));
            *(undefined4 *)(uVar18 + 0x44 + puVar5[3]) = uVar6;
            pcVar7 = *(char **)((int)param_4 + uVar18 + 0x44);
            pcVar9 = *(char **)(uVar18 + 0x44 + puVar5[3]);
            do {
              cVar4 = *pcVar7;
              *pcVar9 = cVar4;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar4 != '\0');
            pcVar7 = *(char **)(uVar18 + 0x44 + puVar5[3]);
            auStack_11c[0] = auStack_11c[0] & 0xffffff00;
            uStack_108 = 0xf;
            uStack_10c = 0;
            pcVar9 = pcVar7;
            do {
              cVar4 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar4 != '\0');
            FUN_00409350(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
            uVar6 = FUN_00a4c270(&uStack_ac,auStack_11c);
            FUN_00408ed0(uVar6,0,0xffffffff);
            if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(uStack_ac);
            }
            uStack_b4 = 0xf;
            uStack_b8 = 0;
            uStack_c8 = uStack_c8 & 0xffffff00;
            FUN_00409350("text.tga",8);
            cVar4 = FUN_00416db0();
            if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(uStack_c8);
            }
            uStack_b4 = 0xf;
            uStack_b8 = 0;
            uStack_c8 = uStack_c8 & 0xffffff00;
            if (cVar4 != '\0') {
              piVar2 = *(int **)(puVar5[9] + uVar19 * 4);
              (**(code **)(*piVar2 + 0x44))(piVar2,0,auStack_38);
              *(undefined2 *)(param_1 + 4) = uStack_20;
              *(undefined2 *)(param_1 + 6) = uStack_1c;
            }
            if (0xf < uStack_108) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(auStack_11c[0]);
            }
            uStack_108 = 0xf;
            uStack_10c = 0;
            auStack_11c[0] = auStack_11c[0] & 0xffffff00;
          }
        }
        else {
LAB_00a810c5:
          pcVar9 = (char *)FUN_00aad56b(0x100);
          pcVar7 = (char *)(param_1 + 0x1c);
          pcStack_124 = pcVar9;
          if (0xf < *(uint *)(param_1 + 0x30)) {
            pcVar7 = *(char **)pcVar7;
          }
          iVar8 = (int)pcVar9 - (int)pcVar7;
          do {
            cVar4 = *pcVar7;
            pcVar7[iVar8] = cVar4;
            pcVar7 = pcVar7 + 1;
          } while (cVar4 != '\0');
          ppppcVar13 = (char ****)apppcStack_e4[0];
          ppppcVar14 = (char ****)apppcStack_e4[0];
          if (uStack_d0 < 0x10) {
            ppppcVar13 = apppcStack_e4;
            ppppcVar14 = ppppcVar13;
          }
          do {
            cVar4 = *(char *)ppppcVar13;
            ppppcVar13 = (char ****)((int)ppppcVar13 + 1);
          } while (cVar4 != '\0');
          uVar18 = (int)ppppcVar13 - (int)ppppcVar14;
          pcVar7 = pcVar9 + -1;
          do {
            pcVar1 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar1 != '\0');
          for (uVar11 = uVar18 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(char ****)pcVar7 = *ppppcVar14;
            ppppcVar14 = ppppcVar14 + 1;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar7 = *(char *)ppppcVar14;
            ppppcVar14 = (char ****)((int)ppppcVar14 + 1);
            pcVar7 = pcVar7 + 1;
          }
          if (DAT_00f20c18 == (int *)0x0) {
            DAT_00f20c18 = (int *)FUN_00aae9af(4);
            if (DAT_00f20c18 == (int *)0x0) {
              DAT_00f20c18 = (int *)0x0;
            }
            else {
              *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
            }
          }
          piVar2 = DAT_00f20c18;
          uStack_150 = 0xf;
          pppcStack_154 = (char ***)0x0;
          uStack_164 = uStack_164 & 0xffffff00;
          pcVar7 = pcVar9;
          do {
            cVar4 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar4 != '\0');
          FUN_00409350(pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
          cVar4 = (**(code **)(*piVar2 + 0x24))(&uStack_164);
          puVar5 = (undefined4 *)CONCAT13(cVar4 == '\0',(int3)unaff_EDI);
          if ((char ****)0xf < pppcStack_154) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uVar19);
          }
          if (cVar4 == '\0') {
            *(undefined4 *)(*(int *)(uVar10 + 0x24) + unaff_ESI * 4) = 0;
            *(undefined4 *)((int)piVar17 + *(int *)(uVar10 + 0xc) + 0x44) = 0;
            uVar18 = uVar10;
          }
          else {
            pppcStack_154 = (char ***)0xf;
            uStack_158 = 0;
            uVar19 = uVar19 >> 8;
            pcVar7 = pcVar9;
            do {
              cVar4 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar4 != '\0');
            FUN_00409350(pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
            uVar6 = FUN_009bcbf0(&stack0xfffffe98,1);
            *(undefined4 *)(param_1 + 0x10) = uVar6;
            if ((char ***)0xf < pppcStack_154) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(uVar19 << 8);
            }
            pppcStack_154 = (char ***)0xf;
            uStack_158 = 0;
            pcVar7 = pcVar9;
            do {
              cVar4 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar4 != '\0');
            FUN_00409350(pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
            uVar6 = FUN_009bcfc0(&stack0xfffffe98);
            *(undefined4 *)(*(int *)(uVar10 + 0x24) + unaff_ESI * 4) = uVar6;
            if ((char ***)0xf < pppcStack_154) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(uVar19 << 8);
            }
            uStack_130 = 0xf;
            local_134 = (int *)0x0;
            pppcStack_144 = (char ***)((uint)pppcStack_144 & 0xffffff00);
            pcVar7 = pcVar9;
            do {
              cVar4 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar4 != '\0');
            uVar18 = uVar10;
            FUN_00409350(pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
            uVar6 = FUN_00aad56b((int)local_134 + 1);
            *(undefined4 *)((int)piVar17 + *(int *)(uVar10 + 0xc) + 0x44) = uVar6;
            ppppcVar13 = (char ****)pppcStack_144;
            if (uStack_130 < 0x10) {
              ppppcVar13 = &pppcStack_144;
            }
            pcVar7 = *(char **)((int)piVar17 + *(int *)(uVar10 + 0xc) + 0x44);
            do {
              cVar4 = *(char *)ppppcVar13;
              *pcVar7 = cVar4;
              ppppcVar13 = (char ****)((int)ppppcVar13 + 1);
              pcVar7 = pcVar7 + 1;
            } while (cVar4 != '\0');
            pcVar7 = *(char **)((int)piVar17 + *(int *)(uVar10 + 0xc) + 0x44);
            auStack_104[0] = auStack_104[0] & 0xffffff00;
            uStack_f0 = 0xf;
            uStack_f4 = 0;
            pcVar9 = pcVar7;
            do {
              cVar4 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar4 != '\0');
            FUN_00409350(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
            uVar6 = FUN_00a4c270(&uStack_b0,auStack_104);
            FUN_00408ed0(uVar6,0,0xffffffff);
            if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(uStack_b0);
            }
            pppcStack_154 = (char ***)0xf;
            uStack_158 = 0;
            uVar19 = uVar19 << 8;
            FUN_00409350("text.tga",8);
            cVar4 = FUN_00416db0();
            if ((char ****)0xf < pppcStack_154) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(uVar19);
            }
            if (cVar4 == '\0') {
              piVar2 = *(int **)(param_1 + 8);
              if (piVar2 != (int *)0x0) {
                uStack_130 = (**(code **)(*piVar2 + 0x24))(piVar2,0,&DAT_00e19384);
                uVar10 = uStack_140;
                if (uStack_130 != 0) {
                  local_160 = (undefined4 *)0xf;
                  uStack_164 = 0;
                  uVar18 = uVar18 & 0xffffff00;
                  FUN_00409350("normal",6);
                  uVar11 = uStack_140;
                  uVar6 = FUN_009895f0(uVar10);
                  puVar16 = &stack0xfffffe8c;
                  FUN_009895f0(uVar11 - 9);
                  FUN_00988f20(puVar16);
                  FUN_00988f20(uVar6);
                  if (0xf < uStack_8c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(uStack_a0);
                  }
                  uStack_8c = 0xf;
                  uStack_90 = 0;
                  uStack_a0 = uStack_a0 & 0xffffff00;
                  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(uStack_84);
                  }
                  uStack_70 = 0xf;
                  uStack_74 = 0;
                  uStack_84 = uStack_84 & 0xffffff00;
                  if (0xf < local_160) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(uVar18);
                  }
                  local_160 = (undefined4 *)0xf;
                  uStack_164 = 0;
                  uVar18 = uVar18 & 0xffffff00;
                  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(uStack_68);
                  }
                  uVar10 = FUN_009bcbf0(&uStack_bc,1);
                  *(uint *)(param_1 + 0x14) = uVar10;
                  if ((uVar10 == 0xffffffff) || (9999 < uVar10)) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = *(undefined4 *)(uVar10 * 0x2c + 4 + *(int *)(param_1 + 0xc));
                  }
                  (**(code **)(**(int **)(param_1 + 8) + 0xd0))
                            (*(int **)(param_1 + 8),uStack_130,uVar6);
                  if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(uStack_bc);
                  }
                }
                iVar8 = (**(code **)(**(int **)(param_1 + 8) + 0x24))
                                  (*(int **)(param_1 + 8),0,&DAT_00e0bce4);
                if (iVar8 != 0) {
                  uVar10 = *(uint *)(param_1 + 0x10);
                  if ((uVar10 == 0xffffffff) || (9999 < uVar10)) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = *(undefined4 *)(uVar10 * 0x2c + 4 + *(int *)(param_1 + 0xc));
                  }
                  (**(code **)(**(int **)(param_1 + 8) + 0xd0))(*(int **)(param_1 + 8),iVar8,uVar6);
                }
              }
            }
            else {
              piVar2 = *(int **)(*(int *)(uVar10 + 0x24) + unaff_ESI * 4);
              (**(code **)(*piVar2 + 0x44))(piVar2,0,auStack_5c);
              *(undefined2 *)(param_1 + 4) = uStack_44;
              *(undefined2 *)(param_1 + 6) = uStack_40;
            }
            if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(auStack_104[0]);
            }
            uStack_f0 = 0xf;
            uStack_f4 = 0;
            auStack_104[0] = auStack_104[0] & 0xffffff00;
            if (0xf < uStack_130) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(pppcStack_144);
            }
          }
          FUN_00aaea59(uStack_128);
          unaff_EDI = puVar5;
        }
        if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(apppcStack_e4[0]);
        }
        uVar19 = uVar19 + 1;
        uVar18 = uVar18 + 0x48;
      } while (uVar19 < param_6);
    }
  }
  if (param_8 != (int *)0x0) {
    unaff_EDI[7] = param_8;
    (**(code **)(*param_8 + 4))(param_8);
    unaff_EDI[10] = piStack_148;
    (**(code **)(*piStack_148 + 4))(piStack_148);
    uVar19 = (**(code **)(*param_8 + 0x24))(param_8);
    uStack_150 = uVar19;
    uVar6 = FUN_00aad56b(-(uint)((int)((ulonglong)uVar19 * 0x40 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar19 * 0x40));
    ppppcVar13 = (char ****)0x0;
    unaff_EDI[0x10] = uVar6;
    if (uVar19 != 0) {
      iVar8 = 0;
      do {
        puVar5 = (undefined4 *)
                 (**(code **)(*(int *)unaff_EDI[7] + 0x44))((int *)unaff_EDI[7],ppppcVar13);
        puVar15 = (undefined4 *)(unaff_EDI[0x10] + iVar8);
        iVar8 = iVar8 + 0x40;
        ppppcVar13 = (char ****)((int)ppppcVar13 + 1);
        for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar15 = puVar15 + 1;
        }
      } while (ppppcVar13 < pppcStack_144);
    }
    FUN_00a81840(piStack_148);
  }
  *param_9 = unaff_EDI;
  (**(code **)(*piStack_148 + 8))(piStack_148);
  return 0;
}

