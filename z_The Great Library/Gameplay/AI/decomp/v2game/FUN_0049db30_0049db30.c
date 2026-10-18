// FUN_0049db30 @ 0049db30 body=[[0049db30, 0049dc9c] [0049dca0, 0049dd44] [0049dd50, 0049e029] [0049e02d, 0049e06f] [0049e078, 0049e311] [0049e315, 0049e351] [0049e35a, 0049e5c8] [0049e5cc, 0049e5e9] [0049e5f0, 0049e865]]


void FUN_0049db30(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  int iVar7;
  undefined4 extraout_ECX_00;
  uint uVar8;
  int iVar9;
  undefined4 unaff_EDI;
  int *piVar10;
  int local_988;
  undefined4 *local_984;
  undefined4 *local_980;
  undefined4 *local_97c;
  int iStack_978;
  uint uStack_974;
  undefined4 uStack_970;
  uint local_96c [4];
  undefined4 local_95c;
  uint local_958;
  undefined **ppuStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined **ppuStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined **ppuStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined **ppuStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined **ppuStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined **ppuStack_900;
  undefined4 uStack_8fc;
  float fStack_8f8;
  float fStack_8f4;
  undefined **local_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined **local_8e0;
  uint local_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined1 auStack_8d0 [32];
  uint auStack_8b0 [4];
  undefined4 uStack_8a0;
  uint uStack_89c;
  uint uStack_890;
  undefined4 uStack_880;
  uint uStack_87c;
  uint auStack_874 [4];
  undefined4 uStack_864;
  uint uStack_860;
  undefined **appuStack_7f4 [7];
  undefined **appuStack_7d8 [48];
  undefined **appuStack_718 [18];
  int aiStack_6d0 [59];
  int aiStack_5e4 [74];
  int local_4bc [58];
  undefined1 auStack_3d4 [940];
  undefined4 uStack_28;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b93801;
  pvStack_14 = ExceptionList;
  local_988 = 0;
  ExceptionList = &pvStack_14;
  param_1[0xaac] = 0;
  local_984 = (undefined4 *)FUN_00aae9af(0x360);
  local_c = 0;
  local_980 = local_984;
  if (local_984 == (undefined4 *)0x0) {
    local_984 = (undefined4 *)0x0;
  }
  else {
    local_8dc = 0xf;
    local_8e0 = (undefined **)0x0;
    local_8f0 = (undefined **)((uint)local_8f0 & 0xffffff00);
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_c = CONCAT31(local_c._1_3_,1);
    local_988 = 1;
    puVar2 = (undefined4 *)FUN_00aae9af(0x114);
    local_c = 2;
    local_97c = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_0098ffc0(param_1 + 0x821);
      *puVar2 = &PTR_FUN_00e37c3c;
    }
    *local_984 = &PTR_FUN_00e38524;
    local_984[1] = 0;
    local_984[2] = 0;
    local_984[3] = 0;
    *(undefined1 *)(local_984 + 4) = 0;
    local_c = 3;
    *(undefined1 *)(local_984 + 5) = 0;
    local_984[7] = puVar2;
    local_984[0xd0] = 0xf;
    local_984[0xcf] = 0;
    *(undefined1 *)(local_984 + 0xcb) = 0;
    FUN_00408ed0(&local_8f0,0,0xffffffff);
    local_984[0xd2] = 0;
    local_984[0xd3] = 0;
    local_984[0xd4] = 0;
    *(undefined1 *)(local_984 + 0xd6) = 1;
    local_984[0xd7] = 0;
  }
  local_c = 0xffffffff;
  if (local_988 != 0) {
    if (0xf < local_8dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8f0);
    }
    local_8dc = 0xf;
    local_8e0 = (undefined **)0x0;
    local_8f0 = (undefined **)((uint)local_8f0 & 0xffffff00);
  }
  do {
    while( true ) {
      piVar6 = (int *)local_984[7];
      if ((char)piVar6[0x44] == '\0') {
        iVar3 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar3;
        if (iVar3 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = local_4bc;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if (local_4bc[0] == 0x13) {
        (**(code **)*local_984)(1);
        iVar3 = (**(code **)(*param_1 + 0x24))();
        if (1 < iVar3) {
          iVar4 = 1;
          do {
            iVar9 = *(int *)(param_1[0xaa9] + iVar4 * 4);
            if (((*(int *)(iVar9 + 0xe0) < 0) && (*(char *)(iVar9 + 0x2a) == '\0')) &&
               (cVar1 = FUN_004c3e20(), cVar1 == '\0')) {
              iVar7 = param_1[0xaac];
              param_1[0xaac] = iVar7 + 1;
              *(int *)(iVar9 + 0xe0) = iVar7;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
        }
        ExceptionList = pvStack_18;
        return;
      }
      FUN_009a1440(local_984);
      iVar3 = FUN_00aaf0c5(local_984 + 9);
      if ((iVar3 == 0) || (iVar4 = (**(code **)(*param_1 + 0x24))(), iVar4 <= iVar3)) break;
      iVar3 = *(int *)(param_1[0xaa9] + iVar3 * 4);
LAB_0049dd50:
      while( true ) {
        piVar6 = (int *)local_984[7];
        if ((char)piVar6[0x44] == '\0') {
          iVar4 = (**(code **)(*piVar6 + 4))();
          piVar6[2] = iVar4;
          if (iVar4 == 0) {
            piVar6[3] = 0x13;
          }
          *(undefined1 *)(piVar6 + 0x44) = 1;
        }
        piVar6 = piVar6 + 3;
        piVar10 = aiStack_6d0;
        for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar10 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar10 = piVar10 + 1;
        }
        if ((aiStack_6d0[0] == 4) || (aiStack_6d0[0] == 0x13)) break;
        FUN_009a1440(local_984);
        iVar4 = local_984[8];
        if (iVar4 < 0x7c1) {
          if (iVar4 == 0x7c0) {
            FUN_0049ed20(iVar3,local_984);
          }
          else if (iVar4 < 0x341) {
            if (iVar4 == 0x340) {
              uStack_91c = 0x18d;
              ppuStack_920 = CMapPoint::vftable;
              uStack_918 = 0;
              uStack_914 = 0;
              FUN_009a2a90(local_984);
              *(undefined4 *)(iVar3 + 0x54) = uStack_918;
              *(undefined4 *)(iVar3 + 0x58) = uStack_914;
            }
            else if (iVar4 == 0x2f9) {
              FUN_0049fad0(&iStack_978,local_984);
              *(int *)(iVar3 + 0x7c) = iStack_978;
              *(uint *)(iVar3 + 0x80) = uStack_974;
              iVar4 = param_1[0x84b];
              iVar9 = iStack_978;
              if (*(int *)(iVar4 + 4) + -1 < iStack_978) {
                iVar9 = *(int *)(iVar4 + 4) + -1;
              }
              uVar8 = uStack_974;
              if ((int)uStack_974 < 0) {
                uVar8 = 0;
              }
              if (*(int *)(iVar4 + 8) + -1 < (int)uVar8) {
                uVar8 = *(int *)(iVar4 + 8) - 1;
              }
              if (*(int *)(param_1[0xaa9] +
                          (uint)*(ushort *)
                                 (*(int *)(iVar4 + 0x18) * uVar8 + *(int *)(iVar4 + 0xc) * iVar9 +
                                 *(int *)(iVar4 + 0x20)) * 4) != iVar3) {
                uStack_89c = 0xf;
                uStack_8a0 = 0;
                auStack_8b0[0] = auStack_8b0[0] & 0xffffff00;
                FUN_00409350("map.cpp",7);
                local_c = 5;
                puVar2 = (undefined4 *)FUN_004c4540(iVar3);
                local_c._0_1_ = 6;
                uVar5 = FUN_004015b0(auStack_8b0,0x65c,0x10004);
                local_c._0_1_ = 7;
                local_988 = *(int *)(iVar3 + 0xb4);
                FUN_00987d50(uVar5,"Unit position outside province for #",0x24,0);
                uVar5 = FUN_00455470(uVar5,unaff_EDI,extraout_ECX,&DAT_00ded950);
                uVar5 = FUN_00418e30(uVar5);
                if (0xf < (uint)puVar2[5]) {
                  puVar2 = (undefined4 *)*puVar2;
                }
                uVar5 = FUN_00418e30(uVar5,puVar2);
                FUN_00401280(uVar5);
                local_c = CONCAT31(local_c._1_3_,6);
                FUN_00987ac0(appuStack_718);
                appuStack_718[0] = std::ios_base::vftable;
                FUN_00aad52d(appuStack_718);
                if (0xf < uStack_87c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(uStack_890);
                }
                local_c = 0xffffffff;
                uStack_87c = 0xf;
                uStack_880 = 0;
                uStack_890 = uStack_890 & 0xffffff00;
                if (0xf < uStack_89c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(auStack_8b0[0]);
                }
              }
            }
            else if (iVar4 == 0x31b) {
              uStack_93c = 0x18d;
              ppuStack_940 = CMapPoint::vftable;
              uStack_938 = 0;
              uStack_934 = 0;
              FUN_009a2a90(local_984);
              *(undefined4 *)(iVar3 + 0x1b4) = uStack_938;
              *(undefined4 *)(iVar3 + 0x1b8) = uStack_934;
            }
            else if (iVar4 == 0x31c) {
              uStack_90c = 0x18d;
              ppuStack_910 = CMapPoint::vftable;
              uStack_908 = 0;
              uStack_904 = 0;
              FUN_009a2a90(local_984);
              *(undefined4 *)(iVar3 + 0x1c4) = uStack_908;
              *(undefined4 *)(iVar3 + 0x1c8) = uStack_904;
            }
          }
          else {
            if (iVar4 != 0x460) {
              if (iVar4 != 0x461) goto code_r0x0049e0d6;
              iVar4 = FID_conflict__sscanf((char *)(local_984 + 0x8b),"%f",&uStack_970);
              if (iVar4 == 0) {
                FUN_009a1140();
              }
              *(undefined4 *)(iVar3 + 0x6c) = uStack_970;
              goto LAB_0049e10e;
            }
            uStack_8fc = 0x18d;
            ppuStack_900 = CMapPoint::vftable;
            fStack_8f8 = 0.0;
            fStack_8f4 = 0.0;
            FUN_009a2a90(local_984);
            *(float *)(iVar3 + 0x44) = fStack_8f8;
            *(float *)(iVar3 + 0x48) = fStack_8f4;
            if (*(char *)(iVar3 + 0x2a) == '\0') {
              iVar7 = (int)fStack_8f8;
              *(int *)(iVar3 + 0x7c) = iVar7;
              iVar4 = (int)fStack_8f4;
              *(int *)(iVar3 + 0x80) = iVar4;
              iVar9 = param_1[0x84b];
              if (*(int *)(iVar9 + 4) + -1 < iVar7) {
                iVar7 = *(int *)(iVar9 + 4) + -1;
              }
              if (iVar4 < 0) {
                iVar4 = 0;
              }
              if (*(int *)(iVar9 + 8) + -1 < iVar4) {
                iVar4 = *(int *)(iVar9 + 8) + -1;
              }
              if (*(int *)(param_1[0xaa9] +
                          (uint)*(ushort *)
                                 (*(int *)(iVar9 + 0x18) * iVar4 + *(int *)(iVar9 + 0xc) * iVar7 +
                                 *(int *)(iVar9 + 0x20)) * 4) != iVar3) {
                local_958 = 0xf;
                local_95c = 0;
                local_96c[0] = local_96c[0] & 0xffffff00;
                FUN_00409350("map.cpp",7);
                local_c = 8;
                puVar2 = (undefined4 *)FUN_004c4540(iVar3);
                local_c._0_1_ = 9;
                uVar5 = FUN_004015b0(local_96c,0x669,0x10004);
                local_c._0_1_ = 10;
                local_988 = *(int *)(iVar3 + 0xb4);
                FUN_00987d50(uVar5,"Unit position outside province for seazone #",0x2c,0);
                uVar5 = FUN_00455470(uVar5,unaff_EDI,extraout_ECX_00,&DAT_00ded950);
                uVar5 = FUN_00418e30(uVar5);
                if (0xf < (uint)puVar2[5]) {
                  puVar2 = (undefined4 *)*puVar2;
                }
                uVar5 = FUN_00418e30(uVar5,puVar2);
                FUN_00401280(uVar5);
                local_c = CONCAT31(local_c._1_3_,9);
                FUN_00987ac0(appuStack_7d8);
                appuStack_7d8[0] = std::ios_base::vftable;
                FUN_00aad52d(appuStack_7d8);
                if (0xf < uStack_860) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(auStack_874[0]);
                }
                local_c = 0xffffffff;
                uStack_860 = 0xf;
                uStack_864 = 0;
                auStack_874[0] = auStack_874[0] & 0xffffff00;
                if (0xf < local_958) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_96c[0]);
                }
              }
            }
          }
        }
        else if (iVar4 < 0x8ec) {
          if (iVar4 == 0x8eb) {
            FUN_004a3020(local_984,iVar3 + 0x84);
          }
          else if (iVar4 == 0x7c1) {
            FUN_0049e870(param_1,iVar3,local_984);
          }
          else if (iVar4 == 0x857) {
            FUN_0049ef70(iVar3,local_984);
          }
          else if (iVar4 == 0x864) {
            iVar4 = FID_conflict__sscanf((char *)(local_984 + 0x8b),"%f",&local_980);
            if (iVar4 == 0) {
              FUN_009a1140();
            }
            *(undefined4 **)(iVar3 + 0x1dc) = local_980;
          }
        }
        else if (iVar4 == 0x9f7) {
          uStack_92c = 0x18d;
          ppuStack_930 = CMapPoint::vftable;
          uStack_928 = 0;
          uStack_924 = 0;
          FUN_009a2a90(local_984);
          *(undefined4 *)(iVar3 + 100) = uStack_928;
          *(undefined4 *)(iVar3 + 0x68) = uStack_924;
        }
        else if (iVar4 == 0xa53) {
          FUN_004a31f0(local_984,iVar3 + 0x94);
        }
        else if (iVar4 == 0xa64) {
          uStack_94c = 0x18d;
          ppuStack_950 = CMapPoint::vftable;
          uStack_948 = 0;
          uStack_944 = 0;
          FUN_009a2a90(local_984);
          *(undefined4 *)(iVar3 + 0x1d4) = uStack_948;
          *(undefined4 *)(iVar3 + 0x1d8) = uStack_944;
        }
      }
      (**(code **)(*(int *)local_984[7] + 4))();
    }
    local_958 = 0xf;
    local_95c = 0;
    local_96c[0] = local_96c[0] & 0xffffff00;
    FUN_00409350("map.cpp",7);
    local_c = 0xb;
    uVar5 = FUN_004015b0(local_96c,0x6c1,0x10004);
    local_c = CONCAT31(local_c._1_3_,0xc);
    FUN_00987d50(uVar5,"province in positions.txt with to high number: ",0x2f,0);
    piVar6 = (int *)FUN_00455470(uVar5,iVar3);
    FUN_00408be0(piVar6);
    uVar8 = 0;
    if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) &&
       (iVar3 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))(),
       iVar3 == -1)) {
      uVar8 = 4;
    }
    if (uVar8 != 0) {
      uVar8 = *(uint *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0xc) | uVar8;
      if (*(int *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0x38) == 0) {
        uVar8 = uVar8 | 4;
      }
      FUN_00401120(uVar8,0);
    }
    uStack_28 = CONCAT31(uStack_28._1_3_,0xb);
    FUN_00987ac0(appuStack_7f4);
    appuStack_7f4[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_7f4);
    uStack_28 = 0xffffffff;
    if (0xf < uStack_974) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_988);
    }
    FUN_004c3440(auStack_3d4,0,0);
    uStack_28 = 0xd;
    while( true ) {
      piVar6 = (int *)local_984[7];
      if ((char)piVar6[0x44] == '\0') {
        iVar3 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar3;
        if (iVar3 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_5e4;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_5e4[0] == 4) || (aiStack_5e4[0] == 0x13)) break;
      FUN_009a1440(local_984);
      iVar3 = local_984[8];
      if (iVar3 < 0x465) {
        if (iVar3 == 0x464) {
LAB_0049e73c:
          iVar3 = FID_conflict__sscanf((char *)(local_984 + 0x8b),"%f",auStack_8d0);
          if (iVar3 == 0) {
            FUN_009a1140();
          }
        }
        else if (iVar3 < 0x461) {
          if (iVar3 == 0x460) {
            uStack_8ec = 0x18d;
            local_8f0 = CMapPoint::vftable;
            uStack_8e8 = 0;
            uStack_8e4 = 0;
            FUN_009a2a90(local_984);
          }
          else if (iVar3 == 0x2f9) {
            FUN_0049fad0(auStack_874,local_984);
          }
          else if (iVar3 == 0x340) {
            local_8dc = 0x18d;
            local_8e0 = CMapPoint::vftable;
            uStack_8d8 = 0;
            uStack_8d4 = 0;
            FUN_009a2a90(local_984);
          }
        }
        else if (iVar3 == 0x461) {
          iVar3 = FID_conflict__sscanf((char *)(local_984 + 0x8b),"%f",auStack_8b0);
          if (iVar3 == 0) {
            FUN_009a1140();
          }
          goto LAB_0049e73c;
        }
      }
      else if (iVar3 == 0x7c0) {
        FUN_0049ed20(auStack_3d4,local_984);
      }
      else if (iVar3 == 0x7c1) {
        FUN_0049e870(param_1,auStack_3d4,local_984);
      }
      else if (iVar3 == 0x857) {
        FUN_0049ef70(auStack_3d4,local_984);
      }
    }
    (**(code **)(*(int *)local_984[7] + 4))();
    uStack_28 = 0xffffffff;
    FUN_004c3a20(auStack_3d4);
  } while( true );
code_r0x0049e0d6:
  if (iVar4 == 0x464) {
LAB_0049e10e:
    iVar4 = FID_conflict__sscanf((char *)(local_984 + 0x8b),"%f",&local_97c);
    if (iVar4 == 0) {
      FUN_009a1140();
    }
    *(undefined4 **)(iVar3 + 0x70) = local_97c;
  }
  goto LAB_0049dd50;
}

