// FUN_00413f50 @ 00413f50 body=[[00413f50, 004140a4] [004140a8, 0041414c] [00414150, 0041485d]]


undefined4 FUN_00413f50(int param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  int local_968 [65];
  int local_864 [66];
  int local_75c [66];
  int local_654 [66];
  int local_54c [65];
  int local_448 [65];
  int local_344 [66];
  int local_23c [65];
  int local_138 [65];
  undefined4 *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar7 = (char *)param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b60bba;
  local_10 = ExceptionList;
  param_2 = (int *)0x0;
  pcVar3 = pcVar7;
  if (0xf < *(uint *)(pcVar7 + 0x14)) {
    pcVar3 = *(char **)pcVar7;
  }
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    ExceptionList = &local_10;
    iVar4 = PHYSFS_exists(pcVar3);
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)FUN_00aae9af(0x360);
      local_8 = 0;
      if (puVar5 == (undefined4 *)0x0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        local_14 = puVar5;
        FUN_00409350("UNNAMED_SESSION",0xf);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_2 = (int *)0x1;
        puVar6 = (undefined4 *)FUN_00aae9af(0x114);
        local_8 = 2;
        local_34 = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_0098ffc0(pcVar7);
          *puVar6 = &PTR_FUN_00e37c3c;
        }
        *puVar5 = &PTR_FUN_00e38524;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *(undefined1 *)(puVar5 + 4) = 0;
        local_8 = 3;
        *(undefined1 *)(puVar5 + 5) = 0;
        puVar5[7] = puVar6;
        puVar5[0xd0] = 0xf;
        puVar5[0xcf] = 0;
        *(undefined1 *)(puVar5 + 0xcb) = 0;
        FUN_00408ed0(local_30,0,0xffffffff);
        puVar5[0xd2] = 0;
        puVar5[0xd3] = 0;
        puVar5[0xd4] = 0;
        puVar5[0xd7] = 0;
        *(undefined1 *)(puVar5 + 0xd6) = 1;
        local_14 = puVar5;
      }
      local_8 = 0xffffffff;
      puVar5 = local_14;
      if (((uint)param_2 & 1) != 0) {
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
      }
LAB_004140c0:
      do {
        piVar8 = (int *)puVar5[7];
        if ((char)piVar8[0x44] == '\0') {
          iVar4 = (**(code **)(*piVar8 + 4))();
          piVar8[2] = iVar4;
          if (iVar4 == 0) {
            piVar8[3] = 0x13;
          }
          *(undefined1 *)(piVar8 + 0x44) = 1;
        }
        piVar8 = piVar8 + 3;
        piVar12 = local_448;
        for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar12 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar12 = piVar12 + 1;
        }
        if (local_448[0] == 0x13) {
          (**(code **)*puVar5)(1);
          ExceptionList = local_10;
          return 1;
        }
        FUN_009a1440(puVar5);
        iVar4 = puVar5[8];
        if (iVar4 == 0xa11) {
          FUN_009a1440(puVar5);
          if (puVar5[8] == 0xb2) {
            pcVar7 = (char *)(puVar5 + 0x8b);
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            FUN_00409350(puVar5 + 0x8b,(int)pcVar7 - ((int)puVar5 + 0x22d));
          }
LAB_00414150:
          do {
            piVar8 = (int *)puVar5[7];
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar12 = local_654;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar12 = piVar12 + 1;
            }
            if ((local_654[0] == 4) || (local_654[0] == 0x13)) goto LAB_00414321;
            piVar8 = (int *)puVar5[7];
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar12 = local_138;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar12 = piVar12 + 1;
            }
            if (local_138[0] == 0x13) goto LAB_00414321;
            FUN_009a1440(puVar5);
          } while (puVar5[8] != 0x3b9);
          piVar8 = (int *)FUN_00aae9af(0x34);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8[1] = 0x18d;
            piVar8[8] = 0xf;
            piVar8[7] = 0;
            *(undefined1 *)(piVar8 + 3) = 0;
            *piVar8 = (int)CBattlePlanToolColorOption::vftable;
            piVar8[10] = 0;
            piVar8[0xb] = 0;
            piVar8[0xc] = 0;
          }
          param_2 = piVar8;
          (**(code **)(*piVar8 + 0xc))(puVar5);
          puVar11 = (uint *)(param_1 + 0x34);
          piVar8[2] = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 2;
          puVar6 = *(undefined4 **)(param_1 + 0x38);
          if (&param_2 < puVar6) {
            puVar2 = (undefined4 *)*puVar11;
            if (puVar2 <= &param_2) {
              if (puVar6 == *(undefined4 **)(param_1 + 0x3c)) {
                uVar9 = (int)puVar6 - (int)puVar2 >> 2;
                if (0x3ffffffe < uVar9) goto LAB_00414820;
                uVar9 = uVar9 + 1;
                uVar10 = (int)*(undefined4 **)(param_1 + 0x3c) - (int)puVar2 >> 2;
                if (uVar10 < uVar9) {
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < uVar9) {
                    uVar10 = uVar9;
                  }
                  FUN_004bf300(uVar10);
                  puVar5 = local_14;
                }
              }
              if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
                **(undefined4 **)(param_1 + 0x38) =
                     *(undefined4 *)(*puVar11 + ((int)&param_2 - (int)puVar2 >> 2) * 4);
              }
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
              goto LAB_00414150;
            }
          }
          if (puVar6 == *(undefined4 **)(param_1 + 0x3c)) {
            uVar9 = (int)((int)puVar6 - *puVar11) >> 2;
            if (0x3ffffffe < uVar9) {
LAB_00414820:
                    /* WARNING: Subroutine does not return */
              FUN_00aad3ad("vector<T> too long");
            }
            uVar9 = uVar9 + 1;
            uVar10 = (int)((int)*(undefined4 **)(param_1 + 0x3c) - *puVar11) >> 2;
            if (uVar10 < uVar9) {
              if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar10 + (uVar10 >> 1);
              }
              if (uVar10 < uVar9) {
                uVar10 = uVar9;
              }
              FUN_004bf300(uVar10);
              puVar5 = local_14;
            }
          }
          if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x38) = piVar8;
          }
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
          goto LAB_00414150;
        }
        if (iVar4 == 0xa12) {
          FUN_009a1440(puVar5);
          if (puVar5[8] == 0xb2) {
            pcVar7 = (char *)(puVar5 + 0x8b);
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            FUN_00409350(puVar5 + 0x8b,(int)pcVar7 - ((int)puVar5 + 0x22d));
          }
          while( true ) {
            piVar8 = (int *)puVar5[7];
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar12 = local_864;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar12 = piVar12 + 1;
            }
            if ((local_864[0] == 4) || (local_864[0] == 0x13)) break;
            piVar8 = (int *)puVar5[7];
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar12 = local_23c;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar12 = piVar12 + 1;
            }
            if (local_23c[0] == 0x13) break;
            FUN_009a1440(puVar5);
            if (puVar5[8] == 0x3b9) {
              piVar8 = (int *)FUN_00aae9af(0x44);
              if (piVar8 == (int *)0x0) {
                piVar8 = (int *)0x0;
              }
              else {
                piVar8[1] = 0x18d;
                piVar8[7] = 0;
                piVar8[8] = 0xf;
                *(undefined1 *)(piVar8 + 3) = 0;
                *piVar8 = (int)CBattlePlanToolArrowOption::vftable;
                piVar8[0xf] = 0xf;
                piVar8[0xe] = 0;
                *(undefined1 *)(piVar8 + 10) = 0;
              }
              param_2 = piVar8;
              (**(code **)(*piVar8 + 0xc))(puVar5);
              piVar8[2] = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
              puVar6 = *(undefined4 **)(param_1 + 0x48);
              if ((&param_2 < puVar6) &&
                 (puVar2 = *(undefined4 **)(param_1 + 0x44), puVar2 <= &param_2)) {
                if (puVar6 == *(undefined4 **)(param_1 + 0x4c)) {
                  FUN_00a513f0();
                }
                if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x48) =
                       *(undefined4 *)
                        (*(int *)(param_1 + 0x44) + ((int)&param_2 - (int)puVar2 >> 2) * 4);
                }
                *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
              }
              else {
                if (puVar6 == *(undefined4 **)(param_1 + 0x4c)) {
                  FUN_00a513f0();
                }
                if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x48) = piVar8;
                }
                *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
              }
            }
          }
LAB_00414811:
          (**(code **)(*(int *)puVar5[7] + 4))();
          goto LAB_004140c0;
        }
        if (iVar4 == 0xa13) {
          FUN_009a1440(puVar5);
          if (puVar5[8] == 0xb2) {
            pcVar7 = (char *)(puVar5 + 0x8b);
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            FUN_00409350(puVar5 + 0x8b,(int)pcVar7 - ((int)puVar5 + 0x22d));
          }
LAB_00414510:
          do {
            piVar8 = (int *)puVar5[7];
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar12 = local_344;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar12 = piVar12 + 1;
            }
            if ((local_344[0] == 4) || (local_344[0] == 0x13)) goto LAB_00414811;
            piVar8 = (int *)puVar5[7];
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar12 = local_54c;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar12 = piVar12 + 1;
            }
            if (local_54c[0] == 0x13) goto LAB_00414811;
            FUN_009a1440(puVar5);
          } while (puVar5[8] != 0x3b9);
          piVar8 = (int *)FUN_00aae9af(0x44);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8[1] = 0x18d;
            piVar8[7] = 0;
            piVar8[8] = 0xf;
            *(undefined1 *)(piVar8 + 3) = 0;
            *piVar8 = (int)CBattlePlanToolBorderOption::vftable;
            piVar8[0xf] = 0xf;
            piVar8[0xe] = 0;
            *(undefined1 *)(piVar8 + 10) = 0;
          }
          param_2 = piVar8;
          (**(code **)(*piVar8 + 0xc))(puVar5);
          piVar8[2] = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2;
          puVar6 = *(undefined4 **)(param_1 + 0x58);
          if (&param_2 < puVar6) {
            puVar2 = *(undefined4 **)(param_1 + 0x54);
            if (puVar2 <= &param_2) {
              if (puVar6 == *(undefined4 **)(param_1 + 0x5c)) {
                FUN_00a513f0();
              }
              if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
                **(undefined4 **)(param_1 + 0x58) =
                     *(undefined4 *)
                      (*(int *)(param_1 + 0x54) + ((int)&param_2 - (int)puVar2 >> 2) * 4);
              }
              *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
              goto LAB_00414510;
            }
          }
          if (puVar6 == *(undefined4 **)(param_1 + 0x5c)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x58) = piVar8;
          }
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
          goto LAB_00414510;
        }
        if (iVar4 == 0xa14) {
          FUN_009a1440(puVar5);
          if (puVar5[8] == 0xb2) {
            pcVar7 = (char *)(puVar5 + 0x8b);
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            FUN_00409350(puVar5 + 0x8b,(int)pcVar7 - ((int)puVar5 + 0x22d));
          }
LAB_004146b0:
          do {
            piVar8 = (int *)puVar5[7];
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar12 = local_75c;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar12 = piVar12 + 1;
            }
            if ((local_75c[0] == 4) || (local_75c[0] == 0x13)) goto LAB_00414811;
            piVar8 = (int *)puVar5[7];
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar12 = local_968;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar12 = piVar12 + 1;
            }
            if (local_968[0] == 0x13) goto LAB_00414811;
            FUN_009a1440(puVar5);
          } while (puVar5[8] != 0x3b9);
          piVar8 = (int *)FUN_00aae9af(0x44);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8[1] = 0x18d;
            piVar8[7] = 0;
            piVar8[8] = 0xf;
            *(undefined1 *)(piVar8 + 3) = 0;
            *piVar8 = (int)CBattlePlanToolIconsOption::vftable;
            piVar8[0xf] = 0xf;
            piVar8[0xe] = 0;
            *(undefined1 *)(piVar8 + 10) = 0;
          }
          param_2 = piVar8;
          (**(code **)(*piVar8 + 0xc))(puVar5);
          piVar8[2] = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100) >> 2;
          puVar6 = *(undefined4 **)(param_1 + 0x68);
          if (&param_2 < puVar6) {
            puVar2 = *(undefined4 **)(param_1 + 100);
            if (puVar2 <= &param_2) {
              if (puVar6 == *(undefined4 **)(param_1 + 0x6c)) {
                FUN_00a513f0();
              }
              if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
                **(undefined4 **)(param_1 + 0x68) =
                     *(undefined4 *)
                      (*(int *)(param_1 + 100) + ((int)&param_2 - (int)puVar2 >> 2) * 4);
              }
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
              goto LAB_004146b0;
            }
          }
          if (puVar6 == *(undefined4 **)(param_1 + 0x6c)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x68) = piVar8;
          }
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
          goto LAB_004146b0;
        }
      } while( true );
    }
  }
  ExceptionList = local_10;
  return 0;
LAB_00414321:
  (**(code **)(*(int *)puVar5[7] + 4))();
  goto LAB_004140c0;
}

