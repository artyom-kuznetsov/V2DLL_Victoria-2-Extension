// FUN_00a21b60 @ 00a21b60 body=[[00a21b60, 00a21bdd] [00a21be1, 00a21c69] [00a21c70, 00a21d06] [00a21d0a, 00a21dc5] [00a21dc9, 00a21e51] [00a21e55, 00a21eb3] [00a21eb7, 00a21f1d] [00a21f21, 00a21fbb] [00a21fbf, 00a22025] [00a22029, 00a2210f] [00a22118, 00a225fb] [00a225ff, 00a22628] [00a2262c, 00a2264c] [00a22669, 00a234c1] [00a234c5, 00a234ed] [00a234f1, 00a23511] [00a23515, 00a23541] [00a23545, 00a23570] [00a23574, 00a2359d]]


int * FUN_00a21b60(int *param_1,float *param_2,float *param_3,undefined4 param_4,int param_5,
                  float param_6,int *param_7,int *param_8,int param_9,char param_10)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *******pppppppuVar9;
  undefined4 *******pppppppuVar10;
  undefined4 uVar11;
  undefined4 *******pppppppuVar12;
  float *pfVar13;
  int *in_ECX;
  int iVar14;
  uint *puVar15;
  undefined4 unaff_EBX;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  float *pfVar19;
  undefined4 uVar20;
  uint uVar21;
  float *pfVar22;
  undefined4 uStack_404;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  undefined4 local_3f0;
  int *local_3ec;
  char cStack_3e5;
  int iStack_3e4;
  uint *local_3e0;
  undefined4 ******local_3dc;
  int *piStack_3d8;
  undefined4 ******ppppppuStack_3d4;
  undefined4 uStack_3d0;
  uint *local_3cc;
  uint local_3c8;
  undefined4 uStack_3c4;
  undefined4 ******local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  int local_3b0;
  undefined4 ******local_3ac;
  undefined4 uStack_3a8;
  float *pfStack_3a4;
  float fStack_3a0;
  uint local_39c;
  undefined4 ******ppppppuStack_398;
  undefined4 local_38c;
  int *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  int iStack_378;
  float fStack_374;
  int iStack_370;
  undefined4 uStack_36c;
  int iStack_368;
  float fStack_364;
  uint auStack_360 [4];
  undefined4 uStack_350;
  uint uStack_34c;
  float fStack_348;
  float fStack_344;
  undefined1 auStack_32c [24];
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined4 uStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  undefined4 uStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  undefined4 uStack_2c4;
  int aiStack_258 [96];
  void *pvStack_d8;
  undefined1 auStack_ac [12];
  char acStack_a0 [132];
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00b48eda;
  pvStack_1c = ExceptionList;
  puVar18 = (uint *)0x0;
  local_3c8 = 0xf;
  local_3cc = (uint *)0x0;
  local_3dc = (undefined4 ******)((uint)local_3dc & 0xffffff00);
  ExceptionList = &pvStack_1c;
  FUN_00408ed0(param_4,0,0xffffffff);
  puVar15 = local_3cc;
  local_14 = 0;
  if ((local_3cc == (uint *)0x0) && (param_5 == 0)) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    if (local_3c8 < 0x10) {
      ExceptionList = pvStack_1c;
      return (int *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3dc);
  }
  if (param_6 == 0.0) {
    param_6 = 4.48416e-43;
  }
  else if (param_7 != (int *)0x0) {
    param_10 = '\x01';
  }
  local_3ac = (undefined4 *******)0xf;
  local_3b0 = 0;
  local_3c0 = (undefined4 ******)((uint)local_3c0 & 0xffffff00);
  local_388 = (int *)0xf;
  local_38c = 0;
  local_39c = local_39c & 0xffffff00;
  local_14._0_1_ = 2;
  local_14._1_3_ = 0;
  local_3f0 = 0.0;
  local_3fc = 0;
  local_3f4 = 0;
  local_3ec = (int *)0x0;
  local_3f8 = 0;
  local_3e0 = local_3cc;
  cStack_3e5 = (**(code **)(*in_ECX + 0x4c))();
  if (0 < (int)puVar15) {
    do {
      pppppppuVar12 = (undefined4 *******)local_3dc;
      if (local_3c8 < 0x10) {
        pppppppuVar12 = &local_3dc;
      }
      iStack_380 = CONCAT31(iStack_380._1_3_,*(undefined1 *)((int)pppppppuVar12 + (int)puVar18));
      uStack_34c = 0xf;
      uStack_350 = 0;
      auStack_360[0] = auStack_360[0] & 0xffffff00;
      local_14._0_1_ = 3;
      FUN_00448860(1,iStack_380);
      local_14._0_1_ = 4;
      FUN_00448aa0(auStack_360,0,0xffffffff);
      local_14._0_1_ = 2;
      if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_360[0]);
      }
      if (cStack_3e5 == '\0') {
LAB_00a221c8:
        pppppppuVar12 = (undefined4 *******)local_3dc;
        if (local_3c8 < 0x10) {
          pppppppuVar12 = &local_3dc;
        }
        iVar16 = in_ECX[*(byte *)((int)pppppppuVar12 + (int)puVar18) + 0x25];
        if (iVar16 == 0) {
          pppppppuVar12 = (undefined4 *******)local_3dc;
          if (local_3c8 < 0x10) {
            pppppppuVar12 = &local_3dc;
          }
          if (*(char *)((int)pppppppuVar12 + (int)puVar18) != '\n') {
            pppppppuVar12 = (undefined4 *******)local_3dc;
            if (local_3c8 < 0x10) {
              pppppppuVar12 = &local_3dc;
            }
            if (*(char *)((int)pppppppuVar12 + (int)puVar18) != '\r') goto LAB_00a22408;
          }
          if ((uint)(local_3fc + *param_8 * 2) < (uint)param_6) {
            if ((int)local_3f0 < local_3fc) {
              local_3f0 = (float)local_3fc;
            }
            FUN_00448aa0(&local_39c,0,0xffffffff);
            FUN_00409350(&DAT_00ded94d,0);
            aiStack_258[local_3f8] = local_3fc;
            local_3f8 = local_3f8 + 1;
            if (0x36 < local_3f8) {
              puVar18 = local_3cc;
            }
            local_3f4 = 0;
          }
          else {
            FUN_00448740(&DAT_00dee2cc,1);
            FUN_00448aa0(&local_39c,0,0xffffffff);
            FUN_00409350(&DAT_00ded94d,0);
            aiStack_258[local_3f8] = local_3fc - local_3f4;
            if (0x36 < local_3f8 + 1) {
              puVar18 = local_3cc;
            }
            aiStack_258[local_3f8 + 1] = local_3f4;
            local_3f8 = local_3f8 + 2;
            if (0x36 < local_3f8) {
              puVar18 = local_3cc;
            }
          }
          local_3fc = 0;
          if ((int)local_3f0 < 0) {
            local_3f0 = 0.0;
          }
        }
        else {
          local_3f4 = local_3f4 + *(int *)(iVar16 + 0x18);
          local_3fc = local_3fc + *(int *)(iVar16 + 0x18);
          pfStack_3a4 = *(float **)(iVar16 + 0xc);
          iVar14 = (int)pfStack_3a4 + *(int *)(iVar16 + 0x14);
          if ((int)local_3ec < iVar14) {
            local_3ec = (int *)iVar14;
          }
          if (((*(int *)(iVar16 + 0x81c) != 0) && ((int)puVar18 + 1 < (int)local_3e0)) &&
             (iVar14 = 0, 0 < *(int *)(iVar16 + 0x81c))) {
            puVar15 = (uint *)(iVar16 + 0x1c);
            do {
              pppppppuVar12 = (undefined4 *******)local_3dc;
              if (local_3c8 < 0x10) {
                pppppppuVar12 = &local_3dc;
              }
              if (*puVar15 == (uint)*(byte *)((int)pppppppuVar12 + 1 + (int)puVar18)) {
                iVar16 = *(int *)(iVar16 + 0x20 + iVar14 * 8);
                local_3fc = local_3fc + iVar16;
                local_3f4 = local_3f4 + iVar16;
                break;
              }
              iVar14 = iVar14 + 1;
              puVar15 = puVar15 + 2;
            } while (iVar14 < *(int *)(iVar16 + 0x81c));
          }
          if (pfStack_3a4 == (float *)0x0) {
            if ((local_3b0 == 0) || ((uint)(local_3fc + *param_8 * 2) < (uint)param_6)) {
              FUN_00448aa0(&local_39c,0,0xffffffff);
              FUN_00409350(&DAT_00ded94d,0);
            }
            else {
              FUN_00448740(&DAT_00dee2cc,1);
              FUN_00448aa0(&local_39c,0,0xffffffff);
              FUN_00409350(&DAT_00ded94d,0);
              aiStack_258[local_3f8] = local_3fc - local_3f4;
              local_3f8 = local_3f8 + 1;
              if (0x36 < local_3f8) {
                puVar18 = local_3cc;
              }
              local_3fc = local_3f4;
            }
            local_3f4 = 0;
            if ((int)local_3f0 < local_3fc) {
              local_3f0 = (float)local_3fc;
            }
          }
        }
      }
      else {
        iVar16 = -1;
        pppppppuVar12 = (undefined4 *******)local_3dc;
        if (local_3c8 < 0x10) {
          pppppppuVar12 = &local_3dc;
        }
        if (*(char *)((int)pppppppuVar12 + (int)puVar18) == -0x59) {
          puVar18 = (uint *)((int)puVar18 + 1);
          pppppppuVar12 = (undefined4 *******)local_3dc;
          if (local_3c8 < 0x10) {
            pppppppuVar12 = &local_3dc;
          }
          fStack_374 = (float)CONCAT31(fStack_374._1_3_,
                                       *(undefined1 *)((int)pppppppuVar12 + (int)puVar18));
          uStack_34c = 0xf;
          uStack_350 = 0;
          auStack_360[0] = auStack_360[0] & 0xffffff00;
          local_14._0_1_ = 5;
          FUN_00448860(1,fStack_374);
          local_14._0_1_ = 6;
          FUN_00448aa0(auStack_360,0,0xffffffff);
          local_14._0_1_ = 2;
          if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_360[0]);
          }
          iVar16 = 0;
        }
        else {
          pppppppuVar12 = (undefined4 *******)local_3dc;
          if (local_3c8 < 0x10) {
            pppppppuVar12 = &local_3dc;
          }
          if (*(char *)((int)pppppppuVar12 + (int)puVar18) == '@') {
            pppppppuVar12 = (undefined4 *******)local_3dc;
            if (local_3c8 < 0x10) {
              pppppppuVar12 = &local_3dc;
            }
            iStack_378 = CONCAT31(iStack_378._1_3_,
                                  *(undefined1 *)((int)pppppppuVar12 + 1 + (int)puVar18));
            uVar20 = FUN_00988e80(auStack_360,iStack_378);
            local_14._0_1_ = 7;
            FUN_00448aa0(uVar20,0,0xffffffff);
            local_14._0_1_ = 2;
            if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(auStack_360[0]);
            }
            pppppppuVar12 = (undefined4 *******)local_3dc;
            if (local_3c8 < 0x10) {
              pppppppuVar12 = &local_3dc;
            }
            iStack_3e4 = CONCAT31(iStack_3e4._1_3_,
                                  *(undefined1 *)((int)pppppppuVar12 + 2 + (int)puVar18));
            uVar20 = FUN_00988e80(auStack_360,iStack_3e4);
            local_14._0_1_ = 8;
            FUN_00448aa0(uVar20,0,0xffffffff);
            local_14._0_1_ = 2;
            if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(auStack_360[0]);
            }
            puVar18 = (uint *)((int)puVar18 + 3);
            pppppppuVar12 = (undefined4 *******)local_3dc;
            if (local_3c8 < 0x10) {
              pppppppuVar12 = &local_3dc;
            }
            iStack_368 = CONCAT31(iStack_368._1_3_,
                                  *(undefined1 *)((int)pppppppuVar12 + (int)puVar18));
            uVar20 = FUN_00988e80(auStack_360,iStack_368);
            local_14._0_1_ = 9;
            FUN_00448aa0(uVar20,0,0xffffffff);
            local_14._0_1_ = 2;
            if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(auStack_360[0]);
            }
            iVar16 = (**(code **)(*in_ECX + 0x68))();
LAB_00a21f2c:
            if (iVar16 != -1) {
              local_3fc = local_3fc + iVar16;
            }
          }
          else {
            pppppppuVar12 = (undefined4 *******)local_3dc;
            if (local_3c8 < 0x10) {
              pppppppuVar12 = &local_3dc;
            }
            if (*(char *)((int)pppppppuVar12 + (int)puVar18) == '{') {
              pppppppuVar12 = (undefined4 *******)local_3dc;
              if (local_3c8 < 0x10) {
                pppppppuVar12 = &local_3dc;
              }
              iStack_370 = CONCAT31(iStack_370._1_3_,
                                    *(undefined1 *)((int)pppppppuVar12 + 1 + (int)puVar18));
              uVar20 = FUN_00988e80(auStack_360,iStack_370);
              local_14._0_1_ = 10;
              FUN_00448aa0(uVar20,0,0xffffffff);
              local_14._0_1_ = 2;
              if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(auStack_360[0]);
              }
              puVar18 = (uint *)((int)puVar18 + 2);
              pppppppuVar12 = (undefined4 *******)local_3dc;
              if (local_3c8 < 0x10) {
                pppppppuVar12 = &local_3dc;
              }
              fStack_364 = (float)CONCAT31(fStack_364._1_3_,
                                           *(undefined1 *)((int)pppppppuVar12 + (int)puVar18));
              uVar20 = FUN_00988e80(auStack_360,fStack_364);
              local_14._0_1_ = 0xb;
              FUN_00448aa0(uVar20,0,0xffffffff);
              local_14._0_1_ = 2;
              if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(auStack_360[0]);
              }
              iVar16 = 8;
              local_3fc = local_3fc + 8;
            }
            else {
              pppppppuVar12 = (undefined4 *******)local_3dc;
              if (local_3c8 < 0x10) {
                pppppppuVar12 = &local_3dc;
              }
              if (*(char *)((int)pppppppuVar12 + (int)puVar18) == -0x5d) {
                while( true ) {
                  local_14._0_1_ = 2;
                  pppppppuVar12 = (undefined4 *******)local_3dc;
                  if (local_3c8 < 0x10) {
                    pppppppuVar12 = &local_3dc;
                  }
                  cVar1 = *(char *)((int)pppppppuVar12 + 1 + (int)puVar18);
                  fStack_3a0 = (float)CONCAT31(fStack_3a0._1_3_,cVar1);
                  if (((((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) &&
                      (cVar1 != '_')) || ((int)local_3cc < (int)puVar18 + 2)) break;
                  puVar18 = (uint *)((int)puVar18 + 1);
                  uStack_34c = 0xf;
                  uStack_350 = 0;
                  auStack_360[0] = auStack_360[0] & 0xffffff00;
                  local_14._0_1_ = 0xc;
                  FUN_00448860(1,fStack_3a0);
                  local_14._0_1_ = 0xd;
                  FUN_00448aa0(auStack_360,0,0xffffffff);
                  local_14._0_1_ = 2;
                  if (0xf < uStack_34c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(auStack_360[0]);
                  }
                }
                iVar16 = (**(code **)(*in_ECX + 100))();
                local_3ec = (int *)((int)local_3ec + 3);
                goto LAB_00a21f2c;
              }
              pppppppuVar12 = (undefined4 *******)local_3dc;
              if (local_3c8 < 0x10) {
                pppppppuVar12 = &local_3dc;
              }
              if (*(char *)((int)pppppppuVar12 + (int)puVar18) == -0x5c) {
                iVar16 = 0x10;
                local_3fc = local_3fc + 0x10;
              }
            }
          }
        }
        if ((uint)param_6 <= (uint)(local_3fc + *param_8 * 2)) {
          FUN_00448740(&DAT_00dee2cc,1);
          FUN_00448aa0(&local_39c,0,0xffffffff);
          FUN_00409350(&DAT_00ded94d,0);
          aiStack_258[local_3f8] = (local_3fc - iVar16) - local_3f4;
          local_3f8 = local_3f8 + 1;
          local_3fc = iVar16 + local_3f4;
        }
        if (iVar16 == -1) goto LAB_00a221c8;
      }
LAB_00a22408:
      puVar18 = (uint *)((int)puVar18 + 1);
    } while ((int)puVar18 < (int)local_3e0);
  }
  piVar6 = param_8;
  if ((uint)(local_3fc + *param_8 * 2) < (uint)param_6) {
    FUN_00448aa0(&local_39c,0,0xffffffff);
    FUN_00409350(&DAT_00ded94d,0);
    iVar16 = local_3f8;
  }
  else {
    FUN_00448740(&DAT_00dee2cc,1);
    FUN_00448aa0(&local_39c,0,0xffffffff);
    FUN_00409350(&DAT_00ded94d,0);
    aiStack_258[local_3f8] = local_3fc - local_3f4;
    iVar16 = local_3f8 + 1;
    local_3fc = local_3f4;
  }
  pfVar13 = param_2;
  if ((int)local_3f0 < local_3fc) {
    local_3f0 = (float)local_3fc;
  }
  aiStack_258[iVar16] = local_3fc;
  fStack_3a0 = (float)((iVar16 + 1) * in_ECX[0x125]);
  if (param_10 == '\0') {
    local_3f0 = (float)((int)local_3f0 + *piVar6 * 2);
LAB_00a224d4:
    local_3ec = (int *)((int)fStack_3a0 + piVar6[1] * 2);
  }
  else {
    local_3f0 = param_6;
    local_3ec = param_7;
    if (param_7 == (int *)0x0) goto LAB_00a224d4;
  }
  fStack_314 = *param_3;
  fStack_310 = param_3[1];
  if (param_10 == '\0') {
    *param_3 = local_3f0;
LAB_00a2251b:
    param_3[1] = (float)local_3ec;
  }
  else {
    *param_3 = (float)((int)local_3f0 - *param_8);
    if (param_7 == (int *)0x0) goto LAB_00a2251b;
    param_3[1] = (float)((int)param_7 - param_8[1]);
  }
  fVar4 = 1.4013e-45;
  fVar5 = fVar4;
  if (1 < (uint)local_3f0) {
    do {
      fVar5 = 0.0;
      if (fVar4 == 0.0) break;
      fVar4 = (float)((int)fVar4 * 2);
      fVar5 = fVar4;
    } while ((uint)fVar4 < (uint)local_3f0);
  }
  *param_2 = fVar5;
  piVar6 = (int *)0x1;
  piVar7 = piVar6;
  if ((int *)0x1 < local_3ec) {
    do {
      piVar7 = (int *)0x0;
      if (piVar6 == (int *)0x0) break;
      piVar6 = (int *)((int)piVar6 * 2);
      piVar7 = piVar6;
    } while (piVar6 < local_3ec);
  }
  pfVar19 = param_2 + 1;
  *pfVar19 = (float)piVar7;
  local_3fc = *param_8;
  uStack_37c = 0;
  uStack_36c = 0;
  pfStack_3a4 = pfVar19;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x44))(param_1,0,auStack_360);
    if ((fStack_348 == *pfVar13) && (fStack_344 == *pfVar19)) {
      if (param_1 != (int *)0x0) goto LAB_00a22669;
    }
    else {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
  }
  D3DXCreateTexture(*(undefined4 *)(in_ECX[0xb] + 100),*pfVar13,*pfVar19,1,1,0x15,0,&param_1);
  if (param_1 == (int *)0x0) {
    if ((int *)0xf < local_388) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_39c);
    }
    local_388 = (int *)0xf;
    local_38c = 0;
    local_39c = local_39c & 0xffffff00;
    if (local_3ac < (undefined4 *******)0x10) {
      local_3ac = (undefined4 ******)0xf;
      local_3b0 = 0;
      local_3c0 = (undefined4 ******)((uint)local_3c0 & 0xffffff00);
      if (local_3c8 < 0x10) {
        ExceptionList = pvStack_1c;
        return (int *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3dc);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c0);
  }
LAB_00a22669:
  (**(code **)(*param_1 + 0x48))(param_1,0,&uStack_37c);
  (**(code **)(*local_388 + 0x30))(local_388,&fStack_2cc);
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x114))(*(int **)(in_ECX[0xb] + 100),0,6,1);
  piVar6 = *(int **)(in_ECX[0xb] + 100);
  pfVar22 = (float *)0x5;
  (**(code **)(*piVar6 + 0x114))(piVar6,0,5,1);
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x98))(*(int **)(in_ECX[0xb] + 100),0,&fStack_3a0);
  piVar7 = *(int **)(in_ECX[0xb] + 100);
  (**(code **)(*piVar7 + 0x9c))(piVar7,0);
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x94))(*(int **)(in_ECX[0xb] + 100),0,uStack_3c4);
  piVar3 = *(int **)(in_ECX[0xb] + 100);
  iVar16 = (**(code **)(*piVar3 + 0xa4))();
  if (-1 < iVar16) {
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xac))
              (*(int **)(in_ECX[0xb] + 100),0,0,1,&DAT_00ffff99,DAT_00f092fc,0);
    local_39c = 0;
    fStack_3a0 = 0.0;
    pfStack_3a4 = (float *)0x0;
    uStack_3a8 = 0;
    local_3b0 = 0;
    uStack_3b4 = 0;
    uStack_3b8 = 0;
    uStack_3bc = 0;
    uStack_3c4 = 0;
    local_3c8 = 0;
    local_3cc = (uint *)0x0;
    uStack_3d0 = 0;
    ppppppuStack_398 = DAT_00f092fc;
    local_3ac = DAT_00f092fc;
    local_3c0 = DAT_00f092fc;
    ppppppuStack_3d4 = DAT_00f092fc;
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xb0))
              (*(int **)(in_ECX[0xb] + 100),0x100,&ppppppuStack_3d4);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xb0))(*(int **)(in_ECX[0xb] + 100),2,&local_3e0);
    D3DXMatrixOrthoOffCenterLH
              (auStack_32c,0,(float)(int)*pfVar13,0,(float)(int)*pfVar19,0,DAT_00f092fc);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xb0))(*(int **)(in_ECX[0xb] + 100),3,auStack_32c);
    if (param_5 != 0) {
      (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x104))(*(int **)(in_ECX[0xb] + 100),0,param_5);
      (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x1b,0);
      piVar17 = *(int **)(in_ECX[0xb] + 100);
      piVar8 = (int *)FUN_00a251e0(piVar17,param_8,pfVar13,param_3,&uStack_3c4);
      (**(code **)(*piVar17 + 400))(piVar17,0,piVar8,0,0x14);
      (**(code **)(*piVar17 + 0x164))(piVar17,0x102);
      (**(code **)(*piVar17 + 0x144))(piVar17,4,0,0x12);
      pfVar19 = pfVar22;
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,1,4);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,2,2);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,3,3);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,4,2);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,5,2);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x1b,1);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x13,5);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x14,6);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
              (*(int **)(in_ECX[0xb] + 100),0x3c,in_ECX[0xe]);
    piVar17 = *(int **)(in_ECX[0xb] + 100);
    uVar21 = in_ECX[0x127];
    if ((uVar21 == 0xffffffff) || (9999 < uVar21)) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)(uVar21 * 0x2c + 0x15c + in_ECX[0xb]);
    }
    (**(code **)(*piVar17 + 0x104))(piVar17,0,uVar20);
    iStack_3e4 = local_3fc;
    local_3f8 = (int)*pfVar19 - param_8[1];
    iStack_378 = 0;
    if (param_10 != '\0') {
      if (param_9 == 2) {
        iStack_3e4 = (int)local_3f0 / 2;
        local_3fc = iStack_3e4 - aiStack_258[0] / 2;
      }
      else if ((param_9 == 0) || (param_9 == 3)) {
        local_3fc = *param_8;
        iStack_3e4 = local_3fc;
      }
      else {
        iStack_3e4 = ((int)local_3f0 - *param_8) + -1;
        local_3fc = iStack_3e4 - aiStack_258[0];
      }
      if (param_5 != 0) {
        local_3f8 = (int)*pfVar19 - ((int)local_3ec - (int)fStack_3a0) / 2;
      }
    }
    iStack_380 = local_3b0;
    local_3ec = (int *)0x0;
    if (0 < local_3b0) {
      do {
        piVar17 = local_3ec;
        iVar16 = local_3fc;
        if (cStack_3e5 == '\0') {
LAB_00a22ea5:
          pppppppuVar12 = (undefined4 *******)local_3c0;
          if (local_3ac < (undefined4 *******)0x10) {
            pppppppuVar12 = &local_3c0;
          }
          piVar8 = (int *)in_ECX[*(byte *)((int)pppppppuVar12 + (int)local_3ec) + 0x25];
          if (piVar8 == (int *)0x0) {
            pppppppuVar12 = (undefined4 *******)local_3c0;
            if (local_3ac < (undefined4 *******)0x10) {
              pppppppuVar12 = &local_3c0;
            }
            if (*(char *)((int)pppppppuVar12 + (int)local_3ec) != '\n') {
              pppppppuVar12 = (undefined4 *******)local_3c0;
              if (local_3ac < (undefined4 *******)0x10) {
                pppppppuVar12 = &local_3c0;
              }
              if (*(char *)((int)pppppppuVar12 + (int)local_3ec) != '\r') goto LAB_00a23382;
            }
            iStack_378 = iStack_378 + 1;
            if (param_10 == '\0') {
              local_3f8 = local_3f8 - in_ECX[0x125];
              local_3fc = iStack_3e4;
            }
            else if (param_9 == 2) {
              local_3fc = iStack_3e4 - aiStack_258[iStack_378] / 2;
              local_3f8 = local_3f8 - in_ECX[0x125];
            }
            else if (param_9 == 1) {
              local_3fc = iStack_3e4 - aiStack_258[iStack_378];
              local_3f8 = local_3f8 - in_ECX[0x125];
            }
            else {
              local_3f8 = local_3f8 - in_ECX[0x125];
              local_3fc = iStack_3e4;
            }
          }
          else {
            iVar14 = local_3f8 - piVar8[5];
            iStack_370 = piVar8[4] + local_3fc;
            local_3e0 = (uint *)(piVar8[4] + piVar8[2] + local_3fc);
            iVar16 = piVar8[3];
            iStack_368 = iVar14 - iVar16;
            if (iVar16 < 1) {
              local_3fc = local_3fc + piVar8[6];
            }
            else {
              fStack_364 = (float)*piVar8 / (float)in_ECX[0x128];
              fStack_3a0 = (float)(*piVar8 + piVar8[2]) / (float)in_ECX[0x128];
              fStack_374 = (float)(iVar16 + piVar8[1]) / (float)in_ECX[0x129];
              fStack_2fc = (float)piVar8[1] / (float)in_ECX[0x129];
              if ((in_ECX[0x9a6] == 0) && (in_ECX[0x9a7] == 0)) {
                if ((int *)0xf < local_388) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_39c);
                }
                local_388 = (int *)0xf;
                local_38c = 0;
                local_39c = local_39c & 0xffffff00;
                if (local_3ac < (undefined4 *******)0x10) {
                  local_3ac = (undefined4 ******)0xf;
                  local_3b0 = 0;
                  local_3c0 = (undefined4 ******)((uint)local_3c0 & 0xffffff00);
                  if (local_3c8 < 0x10) {
                    ExceptionList = pvStack_1c;
                    return (int *)0x0;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_3dc);
                }
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_3c0);
              }
              piVar17 = (int *)in_ECX[0x9a3];
              pfVar13 = (float *)0x0;
              if (piVar17 != (int *)0x0) {
                uVar20 = 0;
                if ((*(char *)((int)in_ECX + 0x26a1) != '\0') &&
                   (*(char *)((int)in_ECX + 0x26a2) == '\0')) {
                  uVar20 = 0x2000;
                }
                (**(code **)(*piVar17 + 0x2c))(piVar17,0,0,&pfStack_3a4,uVar20);
                pfVar13 = pfStack_3a4;
              }
              fStack_2d8 = (float)iStack_370 - -0.5;
              fStack_2d4 = (float)iStack_368 - -0.5;
              *(ulonglong *)pfVar13 = CONCAT44(fStack_2d4,fStack_2d8);
              fStack_2f4 = fStack_374;
              fStack_2ec = (float)iStack_368 - -0.5;
              fStack_2e4 = (float)iStack_370 - -0.5;
              fStack_2f0 = (float)(int)local_3e0 - -0.5;
              *(ulonglong *)(pfVar13 + 5) = CONCAT44(fStack_2ec,fStack_2f0);
              fStack_308 = fStack_374;
              uStack_2d0 = 0x3f800000;
              pfVar13[2] = 1.0;
              fStack_2e0 = (float)iVar14 - -0.5;
              pfVar13[3] = fStack_364;
              pfVar13[4] = fStack_374;
              uStack_2e8 = 0x3f800000;
              pfVar13[7] = 1.0;
              pfVar13[8] = fStack_3a0;
              uStack_2dc = 0x3f800000;
              *(ulonglong *)(pfVar13 + 10) = CONCAT44(fStack_2e0,fStack_2e4);
              pfVar13[9] = fStack_374;
              pfVar13[0xc] = 1.0;
              fStack_300 = fStack_2fc;
              fStack_2cc = (float)(int)local_3e0 - -0.5;
              fStack_2c8 = (float)iVar14 - -0.5;
              pfVar13[0xd] = fStack_364;
              pfVar13[0xe] = fStack_2fc;
              uStack_2c4 = 0x3f800000;
              *(ulonglong *)(pfVar13 + 0xf) = CONCAT44(fStack_2c8,fStack_2cc);
              pfVar13[0x11] = 1.0;
              fStack_310 = fStack_2fc;
              pfVar13[0x13] = fStack_2fc;
              pfVar13[0x12] = fStack_3a0;
              fStack_314 = fStack_3a0;
              fStack_30c = fStack_3a0;
              fStack_304 = fStack_364;
              fStack_2f8 = fStack_364;
              (**(code **)(*(int *)in_ECX[0x9a3] + 0x30))((int *)in_ECX[0x9a3]);
              local_3fc = local_3fc + piVar8[6];
              iVar16 = piVar8[0x207];
              if (((iVar16 != 0) && ((int)local_3ec + 1 < iStack_380)) && (iVar14 = 0, 0 < iVar16))
              {
                local_3e0 = (uint *)(piVar8 + 7);
                do {
                  pppppppuVar12 = (undefined4 *******)local_3c0;
                  if (local_3ac < (undefined4 *******)0x10) {
                    pppppppuVar12 = &local_3c0;
                  }
                  if (*local_3e0 == (uint)*(byte *)((int)pppppppuVar12 + 1 + (int)local_3ec)) {
                    local_3fc = local_3fc + piVar8[iVar14 * 2 + 8];
                    break;
                  }
                  local_3e0 = local_3e0 + 2;
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar16);
              }
              FUN_009f9d50();
              piVar17 = local_3ec;
            }
          }
        }
        else {
          pppppppuVar12 = (undefined4 *******)local_3c0;
          if (local_3ac < (undefined4 *******)0x10) {
            pppppppuVar12 = &local_3c0;
          }
          if (*(char *)((int)pppppppuVar12 + (int)local_3ec) == -0x59) {
            piVar17 = (int *)((int)local_3ec + 1);
            pppppppuVar12 = (undefined4 *******)local_3c0;
            if (local_3ac < (undefined4 *******)0x10) {
              pppppppuVar12 = &local_3c0;
            }
            cVar1 = *(char *)((int)pppppppuVar12 + (int)piVar17);
            if (cVar1 == '!') {
              local_3f4 = in_ECX[0xe];
            }
            else if ((char)in_ECX[cVar1 * 8 + 0x12a] == -0x59) {
              if ((&DAT_01327598)[cVar1 * 0x20] == -0x59) goto LAB_00a23382;
              local_3f4 = FUN_009b6df0();
            }
            else {
              local_3f4 = FUN_009b6df0();
            }
            (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                      (*(int **)(in_ECX[0xb] + 100),0x3c,local_3f4);
          }
          else {
            pppppppuVar12 = (undefined4 *******)local_3c0;
            if (local_3ac < (undefined4 *******)0x10) {
              pppppppuVar12 = &local_3c0;
            }
            if (*(char *)((int)pppppppuVar12 + (int)local_3ec) == '@') {
              pppppppuVar12 = (undefined4 *******)local_3c0;
              if (local_3ac < (undefined4 *******)0x10) {
                pppppppuVar12 = &local_3c0;
              }
              pppppppuVar9 = (undefined4 *******)local_3c0;
              if (local_3ac < (undefined4 *******)0x10) {
                pppppppuVar9 = &local_3c0;
              }
              piVar17 = (int *)((int)local_3ec + 3);
              pppppppuVar10 = (undefined4 *******)local_3c0;
              if (local_3ac < (undefined4 *******)0x10) {
                pppppppuVar10 = &local_3c0;
              }
              local_3f0 = (float)(uint)CONCAT12(*(undefined1 *)((int)pppppppuVar10 + (int)piVar17),
                                                CONCAT11(*(undefined1 *)
                                                          ((int)pppppppuVar9 + 2 + (int)local_3ec),
                                                         *(undefined1 *)
                                                          ((int)pppppppuVar12 + 1 + (int)local_3ec))
                                               );
              uVar20 = 0x3c;
              (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                        (*(int **)(in_ECX[0xb] + 100),0x3c,0xffffffff);
              (**(code **)(*in_ECX + 0x54))(&local_3fc,iVar16,uStack_404);
              uVar21 = in_ECX[0x127];
              piVar6 = *(int **)(in_ECX[0xb] + 100);
              if ((uVar21 == 0xffffffff) || (9999 < uVar21)) {
                uVar11 = 0;
              }
              else {
                uVar11 = *(undefined4 *)(uVar21 * 0x2c + 0x15c + in_ECX[0xb]);
              }
              (**(code **)(*piVar6 + 0x104))(piVar6,0,uVar11);
              (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                        (*(int **)(in_ECX[0xb] + 100),0x3c,uVar20);
              piVar6 = (int *)0xa22c49;
              local_3fc = (**(code **)(*in_ECX + 0x68))();
              local_3fc = iVar16 + local_3fc;
            }
            else {
              pppppppuVar12 = (undefined4 *******)local_3c0;
              if (local_3ac < (undefined4 *******)0x10) {
                pppppppuVar12 = &local_3c0;
              }
              if (*(char *)((int)pppppppuVar12 + (int)local_3ec) == -0x5d) {
                iVar16 = 0;
                do {
                  pppppppuVar12 = (undefined4 *******)local_3c0;
                  if (local_3ac < (undefined4 *******)0x10) {
                    pppppppuVar12 = &local_3c0;
                  }
                  cVar1 = *(char *)((int)pppppppuVar12 + 1 + (int)piVar17);
                  if (((((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) &&
                      (cVar1 != '_')) || (local_3b0 < (int)piVar17 + 2)) break;
                  acStack_a0[iVar16] = cVar1;
                  iVar16 = iVar16 + 1;
                  piVar17 = (int *)((int)piVar17 + 1);
                } while (iVar16 < 0x7f);
                iVar14 = in_ECX[0xb];
                acStack_a0[iVar16] = '\0';
                uVar20 = 0x3c;
                (**(code **)(**(int **)(iVar14 + 100) + 0xe4))
                          (*(int **)(iVar14 + 100),0x3c,0xffffffff);
                (**(code **)(*in_ECX + 0x60))(auStack_ac,unaff_EBX,uStack_404);
                uVar21 = in_ECX[0x127];
                piVar6 = *(int **)(in_ECX[0xb] + 100);
                if ((uVar21 == 0xffffffff) || (9999 < uVar21)) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = *(undefined4 *)(uVar21 * 0x2c + 0x15c + in_ECX[0xb]);
                }
                (**(code **)(*piVar6 + 0x104))(piVar6,0,uVar11);
                (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                          (*(int **)(in_ECX[0xb] + 100),0x3c,uVar20);
                piVar6 = (int *)0xa22d32;
                iVar16 = (**(code **)(*in_ECX + 100))();
                local_3fc = local_3fc + iVar16;
              }
              else {
                pppppppuVar12 = (undefined4 *******)local_3c0;
                if (local_3ac < (undefined4 *******)0x10) {
                  pppppppuVar12 = &local_3c0;
                }
                if (*(char *)((int)pppppppuVar12 + (int)local_3ec) == -0x5c) {
                  uVar20 = 0xffffffff;
                  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                            (*(int **)(in_ECX[0xb] + 100),0x3c,0xffffffff);
                  (**(code **)(*in_ECX + 0x5c))(0,iVar16,uStack_404,0,in_ECX[0x126]);
                  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                            (*(int **)(in_ECX[0xb] + 100),0x3c,uVar20);
                  uVar21 = in_ECX[0x127];
                  piVar8 = *(int **)(in_ECX[0xb] + 100);
                  if ((uVar21 == 0xffffffff) || (9999 < uVar21)) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = *(undefined4 *)(uVar21 * 0x2c + 0x15c + in_ECX[0xb]);
                  }
                  piVar6 = (int *)0x0;
                  (**(code **)(*piVar8 + 0x104))(piVar8,0,uVar20);
                  local_3fc = iVar16 + 0x10;
                }
                else {
                  pppppppuVar12 = (undefined4 *******)local_3c0;
                  if (local_3ac < (undefined4 *******)0x10) {
                    pppppppuVar12 = &local_3c0;
                  }
                  if (*(char *)((int)pppppppuVar12 + (int)local_3ec) != '{') goto LAB_00a22ea5;
                  pppppppuVar12 = (undefined4 *******)local_3c0;
                  if (local_3ac < (undefined4 *******)0x10) {
                    pppppppuVar12 = &local_3c0;
                  }
                  cVar1 = *(char *)((int)pppppppuVar12 + 1 + (int)local_3ec);
                  piVar17 = (int *)((int)local_3ec + 2);
                  pppppppuVar12 = (undefined4 *******)local_3c0;
                  if (local_3ac < (undefined4 *******)0x10) {
                    pppppppuVar12 = &local_3c0;
                  }
                  cVar2 = *(char *)((int)pppppppuVar12 + (int)piVar17);
                  uVar20 = 0xffffffff;
                  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                            (*(int **)(in_ECX[0xb] + 100),0x3c,0xffffffff);
                  (**(code **)(*in_ECX + 0x5c))
                            (3,unaff_EBX,uStack_404,(cVar1 * 5 + -0xf0) * 2 + -0x30 + (int)cVar2,
                             in_ECX[0x126]);
                  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))
                            (*(int **)(in_ECX[0xb] + 100),0x3c,uVar20);
                  uVar21 = in_ECX[0x127];
                  piVar8 = *(int **)(in_ECX[0xb] + 100);
                  if ((uVar21 == 0xffffffff) || (9999 < uVar21)) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = *(undefined4 *)(uVar21 * 0x2c + 0x15c + in_ECX[0xb]);
                  }
                  piVar6 = (int *)0x0;
                  (**(code **)(*piVar8 + 0x104))(piVar8,0,uVar20);
                  local_3fc = local_3fc + 8;
                }
              }
            }
          }
        }
LAB_00a23382:
        local_3ec = (int *)((int)piVar17 + 1);
      } while ((int)local_3ec < iStack_380);
    }
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x104))(*(int **)(in_ECX[0xb] + 100),0,0);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x13,5);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x14,6);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xa8))(*(int **)(in_ECX[0xb] + 100));
  }
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x94))(*(int **)(in_ECX[0xb] + 100),0,uStack_3c4);
  piVar17 = *(int **)(in_ECX[0xb] + 100);
  (**(code **)(*piVar17 + 0x9c))(piVar17,*(undefined4 *)(in_ECX[0xb] + 0x14));
  (**(code **)(*piStack_3d8 + 8))(piStack_3d8);
  if (local_3ec != (int *)0x0) {
    (**(code **)(*local_3ec + 8))(local_3ec);
  }
  uVar21 = 2;
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x114))(*(int **)(in_ECX[0xb] + 100),0,6);
  uVar20 = 5;
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x114))(*(int **)(in_ECX[0xb] + 100),0,5,2);
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,3,1);
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,4,4);
  (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x3c,0xffffffff);
  if ((int *)0xf < piVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar7);
  }
  if ((int *)0xf < piVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar17);
  }
  if (0xf < uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar20);
  }
  ExceptionList = pvStack_d8;
  return param_1;
}

