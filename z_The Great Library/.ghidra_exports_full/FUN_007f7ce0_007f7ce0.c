// FUN_007f7ce0 @ 007f7ce0 body=[[007f7ce0, 007f86a7] [007f86b0, 007f885a] [007f8860, 007f8a73] [007f8a77, 007f8a8f]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f7ce0(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  void *pvVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 *puVar16;
  float fVar17;
  int iVar18;
  void *pvVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined8 local_98;
  float local_90;
  float local_8c;
  undefined4 uStack_88;
  float local_84;
  float local_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  float local_6c;
  float local_68;
  void *local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  int *local_54;
  int *local_50;
  undefined4 local_4c;
  int local_44;
  float local_40;
  undefined4 uStack_3c;
  void *local_38;
  float local_34;
  undefined1 *local_30;
  int local_2c;
  char local_26;
  char local_25;
  float local_24;
  void *local_20;
  int local_1c;
  void *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  iVar6 = param_2;
  iVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b94373;
  local_10 = ExceptionList;
  if ((DAT_013f322c & 1) == 0) {
    DAT_013f322c = DAT_013f322c | 1;
    _DAT_013f1994 = 0;
    DAT_013f199c = (void *)0x0;
  }
  ExceptionList = &local_10;
  if ((DAT_013f322c & 2) == 0) {
    DAT_013f322c = DAT_013f322c | 2;
    DAT_013f321c = (int *)0x0;
    DAT_013f3220 = (int *)0x0;
    _DAT_013f3224 = 0;
    ExceptionList = &local_10;
    _atexit((_func_4879 *)&LAB_00c83d80);
  }
  local_68 = *(float *)(iVar6 + 0x33c);
  local_64 = *(void **)(iVar6 + 0x340);
  uStack_3c = 0;
  local_54 = (int *)0x0;
  local_50 = (int *)0x0;
  local_4c = 0;
  local_8 = 0;
  local_26 = *(char *)(iVar6 + 0x360);
  *(undefined1 *)(iVar6 + 0x360) = 0;
  bVar3 = false;
  local_40 = local_68;
  local_38 = local_64;
  if ((((DAT_013f1994 != local_68) || (DAT_013f1998 != 0.0)) ||
      ((float)DAT_013f199c != (float)local_64)) ||
     (*(float *)(param_1 + 0x1598) != *(float *)(iVar6 + 0x348))) {
    bVar3 = true;
    FUN_009ebf80();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_30 = *(undefined1 **)(*(int *)(param_1 + 0x40) + 0x2abc);
    local_44 = (int)local_30 / 2;
    DAT_012589c0 = 0;
    local_1c = 0;
    piVar8 = (int *)0x0;
    if (0 < *(int *)(param_1 + 400) * *(int *)(param_1 + 0x18c)) {
      local_5c = 0;
      local_34 = (float)local_44;
      uStack_70 = 0xc1200000;
      uStack_7c = 0x42480000;
      do {
        local_18 = (void *)(local_1c * 0x3c0);
        local_25 = *(char *)((int)local_18 + *(int *)(param_1 + 0x19c) + 0x138);
        *(undefined1 *)((int)local_18 + *(int *)(param_1 + 0x19c) + 0x138) = 0;
        local_2c = *(int *)(param_1 + 0x194) / 2;
        iVar12 = *(int *)(param_1 + 0x194) * (local_1c % *(int *)(param_1 + 0x18c)) + local_2c;
        iVar6 = *(int *)(param_1 + 0x198) / 2;
        iVar18 = *(int *)(param_1 + 0x198) * (local_1c / *(int *)(param_1 + 0x18c)) + iVar6;
        local_60 = (float)iVar12 - local_68;
        local_58 = (float)iVar18 - (float)local_64;
        if (local_60 <= local_34) {
          puVar16 = (undefined1 *)0x0;
          if (local_60 < (float)-local_44) {
            puVar16 = local_30;
          }
        }
        else {
          puVar16 = (undefined1 *)-(int)local_30;
        }
        pvVar19 = (void *)((int)local_18 + *(int *)(param_1 + 0x19c));
        iVar20 = iVar12 - local_2c;
        local_2c = local_2c + iVar12;
        iVar12 = iVar18 - iVar6;
        local_20 = (void *)(iVar6 + iVar18);
        iVar6 = *(int *)((int)pvVar19 + 0x3ac);
        local_60 = (float)(int)puVar16 + local_60;
        pvVar7 = local_20;
        if ((iVar6 != 0) || (*(int *)((int)pvVar19 + 0x3a8) != 0)) {
          iVar18 = *(int *)((int)pvVar19 + 0x3a0);
          if (iVar18 < iVar20) {
            iVar20 = iVar18;
          }
          if (local_2c < *(int *)((int)pvVar19 + 0x3a8) + iVar18) {
            local_2c = *(int *)((int)pvVar19 + 0x3a8) + *(int *)((int)pvVar19 + 0x3a0);
          }
          iVar18 = *(int *)((int)pvVar19 + 0x3a4);
          if (iVar18 < iVar12) {
            iVar12 = iVar18;
          }
          if ((int)local_20 < iVar6 + iVar18) {
            pvVar7 = (void *)(*(int *)((int)pvVar19 + 0x3a4) + iVar6);
          }
        }
        local_74 = (float)(int)((float)iVar20 + ((float)(int)puVar16 - local_68));
        local_90 = (float)(int)((float)iVar12 - (float)local_64);
        local_98 = CONCAT44(uStack_70,local_74);
        local_8c = (float)(int)((float)local_2c + ((float)(int)puVar16 - local_68));
        local_84 = (float)(int)((float)(int)pvVar7 - (float)local_64);
        uStack_88 = uStack_7c;
        local_80 = local_8c;
        local_78 = local_84;
        local_6c = local_90;
        local_14 = pvVar19;
        iVar6 = FUN_009ec900(&local_98);
        if (iVar6 != 1) {
          *(undefined1 *)((int)pvVar19 + 0x138) = 1;
        }
        if (*(char *)((int)local_18 + *(int *)(param_1 + 0x19c) + 0x138) != '\0') {
          FUN_004e9b90();
        }
        iVar6 = local_1c * 0x3c0;
        piVar8 = (int *)(iVar6 + *(int *)(param_1 + 0x19c));
        pvVar7 = (void *)(piVar8[1] - *piVar8 >> 2);
        if ((pvVar7 != (void *)0x0) && (piVar8 = (int *)*piVar8, 0 < (int)pvVar7)) {
          do {
            local_18 = pvVar7;
            (**(code **)(**(int **)(*piVar8 + 0x10) + 0x144))
                      (*(undefined1 *)(iVar6 + 0x138 + *(int *)(param_1 + 0x19c)));
            iVar12 = *piVar8;
            piVar8 = piVar8 + 1;
            local_18 = (void *)((int)local_18 + -1);
            *(bool *)(*(int *)(iVar12 + 0x10) + 0xf1) = 0 < *(int *)(*(int *)(iVar12 + 0xc) + 0x394)
            ;
            pvVar7 = local_18;
          } while (local_18 != (void *)0x0);
        }
        D3DXMatrixTranslation(iVar6 + 0x17c + *(int *)(param_1 + 0x19c),local_60,local_5c,local_58);
        iVar12 = iVar6 + *(int *)(param_1 + 0x19c);
        D3DXMatrixInverse(iVar12 + 0x1bc,0,iVar12 + 0x17c);
        cVar5 = *(char *)(iVar6 + 0x138 + *(int *)(param_1 + 0x19c));
        if ((local_25 != cVar5) && (cVar5 == '\0')) {
          local_18 = *(void **)(iVar6 + *(int *)(param_1 + 0x19c) + 0x130);
          local_14 = (void *)0x0;
          if (local_18 != (void *)0x0) {
            do {
              local_20 = (void *)(iVar6 + 0x120 + *(int *)(param_1 + 0x19c));
              pvVar7 = local_14;
              FUN_0099e240(local_14);
              piVar8 = (int *)FUN_00868600(pvVar7);
              iVar12 = 0;
              if ((int *)*piVar8 != (int *)0x0) {
                iVar12 = *(int *)*piVar8;
              }
              uVar9 = piVar8[2];
              if (*(uint *)(iVar12 + 8) <= uVar9) {
                uVar9 = uVar9 - *(uint *)(iVar12 + 8);
              }
              if (-1 < *(int *)(*(int *)(*(int *)(iVar12 + 4) + uVar9 * 4) + 0x48)) {
                pvVar7 = local_14;
                FUN_0099e240(local_14);
                piVar8 = (int *)FUN_00868600(pvVar7);
                iVar12 = 0;
                if ((int *)*piVar8 != (int *)0x0) {
                  iVar12 = *(int *)*piVar8;
                }
                uVar9 = piVar8[2];
                if (*(uint *)(iVar12 + 8) <= uVar9) {
                  uVar9 = uVar9 - *(uint *)(iVar12 + 8);
                }
                *(undefined1 *)
                 (param_1 + 700 + *(int *)(*(int *)(*(int *)(iVar12 + 4) + uVar9 * 4) + 0x48) * 0x10
                 ) = 0;
                pvVar7 = local_14;
                FUN_0099e240(local_14);
                piVar8 = (int *)FUN_00868600(pvVar7);
                iVar12 = 0;
                if ((int *)*piVar8 != (int *)0x0) {
                  iVar12 = *(int *)*piVar8;
                }
                uVar9 = piVar8[2];
                if (*(uint *)(iVar12 + 8) <= uVar9) {
                  uVar9 = uVar9 - *(uint *)(iVar12 + 8);
                }
                *(undefined4 *)(*(int *)(*(int *)(iVar12 + 4) + uVar9 * 4) + 0x48) = 0xffffffff;
              }
              local_14 = (void *)((int)local_14 + 1);
            } while (local_14 < local_18);
          }
        }
        local_1c = local_1c + 1;
        piVar8 = local_50;
      } while (local_1c < *(int *)(param_1 + 400) * *(int *)(param_1 + 0x18c));
    }
    piVar11 = local_54;
    FUN_00804cf0(local_54,piVar8,(int)piVar8 - (int)local_54 >> 2);
    piVar2 = piVar11;
    if (piVar11 != piVar8) {
      do {
        piVar13 = piVar2;
        piVar2 = piVar13 + 1;
        if (piVar2 == piVar8) goto LAB_007f835d;
      } while (*piVar13 != *piVar2);
      while (piVar2 = piVar2 + 1, piVar2 != piVar8) {
        if (*piVar13 != *piVar2) {
          piVar13 = piVar13 + 1;
          *piVar13 = *piVar2;
        }
      }
      piVar13 = piVar13 + 1;
      piVar11 = local_54;
      if (piVar13 != piVar8) {
        FID_conflict__memcpy(piVar13,piVar8,0);
        piVar11 = local_54;
        piVar8 = piVar13;
        local_50 = piVar13;
      }
    }
LAB_007f835d:
    pvVar7 = (void *)((int)piVar8 - (int)piVar11 >> 2);
    local_20 = pvVar7;
    if ((void *)((int)DAT_013f3220 - (int)DAT_013f321c >> 2) == pvVar7) {
      if (DAT_013f321c != DAT_013f3220) {
        piVar8 = DAT_013f321c;
        do {
          if (*piVar8 != *(int *)((int)piVar8 + ((int)piVar11 - (int)DAT_013f321c)))
          goto LAB_007f8391;
          piVar8 = piVar8 + 1;
        } while (piVar8 != DAT_013f3220);
      }
    }
    else {
LAB_007f8391:
      FUN_009beeb0(&local_54);
    }
    pvVar19 = *(void **)(param_1 + 0x84);
    iVar6 = *(int *)(param_1 + 0x80);
    piVar8 = (int *)(param_1 + 0x80);
    pvVar10 = (void *)((int)pvVar19 - iVar6 >> 2);
    if (pvVar7 < pvVar10) {
      local_18 = (void *)(iVar6 + (int)pvVar7 * 4);
      if (local_18 != pvVar19) {
        local_20 = (void *)0x0;
        FID_conflict__memcpy(local_18,pvVar19,0);
        *(int *)(param_1 + 0x84) = (int)local_18 + (int)local_20;
      }
    }
    else if (pvVar10 < pvVar7) {
      local_14 = pvVar10;
      if ((void *)(0x3fffffff - ((int)pvVar7 - (int)pvVar10)) < pvVar10) {
LAB_007f840d:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      local_14 = (void *)((int)pvVar10 + ((int)pvVar7 - (int)pvVar10));
      pvVar19 = (void *)(*(int *)(param_1 + 0x88) - iVar6 >> 2);
      if (pvVar19 < local_14) {
        if ((void *)(0x3fffffff - ((uint)pvVar19 >> 1)) < pvVar19) {
          pvVar19 = (void *)0x0;
        }
        else {
          pvVar19 = (void *)((int)pvVar19 + ((uint)pvVar19 >> 1));
        }
        if (pvVar19 < local_14) {
          pvVar19 = local_14;
        }
        FUN_004bf300(pvVar19);
      }
      puVar21 = *(undefined4 **)(param_1 + 0x84);
      iVar6 = (int)pvVar7 - ((int)puVar21 - *piVar8 >> 2);
      if (iVar6 != 0) {
        for (; pvVar7 = local_20, iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar21 = 0;
          puVar21 = puVar21 + 1;
        }
      }
      *(int *)(param_1 + 0x84) =
           *(int *)(param_1 + 0x84) + ((int)pvVar7 - (*(int *)(param_1 + 0x84) - *piVar8 >> 2)) * 4;
    }
    iVar6 = param_3;
    iVar12 = 0;
    if (0 < (int)pvVar7) {
      do {
        *(int *)(*piVar8 + iVar12 * 4) = local_54[iVar12];
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)pvVar7);
    }
    param_3 = (**(code **)(*(int *)(param_3 + 0x1c) + 0x16c))();
    local_20 = (void *)(**(code **)(*(int *)(iVar6 + 0x1c) + 0x174))();
    local_1c = 0;
    if (0 < (int)(*(int *)(param_1 + 0x84) - *piVar8 & 0xfffffffcU)) {
      do {
        iVar12 = *(int *)(*piVar8 + local_1c * 4) * 0x3c0 + *(int *)(param_1 + 0x19c);
        DAT_012589c0 = DAT_012589c0 + 1;
        iVar6 = iVar12 + 0x1fc;
        D3DXMatrixMultiply(iVar6,iVar12 + 0x17c,param_3);
        D3DXMatrixMultiply(iVar6,iVar6,local_20);
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0x84) - *piVar8 >> 2);
    }
    local_8 = local_8 & 0xffffff00;
  }
  if (*(int *)(param_1 + 0x1580) != 0) {
    FUN_007d6970(*(undefined4 *)(param_1 + 0x158c));
  }
  iVar6 = *(int *)(param_1 + 0x158c);
  if (*(char *)(iVar6 + 0x3c) != '\0') {
    piVar8 = (int *)(iVar6 + 0x40);
    *piVar8 = *piVar8 + -1;
    if (-1 < *piVar8) {
      FUN_00819830();
      *(undefined1 *)(iVar6 + 0x3c) = 0;
      *(undefined4 *)(iVar6 + 0x40) = 1;
    }
  }
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_01258a8c + 0x14))();
  if (local_26 != '\0') {
    FUN_007f1be0(param_1);
  }
  FUN_007f2180();
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_01258a8c + 0x14))();
  _DAT_013f1994 = CONCAT44(uStack_3c,local_40);
  DAT_013f199c = local_38;
  *(undefined4 *)(param_1 + 0x1598) = *(undefined4 *)(param_2 + 0x348);
  local_18 = (void *)CONCAT31(local_18._1_3_,1);
  if (*(float *)(param_2 + 0x348) < 100.0) {
    local_18 = (void *)((uint)local_18._1_3_ << 8);
  }
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_01258a8c + 0x14))();
  local_30 = &stack0xffffff04;
  _memset(&stack0xffffff04,0,*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2);
  local_34 = (float)(*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2);
  param_3 = 0;
  if (0 < (int)local_34) {
    do {
      piVar8 = (int *)(*(int *)(*(int *)(param_1 + 0x80) + param_3 * 4) * 0x3c0 +
                      *(int *)(param_1 + 0x19c));
      iVar6 = 0;
      local_20 = (void *)(piVar8[1] - *piVar8 >> 2);
      if (0 < (int)local_20) {
        do {
          iVar12 = *(int *)(*piVar8 + iVar6 * 4);
          local_30[*(int *)(*(int *)(iVar12 + 8) + 0xb4)] = 1;
          FUN_00642490(iVar12,param_2,*(undefined4 *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x157c),local_18);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)local_20);
      }
      param_3 = param_3 + 1;
    } while (param_3 < (int)local_34);
  }
  iVar6 = 1;
  iVar12 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  if (1 < iVar12) {
    do {
      if (local_30[iVar6] == '\0') {
        FUN_00642340(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 * 4));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar12);
  }
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_01258a8c + 0x14))();
  if ((bVar3) || ((char)*param_4 != '\0')) {
    FUN_00645770();
    pvVar7 = *(void **)(param_1 + 0x1930);
    if (pvVar7 != *(void **)(param_1 + 0x1934)) {
      FID_conflict__memcpy(pvVar7,*(void **)(param_1 + 0x1934),0);
      *(void **)(param_1 + 0x1934) = pvVar7;
    }
    local_40 = *(float *)(param_2 + 0x33c);
    local_38 = *(void **)(param_2 + 0x340);
    fVar17 = (float)(*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2);
    uStack_3c = 0;
    param_3 = 0;
    local_34 = fVar17;
    local_24 = local_40;
    local_20 = local_38;
    if (0 < (int)fVar17) {
      do {
        param_4 = (int *)(*(int *)(*(int *)(iVar4 + 0x80) + param_3 * 4) * 0x3c0 +
                         *(int *)(iVar4 + 0x19c));
        param_1 = 0;
        local_20 = (void *)(param_4[1] - *param_4 >> 2);
        if (0 < (int)local_20) {
          do {
            iVar6 = *(int *)(*param_4 + param_1 * 4);
            uVar14 = 0xffffffff;
            if ((DAT_00f092fb != '\0') &&
               (*(int *)(*(int *)(*(int *)(iVar6 + 0xc) + 0x5c) + 0x360) < 1)) {
              uVar14 = 1;
            }
            param_2 = iVar6;
            cVar5 = FUN_007ec4c0(*(undefined4 *)(iVar6 + 0x10),uVar14,1);
            if (cVar5 != '\0') {
              puVar21 = *(undefined4 **)(iVar4 + 0x1934);
              if ((&param_2 < puVar21) &&
                 (puVar1 = *(undefined4 **)(iVar4 + 0x1930), puVar1 <= &param_2)) {
                if (puVar21 == *(undefined4 **)(iVar4 + 0x1938)) {
                  uVar9 = (int)puVar21 - (int)puVar1 >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_007f840d;
                  uVar9 = uVar9 + 1;
                  uVar15 = (int)*(undefined4 **)(iVar4 + 0x1938) - (int)puVar1 >> 2;
                  if (uVar15 < uVar9) {
                    if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = uVar15 + (uVar15 >> 1);
                    }
                    if (uVar15 < uVar9) {
                      uVar15 = uVar9;
                    }
                    FUN_004bf300(uVar15);
                  }
                }
                if (*(undefined4 **)(iVar4 + 0x1934) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar4 + 0x1934) =
                       *(undefined4 *)
                        (*(int *)(iVar4 + 0x1930) + ((int)&param_2 - (int)puVar1 >> 2) * 4);
                }
              }
              else {
                if (puVar21 == *(undefined4 **)(iVar4 + 0x1938)) {
                  uVar9 = *(uint *)(iVar4 + 0x1930);
                  uVar15 = (int)((int)puVar21 - uVar9) >> 2;
                  if (0x3ffffffe < uVar15) goto LAB_007f840d;
                  uVar15 = uVar15 + 1;
                  uVar9 = (int)((int)*(undefined4 **)(iVar4 + 0x1938) - uVar9) >> 2;
                  if (uVar9 < uVar15) {
                    if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = uVar9 + (uVar9 >> 1);
                    }
                    if (uVar9 < uVar15) {
                      uVar9 = uVar15;
                    }
                    FUN_004bf300(uVar9);
                    iVar6 = param_2;
                  }
                }
                if (*(int **)(iVar4 + 0x1934) != (int *)0x0) {
                  **(int **)(iVar4 + 0x1934) = iVar6;
                }
              }
              *(int *)(iVar4 + 0x1934) = *(int *)(iVar4 + 0x1934) + 4;
            }
            param_1 = param_1 + 1;
            fVar17 = local_34;
          } while (param_1 < (int)local_20);
        }
        param_3 = param_3 + 1;
      } while (param_3 < (int)fVar17);
    }
    piVar8 = (int *)**(int **)(iVar4 + 0x1944);
    if (piVar8 != *(int **)(iVar4 + 0x1944)) {
      do {
        piVar2 = piVar8 + 4;
        if (*(char *)((int)piVar8 + 0x15) == '\0') {
          piVar11 = (int *)piVar8[2];
          if (*(char *)((int)piVar11 + 0x15) == '\0') {
            cVar5 = *(char *)(*piVar11 + 0x15);
            piVar8 = piVar11;
            piVar11 = (int *)*piVar11;
            while (cVar5 == '\0') {
              cVar5 = *(char *)(*piVar11 + 0x15);
              piVar8 = piVar11;
              piVar11 = (int *)*piVar11;
            }
          }
          else {
            cVar5 = *(char *)(piVar8[1] + 0x15);
            piVar13 = (int *)piVar8[1];
            piVar11 = piVar8;
            while ((piVar8 = piVar13, cVar5 == '\0' && (piVar11 == (int *)piVar8[2]))) {
              cVar5 = *(char *)(piVar8[1] + 0x15);
              piVar13 = (int *)piVar8[1];
              piVar11 = piVar8;
            }
          }
        }
        iVar6 = *(int *)(*(int *)(iVar4 + 0x1c) + *piVar2 * 4);
        piVar2 = *(int **)(iVar4 + 0x1934);
        piVar11 = *(int **)(iVar4 + 0x1930);
        if (piVar11 == piVar2) {
LAB_007f8a1f:
          uVar14 = 0xffffffff;
          if ((DAT_00f092fb != '\0') &&
             (*(int *)(*(int *)(*(int *)(iVar6 + 0xc) + 0x5c) + 0x360) < 1)) {
            uVar14 = 1;
          }
          FUN_007ec4c0(*(undefined4 *)(iVar6 + 0x10),uVar14,0);
        }
        else {
          do {
            if (*piVar11 == iVar6) break;
            piVar11 = piVar11 + 1;
          } while (piVar11 != piVar2);
          if (piVar11 == piVar2) goto LAB_007f8a1f;
        }
      } while (piVar8 != *(int **)(iVar4 + 0x1944));
    }
  }
  if (local_54 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54);
  }
  ExceptionList = local_10;
  return;
}

