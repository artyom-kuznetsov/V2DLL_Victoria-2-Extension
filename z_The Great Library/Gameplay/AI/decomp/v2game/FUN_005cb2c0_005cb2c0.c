// FUN_005cb2c0 @ 005cb2c0 body=[[005cb2c0, 005cb3e4] [005cb3e8, 005cb416] [005cb41a, 005cb446] [005cb44a, 005cb47e] [005cb482, 005cb55c] [005cb560, 005cb5cb] [005cb5cf, 005cbc57]]


/* WARNING: Type propagation algorithm not settling */

void FUN_005cb2c0(float param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int *in_ECX;
  undefined4 *******pppppppuVar9;
  uint uVar10;
  bool bVar11;
  char cStack_1b1;
  undefined8 uStack_1ac;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float afStack_190 [2];
  undefined4 *******apppppppuStack_188 [4];
  undefined4 uStack_178;
  uint uStack_174;
  uint local_164 [4];
  undefined4 local_154;
  uint local_150;
  uint local_148 [4];
  undefined4 local_138;
  uint local_134;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_110;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f4 [4];
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9ea68;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((*(char *)(DAT_012588e8 + 0xd11) != '\0') &&
     (ExceptionList = &pvStack_14, param_1 != (float)in_ECX[0x37])) {
    local_134 = 0xf;
    local_138 = 0;
    local_148[0] = local_148[0] & 0xffffff00;
    ExceptionList = &pvStack_14;
    FUN_00409350(&DAT_00ded94d,0);
    local_c = 0;
    local_118 = 0xf;
    local_11c = 0;
    local_12c[0] = local_12c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_c._0_1_ = 1;
    piVar6 = *(int **)(DAT_012588e8 + 0xb24);
    uVar4 = FUN_009888f0(local_f4);
    local_c._0_1_ = 2;
    uVar4 = FUN_00988fa0(uVar4);
    local_c = CONCAT31(local_c._1_3_,3);
    (**(code **)(*piVar6 + 0x120))(uVar4,local_12c,local_148,0);
    if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110);
    }
    uStack_fc = 0xf;
    uStack_100 = 0;
    local_110 = local_110 & 0xffffff00;
    if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_12c[0]);
    }
    local_c = 0xffffffff;
    local_118 = 0xf;
    local_11c = 0;
    local_12c[0] = local_12c[0] & 0xffffff00;
    if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_148[0]);
    }
    local_134 = 0xf;
    local_138 = 0;
    local_148[0] = local_148[0] & 0xffffff00;
  }
  local_c = 0xffffffff;
  if ((param_1 != 0.0) && (*(int *)((int)param_1 + 0x58) == 0)) {
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = local_164[0] & 0xffffff00;
    FUN_00409350("unit.cpp",8);
    local_c = 4;
    uVar4 = (**(code **)(*in_ECX + 0x20))(" is located in illegal province 0!");
    uStack_174 = 0xf;
    uStack_178 = 0;
    apppppppuStack_188[0] = (undefined4 *******)((uint)apppppppuStack_188[0] & 0xffffff00);
    FUN_00408ed0(uVar4,0,0xffffffff);
    local_c._0_1_ = 5;
    uVar4 = FUN_004015b0(local_164,0x752,0x10004);
    local_c._0_1_ = 8;
    pppppppuVar9 = apppppppuStack_188[0];
    if (uStack_174 < 0x10) {
      pppppppuVar9 = apppppppuStack_188;
    }
    uVar4 = FUN_00418e30(uVar4,pppppppuVar9);
    local_c._0_1_ = 7;
    if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(apppppppuStack_188[0]);
    }
    uStack_174 = 0xf;
    uStack_178 = 0;
    apppppppuStack_188[0] = (undefined4 *******)((uint)apppppppuStack_188[0] & 0xffffff00);
    uVar4 = FUN_00418e30(uVar4);
    FUN_00401280(uVar4);
    local_c = CONCAT31(local_c._1_3_,4);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    local_c = 0xffffffff;
    if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_164[0]);
    }
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = local_164[0] & 0xffffff00;
  }
  local_c = 0xffffffff;
  fStack_1a0 = (float)in_ECX[0x37];
  bVar11 = param_1 == fStack_1a0;
  if (fStack_1a0 != 0.0) {
    if (in_ECX[0x42] != 0) {
      if ((int *)in_ECX[0x43] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[0x43] + 0x80))();
      }
      if (((char)in_ECX[1] != '\0') && ((int *)in_ECX[0x44] != (int *)0x0)) {
        (**(code **)(*(int *)in_ECX[0x44] + 0x80))();
      }
    }
    FUN_004b7420(in_ECX,bVar11);
    FUN_004c8290(*(undefined4 *)(in_ECX[0x37] + 0x5c),in_ECX);
    if (((in_ECX[0x42] != 0) &&
        (cVar2 = (**(code **)(*in_ECX + 0x3c))(), uVar4 = DAT_012588dc, cVar2 != '\0')) &&
       (*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) != '\0')) {
      iVar8 = *(int *)(in_ECX[0x37] + 0x58);
      iVar5 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
      FUN_00643ce0(*(undefined4 *)(*(int *)(iVar5 + 0x20d8) + iVar8 * 4),in_ECX[0x37],uVar4);
    }
  }
  if ((in_ECX[0x31] == *(int *)(DAT_012588e8 + 0xb60)) ||
     (afStack_190[0] = (float)in_ECX[0x30],
     *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4) + 0xbe8) +
                      *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x20) != 0)) {
    uVar10 = 2;
  }
  else {
    if (DAT_00f092fb == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(*(int *)((int)param_1 + 0x5c) + 0x360) < 1;
    }
    uVar10 = bVar1 - 1 & 2;
  }
  if ((uVar10 != in_ECX[99]) ||
     ((in_ECX[0x37] != 0 &&
      (*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) !=
       *(char *)(*(int *)((int)param_1 + 0x5c) + 0x2a))))) {
    in_ECX[99] = uVar10;
    *(undefined1 *)(in_ECX + 0x2f) = 1;
  }
  if (((float)in_ECX[0x37] != param_1) && (*(int *)((int)param_1 + 0x58) != 0)) {
    if ((in_ECX[0x42] != 0) && (cVar2 = FUN_0068bff0(), cVar2 != '\0')) {
      FUN_00648040(*(undefined4 *)((int)param_1 + 0x58));
    }
    FUN_0068c550(*(undefined4 *)((int)param_1 + 0x58));
  }
  in_ECX[0x37] = (int)param_1;
  FUN_004b6fa0(in_ECX,bVar11);
  if ((fStack_1a0 == 0.0) || ((float)in_ECX[0x37] == fStack_1a0)) {
    iVar8 = in_ECX[0x37];
  }
  else {
    FUN_004b7be0(fStack_1a0);
    iVar8 = in_ECX[0x37];
  }
  FUN_004b7be0(iVar8);
  if ((in_ECX[0x42] == 0) || (in_ECX[0x43] == 0)) goto LAB_005cbb35;
  if (*(int *)(in_ECX[0x37] + 0x58) == 0) {
    ExceptionList = pvStack_14;
    return;
  }
  FUN_004c7310(*(undefined4 *)(in_ECX[0x37] + 0x5c),in_ECX);
  iVar8 = *(int *)((int)param_1 + 0x5c);
  piVar6 = (int *)(**(code **)(*in_ECX + 0x70))(afStack_190,param_1);
  fStack_1a4 = (float)(*piVar6 - *(int *)(iVar8 + 0x74));
  uStack_1ac = CONCAT44(fStack_1a4,(float)uStack_1ac);
  fStack_1a0 = DAT_00f17898;
  fStack_19c = (float)(piVar6[1] - *(int *)(iVar8 + 0x78));
  fStack_198 = fStack_19c;
  cVar2 = (**(code **)(*in_ECX + 0x3c))();
  if ((cVar2 == '\0') || (*(char *)(*(int *)((int)param_1 + 0x5c) + 0x2a) == '\0')) {
    cVar2 = (**(code **)(*in_ECX + 0x38))();
    if ((cVar2 == '\0') ||
       ((*(char *)(*(int *)((int)param_1 + 0x5c) + 0x2a) != '\0' || (0 < in_ECX[0x3b])))) {
      cVar2 = (**(code **)(*in_ECX + 0x38))();
      if ((cVar2 != '\0') && (iVar8 = (**(code **)(*in_ECX + 0x2c))(), *(int *)(iVar8 + 0x1b4) != 0)
         ) {
        iVar8 = (**(code **)(*in_ECX + 0x2c))();
        (**(code **)(**(int **)(iVar8 + 0x1b4) + 0x70))(&uStack_1ac,param_1);
        fStack_19c = fStack_1a0;
        fStack_198 = afStack_190[0];
      }
    }
    else {
      (**(code **)(*(int *)in_ECX[0x43] + 0x38))();
    }
LAB_005cb931:
    if (in_ECX[0x42] != 0) {
      FUN_007e8c90(*(undefined4 *)(in_ECX[0x37] + 0x58));
      cVar2 = (**(code **)(*in_ECX + 0x40))();
      iVar8 = *(int *)(in_ECX[0x37] + 0x5c);
      if (cVar2 == '\0') {
        if (in_ECX[0x3b] < 1) {
          uStack_1ac = *(undefined8 *)(iVar8 + 0x100);
          fStack_1a4 = *(float *)(iVar8 + 0x108);
        }
        else {
          uStack_1ac = *(undefined8 *)(iVar8 + 0x10c);
          fStack_1a4 = *(float *)(iVar8 + 0x114);
        }
      }
      else {
        uStack_1ac = *(undefined8 *)(iVar8 + 0x130);
        fStack_1a4 = *(float *)(iVar8 + 0x138);
      }
      (**(code **)(*(int *)in_ECX[0x43] + 0x168))(&uStack_1ac);
    }
  }
  else {
    cStack_1b1 = '\x01';
    if (in_ECX[0x42] == 0) goto LAB_005cb931;
    (**(code **)(*(int *)in_ECX[0x43] + 0x168))(&fStack_19c);
    FUN_007e8c90(*(undefined4 *)(in_ECX[0x37] + 0x58));
    uVar4 = DAT_012588dc;
    iVar8 = *(int *)(in_ECX[0x37] + 0x58);
    iVar5 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
    FUN_00643ce0(*(undefined4 *)(*(int *)(iVar5 + 0x20d8) + iVar8 * 4),in_ECX[0x37],uVar4);
    (**(code **)(*(int *)in_ECX[0x43] + 0x38))();
  }
  if (((char)in_ECX[1] != '\0') && (iVar8 = in_ECX[0x44], iVar8 != 0)) {
    uVar4 = 0;
    (**(code **)(*(int *)in_ECX[0x42] + 0x38))(iVar8,0);
    FUN_00644b40(iVar8,uVar4);
    iVar8 = *(int *)(in_ECX[0x37] + 0x58);
    iVar5 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
    *(undefined4 *)(in_ECX[0x44] + 0x13c) =
         *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x20d8) + iVar8 * 4) + 0x10);
    piVar6 = (int *)in_ECX[0x44];
    if (cStack_1b1 == '\0') {
      cVar2 = (**(code **)(*piVar6 + 0x3c))();
      if (cVar2 == '\0') {
        (**(code **)(*(int *)in_ECX[0x44] + 0x34))();
      }
      cVar2 = (**(code **)(*in_ECX + 0x40))();
      iVar8 = *(int *)(in_ECX[0x37] + 0x5c);
      if (cVar2 == '\0') {
        if (in_ECX[0x3b] < 1) {
          uStack_1ac = *(undefined8 *)(iVar8 + 0x100);
          fStack_1a4 = *(float *)(iVar8 + 0x108);
        }
        else {
          uStack_1ac = *(undefined8 *)(iVar8 + 0x10c);
          fStack_1a4 = *(float *)(iVar8 + 0x114);
        }
      }
      else {
        uStack_1ac = *(undefined8 *)(iVar8 + 0x130);
        fStack_1a4 = *(float *)(iVar8 + 0x138);
      }
      piVar6 = (int *)in_ECX[0x44];
      pfVar7 = (float *)&uStack_1ac;
    }
    else {
      pfVar7 = &fStack_19c;
    }
    (**(code **)(*piVar6 + 0x168))(pfVar7);
  }
LAB_005cbb35:
  cVar2 = (**(code **)(*in_ECX + 0x3c))();
  if ((cVar2 != '\0') && (!bVar11)) {
    iVar8 = (**(code **)(*in_ECX + 0x30))();
    piVar6 = *(int **)(iVar8 + 0x1a4);
    while (piVar6 != (int *)0x0) {
      iVar8 = *piVar6;
      piVar6 = (int *)piVar6[2];
      if (*(int *)(iVar8 + 0x74) != 0) {
        FUN_005a9640();
      }
      *(undefined4 *)(iVar8 + 0x74) = 0;
      if ((*(char *)(*(int *)((int)param_1 + 0x5c) + 0x2a) == '\0') || (0 < in_ECX[0x3b])) {
        FUN_005cb2c0(param_1);
      }
      else {
        FUN_005cb2c0(param_1);
        uVar4 = (**(code **)(*in_ECX + 0x30))();
        FUN_005d78d0(uVar4);
        FUN_005b57a0(DAT_012588e8 + 0xab4);
      }
    }
  }
  if (in_ECX[0x1d] == 0) {
    if (((char)in_ECX[1] != '\0') && (0 < in_ECX[0x3b])) {
      FUN_005d4540(in_ECX,in_ECX + 0x4c);
      in_ECX[0x50] = 0;
    }
    ExceptionList = pvStack_14;
    return;
  }
  uVar3 = FUN_005cf260();
  FUN_005d0fe0(uVar3);
  ExceptionList = pvStack_14;
  return;
}

