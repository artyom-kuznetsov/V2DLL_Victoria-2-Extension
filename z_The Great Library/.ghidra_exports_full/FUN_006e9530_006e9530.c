// FUN_006e9530 @ 006e9530 body=[[006e9530, 006e96c5] [006e96c9, 006e96fd] [006e9701, 006e972c] [006e9730, 006e9762] [006e9766, 006e97eb] [006e97ef, 006e9813] [006e9817, 006e9852] [006e9856, 006e98ab] [006e98af, 006e99e5] [006e99e9, 006e9a14] [006e9a18, 006e9a4a] [006e9a4e, 006e9abc] [006e9ac0, 006e9b13] [006e9b17, 006e9b6a] [006e9b6e, 006e9d2e] [006e9d30, 006ea025] [006ea029, 006ea03d]]


undefined1 * FUN_006e9530(int *param_1,undefined1 *param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  int local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b7dae9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined2 *)(param_2 + 0x54) = 0;
  *(undefined2 *)(param_2 + 0x56) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_20 = 0xf;
  local_18 = 1;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("input_factory_0",0xf);
  local_8 = 1;
  uVar10 = 3;
  local_18 = 3;
  piVar5 = (int *)(**(code **)(**(int **)((int)param_1 + 0x20) + 0x44))(local_34);
  if (piVar5 == param_3) {
LAB_006e96a2:
    local_11 = '\x01';
  }
  else {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("input_factory_1",0xf);
    local_8 = 2;
    uVar10 = 7;
    local_18 = 7;
    piVar5 = (int *)(**(code **)(**(int **)((int)param_1 + 0x20) + 0x44))(local_54);
    if (piVar5 == param_3) goto LAB_006e96a2;
    uVar10 = 0xf;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350("input_factory_2",0xf);
    local_8 = 3;
    local_18 = 0xf;
    piVar5 = (int *)(**(code **)(**(int **)((int)param_1 + 0x20) + 0x44))(local_74);
    if (piVar5 == param_3) goto LAB_006e96a2;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350("input_factory_3",0xf);
    local_8 = 4;
    uVar10 = 0x1f;
    local_18 = 0x1f;
    piVar5 = (int *)(**(code **)(**(int **)((int)param_1 + 0x20) + 0x44))(local_9c);
    local_11 = '\0';
    if (piVar5 == param_3) goto LAB_006e96a2;
  }
  iVar9 = DAT_012587f0;
  if ((uVar10 & 0x10) != 0) {
    uVar10 = uVar10 & 0xffffffef;
    local_18 = uVar10;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c[0]);
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
  }
  if ((uVar10 & 8) != 0) {
    uVar10 = uVar10 & 0xfffffff7;
    local_18 = uVar10;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
  }
  if ((uVar10 & 4) != 0) {
    uVar10 = uVar10 & 0xfffffffb;
    local_18 = uVar10;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
  }
  local_8 = 0;
  if ((uVar10 & 2) != 0) {
    uVar10 = uVar10 & 0xfffffffd;
    local_18 = uVar10;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  if (local_11 != '\0') {
    piVar5 = param_3 + 5;
    if (0xf < (uint)param_3[10]) {
      piVar5 = (int *)*piVar5;
    }
    iVar6 = FUN_00aaf0c5(piVar5);
    uVar8 = *(undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 4);
    uVar7 = FUN_005659c0(uVar8,local_54);
    local_8 = 5;
    uVar7 = FUN_0042c180(local_34,uVar7);
    local_8._0_1_ = 6;
    FUN_00448aa0(uVar7,0,0xffffffff);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    if (*(int *)((int)param_1 + 0x80) != 0) {
      uVar7 = FUN_006ea0e0(local_34,uVar8,*(int *)((int)param_1 + 0x80));
      local_8 = 7;
      FUN_00448aa0(uVar7,0,0xffffffff);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
    }
    if (*(int *)((int)param_1 + 0x84) != 0) {
      if (*(int *)(param_2 + 0x2c) != 0) {
        FUN_00448740(&DAT_00dee2cc,1);
      }
      uVar7 = FUN_006ea0e0(local_34,uVar8,*(undefined4 *)((int)param_1 + 0x84));
      local_8 = 8;
      FUN_00448aa0(uVar7,0,0xffffffff);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      FUN_00448740(&DAT_00dee2cc,1);
    }
    uVar8 = FUN_006eaed0(local_34,uVar8);
    local_8 = 9;
    FUN_00448aa0(uVar8,0,0xffffffff);
    goto joined_r0x006e98e6;
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("prod_producing_not_total",0x18);
  local_8 = 10;
  uVar11 = uVar10 | 0x20;
  local_18 = uVar11;
  iVar9 = (**(code **)(**(int **)((int)param_1 + 0x20) + 0x44))(local_74);
  if (*(char *)(iVar9 + 0x4f) == '\0') {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("output_factory",0xe);
    local_8 = 0xb;
    uVar11 = uVar10 | 0x60;
    local_18 = uVar11;
    piVar5 = (int *)(**(code **)(**(int **)((int)param_1 + 0x20) + 0x34))(local_54);
    if (piVar5 != param_3) {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("output_total",0xc);
      local_8 = 0xc;
      uVar11 = uVar10 | 0xe0;
      local_18 = uVar11;
      piVar5 = (int *)(**(code **)(**(int **)((int)param_1 + 0x20) + 0x3c))(local_34);
      if (piVar5 != param_3) goto LAB_006e99c6;
    }
    local_11 = '\x01';
  }
  else {
LAB_006e99c6:
    local_11 = '\0';
  }
  iVar9 = DAT_012587f0;
  if ((char)uVar11 < '\0') {
    uVar11 = uVar11 & 0xffffff7f;
    local_18 = uVar11;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar11 = uVar11 & 0xffffffbf;
    local_18 = uVar11;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
  }
  local_8 = 0;
  if ((uVar11 & 0x20) != 0) {
    uVar11 = uVar11 & 0xffffffdf;
    local_18 = uVar11;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
  }
  if (local_11 == '\0') {
    (**(code **)(*param_3 + 0x44))();
    cVar4 = FUN_0040b360();
    if (cVar4 == '\0') {
      (**(code **)(*param_3 + 0x44))();
      cVar4 = FUN_0040b360();
      if (cVar4 == '\0') {
        (**(code **)(*param_3 + 0x44))();
        cVar4 = FUN_0040b360();
        if (cVar4 != '\0') {
LAB_006e9fb7:
          if (*(int *)((int)param_1 + 0x84) == 0) {
            ExceptionList = local_10;
            return param_2;
          }
          uVar8 = FUN_006ea7a0(local_34,*(undefined4 *)((int)param_1 + 0x2c),
                               *(int *)((int)param_1 + 0x84));
          local_8 = 0x12;
          FUN_00448aa0(uVar8,0,0xffffffff);
          FUN_00408ad0();
          ExceptionList = local_10;
          return param_2;
        }
        (**(code **)(*param_3 + 0x44))();
        cVar4 = FUN_0040b360();
        if (cVar4 != '\0') goto LAB_006e9fb7;
        (**(code **)(*param_3 + 0x44))();
        cVar4 = FUN_0040b360();
        if (cVar4 == '\0') {
          FUN_009885d0();
          local_8 = 0x13;
          uVar11 = uVar11 | 0x100;
          local_18 = uVar11;
          piVar5 = (int *)(**(code **)(**(int **)((int)param_1 + 0x20) + 0x34))(local_34);
          bVar2 = false;
          if (piVar5 != param_3) goto LAB_006e9c6a;
        }
        bVar2 = true;
LAB_006e9c6a:
        local_8 = 0;
        if ((uVar11 & 0x100) != 0) {
          local_18 = uVar11 & 0xfffffeff;
          FUN_00408ad0();
        }
        if (!bVar2) {
          ExceptionList = local_10;
          return param_2;
        }
        uVar8 = *(undefined4 *)((int)param_1 + 0x2c);
        cVar4 = FUN_00466e20();
        if (cVar4 != '\0') {
          uVar8 = FUN_005659c0(uVar8,local_54);
          local_8 = 0x14;
          uVar8 = FUN_0042c180(local_34,uVar8);
          local_8._0_1_ = 0x15;
          FUN_00448aa0(uVar8,0,0xffffffff);
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00408ad0();
          piVar5 = (int *)FUN_004de580();
          local_38 = (piVar5[1] - *piVar5) / 0x160;
          if (local_38 < 1) {
            ExceptionList = local_10;
            return param_2;
          }
          param_3 = (int *)0x0;
          do {
            piVar5 = (int *)FUN_004de580();
            iVar9 = *piVar5 + (int)param_3;
            local_7c = iVar9;
            if (*(int *)(iVar9 + 0x80) == *(int *)((int)param_1 + 0x2c)) {
              if (*(int *)(iVar9 + 0x138) == 1) {
                local_80 = FUN_004dad40();
                iVar6 = *(int *)(local_80 + 0x10) - *(int *)(local_80 + 0xc) >> 2;
                local_78 = 0;
                local_58 = iVar6;
                if (0 < iVar6) {
                  do {
                    piVar5 = *(int **)(*(int *)(local_80 + 0xc) + local_78 * 4);
                    if (piVar5[0x4b] == iVar9) {
                      uVar8 = FUN_005659c0(*(undefined4 *)((int)param_1 + 0x2c),local_9c);
                      local_8 = 0x16;
                      uVar7 = (**(code **)(*piVar5 + 0x18))(local_74);
                      local_8._0_1_ = 0x17;
                      uVar8 = FUN_0043ec10(local_54,"FACTORY",uVar7,&DAT_00e0e9ac,uVar8);
                      local_8._0_1_ = 0x18;
                      uVar8 = FUN_00988fa0(uVar8);
                      local_8._0_1_ = 0x19;
                      FUN_00448aa0(uVar8,0,0xffffffff);
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      local_8 = (uint)local_8._1_3_ << 8;
                      FUN_00408ad0();
                      iVar6 = local_58;
                      iVar9 = local_7c;
                    }
                    local_78 = local_78 + 1;
                  } while (local_78 < iVar6);
                }
              }
              else if (*(int *)(iVar9 + 0x138) == 0) {
                uVar8 = FUN_005659c0(*(int *)((int)param_1 + 0x2c),local_74);
                local_8 = 0x1a;
                uVar8 = FUN_0042c180(local_54,uVar8);
                local_8._0_1_ = 0x1b;
                uVar8 = FUN_00988fa0(uVar8);
                local_8._0_1_ = 0x1c;
                FUN_00448aa0(uVar8,0,0xffffffff);
                FUN_00408ad0();
                FUN_00408ad0();
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_00408ad0();
              }
            }
            param_3 = (int *)((int)param_3 + 0x160);
            local_38 = local_38 + -1;
          } while (local_38 != 0);
          ExceptionList = local_10;
          return param_2;
        }
        piVar5 = (int *)FUN_00576f80();
        iVar9 = piVar5[1] - *piVar5 >> 2;
        param_3 = (int *)0x0;
        local_38 = 0;
        if (iVar9 < 1) {
          ExceptionList = local_10;
          return param_2;
        }
        local_58 = *(int *)((int)param_1 + 0x2c);
        param_1 = (int *)*piVar5;
        do {
          piVar5 = (int *)*param_1;
          if (*(int *)(piVar5[0x26] + *(int *)(local_58 + 8) * 4) != 0) break;
          piVar1 = (int *)piVar5[0x32];
          do {
            piVar3 = param_3;
            if (piVar1 == (int *)0x0) break;
            iVar6 = *piVar1;
            piVar1 = (int *)piVar1[2];
            piVar3 = piVar5;
          } while (*(int *)(*(int *)(iVar6 + 0x108) + *(int *)(local_58 + 8) * 4) == 0);
          param_3 = piVar3;
          param_1 = param_1 + 1;
          local_38 = local_38 + 1;
          piVar5 = param_3;
        } while (local_38 < iVar9);
        param_3 = piVar5;
        if (param_3 == (int *)0x0) {
          ExceptionList = local_10;
          return param_2;
        }
        uVar8 = FUN_005659c0(local_58,local_74);
        local_8 = 0x1d;
        uVar7 = (**(code **)(*param_3 + 0x18))(local_54);
        local_8._0_1_ = 0x1e;
        uVar8 = FUN_0043ec10(local_34,&DAT_00dfd13c,uVar7,&DAT_00e0e9ac,uVar8);
        local_8 = CONCAT31(local_8._1_3_,0x1f);
        FUN_00448aa0(uVar8,0,0xffffffff);
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        ExceptionList = local_10;
        return param_2;
      }
    }
    if (*(int *)((int)param_1 + 0x80) == 0) {
      ExceptionList = local_10;
      return param_2;
    }
    uVar8 = FUN_006ea7a0(local_34,*(undefined4 *)((int)param_1 + 0x2c),*(int *)((int)param_1 + 0x80)
                        );
    local_8 = 0x11;
    FUN_00448aa0(uVar8,0,0xffffffff);
  }
  else {
    piVar5 = param_3 + 5;
    if (0xf < (uint)param_3[10]) {
      piVar5 = (int *)*piVar5;
    }
    iVar6 = FUN_00aaf0c5(piVar5);
    uVar8 = *(undefined4 *)(*(int *)(iVar9 + 0xc) + iVar6 * 4);
    uVar7 = FUN_005659c0(uVar8,local_34);
    local_8 = 0xd;
    FUN_00408ed0(uVar7,0,0xffffffff);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    if (*(int *)((int)param_1 + 0x80) != 0) {
      if (*(int *)(param_2 + 0x10) != 0) {
        FUN_00448740(&DAT_00dee2cc,1);
      }
      uVar7 = FUN_006ea7a0(local_34,uVar8,*(undefined4 *)((int)param_1 + 0x80));
      local_8 = 0xe;
      FUN_00448aa0(uVar7,0,0xffffffff);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
    }
    if (*(int *)((int)param_1 + 0x84) != 0) {
      if (*(int *)(param_2 + 0x10) != 0) {
        FUN_00448740(&DAT_00dee2cc,1);
      }
      uVar7 = FUN_006ea7a0(local_34,uVar8,*(undefined4 *)((int)param_1 + 0x84));
      local_8 = 0xf;
      FUN_00448aa0(uVar7,0,0xffffffff);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740(&DAT_00dee2cc,1);
    }
    uVar8 = FUN_006eaed0(local_34,uVar8);
    local_8 = 0x10;
    FUN_00448aa0(uVar8,0,0xffffffff);
  }
joined_r0x006e98e6:
  if (local_20 < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

