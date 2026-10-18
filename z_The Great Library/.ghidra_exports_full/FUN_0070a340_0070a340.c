// FUN_0070a340 @ 0070a340 body=[[0070a340, 0070a3ec] [0070a3f0, 0070a55d] [0070a561, 0070a58c] [0070a590, 0070cac6]]


undefined4 FUN_0070a340(undefined4 param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  int *in_ECX;
  char *pcVar9;
  bool bVar10;
  int *local_1ac;
  int iStack_188;
  int *local_184;
  uint uStack_158;
  uint uStack_134;
  void *pvStack_14;
  undefined1 uStack_10;
  undefined3 uStack_f;
  undefined1 local_c;
  undefined3 uStack_b;
  
  uStack_10 = 0x3d;
  uStack_f = 0xbb21;
  pvStack_14 = ExceptionList;
  local_1ac = (int *)0x0;
  local_c = 0;
  uStack_b = 0;
  ExceptionList = &pvStack_14;
  if (DAT_00f09544 == '\0') goto LAB_0070ca97;
  ExceptionList = &pvStack_14;
  FUN_00475500();
  piVar4 = (int *)in_ECX[0x368];
  local_184 = (int *)0x0;
  if (piVar4 == (int *)0x0) {
LAB_0070a43a:
    if (((in_ECX[0x590] != 0) && (*(char *)(*(int *)(in_ECX[0x590] + 4) + 0x67) != '\0')) &&
       (cVar3 = FUN_00792420(), cVar3 != '\0')) {
      FUN_00792490();
      local_c = 2;
      goto LAB_0070c4cf;
    }
    if (((in_ECX[0x58f] != 0) && (*(char *)(in_ECX[0x58f] + 0xc) != '\0')) &&
       ((cVar3 = FUN_00795640(), cVar3 != '\0' || (cVar3 = FUN_00795640(), cVar3 != '\0')))) {
      FUN_007954d0();
      local_c = 3;
      goto LAB_0070c4cf;
    }
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      FUN_009885d0();
      local_c = 4;
      FUN_009885d0();
      local_c = 5;
      piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x749] + 0x6c))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))();
      if (0xf < uStack_158) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
      if (0xf < uStack_134) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))();
      for (iVar8 = *piVar4; iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
        cVar3 = FUN_00670760();
        if (cVar3 != '\0') {
          FUN_00670bd0();
          local_c = 6;
          goto LAB_0070c4cf;
        }
      }
      goto LAB_0070c95e;
    }
    (**(code **)(*param_2 + 0x44))();
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      (**(code **)(*param_2 + 0x44))();
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') goto LAB_0070c8c8;
      (**(code **)(*param_2 + 0x44))();
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') goto LAB_0070c8c8;
      (**(code **)(*param_2 + 0x44))();
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') goto LAB_0070c8c8;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        FUN_00632c20();
        local_c = 10;
        goto LAB_0070c4cf;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        FUN_00718f10();
        local_c = 0xb;
        goto LAB_0070c4cf;
      }
      (**(code **)(*param_2 + 0x44))();
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        FUN_009885d0();
        local_c = 0xc;
        FUN_009a8ee0();
        local_c = 0xd;
        iVar8 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
        local_c = 0xe;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = 0xc;
        FUN_009a9740();
        goto LAB_0070c952;
      }
      cVar3 = FUN_0040b360();
      if (((cVar3 != '\0') || (cVar3 = FUN_0040b360(), cVar3 != '\0')) ||
         ((cVar3 = FUN_0040b360(), cVar3 != '\0' || (cVar3 = FUN_0040b360(), cVar3 != '\0')))) {
        iVar8 = (**(code **)(*in_ECX + 0xec))();
        if (iVar8 == 0) goto LAB_0070c95e;
        (**(code **)(*in_ECX + 0xec))();
        FUN_00781740();
        local_c = 0xf;
        goto LAB_0070c4cf;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        FUN_00650bc0();
        local_c = 0x10;
        FUN_004115d0();
        local_c = 0;
        FUN_00459820();
        goto LAB_0070ca97;
      }
      cVar3 = FUN_0040b360();
      if (((((((cVar3 != '\0') || (cVar3 = FUN_0040b360(), cVar3 != '\0')) ||
             (cVar3 = FUN_0040b360(), cVar3 != '\0')) ||
            ((cVar3 = FUN_0040b360(), cVar3 != '\0' || (cVar3 = FUN_0040b360(), cVar3 != '\0')))) ||
           ((cVar3 = FUN_0040b360(), cVar3 != '\0' ||
            ((cVar3 = FUN_0040b360(), cVar3 != '\0' || (cVar3 = FUN_0040b360(), cVar3 != '\0'))))))
          || (cVar3 = FUN_0040b360(), cVar3 != '\0')) ||
         ((cVar3 = FUN_0040b360(), cVar3 != '\0' || (cVar3 = FUN_0040b360(), cVar3 != '\0')))) {
        FUN_0066a040();
        local_c = 0x11;
        goto LAB_0070c4cf;
      }
      cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x1c))();
      if (cVar3 == '\0') {
LAB_0070aa94:
        bVar10 = false;
      }
      else {
        FUN_009885d0();
        local_c = 0x12;
        local_1ac = (int *)0x2;
        (**(code **)(*param_2 + 0x44))();
        cVar3 = FUN_00416db0();
        if (cVar3 == '\0') {
          FUN_009885d0();
          local_c = 0x13;
          uStack_b = 0;
          local_1ac = (int *)0x6;
          (**(code **)(*param_2 + 0x44))();
          cVar3 = FUN_00416db0();
          if (cVar3 == '\0') {
            FUN_009885d0();
            local_c = 0x14;
            uStack_b = 0;
            local_1ac = (int *)0xe;
            (**(code **)(*param_2 + 0x44))();
            cVar3 = FUN_00416db0();
            if (cVar3 == '\0') {
              FUN_009885d0();
              local_c = 0x15;
              uStack_b = 0;
              local_1ac = (int *)0x1e;
              (**(code **)(*param_2 + 0x44))();
              cVar3 = FUN_00416db0();
              if (cVar3 == '\0') {
                FUN_009885d0();
                local_c = 0x16;
                uStack_b = 0;
                local_1ac = (int *)0x3e;
                (**(code **)(*param_2 + 0x44))();
                cVar3 = FUN_00416db0();
                if (cVar3 == '\0') {
                  FUN_009885d0();
                  local_c = 0x17;
                  uStack_b = 0;
                  local_1ac = (int *)0x7e;
                  (**(code **)(*param_2 + 0x44))();
                  cVar3 = FUN_00416db0();
                  if (cVar3 == '\0') goto LAB_0070aa94;
                }
              }
            }
          }
        }
        bVar10 = true;
      }
      if (((uint)local_1ac & 0x40) != 0) {
        local_1ac = (int *)((uint)local_1ac & 0xffffffbf);
        FUN_00408ad0();
      }
      if (((uint)local_1ac & 0x20) != 0) {
        local_1ac = (int *)((uint)local_1ac & 0xffffffdf);
        FUN_00408ad0();
      }
      if (((uint)local_1ac & 0x10) != 0) {
        local_1ac = (int *)((uint)local_1ac & 0xffffffef);
        FUN_00408ad0();
      }
      if (((uint)local_1ac & 8) != 0) {
        local_1ac = (int *)((uint)local_1ac & 0xfffffff7);
        FUN_00408ad0();
      }
      if (((uint)local_1ac & 4) != 0) {
        local_1ac = (int *)((uint)local_1ac & 0xfffffffb);
        FUN_00408ad0();
      }
      local_c = 0;
      uStack_b = 0;
      if (((uint)local_1ac & 2) != 0) {
        FUN_00408ad0();
      }
      if (bVar10) {
        FUN_0066a040();
        local_c = 0x18;
        goto LAB_0070c4cf;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        FUN_005f7de0();
        local_c = 0x19;
        goto LAB_0070c4cf;
      }
      cVar3 = FUN_004105b0();
      if (cVar3 != '\0') {
        (**(code **)(*(int *)in_ECX[0x789] + 0x10))();
        local_c = 0x1a;
        goto LAB_0070c4cf;
      }
      iVar8 = (**(code **)(*in_ECX + 0x124))();
      if ((*(char *)(*(int *)(iVar8 + 0x20) + 0x67) != '\0') &&
         ((cVar3 = FUN_0040b360(), cVar3 != '\0' || (cVar3 = FUN_0040b360(), cVar3 != '\0')))) {
        (**(code **)(*in_ECX + 0x124))();
        FUN_007443d0();
        local_c = 0x1b;
        goto LAB_0070c4cf;
      }
      local_1ac = param_2 + 5;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        if (in_ECX[0x761] == 0) goto LAB_0070c95e;
        FUN_009858a0();
        local_c = 0x1c;
        goto LAB_0070c4cf;
      }
      iVar8 = (**(code **)(*in_ECX + 0x124))();
      if (((*(char *)(*(int *)(iVar8 + 0x20) + 0x67) != '\0') &&
          (iVar8 = (**(code **)(*in_ECX + 0x124))(), *(int *)(iVar8 + 0x2c) != 0)) &&
         (iVar8 = (**(code **)(*in_ECX + 0x124))(),
         *(char *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x60) + 0x67) != '\0')) {
        iVar8 = (**(code **)(*in_ECX + 0x124))();
        cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x60) + 0x18) + 0x94))();
        if (cVar3 != '\0') {
          (**(code **)(*in_ECX + 0x124))();
          FUN_007443d0();
          local_c = 0x1d;
          goto LAB_0070c4cf;
        }
      }
      (**(code **)(*param_2 + 0x44))();
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        (**(code **)(*param_2 + 0x44))();
        cVar3 = FUN_0040b360();
        if (cVar3 != '\0') {
          iVar8 = FUN_0066b450();
          if ((iVar8 != 0) &&
             (cVar3 = (**(code **)(**(int **)(iVar8 + 0xd8) + 0x20))(), cVar3 != '\0')) {
            (**(code **)(**(int **)(iVar8 + 0xd8) + 0x24))();
            local_c = 0x2a;
            goto LAB_0070c4cf;
          }
          goto LAB_0070c95e;
        }
        (**(code **)(*param_2 + 0x44))();
        cVar3 = FUN_0040b360();
        if (cVar3 != '\0') {
          FUN_00989510();
          local_c = 0x2b;
          FUN_00989070();
          FUN_00989070();
          piVar4 = (int *)FUN_009c16d0();
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x40))();
            local_c = 0x2c;
            FUN_00408ed0();
            local_c = 0x2b;
            FUN_00408ad0();
            FUN_00448740();
            iVar8 = FUN_005c0370();
            if (iVar8 != 0) {
              piVar4 = (int *)FUN_005c0370();
              (**(code **)(*piVar4 + 0x20))();
              local_c = 0x2d;
              FUN_00448aa0();
              FUN_00408ad0();
              local_c = 0;
              FUN_0040b3c0();
              goto LAB_0070c95e;
            }
            FUN_00448740();
          }
          local_c = 0;
          FUN_0040b3c0();
          goto LAB_0070c95e;
        }
        pcVar9 = (char *)(**(code **)(*param_2 + 0x44))();
        if (0xf < *(uint *)(pcVar9 + 0x14)) {
          pcVar9 = *(char **)pcVar9;
        }
        iVar8 = _strncmp(pcVar9,"EventOptionButton",0x11);
        if (iVar8 == 0) {
LAB_0070c6d6:
          FUN_00989510();
          _local_c = CONCAT31(uStack_b,0x2e);
          FUN_00989070();
          FUN_00989070();
          FUN_00989070();
          iVar8 = FUN_00989070();
          iVar5 = FUN_00989070();
          FUN_008a8650();
          if (iVar5 == 0) {
            FUN_0055c6c0();
            if (iVar8 == 0) {
              (**(code **)(*in_ECX + 0x58))();
            }
          }
          else {
            FUN_008a8d90();
          }
          iVar8 = FUN_009c16d0();
          if (iVar8 != 0) {
            FUN_008a61b0();
            _local_c = CONCAT31(uStack_b,0x2f);
            FUN_00408ed0();
            FUN_00408ad0();
          }
          local_c = 0;
          FUN_0040b3c0();
          goto LAB_0070c95e;
        }
        pcVar9 = (char *)(**(code **)(*param_2 + 0x44))();
        if (0xf < *(uint *)(pcVar9 + 0x14)) {
          pcVar9 = *(char **)pcVar9;
        }
        iVar8 = _strncmp(pcVar9,"eew_EventOptionButton",0x15);
        if (iVar8 == 0) goto LAB_0070c6d6;
        pcVar9 = (char *)(**(code **)(*param_2 + 0x44))();
        if (0xf < *(uint *)(pcVar9 + 0x14)) {
          pcVar9 = *(char **)pcVar9;
        }
        iVar8 = _strncmp(pcVar9,"Event_Country_OptionButton",0x1a);
        if (iVar8 == 0) goto LAB_0070c6d6;
        pcVar9 = (char *)(**(code **)(*param_2 + 0x44))();
        if (0xf < *(uint *)(pcVar9 + 0x14)) {
          pcVar9 = *(char **)pcVar9;
        }
        iVar8 = _strncmp(pcVar9,"Event_Province_OptionButton",0x1c);
        if (iVar8 == 0) goto LAB_0070c6d6;
        (**(code **)(*param_2 + 0x44))();
        cVar3 = FUN_0040b360();
        if (cVar3 == '\0') {
          (**(code **)(*param_2 + 0x44))();
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            (**(code **)(*param_2 + 0x44))();
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              (**(code **)(*param_2 + 0x44))();
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') {
                (**(code **)(*param_2 + 0x44))();
                cVar3 = FUN_0040b360();
                if (cVar3 == '\0') {
                  (**(code **)(*param_2 + 0x44))();
                  cVar3 = FUN_0040b360();
                  if (cVar3 == '\0') {
                    (**(code **)(*param_2 + 0x44))();
                    cVar3 = FUN_0040b360();
                    if (cVar3 != '\0') {
                      FUN_00475d50();
                      local_c = 0x51;
                      FUN_00408ed0();
                      local_c = 0;
                      FUN_00408ad0();
                      FUN_00475d50();
                      local_c = 0x52;
                      FUN_00408ed0();
                      local_c = 0;
                      FUN_00408ad0();
                      FUN_00475d50();
                      local_c = 0x53;
                      FUN_00408ed0();
                      goto LAB_0070c952;
                    }
                    (**(code **)(*param_2 + 0x44))();
                    cVar3 = FUN_0040b360();
                    if (cVar3 == '\0') {
                      (**(code **)(*param_2 + 0x44))();
                      cVar3 = FUN_0040b360();
                      if (cVar3 == '\0') {
                        (**(code **)(*param_2 + 0x44))();
                        cVar3 = FUN_0040b360();
                        if (cVar3 == '\0') {
                          (**(code **)(*param_2 + 0x44))();
                          cVar3 = FUN_0040b360();
                          if (cVar3 == '\0') {
                            (**(code **)(*param_2 + 0x44))();
                            cVar3 = FUN_0040b360();
                            if (cVar3 == '\0') {
                              (**(code **)(*param_2 + 0x44))();
                              cVar3 = FUN_0040b360();
                              if (cVar3 == '\0') {
                                (**(code **)(*param_2 + 0x44))();
                                cVar3 = FUN_0040b360();
                                if (cVar3 != '\0') {
                                  FUN_00401320();
                                  local_c = 0x66;
                                  FUN_0044e4b0();
                                  piVar4 = (int *)FUN_005661b0();
                                  if (piVar4 == (int *)0x0) {
                                    iVar8 = (**(code **)(*in_ECX + 0x58))();
                                    piVar4 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                               *(int *)(iVar8 + 4) * 4) + 0x4d8);
                                    while (piVar4 != (int *)0x0) {
                                      iVar8 = *piVar4;
                                      piVar4 = (int *)piVar4[2];
                                      cVar3 = FUN_00416db0();
                                      if (cVar3 != '\0') {
                                        FUN_009885d0();
                                        _local_c = CONCAT31(uStack_b,0x6a);
                                        (**(code **)(**(int **)(iVar8 + 8) + 0x18))();
                                        uStack_10 = 0x6b;
                                        uVar6 = FUN_00988f20();
                                        uStack_10 = 0x6c;
                                        FUN_00408ed0(uVar6,0);
                                        FUN_00408ad0();
                                        FUN_00408ad0();
                                        uStack_10 = 0x66;
                                        FUN_00408ad0();
                                        if (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar8 + 0xc))
                                        {
                                          FUN_009885d0();
                                          uStack_10 = 0x6d;
                                          FUN_0043acd0();
                                          uStack_10 = 0x6e;
                                          FUN_009885d0();
                                          uStack_10 = 0x6f;
                                          FUN_00988f20();
                                          uStack_10 = 0x70;
                                          uVar6 = FUN_00988f20();
                                          uStack_10 = 0x71;
                                          FUN_00448aa0(uVar6,0);
                                          FUN_00408ad0();
                                          FUN_00408ad0();
                                          FUN_00408ad0();
                                          FUN_00408ad0();
                                          uStack_10 = 0x66;
                                          FUN_00408ad0();
                                        }
                                        (**(code **)(**(int **)(iStack_188 + 8) + 0x1c))();
                                        local_c = 0x72;
                                        FUN_00448aa0();
                                        local_c = 0x66;
                                        FUN_00408ad0();
                                      }
                                    }
                                  }
                                  else {
                                    uVar6 = (**(code **)(*piVar4 + 0x18))();
                                    uStack_10 = 0x67;
                                    FUN_00408ed0(uVar6,0);
                                    uStack_10 = 0x66;
                                    FUN_00408ad0();
                                    uVar6 = FUN_009885d0();
                                    uStack_10 = 0x68;
                                    FUN_00448aa0(uVar6,0);
                                    uStack_10 = 0x66;
                                    FUN_00408ad0();
                                    (**(code **)(*piVar4 + 0x1c))();
                                    local_c = 0x69;
                                    FUN_00448aa0();
                                    FUN_00408ad0();
                                  }
                                  goto LAB_0070c952;
                                }
                                (**(code **)(*param_2 + 0x44))();
                                cVar3 = FUN_0040b360();
                                if (cVar3 != '\0') goto LAB_0070c95e;
                                (**(code **)(*param_2 + 0x44))();
                                cVar3 = FUN_0040b360();
                                if (cVar3 == '\0') {
                                  (**(code **)(*param_2 + 0x44))();
                                  cVar3 = FUN_0040b360();
                                  if (cVar3 == '\0') {
                                    (**(code **)(*param_2 + 0x44))();
                                    cVar3 = FUN_0040b360();
                                    if (cVar3 == '\0') {
                                      (**(code **)(*param_2 + 0x44))();
                                      cVar3 = FUN_0040b360();
                                      if (cVar3 == '\0') {
                                        (**(code **)(*param_2 + 0x44))();
                                        cVar3 = FUN_0040b360();
                                        if (cVar3 == '\0') {
                                          (**(code **)(*param_2 + 0x44))();
                                          cVar3 = FUN_0040b360();
                                          if (cVar3 == '\0') {
                                            (**(code **)(*param_2 + 0x44))();
                                            cVar3 = FUN_0040b360();
                                            if (cVar3 == '\0') {
                                              (**(code **)(*param_2 + 0x44))();
                                              cVar3 = FUN_0040b360();
                                              if (cVar3 == '\0') {
                                                (**(code **)(*param_2 + 0x44))();
                                                cVar3 = FUN_0040b360();
                                                if (cVar3 == '\0') {
                                                  (**(code **)(*param_2 + 0x44))();
                                                  cVar3 = FUN_0040b360();
                                                  if (cVar3 == '\0') {
                                                    (**(code **)(*param_2 + 0x44))();
                                                    cVar3 = FUN_0040b360();
                                                    if (cVar3 == '\0') {
                                                      (**(code **)(*param_2 + 0x44))();
                                                      cVar3 = FUN_0040b360();
                                                      if (cVar3 == '\0') {
                                                        (**(code **)(*param_2 + 0x44))();
                                                        cVar3 = FUN_0040b360();
                                                        if (cVar3 == '\0') {
                                                          (**(code **)(*param_2 + 0x44))();
                                                          cVar3 = FUN_0040b360();
                                                          if (cVar3 == '\0') {
                                                            if (((*(int *)(in_ECX[0x783] + 8) == 0)
                                                                || (*(char *)(*(int *)(in_ECX[0x783]
                                                                                      + 8) + 0x67)
                                                                    == '\0')) ||
                                                               (cVar3 = FUN_00451f80(),
                                                               cVar3 == '\0')) {
                                                              iVar8 = 1;
                                                              do {
                                                                FUN_009888f0();
                                                                local_c = 0x8c;
                                                                FUN_00988fa0();
                                                                local_c = 0x8d;
                                                                (**(code **)(*param_2 + 0x44))();
                                                                cVar3 = FUN_00416db0();
                                                                FUN_00408ad0();
                                                                local_c = 0;
                                                                FUN_00408ad0();
                                                                if (cVar3 != '\0') {
                                                                  FUN_009888f0();
                                                                  local_c = 0x8e;
                                                                  FUN_00988fa0();
                                                                  local_c = 0x8f;
                                                                  FUN_009a8ee0();
                                                                  local_c = 0x90;
                                                                  iVar8 = FUN_00475500();
                                                                  FUN_009a9880(*(undefined8 *)
                                                                                (iVar8 + 0x6c));
                                                                  local_c = 0x91;
                                                                  FUN_00408ed0();
                                                                  FUN_00408ad0();
                                                                  local_c = 0x8f;
                                                                  FUN_009a9740();
                                                                  FUN_00408ad0();
                                                                  goto LAB_0070c952;
                                                                }
                                                                iVar8 = iVar8 + 1;
                                                              } while (iVar8 < 0x17);
                                                              FUN_00709910();
                                                              local_c = 0x92;
                                                            }
                                                            else {
                                                              FUN_00452540();
                                                              local_c = 0x8b;
                                                            }
                                                            goto LAB_0070c4cf;
                                                          }
                                                          FUN_009885d0();
                                                          local_c = 0x88;
                                                          FUN_009a8ee0();
                                                          local_c = 0x89;
                                                          iVar8 = FUN_00475500();
                                                          FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c)
                                                                      );
                                                          local_c = 0x8a;
                                                          FUN_00408ed0();
                                                          FUN_00408ad0();
                                                          local_c = 0x88;
                                                        }
                                                        else {
                                                          FUN_009885d0();
                                                          local_c = 0x85;
                                                          FUN_009a8ee0();
                                                          local_c = 0x86;
                                                          iVar8 = FUN_00475500();
                                                          FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c)
                                                                      );
                                                          local_c = 0x87;
                                                          FUN_00408ed0();
                                                          FUN_00408ad0();
                                                          local_c = 0x85;
                                                        }
                                                        goto LAB_0070c949;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          (**(code **)(*param_2 + 0x44))();
                                          FUN_00988fa0();
                                          local_c = 0x82;
                                          FUN_009a8ee0();
                                          local_c = 0x83;
                                          iVar8 = FUN_00475500();
                                          FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                                          local_c = 0x84;
                                          FUN_00408ed0();
                                          FUN_00408ad0();
                                          local_c = 0x82;
                                        }
                                        else {
                                          FUN_009885d0();
                                          local_c = 0x7f;
                                          FUN_009a8ee0();
                                          local_c = 0x80;
                                          iVar8 = FUN_00475500();
                                          FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                                          local_c = 0x81;
                                          FUN_00408ed0();
                                          FUN_00408ad0();
                                          local_c = 0x7f;
                                        }
                                      }
                                      else {
                                        FUN_009885d0();
                                        local_c = 0x7c;
                                        FUN_009a8ee0();
                                        local_c = 0x7d;
                                        iVar8 = FUN_00475500();
                                        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                                        local_c = 0x7e;
                                        FUN_00408ed0();
                                        FUN_00408ad0();
                                        local_c = 0x7c;
                                      }
                                    }
                                    else {
                                      FUN_009885d0();
                                      local_c = 0x79;
                                      FUN_009a8ee0();
                                      local_c = 0x7a;
                                      iVar8 = FUN_00475500();
                                      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                                      local_c = 0x7b;
                                      FUN_00408ed0();
                                      FUN_00408ad0();
                                      local_c = 0x79;
                                    }
                                  }
                                  else {
                                    FUN_009885d0();
                                    local_c = 0x76;
                                    FUN_009a8ee0();
                                    local_c = 0x77;
                                    iVar8 = FUN_00475500();
                                    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                                    local_c = 0x78;
                                    FUN_00408ed0();
                                    FUN_00408ad0();
                                    local_c = 0x76;
                                  }
                                }
                                else {
                                  FUN_009885d0();
                                  local_c = 0x73;
                                  FUN_009a8ee0();
                                  local_c = 0x74;
                                  iVar8 = FUN_00475500();
                                  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                                  local_c = 0x75;
                                  FUN_00408ed0();
                                  FUN_00408ad0();
                                  local_c = 0x73;
                                }
                              }
                              else {
                                FUN_009885d0();
                                local_c = 99;
                                FUN_009a8ee0();
                                local_c = 100;
                                iVar8 = FUN_00475500();
                                FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                                local_c = 0x65;
                                FUN_00408ed0();
                                FUN_00408ad0();
                                local_c = 99;
                              }
                            }
                            else {
                              FUN_009885d0();
                              local_c = 0x60;
                              FUN_009a8ee0();
                              local_c = 0x61;
                              iVar8 = FUN_00475500();
                              FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                              local_c = 0x62;
                              FUN_00408ed0();
                              FUN_00408ad0();
                              local_c = 0x60;
                            }
                          }
                          else {
                            FUN_009885d0();
                            local_c = 0x5d;
                            FUN_009a8ee0();
                            local_c = 0x5e;
                            iVar8 = FUN_00475500();
                            FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                            local_c = 0x5f;
                            FUN_00408ed0();
                            FUN_00408ad0();
                            local_c = 0x5d;
                          }
                        }
                        else {
                          FUN_009885d0();
                          local_c = 0x5a;
                          FUN_009a8ee0();
                          local_c = 0x5b;
                          iVar8 = FUN_00475500();
                          FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                          local_c = 0x5c;
                          FUN_00408ed0();
                          FUN_00408ad0();
                          local_c = 0x5a;
                        }
                      }
                      else {
                        FUN_009885d0();
                        local_c = 0x57;
                        FUN_009a8ee0();
                        local_c = 0x58;
                        iVar8 = FUN_00475500();
                        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                        local_c = 0x59;
                        FUN_00408ed0();
                        FUN_00408ad0();
                        local_c = 0x57;
                      }
                    }
                    else {
                      FUN_009885d0();
                      local_c = 0x54;
                      FUN_009a8ee0();
                      local_c = 0x55;
                      iVar8 = FUN_00475500();
                      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                      local_c = 0x56;
                      FUN_00408ed0();
                      FUN_00408ad0();
                      local_c = 0x54;
                    }
                  }
                  else {
                    FUN_009885d0();
                    local_c = 0x4e;
                    FUN_009a8ee0();
                    local_c = 0x4f;
                    iVar8 = FUN_00475500();
                    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                    local_c = 0x50;
                    FUN_00408ed0();
                    FUN_00408ad0();
                    local_c = 0x4e;
                  }
                }
                else {
                  if (in_ECX[0x582] < 3) {
                    FUN_009885d0();
                    local_c = 0x45;
                    FUN_009a8ee0();
                    local_c = 0x46;
                    iVar8 = FUN_00475500();
                    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                    local_c = 0x47;
                    FUN_00408ed0();
                    FUN_00408ad0();
                    local_c = 0x45;
                  }
                  else {
                    FUN_009885d0();
                    local_c = 0x48;
                    FUN_009a8ee0();
                    local_c = 0x49;
                    iVar8 = FUN_00475500();
                    FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                    local_c = 0x4a;
                    FUN_00408ed0();
                    FUN_00408ad0();
                    local_c = 0x48;
                  }
                  FUN_009a9740();
                  local_c = 0;
                  FUN_00408ad0();
                  FUN_009885d0();
                  local_c = 0x4b;
                  FUN_009a8ee0();
                  local_c = 0x4c;
                  iVar8 = FUN_00475500();
                  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
                  local_c = 0x4d;
                  FUN_00408ed0();
                  FUN_00408ad0();
                  local_c = 0x4b;
                }
                goto LAB_0070c949;
              }
              FUN_009885d0();
              local_c = 0x3f;
              FUN_009a8ee0();
              local_c = 0x40;
              iVar8 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
              local_c = 0x41;
              FUN_00408ed0();
              FUN_00408ad0();
              local_c = 0x3f;
              FUN_009a9740();
              local_c = 0;
              FUN_00408ad0();
              FUN_009885d0();
              local_c = 0x42;
              FUN_009a8ee0();
              local_c = 0x43;
              iVar8 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
              local_c = 0x44;
              FUN_00408ed0();
              FUN_00408ad0();
              local_c = 0x42;
              FUN_009a9740();
            }
            else {
              FUN_009885d0();
              local_c = 0x39;
              FUN_009a8ee0();
              local_c = 0x3a;
              iVar8 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
              local_c = 0x3b;
              FUN_00408ed0();
              FUN_00408ad0();
              local_c = 0x39;
              FUN_009a9740();
              local_c = 0;
              FUN_00408ad0();
              FUN_009885d0();
              local_c = 0x3c;
              FUN_009a8ee0();
              local_c = 0x3d;
              iVar8 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
              local_c = 0x3e;
              FUN_00408ed0();
              FUN_00408ad0();
              local_c = 0x3c;
              FUN_009a9740();
            }
            goto LAB_0070c952;
          }
          FUN_009885d0();
          local_c = 0x36;
          FUN_009a8ee0();
          local_c = 0x37;
          iVar8 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
          local_c = 0x38;
          FUN_00408ed0();
          FUN_00408ad0();
          local_c = 0x36;
          goto LAB_0070c949;
        }
        FUN_009885d0();
        local_c = 0x30;
        FUN_009a8ee0();
        local_c = 0x31;
        iVar8 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
        local_c = 0x32;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = 0x30;
        FUN_009a9740();
        local_c = 0;
        FUN_00408ad0();
        FUN_009885d0();
        local_c = 0x33;
        FUN_009a8ee0();
        local_c = 0x34;
        iVar8 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
        local_c = 0x35;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = 0x33;
        FUN_009a9740();
        goto LAB_0070c952;
      }
      iVar8 = FUN_0066b450();
      if ((iVar8 != 0) && (*(int *)(iVar8 + 0x194) != 0)) {
        FUN_009885d0();
        local_c = 0x1e;
        FUN_009a8ee0();
        local_c = 0x20;
        FUN_00408ad0();
        FUN_009885d0();
        local_c = 0x21;
        FUN_0055dd40();
        local_c = 0x22;
        FUN_009a9980();
        FUN_00408ad0();
        local_c = 0x20;
        FUN_00408ad0();
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_c = 0x23;
        FUN_00408ed0();
        local_c = 0x20;
        FUN_00408ad0();
        if (*(int *)(iVar8 + 0x198) < *(int *)(DAT_012586dc + 0xc)) {
          FUN_009885d0();
          local_c = 0x24;
          FUN_009a8ee0();
          local_c = 0x26;
          FUN_00408ad0();
          FUN_009885d0();
          local_c = 0x27;
          FUN_0043acd0();
          local_c = 0x28;
          FUN_009a9980();
          FUN_00408ad0();
          local_c = 0x26;
          FUN_00408ad0();
          iVar8 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
          local_c = 0x29;
          FUN_00408ed0();
          FUN_00408ad0();
          local_c = 0x20;
          FUN_009a9740();
        }
        local_c = 0;
        FUN_009a9740();
      }
    }
    else {
LAB_0070c8c8:
      FUN_009885d0();
      local_c = 7;
      FUN_009a8ee0();
      local_c = 8;
      iVar8 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
      local_c = 9;
      FUN_00408ed0();
      FUN_00408ad0();
      local_c = 7;
LAB_0070c949:
      FUN_009a9740();
LAB_0070c952:
      local_c = 0;
      FUN_00408ad0();
    }
  }
  else {
    do {
      piVar2 = (int *)*piVar4;
      piVar4 = (int *)piVar4[2];
      cVar3 = (**(code **)(piVar2[7] + 0x58))();
      if (cVar3 != '\0') {
        local_184 = piVar2;
      }
    } while (piVar4 != (int *)0x0);
    if (local_184 == (int *)0x0) goto LAB_0070a43a;
    (**(code **)(*local_184 + 0x30))();
    local_c = 1;
LAB_0070c4cf:
    FUN_004115d0();
    local_c = 0;
    FUN_00459820();
  }
LAB_0070c95e:
  (**(code **)(*param_2 + 0x60))();
  (**(code **)(*local_1ac + 0x54))();
  cVar3 = (**(code **)(*(int *)param_2[0xc] + 0x28))();
  if (cVar3 != '\0') {
    pbVar7 = (byte *)(param_2[0xc] + 0x6c);
    if (0xf < *(uint *)(param_2[0xc] + 0x80)) {
      pbVar7 = *(byte **)pbVar7;
    }
    pcVar9 = "GFX_resources";
    do {
      bVar1 = *pbVar7;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_0070ca37:
        iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0070ca3c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_0070ca37;
      pbVar7 = pbVar7 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    iVar8 = 0;
LAB_0070ca3c:
    if ((iVar8 == 0) && (iVar8 = (**(code **)(*param_2 + 0x4c))(), 1 < iVar8)) {
      (**(code **)(*param_2 + 0x4c))();
      FUN_005659c0();
      local_c = 0x93;
      FUN_00408ed0();
      local_c = 0;
      FUN_00408ad0();
    }
  }
LAB_0070ca97:
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = pvStack_14;
  return param_1;
}

