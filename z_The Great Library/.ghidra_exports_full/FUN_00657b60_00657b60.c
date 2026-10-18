// FUN_00657b60 @ 00657b60 body=[[00657b60, 00657e26] [00657e2a, 00658071] [00658075, 006580ea] [006580ee, 006581b0] [006581b4, 00658275] [00658279, 006582a2] [006582a6, 00658ca9]]


void FUN_00657b60(int *param_1)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  void **ppvVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  short *psVar16;
  undefined4 uVar17;
  bool bVar18;
  float *pfVar19;
  undefined4 uVar20;
  undefined1 local_ec [12];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  int local_a4;
  int local_a0;
  float local_9c;
  undefined4 uStack_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  float local_2c;
  float local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbb88e;
  piVar14 = (int *)param_1[0x73e];
  bVar5 = false;
  local_15 = '\0';
  ppvVar7 = &local_10;
  local_10 = ExceptionList;
  local_1c = DAT_013f085c;
  for (; ExceptionList = ppvVar7, piVar14 != (int *)0x0; piVar14 = (int *)piVar14[8]) {
    if (piVar14[2] == 1) {
      if ((piVar14[1] == 0x102) || (*piVar14 != 0x7a)) {
        if ((piVar14[1] == 0x102) || (*piVar14 != 0x7b)) {
          cVar8 = (**(code **)(*(int *)param_1[7] + 0x24))(0x12);
          iVar10 = DAT_01258a74;
          if (((cVar8 == '\0') || (piVar14[1] == 0x102)) || (*piVar14 != 0xd)) goto LAB_00657c76;
          local_7c = *(int *)(DAT_01258a74 + 0x6b9c0);
          local_80 = *(int *)(DAT_01258a74 + 0x6b9bc);
          local_78 = (int *)0x0;
          local_74 = 0;
          local_70 = 0;
          local_8 = 0;
          bVar18 = *(char *)(*(int *)(DAT_01258a74 + 0x6bc48) + 0x44) == '\0';
          local_20 = CONCAT31(local_20._1_3_,bVar18);
          *(bool *)(*(int *)(DAT_01258a74 + 0x6bc48) + 0x44) = bVar18;
          local_68 = local_80;
          local_64 = local_7c;
          FUN_0099bf60(&local_80,*(undefined4 *)(*(int *)(iVar10 + 0x6bc48) + 0x40),local_20);
          local_8 = 0xffffffff;
        }
        else {
          *(undefined1 *)(piVar14 + 6) = 1;
          *(undefined1 *)(param_1 + 0x76e) = 1;
        }
      }
      else {
        *(undefined1 *)(piVar14 + 6) = 1;
        *(undefined1 *)((int)param_1 + 0x1db6) = 1;
      }
LAB_00657c9a:
      if (((((char)param_1[0x552] != '\0') && (piVar14[2] == 0)) &&
          ((piVar14[4] == 4 && ((piVar14[5] == 1 && (bVar5 = true, (char)param_1[0x57f] != '\0')))))
          ) && (local_15 = '\x01', DAT_01258a92 != '\0')) {
        iVar10 = FUN_009c2d80();
        *(undefined1 *)(iVar10 + 0x55) = 1;
      }
    }
    else {
LAB_00657c76:
      if (piVar14[2] != 0) goto LAB_00657c9a;
      uVar17 = (**(code **)(*(int *)param_1[0x16] + 0x4c))(&local_88);
      cVar8 = FUN_006692f0(piVar14,uVar17);
      if (cVar8 == '\0') goto LAB_00657c9a;
    }
    ppvVar7 = ExceptionList;
  }
  if (((*(char *)((int)param_1 + 0x1db5) != '\0') && (local_1c == (int *)0x0)) && (local_15 == '\0')
     ) {
    if (*(char *)(*(int *)(param_1[0x780] + 0x28) + 0x67) != '\0') {
      FUN_0069fa10(param_1[0x780],param_1 + 0x73e);
    }
    iVar10 = (**(code **)(*param_1 + 0x6c))();
    if (*(char *)(iVar10 + 0x363) == '\0') {
      (**(code **)(*(int *)param_1[0x15] + 4))(param_1[0x16],param_1[7],param_1 + 0x73e);
    }
    (**(code **)(*param_1 + 0x38))();
  }
  if ((param_1[0x789] != 0) &&
     (FUN_00411730(param_1[0x789],param_1 + 0x661,param_1[0x5f8],param_1[0x16],param_1[7],
                   param_1 + 0x73e), (char)param_1[0x17] != '\0')) {
    FUN_00411610();
  }
  piVar14 = (int *)param_1[0x73e];
  do {
    if (piVar14 == (int *)0x0) {
      if (bVar5) {
        *(undefined1 *)(param_1 + 0x57f) = 0;
        *(undefined1 *)(param_1 + 0x552) = 0;
      }
      ExceptionList = local_10;
      return;
    }
    local_24 = piVar14;
    if (((*(char *)(param_1[0x749] + 0x67) == '\0') && (piVar14[2] == 1)) &&
       ((*piVar14 == 9 && ((param_1[0x746] == 0 || (*(char *)(param_1[0x746] + 0xe1) != '\0')))))) {
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("chat_window",0xb);
      local_8 = 1;
      iVar10 = (**(code **)(*(int *)param_1[0x58c] + 0x6c))(local_48);
      local_15 = *(char *)(iVar10 + 0x67) == '\0';
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
      if ((bool)local_15) {
        FUN_0064f850(param_1);
      }
      else {
        FUN_00651300();
      }
    }
    else {
      iVar10 = *piVar14;
      if ((((iVar10 == 0x13) && (piVar14[1] != 0x102)) ||
          ((iVar10 == 0x20 && (piVar14[1] == 0x102)))) && ((char)param_1[0x17] == '\0')) {
        (**(code **)(*param_1 + 0x15c))();
      }
      else if ((((param_1[0x746] != 0) && (*(char *)(param_1[0x746] + 0xe1) != '\0')) &&
               (iVar10 == 0x13)) && (piVar14[1] != 0x102)) {
        iVar10 = FUN_00aae9af(0x5c);
        local_8 = 2;
        local_20 = iVar10;
        if (iVar10 == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = FUN_0068b610(DAT_012588e8);
          uVar17 = FUN_0072cef0(iVar10,uVar17,0);
        }
        local_8 = 0xffffffff;
        iVar10 = (**(code **)(*param_1 + 0x44))();
        (**(code **)(**(int **)(iVar10 + 0x38) + 0x18))(uVar17);
      }
    }
    iVar10 = (**(code **)(*(int *)param_1[0x16] + 0x4c))(local_d0);
    iVar10 = *(int *)(iVar10 + 4);
    piVar11 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x4c))(local_d8);
    uVar17 = DAT_0125870c;
    local_2c = (float)*piVar11;
    local_28 = (float)iVar10;
    if (piVar14[2] != 0) {
LAB_00658a7b:
      if (piVar14[2] == 1) {
        iVar10 = param_1[0x743];
        cVar8 = *(char *)(iVar10 + 0x30);
        if (((cVar8 == '\0') || (*local_24 != 0x26)) || (local_24[1] == 0x102)) {
          if (((cVar8 == '\0') || (*local_24 != 0x28)) || (local_24[1] == 0x102)) {
            cVar2 = (char)*local_24;
            if ((cVar2 == -0x59) || (cVar2 == '`')) {
              if ((char)param_1[0x17] == '\0') {
                iVar13 = *(int *)(*(int *)(iVar10 + 0x24) + 0x18);
                if (cVar8 == '\0') {
                  (**(code **)(iVar13 + 0x34))();
                  *(undefined2 *)(*(int *)(iVar10 + 0x28) + 0x4c) = 1;
                  (**(code **)(**(int **)(iVar10 + 0x24) + 0x2c))();
                  *(undefined1 *)(iVar10 + 0x30) = 1;
                }
                else {
                  (**(code **)(iVar13 + 0x38))();
                  *(undefined1 *)(iVar10 + 0x30) = 0;
                }
              }
            }
            else if ((cVar2 < '0') || ('9' < cVar2)) {
              if (cVar2 == '+') {
                if (((char)param_1[0x17] == '\0') ||
                   (iVar10 = (**(code **)(*param_1 + 0x44))(), *(char *)(iVar10 + 0x34) != '\0')) {
                  (**(code **)(*param_1 + 0x164))();
                }
              }
              else if (cVar2 == '-') {
                if (((char)param_1[0x17] == '\0') ||
                   (iVar10 = (**(code **)(*param_1 + 0x44))(), *(char *)(iVar10 + 0x34) != '\0')) {
                  (**(code **)(*param_1 + 0x168))();
                }
              }
              else if ((*local_24 == 0x24) && (local_24[1] != 0x102)) {
                local_90 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                (**(code **)(*param_1 + 0xb0))
                          (*(undefined4 *)
                            (*(int *)(*(int *)(DAT_012587e4 + 4) +
                                     *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xbe4));
              }
            }
            else {
              FUN_0066b5d0(param_1,cVar2 + -0x30);
            }
          }
          else {
            FUN_006139e0();
          }
        }
        else if (*(int *)(iVar10 + 0x44) < *(int *)(iVar10 + 0x3c) + -1) {
          iVar13 = *(int *)(iVar10 + 0x44) + 1;
          iVar4 = *(int *)(iVar10 + 0x34);
          *(int *)(iVar10 + 0x44) = iVar13;
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            iVar4 = *(int *)(iVar4 + 0x20);
          }
          (**(code **)(*(int *)(*(int *)(iVar10 + 0x28) + 0x54) + 0x40))(iVar4);
          FUN_009b6400(*(undefined4 *)(iVar10 + 0x28));
        }
      }
      goto LAB_00658c0b;
    }
    if (piVar14[4] == 3) {
      if ((piVar14[5] == 1) && ((char)local_24[6] == '\0')) {
        *(undefined1 *)(param_1 + 0x57f) = 1;
        puVar12 = (undefined8 *)FUN_004a1bb0(uVar17,local_ec,&local_2c,1);
        *(undefined8 *)(param_1 + 0x57c) = *puVar12;
        param_1[0x57e] = *(int *)(puVar12 + 1);
        *(undefined1 *)(param_1 + 0x552) = 1;
      }
      goto LAB_00658c0b;
    }
    if (piVar14[4] != 4) goto LAB_00658a7b;
    if ((((piVar14[5] == 2) && ((char)param_1[0x552] == '\0')) && (param_1[0x36a] == 0)) &&
       (param_1[0x582] == 0)) {
      iVar10 = param_1[0x5f8];
      iVar13 = (**(code **)(*param_1 + 0x38))();
      if (*(int *)(iVar13 + 0x20cc) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = FUN_007f15e0(iVar13 + 0x20bc,&local_2c,iVar10);
      }
      *(int *)(iVar13 + 0x3a1c) = iVar10;
      param_1[0x771] = iVar10;
      param_1[0x772] = 0;
      FUN_00678a90();
      local_1c = (int *)0x0;
      iVar13 = 0;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("options",7);
      local_8 = 3;
      piVar14 = (int *)(**(code **)(*(int *)param_1[0x770] + 0x7c))(local_48);
      iVar10 = (**(code **)(*piVar14 + 0x2c))();
      local_8 = 0xffffffff;
      local_15 = 0 < *(int *)(iVar10 + 8);
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
      if ((bool)local_15) {
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        FUN_00409350("options",7);
        local_8 = 4;
        piVar14 = (int *)(**(code **)(*(int *)param_1[0x770] + 0x7c))(local_48);
        puVar15 = (undefined4 *)(**(code **)(*piVar14 + 0x2c))();
        psVar16 = (short *)(**(code **)(*(int *)(*(int *)*puVar15 + 0x1c) + 0x14))(local_c8);
        local_1c = (int *)(int)*psVar16;
        local_8 = 0xffffffff;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48[0]);
        }
      }
      local_8 = 0xffffffff;
      local_20 = (int)local_2c;
      iVar10 = (**(code **)(*param_1 + 0x40))();
      local_8c = *(undefined4 *)(iVar10 + 0x6b9c0);
      if ((float)*(int *)(iVar10 + 0x6b9bc) < (float)(int)local_1c + local_2c) {
        local_20 = (int)((local_2c - (float)(int)local_1c) - 10.0);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("options",7);
      local_8 = 5;
      piVar14 = (int *)(**(code **)(*(int *)param_1[0x770] + 0x7c))(local_48);
      iVar10 = (**(code **)(*piVar14 + 0x2c))();
      local_8 = 0xffffffff;
      local_15 = 0 < *(int *)(iVar10 + 8);
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
      if ((bool)local_15) {
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = local_c0[0] & 0xffffff00;
        FUN_00409350("options",7);
        local_8 = 6;
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        FUN_00409350("options",7);
        local_8 = CONCAT31(local_8._1_3_,7);
        piVar14 = (int *)(**(code **)(*(int *)param_1[0x770] + 0x7c))(local_c0);
        puVar15 = (undefined4 *)(**(code **)(*piVar14 + 0x2c))();
        iVar10 = *(int *)*puVar15;
        piVar14 = (int *)(**(code **)(*(int *)param_1[0x770] + 0x7c))(local_48);
        iVar13 = (**(code **)(*piVar14 + 0x2c))();
        local_1c = *(int **)(iVar13 + 8);
        iVar10 = (**(code **)(*(int *)(iVar10 + 0x1c) + 0x14))(local_c4);
        iVar13 = (int)*(short *)(iVar10 + 2) * (int)local_1c;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48[0]);
        }
        local_8 = 0xffffffff;
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_c0[0]);
        }
      }
      fVar1 = local_28;
      local_8 = 0xffffffff;
      iVar10 = (**(code **)(*param_1 + 0x40))();
      local_90 = *(undefined4 *)(iVar10 + 0x6b9bc);
      if ((float)*(int *)(iVar10 + 0x6b9c0) < local_28 + (float)iVar13) {
        fVar1 = (local_28 - (float)iVar13) - 10.0;
      }
      (**(code **)(*(int *)param_1[0x770] + 0xa8))(local_20,(int)fVar1);
      piVar14 = local_24;
    }
    if ((piVar14[5] == 1) && ((char)param_1[0x552] == '\x01')) {
      bVar5 = false;
      (**(code **)(*(int *)(param_1[0x770] + 0x18) + 0x38))();
      param_1[0x771] = 0;
      *(undefined1 *)(param_1 + 0x552) = 0;
      cVar8 = FUN_00651d90();
      if (cVar8 == '\0') {
        if ((char)param_1[0x1c] != '\0') {
          uVar20 = 1;
          piVar14 = param_1 + 0x580;
          pfVar19 = &local_2c;
          pcVar3 = *(code **)(*param_1 + 0x38);
          *(undefined1 *)(param_1 + 0x57f) = 0;
          piVar11 = piVar14;
          uVar17 = (*pcVar3)(pfVar19,piVar14,1);
          iVar10 = FUN_006451c0(uVar17,pfVar19,piVar11,uVar20);
          param_1[0x584] = iVar10;
          cVar8 = (**(code **)(*(int *)param_1[7] + 0x28))();
          if ((cVar8 == '\0') || (param_1[0x584] == 0)) {
LAB_00658851:
            FUN_0066bc90();
            *(undefined1 *)(param_1 + 0x744) = 1;
            FUN_004cd940();
            FUN_008601b0(param_1 + 0x368);
            (**(code **)(*(int *)param_1[0x593] + 0x38))();
            *(undefined1 *)(param_1 + 0x744) = 0;
            cVar8 = FUN_0066bbf0();
            if (cVar8 != '\0') {
              FUN_0066bd60(param_1[0x35f],0);
            }
LAB_006588a4:
            if ((param_1[0x584] != 0) && (cVar8 = FUN_004cd880(), cVar8 != '\0')) {
              FUN_004cd7f0();
              param_1[0x553] = -1;
            }
          }
          else {
            for (piVar14 = (int *)*piVar14; piVar14 != (int *)0x0; piVar14 = (int *)piVar14[2]) {
              if (*piVar14 == param_1[0x584]) {
                FUN_004cd850();
                param_1[0x584] = 0;
                goto LAB_00658c0b;
              }
            }
            cVar8 = FUN_004cd880();
            if (cVar8 != '\0') goto LAB_006588a4;
            if (param_1[0x582] == 0) goto LAB_00658851;
          }
          param_1[0x584] = 0;
        }
      }
      else if ((char)param_1[0x1c] != '\0') {
        FUN_004a1bb0(DAT_0125870c,&local_9c,&local_2c,1);
        local_4c = (float)param_1[0x57e];
        local_54 = *(undefined8 *)(param_1 + 0x57c);
        local_58 = local_94;
        fVar1 = local_9c;
        if (local_9c < (float)local_54) {
          fVar1 = (float)param_1[0x57c];
          uVar6 = (ulonglong)local_54 >> 0x20;
          local_54 = CONCAT44((int)uVar6,local_9c);
        }
        local_60 = CONCAT44(uStack_98,fVar1);
        if (local_94 < local_4c) {
          local_58 = (float)param_1[0x57e];
          local_4c = local_94;
        }
        if ((param_1[0x36a] == 0) ||
           (cVar8 = (**(code **)(*(int *)param_1[7] + 0x28))(), cVar8 == '\0')) {
          FUN_0066bc90();
          *(undefined1 *)(param_1 + 0x744) = 1;
          FUN_004cd940();
          *(undefined1 *)(param_1 + 0x744) = 0;
          FUN_008601b0(param_1 + 0x368);
          (**(code **)(*(int *)param_1[0x593] + 0x38))();
          cVar8 = FUN_0066bbf0();
          if (cVar8 != '\0') {
            FUN_0066bd60(param_1[0x35f],0);
          }
        }
        local_78 = (int *)0x0;
        local_74 = 0;
        local_70 = 0;
        local_6c = 0;
        local_8 = 8;
        puVar15 = (undefined4 *)(**(code **)(*param_1 + 0x58))(local_e0);
        local_90 = *puVar15;
        FUN_005446e0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + puVar15[1] * 4),&local_78);
        piVar14 = local_78;
        if (local_78 != (int *)0x0) {
          do {
            piVar11 = (int *)*piVar14;
            piVar14 = (int *)piVar14[2];
            local_1c = piVar14;
            cVar8 = (**(code **)(*piVar11 + 0x38))();
            if (((cVar8 == '\0') || (*(char *)(*(int *)(piVar11[0x37] + 0x5c) + 0x2a) != '\0')) &&
               (cVar8 = (**(code **)(*piVar11 + 0x38))(), cVar8 != '\0')) {
              (**(code **)(*piVar11 + 0x70))(&local_a4,piVar11[0x37]);
              if ((((float)local_54 <= (float)(local_a4 + 2)) &&
                  ((float)(local_a4 + -2) <= (float)local_60)) &&
                 ((local_4c <= (float)(local_a0 + 2) &&
                  (((float)(local_a0 + -2) <= local_58 && (cVar8 = FUN_004cd880(), cVar8 != '\0'))))
                 )) {
                FUN_004cd7f0();
                param_1[0x553] = -1;
                piVar14 = local_1c;
              }
            }
          } while (piVar14 != (int *)0x0);
          piVar14 = local_78;
          if (local_78 != (int *)0x0) {
            do {
              piVar11 = (int *)*piVar14;
              piVar14 = (int *)piVar14[2];
              local_1c = piVar14;
              cVar8 = (**(code **)(*piVar11 + 0x38))();
              if ((cVar8 == '\0') && (cVar8 = (**(code **)(*piVar11 + 0x40))(), cVar8 == '\0')) {
                (**(code **)(*piVar11 + 0x70))(&local_88,piVar11[0x37]);
                if (((float)local_54 <= (float)(local_88 + 2)) &&
                   (((((float)(local_88 + -2) <= (float)local_60 &&
                      (local_4c <= (float)(local_84 + 2))) && ((float)(local_84 + -2) <= local_58))
                    && (cVar8 = FUN_004cd880(), cVar8 != '\0')))) {
                  FUN_004cd7f0();
                  param_1[0x553] = -1;
                  piVar14 = local_1c;
                }
              }
              piVar11 = local_78;
            } while (piVar14 != (int *)0x0);
            while (piVar11 != (int *)0x0) {
              piVar14 = (int *)*piVar11;
              piVar11 = (int *)piVar11[2];
              local_1c = piVar11;
              cVar8 = (**(code **)(*piVar14 + 0x38))();
              if ((cVar8 == '\0') && (cVar8 = (**(code **)(*piVar14 + 0x3c))(), cVar8 == '\0')) {
                (**(code **)(*piVar14 + 0x70))(&local_68,piVar14[0x37]);
                if (((((float)local_54 <= (float)(local_68 + 2)) &&
                     (((float)(local_68 + -2) <= (float)local_60 &&
                      (local_4c <= (float)(local_64 + 2))))) && ((float)(local_64 + -2) <= local_58)
                    ) && (cVar8 = FUN_004cd880(), cVar8 != '\0')) {
                  FUN_004cd7f0();
                  param_1[0x553] = -1;
                  piVar11 = local_1c;
                }
              }
            }
          }
        }
        *(undefined1 *)(param_1 + 0x57f) = 0;
        FUN_0066a750();
        local_8 = 0xffffffff;
        FUN_009a63f0();
      }
    }
    else if ((piVar14[5] == 2) && ((char)param_1[0x1c] != '\0')) {
      iVar10 = param_1[0x5f8];
      iVar13 = (**(code **)(*param_1 + 0x38))();
      if (*(int *)(iVar13 + 0x20cc) == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_007f15e0(iVar13 + 0x20bc,&local_2c,iVar10);
      }
      iVar10 = local_20;
      *(int *)(iVar13 + 0x3a1c) = local_20;
      if (local_20 != 0) {
        local_15 = param_1[0x582] == 0;
        if (0 < param_1[0x582]) {
          iVar13 = (**(code **)(**(int **)param_1[0x580] + 4))();
          if (iVar13 == 3) {
            local_15 = '\x01';
          }
          uVar17 = *(undefined4 *)(iVar10 + 0xc);
          uVar9 = (**(code **)(*(int *)param_1[7] + 0x28))();
          FUN_004cd9b0(uVar17,uVar9);
        }
        if ((*(char *)(DAT_012588e8 + 0xd1c) != '\0') && (local_15 != '\0')) {
          iVar10 = FUN_00ab0cbb(*(undefined4 *)(DAT_012588e8 + 0xb24),0,
                                &CEU3Idler::RTTI_Type_Descriptor,&CInGameIdler::RTTI_Type_Descriptor
                                ,0);
          iVar13 = 0;
          do {
            if ((iVar13 < *(int *)(iVar10 + 0xd84) - *(int *)(iVar10 + 0xd80) >> 2) &&
               (cVar8 = (**(code **)(**(int **)(*(int *)(iVar10 + 0xd80) + iVar13 * 4) + 0x1c))(),
               cVar8 != '\0')) goto LAB_00658c0b;
            iVar13 = iVar13 + 1;
          } while (iVar13 < 8);
          local_20 = *(int *)(local_20 + 0xc);
          piVar14 = *(int **)(*(int *)(iVar10 + 0xd80) + 0x18);
          if ((int)(*(int *)(iVar10 + 0xd84) - *(int *)(iVar10 + 0xd80) & 0xfffffffcU) < 0x19) {
            local_15 = '\0';
LAB_00658a49:
            FUN_00624f20(0);
          }
          else {
            local_15 = (**(code **)(*piVar14 + 0x1c))();
            if (local_15 == '\0') goto LAB_00658a49;
          }
          FUN_00624580(piVar14);
          if (local_15 == '\0') {
            FUN_0066bd60(6,0);
          }
        }
      }
    }
LAB_00658c0b:
    piVar14 = local_24;
    if ((char)local_24[6] == '\0') {
      if (((local_24[2] == 0) && (local_24[5] == 4)) &&
         (iVar10 = (**(code **)(*param_1 + 0x6c))(), *(char *)(iVar10 + 0x355) == '\0')) {
        *(undefined1 *)(iVar10 + 0x354) = 1;
      }
      if ((((char)piVar14[6] == '\0') && (piVar14[2] == 1)) &&
         ((*piVar14 == 0x1b && (piVar14[1] == 0x100)))) {
        if (param_1[0x582] < 1) {
          FUN_0066eee0();
        }
        else {
          (**(code **)(*param_1 + 0xa4))(0);
        }
        *(char *)(piVar14 + 6) = '\x01';
      }
    }
    piVar14 = (int *)piVar14[8];
  } while( true );
}

