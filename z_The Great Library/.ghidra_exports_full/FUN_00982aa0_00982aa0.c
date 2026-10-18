// FUN_00982aa0 @ 00982aa0 body=[[00982aa0, 00982bb6] [00982bba, 00982ce4] [00982ce8, 00982d56] [00982d5a, 00983418] [00983420, 0098347b] [0098347f, 00983560] [00983564, 00983597] [0098359b, 0098360c] [00983610, 0098365c] [00983660, 00983694]]


undefined4 FUN_00982aa0(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined8 uStack_210;
  int iStack_1f8;
  int *local_1f4;
  int iStack_1f0;
  int *local_1e8;
  uint local_1e4;
  uint local_1e0 [3];
  undefined4 uStack_1d4;
  uint local_1d0;
  uint local_1cc;
  uint *puStack_1c4;
  undefined1 auStack_1c0 [28];
  uint auStack_1a4 [4];
  undefined4 uStack_194;
  uint uStack_190;
  undefined1 local_188;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_16c;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_150;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint auStack_11c [5];
  uint uStack_108;
  undefined1 auStack_100 [228];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00baa142;
  pvStack_14 = ExceptionList;
  local_174 = 0xf;
  local_178 = 0;
  local_188 = 0;
  local_158 = 0xf;
  local_15c = 0;
  local_16c = 0;
  local_13c = 0xf;
  local_140 = 0;
  local_150 = 0;
  local_134 = 0;
  local_130 = 1;
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  local_1e8 = *(int **)(param_1 + 0x2c);
  local_1e4 = *(uint *)(param_1 + 0x30);
  iVar5 = DAT_01258a94;
  if (local_1e8 < (int *)0x1269) {
    iVar5 = DAT_01258a98;
  }
  ExceptionList = &pvStack_14;
  if (iVar5 != 0) {
    uStack_210 = CONCAT44(0x982b5b,(int)uStack_210);
    ExceptionList = &pvStack_14;
    iVar5 = FUN_009c1d40();
    if (iVar5 != 0) {
      uStack_210 = 0xe00e370a8;
      local_1cc = 0xf;
      local_1d0 = 0;
      local_1e0[0] = local_1e0[0] & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 1;
      uStack_210._4_4_ = local_1e0;
      uStack_210._0_4_ = 0x982b99;
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x9c))();
      puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
      if (0xf < local_1d0) {
        uStack_210 = CONCAT44(uStack_210._4_4_,local_1e4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1d0 = 0xf;
      uStack_1d4 = 0;
      local_1e4 = local_1e4 & 0xffffff00;
      uStack_210 = CONCAT44(uStack_210._4_4_,param_3);
      cVar4 = (**(code **)(*piVar6 + 0x94))();
      if (cVar4 == '\0') {
        (**(code **)(*param_3 + 0x44))();
        uStack_210 = CONCAT44(0x982c6a,(int)uStack_210);
        cVar4 = FUN_0040b360();
        if (cVar4 != '\0') {
          puVar7 = *(undefined4 **)(param_1 + 100);
joined_r0x00982c7b:
          if (puVar7 != (undefined4 *)0x0) {
            piVar6 = *(int **)*puVar7;
            uStack_210 = 0x500e0dcc0;
            local_1cc = 0xf;
            local_1d0 = 0;
            local_1e0[0] = local_1e0[0] & 0xffffff00;
            FUN_00409350();
            local_c._0_1_ = 2;
            uStack_210 = CONCAT44(local_1e0,0x982cc5);
            piVar8 = (int *)(**(code **)(*piVar6 + 0x44))();
            local_c._0_1_ = 0;
            uVar3 = (undefined1)local_c;
            local_c._0_1_ = 0;
            if (0xf < local_1cc) {
              uStack_210 = CONCAT44(local_1e0[0],&UNK_00982ce5);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            if (piVar8 != param_3) goto LAB_00982d93;
            uStack_210._4_4_ = &uStack_124;
            uStack_210._0_4_ = 0x982d07;
            (**(code **)(**(int **)(*(int *)(param_1 + 0x24) + 0x58) + 0x4c))();
            uStack_210._0_4_ = 5;
            local_1d0 = 0xf;
            uStack_1d4 = 0;
            local_1e4 = local_1e4 & 0xffffff00;
            FUN_00409350();
            puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
            uStack_210 = CONCAT44(uStack_210._4_4_,&local_1e4);
            (**(code **)(*piVar6 + 0x44))();
            local_c._0_1_ = 0;
            if (0xf < local_1cc) {
              uStack_210 = CONCAT44(local_1e0[0],&UNK_00982d57);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_1cc = 0xf;
            local_1d0 = 0;
            local_1e0[0] = local_1e0[0] & 0xffffff00;
            uStack_210 = CONCAT44(&puStack_1c4,&local_1e8);
            cVar4 = FUN_009e0c90(uStack_124,uStack_120);
            uVar3 = (undefined1)local_c;
            if (cVar4 == '\0') goto LAB_00982d93;
            uStack_210 = CONCAT44(0x982dbc,(int)uStack_210);
            FUN_007ba080();
            uStack_210 = 0xffffffff00000000;
            local_c._0_1_ = 4;
            FUN_00408ed0();
            auStack_11c[0] = auStack_1a4[0];
            uStack_108 = uStack_190;
joined_r0x0098364e:
            local_c._0_1_ = 0;
            if (0xf < uStack_108) {
              local_c._0_1_ = 0;
              uStack_210 = CONCAT44(auStack_11c[0],&UNK_0098365d);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          goto LAB_00983660;
        }
        uStack_210 = CONCAT44(0x982df8,(int)uStack_210);
        (**(code **)(*param_3 + 0x44))();
        uStack_210 = CONCAT44(0x982e02,(int)uStack_210);
        cVar4 = FUN_0040b360();
        if (cVar4 == '\0') {
          uStack_210 = CONCAT44(0x982e13,(int)uStack_210);
          (**(code **)(*param_3 + 0x44))();
          uStack_210 = CONCAT44(0x982e1d,(int)uStack_210);
          cVar4 = FUN_0040b360();
          if (cVar4 == '\0') {
            uStack_210 = CONCAT44(0x982e2e,(int)uStack_210);
            (**(code **)(*param_3 + 0x44))();
            uStack_210 = CONCAT44(0x982e38,(int)uStack_210);
            cVar4 = FUN_0040b360();
            if (cVar4 == '\0') {
              uStack_210 = CONCAT44(0x982e82,(int)uStack_210);
              (**(code **)(*param_3 + 0x44))();
              uStack_210 = CONCAT44(0x982e8c,(int)uStack_210);
              cVar4 = FUN_0040b360();
              if (cVar4 == '\0') {
                uStack_210 = CONCAT44(0x982e9d,(int)uStack_210);
                (**(code **)(*param_3 + 0x44))();
                uStack_210 = CONCAT44(0x982ea7,(int)uStack_210);
                cVar4 = FUN_0040b360();
                if (cVar4 == '\0') {
                  uStack_210 = CONCAT44(0x982eb8,(int)uStack_210);
                  (**(code **)(*param_3 + 0x44))();
                  uStack_210 = CONCAT44(0x982ec2,(int)uStack_210);
                  cVar4 = FUN_0040b360();
                  if (cVar4 == '\0') {
                    uStack_210 = CONCAT44(0x982ed3,(int)uStack_210);
                    (**(code **)(*param_3 + 0x44))();
                    uStack_210 = CONCAT44(0x982edd,(int)uStack_210);
                    cVar4 = FUN_0040b360();
                    if (cVar4 == '\0') {
                      uStack_210 = CONCAT44(0x982eee,(int)uStack_210);
                      (**(code **)(*param_3 + 0x44))();
                      uStack_210 = CONCAT44(0x982ef8,(int)uStack_210);
                      cVar4 = FUN_0040b360();
                      if (cVar4 == '\0') {
                        uStack_210 = CONCAT44(0x982f09,(int)uStack_210);
                        (**(code **)(*param_3 + 0x44))();
                        uStack_210 = CONCAT44(0x982f13,(int)uStack_210);
                        cVar4 = FUN_0040b360();
                        if (cVar4 == '\0') {
                          uStack_210 = CONCAT44(0x982f24,(int)uStack_210);
                          (**(code **)(*param_3 + 0x44))();
                          uStack_210 = CONCAT44(0x982f2e,(int)uStack_210);
                          cVar4 = FUN_0040b360();
                          if (cVar4 == '\0') {
                            uStack_210 = CONCAT44(0x983135,(int)uStack_210);
                            (**(code **)(*param_3 + 0x44))();
                            uStack_210 = CONCAT44(0x98313f,(int)uStack_210);
                            cVar4 = FUN_0040b360();
                            if (cVar4 == '\0') {
                              uStack_210 = CONCAT44(0x9831bc,(int)uStack_210);
                              (**(code **)(*param_3 + 0x44))();
                              uStack_210 = CONCAT44(0x9831c6,(int)uStack_210);
                              cVar4 = FUN_0040b360();
                              if (cVar4 == '\0') {
                                uStack_210 = CONCAT44(0x983243,(int)uStack_210);
                                (**(code **)(*param_3 + 0x44))();
                                uStack_210 = CONCAT44(0x98324d,(int)uStack_210);
                                cVar4 = FUN_0040b360();
                                if (cVar4 == '\0') {
                                  uStack_210 = CONCAT44(0x9832c9,(int)uStack_210);
                                  (**(code **)(*param_3 + 0x44))();
                                  uStack_210 = CONCAT44(0x9832d3,(int)uStack_210);
                                  cVar4 = FUN_0040b360();
                                  if (cVar4 == '\0') {
                                    uStack_210 = CONCAT44(0x983350,(int)uStack_210);
                                    (**(code **)(*param_3 + 0x44))();
                                    uStack_210 = CONCAT44(0x98335a,(int)uStack_210);
                                    cVar4 = FUN_0040b360();
                                    if (cVar4 != '\0') {
                                      uStack_210 = CONCAT44(auStack_1c0,0x98336f);
                                      FUN_0095c450();
                                      uStack_210 = 0xffffffff00000000;
                                      local_c._0_1_ = 0x1d;
                                      FUN_00408ed0();
                                      local_c._0_1_ = 0;
                                      uStack_210 = CONCAT44(0x983397,(int)uStack_210);
                                      FUN_00408ad0();
                                      uStack_210 = CONCAT44(auStack_1c0,
                                                            *(undefined4 *)(param_1 + 0x28));
                                      FUN_0095c710();
                                      uStack_210 = 0xffffffff00000000;
                                      local_c._0_1_ = 0x1e;
                                      FUN_00408ed0();
                                      local_c._0_1_ = 0;
                                      uStack_210 = CONCAT44(0x9833cd,(int)uStack_210);
                                      FUN_00408ad0();
                                    }
                                  }
                                  else {
                                    uStack_210 = CONCAT44(auStack_1c0,0x9832e4);
                                    FUN_0095bdf0();
                                    uStack_210 = 0xffffffff00000000;
                                    local_c._0_1_ = 0x1b;
                                    FUN_00408ed0();
                                    local_c._0_1_ = 0;
                                    uStack_210 = CONCAT44(0x98330c,(int)uStack_210);
                                    FUN_00408ad0();
                                    uStack_210 = CONCAT44(auStack_1c0,
                                                          *(undefined4 *)(param_1 + 0x28));
                                    FUN_0095c0b0();
                                    uStack_210 = 0xffffffff00000000;
                                    local_c._0_1_ = 0x1c;
                                    FUN_00408ed0();
                                    local_c._0_1_ = 0;
                                    uStack_210 = CONCAT44(0x983342,(int)uStack_210);
                                    FUN_00408ad0();
                                  }
                                }
                                else {
                                  uStack_210 = CONCAT44(auStack_1c0,0x98325e);
                                  FUN_00964d80();
                                  uStack_210 = 0xffffffff00000000;
                                  local_c._0_1_ = 0x19;
                                  FUN_00408ed0();
                                  local_c._0_1_ = 0;
                                  uStack_210 = CONCAT44(0x983286,(int)uStack_210);
                                  FUN_00408ad0();
                                  uStack_210 = CONCAT44(0x983295,(int)uStack_210);
                                  FUN_00965080();
                                  uStack_210 = 0xffffffff00000000;
                                  local_c._0_1_ = 0x1a;
                                  FUN_00408ed0();
                                  local_c._0_1_ = 0;
                                  uStack_210 = CONCAT44(0x9832bb,(int)uStack_210);
                                  FUN_00408ad0();
                                }
                              }
                              else {
                                uStack_210 = CONCAT44(auStack_1c0,0x9831d7);
                                FUN_009648e0();
                                uStack_210 = 0xffffffff00000000;
                                local_c._0_1_ = 0x17;
                                FUN_00408ed0();
                                local_c._0_1_ = 0;
                                uStack_210 = CONCAT44(0x9831ff,(int)uStack_210);
                                FUN_00408ad0();
                                uStack_210 = CONCAT44(auStack_1c0,*(undefined4 *)(param_1 + 0x28));
                                FUN_00964b70();
                                uStack_210 = 0xffffffff00000000;
                                local_c._0_1_ = 0x18;
                                FUN_00408ed0();
                                local_c._0_1_ = 0;
                                uStack_210 = CONCAT44(0x983235,(int)uStack_210);
                                FUN_00408ad0();
                              }
                            }
                            else {
                              uStack_210 = CONCAT44(auStack_1c0,0x983150);
                              FUN_009644e0();
                              uStack_210 = 0xffffffff00000000;
                              local_c._0_1_ = 0x15;
                              FUN_00408ed0();
                              local_c._0_1_ = 0;
                              uStack_210 = CONCAT44(0x983178,(int)uStack_210);
                              FUN_00408ad0();
                              uStack_210 = CONCAT44(auStack_1c0,*(undefined4 *)(param_1 + 0x28));
                              FUN_00964770();
                              uStack_210 = 0xffffffff00000000;
                              local_c._0_1_ = 0x16;
                              FUN_00408ed0();
                              local_c._0_1_ = 0;
                              uStack_210 = CONCAT44(0x9831ae,(int)uStack_210);
                              FUN_00408ad0();
                            }
                          }
                          else {
                            uStack_210 = CONCAT44(*(undefined4 *)(param_1 + 0x28),0x982f43);
                            FUN_009659f0();
                            uStack_210 = CONCAT44(0x982f54,(int)uStack_210);
                            FUN_009885d0();
                            local_c._0_1_ = 0xb;
                            uStack_210 = CONCAT44(0x982f82,(int)uStack_210);
                            FUN_009885d0();
                            local_c._0_1_ = 0xc;
                            uStack_210 = CONCAT44(0x982f98,(int)uStack_210);
                            FUN_009885d0();
                            local_c._0_1_ = 0xd;
                            local_1e8 = (int *)&uStack_210;
                            uVar9 = FUN_00988bb0(auStack_1c0,4);
                            uStack_210 = CONCAT44(auStack_1a4,local_1e0);
                            local_c._0_1_ = 0xe;
                            local_1e8 = (int *)FUN_009a8ee0();
                            local_c._0_1_ = 0xf;
                            uStack_210 = CONCAT44(0x982fec,(int)uStack_210);
                            iVar5 = FUN_00475500();
                            uStack_210 = *(undefined8 *)(iVar5 + 0x74);
                            FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
                            local_c._0_1_ = 0x10;
                            uStack_210 = CONCAT44(auStack_100,0x983032);
                            FUN_00988f20();
                            local_c._0_1_ = 0x11;
                            uStack_210 = CONCAT44(uVar9,0x98304d);
                            FUN_00988f20();
                            local_c._0_1_ = 0x12;
                            uStack_210 = CONCAT44(auStack_11c,0x98306b);
                            FUN_00988f20();
                            uStack_210 = 0xffffffff00000000;
                            local_c._0_1_ = 0x13;
                            FUN_00408ed0();
                            uStack_210 = CONCAT44(0x98308a,(int)uStack_210);
                            FUN_00408ad0();
                            uStack_210 = CONCAT44(0x983096,(int)uStack_210);
                            FUN_00408ad0();
                            uStack_210 = CONCAT44(0x9830a2,(int)uStack_210);
                            FUN_00408ad0();
                            uStack_210 = CONCAT44(0x9830ae,(int)uStack_210);
                            FUN_00408ad0();
                            local_c._0_1_ = 0xe;
                            uStack_210 = CONCAT44(local_1e0,0x9830c0);
                            FUN_009a9740();
                            uStack_210 = CONCAT44(0x9830c9,(int)uStack_210);
                            FUN_00408ad0();
                            uStack_210 = CONCAT44(0x9830d2,(int)uStack_210);
                            FUN_00408ad0();
                            uStack_210 = CONCAT44(0x9830de,(int)uStack_210);
                            FUN_00408ad0();
                            local_c._0_1_ = 0;
                            uStack_210 = CONCAT44(0x9830f1,(int)uStack_210);
                            FUN_00408ad0();
                            uStack_210 = CONCAT44(auStack_1c0,*(undefined4 *)(param_1 + 0x28));
                            FUN_00966af0();
                            uStack_210 = 0xffffffff00000000;
                            local_c._0_1_ = 0x14;
                            FUN_00408ed0();
                            local_c._0_1_ = 0;
                            uStack_210 = CONCAT44(0x983127,(int)uStack_210);
                            FUN_00408ad0();
                          }
                          goto LAB_00983660;
                        }
                      }
                      uStack_210 = CONCAT44(param_2,*(undefined4 *)(param_1 + 0x28));
                      FUN_0095d930();
                      goto LAB_00983670;
                    }
                  }
                  uStack_210 = CONCAT44(param_2,*(undefined4 *)(param_1 + 0x28));
                  FUN_0095d3a0();
                  goto LAB_00983670;
                }
              }
              uStack_210 = CONCAT44(param_2,*(undefined4 *)(param_1 + 0x28));
              FUN_0095ce10();
              goto LAB_00983670;
            }
            uStack_210 = CONCAT44(0x982e4b,(int)uStack_210);
            FUN_0095ead0();
            local_c._0_1_ = 10;
            uStack_210 = CONCAT44(0x982e61,(int)uStack_210);
            FUN_004115d0();
            local_c._0_1_ = 0;
            uStack_210 = CONCAT44(0x982e74,(int)uStack_210);
            FUN_00459820();
            goto LAB_00983660;
          }
        }
        for (puVar1 = *(uint **)(param_1 + 100); puStack_1c4 = puVar1, puVar1 != (uint *)0x0;
            puVar1 = (uint *)puVar1[2]) {
          local_1e8 = (int *)*puVar1;
          piVar8 = (int *)*local_1e8;
          uStack_210 = 0xc00e18f00;
          local_1cc = 0xf;
          local_1d0 = 0;
          local_1e0[0] = local_1e0[0] & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 5;
          uStack_210._4_4_ = local_1e0;
          uStack_210._0_4_ = 0x983462;
          piVar8 = (int *)(**(code **)(*piVar8 + 0x7c))();
          puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
          if (0xf < local_1d0) {
            uStack_210 = CONCAT44(uStack_210._4_4_,local_1e4);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1d0 = 0xf;
          uStack_1d4 = 0;
          local_1e4 = local_1e4 & 0xffffff00;
          uStack_210 = CONCAT44(uStack_210._4_4_,0x983498);
          puVar7 = (undefined4 *)(**(code **)(*piVar8 + 0x2c))();
          piVar8 = (int *)*puVar7;
          iStack_1f0 = -1;
          while (piVar8 != (int *)0x0) {
            iVar5 = *piVar8;
            iStack_1f0 = iStack_1f0 + 1;
            piVar8 = (int *)piVar8[2];
            uStack_210 = 0xc00e18ee0;
            uStack_190 = 0xf;
            uStack_194 = 0;
            auStack_1a4[0] = auStack_1a4[0] & 0xffffff00;
            FUN_00409350();
            local_c = CONCAT31(local_c._1_3_,6);
            local_1f4 = (int *)((uint)piVar6 | 2);
            uStack_210 = CONCAT44(auStack_1a4,0x9834f2);
            piVar10 = (int *)(**(code **)(**(int **)(iVar5 + 0x20) + 0x3c))();
            if (piVar10 == param_3) {
LAB_00983540:
              bVar2 = false;
            }
            else {
              uStack_210 = 0xc00e18ef0;
              local_1cc = 0xf;
              local_1d0 = 0;
              local_1e0[0] = local_1e0[0] & 0xffffff00;
              FUN_00409350();
              local_c = 7;
              local_1f4 = (int *)((uint)piVar6 | 6);
              uStack_210 = CONCAT44(local_1e0,0x983536);
              piVar6 = (int *)(**(code **)(**(int **)(iVar5 + 0x20) + 0x44))();
              bVar2 = true;
              if (piVar6 == param_3) goto LAB_00983540;
            }
            if (((uint)local_1f4 & 4) != 0) {
              local_1f4 = (int *)((uint)local_1f4 & 0xfffffffb);
              if (0xf < local_1cc) {
                uStack_210 = CONCAT44(local_1e0[0],&UNK_00983561);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_1cc = 0xf;
              local_1d0 = 0;
              local_1e0[0] = local_1e0[0] & 0xffffff00;
            }
            local_c._0_1_ = 0;
            local_c._1_3_ = 0;
            if ((((uint)local_1f4 & 2) != 0) &&
               (local_1f4 = (int *)((uint)local_1f4 & 0xfffffffd), 0xf < uStack_190)) {
              uStack_210 = CONCAT44(auStack_1a4[0],&UNK_00983598);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            puVar1 = puStack_1c4;
            piVar6 = local_1f4;
            if (!bVar2) {
              uStack_210 = CONCAT44(0x9835d7,(int)uStack_210);
              FUN_007ba030();
              uStack_210 = 0xffffffff00000000;
              local_c._0_1_ = 8;
              FUN_00408ed0();
              local_c._0_1_ = 0;
              if (0xf < uStack_108) {
                uStack_210 = CONCAT44(auStack_11c[0],&UNK_0098360d);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_210 = CONCAT44(iStack_1f0,0x983627);
              FUN_007ba000();
              uStack_210 = 0xffffffff00000000;
              local_c._0_1_ = 9;
              FUN_00408ed0();
              goto joined_r0x0098364e;
            }
          }
        }
      }
      else {
        puVar7 = (undefined4 *)(**(code **)(*(int *)(iStack_1f8 + 0x74) + 0x2c))();
        puVar1 = (uint *)*puVar7;
        while (puVar1 != (uint *)0x0) {
          local_1e8 = (int *)*puVar1;
          puVar1 = (uint *)puVar1[2];
          uStack_210 = CONCAT44(param_3,0x982c15);
          cVar4 = (**(code **)(local_1e8[7] + 0x58))();
          if (cVar4 != '\0') {
            uStack_210 = CONCAT44(param_3,param_2);
            (**(code **)(*local_1e8 + 0x30))();
            FUN_00459820();
            ExceptionList = pvStack_1c;
            return param_2;
          }
        }
      }
    }
  }
LAB_00983660:
  uStack_210 = CONCAT44(param_2,0x983670);
  FUN_0040c830();
LAB_00983670:
  uStack_210 = CONCAT44(0x98367c,(int)uStack_210);
  FUN_00459820();
  ExceptionList = pvStack_14;
  return param_2;
LAB_00982d93:
  local_c._0_1_ = uVar3;
  puVar7 = (undefined4 *)puVar7[2];
  goto joined_r0x00982c7b;
}

