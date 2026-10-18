// FUN_00af2740 @ 00af2740 body=[[00af2740, 00af2f33]]


void FUN_00af2740(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  uint in_ECX;
  char *pcVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_134 [43];
  undefined1 uStack_109;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int local_100;
  int iStack_fc;
  uint local_f8;
  int *local_f4;
  int *local_ec;
  int local_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  undefined1 *puStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_94;
  char cStack_90;
  uint uStack_8c;
  uint local_84;
  void *pvStack_54;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b38624;
  local_4c = ExceptionList;
  local_84 = DAT_00ef259c ^ (uint)auStack_134;
  ExceptionList = &local_4c;
  local_e0 = *(undefined4 *)(param_2 + 4);
  piVar1 = *(int **)(param_2 + 0x1c);
  local_a8 = *(float *)(param_2 + 0x10);
  local_e8 = param_2;
  local_ac = *(float *)(param_2 + 0x14);
  local_ec = param_1;
  local_f8 = in_ECX;
  local_f4 = piVar1;
  (**(code **)(*param_1 + 8))(&local_100,4,DAT_00ef259c ^ (uint)&stack0xfffffec0);
  if (piVar1 == (int *)0x1) {
    uVar2 = (undefined1)uStack_108;
    uVar3 = uStack_108._1_1_;
    uStack_108._0_2_ = CONCAT11(uStack_108._2_1_,uStack_108._3_1_);
    uStack_108 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_108));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("- Motion Event Table:");
    FUN_00b15e80();
  }
  puStack_c4 = (undefined1 *)0x0;
  uStack_c0 = 0;
  iStack_bc = 0;
  iStack_d4 = 0;
  iStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 1;
  iStack_e4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 1;
  local_4c._1_3_ = 0;
  uVar4 = local_4c._1_3_;
  local_4c._0_1_ = 2;
  local_4c._1_3_ = 0;
  local_ec = (int *)0x0;
  if (uStack_108 != 0) {
    iStack_b8 = local_e8 + 0x14;
    do {
      (**(code **)(*local_f4 + 8))(&uStack_9c,0x10);
      iVar7 = uStack_104;
      pcVar6 = (char *)FUN_00aee020();
      pcVar9 = pcVar6;
      do {
        cVar5 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar5 != '\0');
      FUN_00b137d0(pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
      uVar11 = uStack_108;
      if (iVar7 == 1) {
        uVar2 = (undefined1)uStack_a4;
        uVar3 = uStack_a4._1_1_;
        uStack_a4._0_2_ = CONCAT11(uStack_a4._2_1_,uStack_a4._3_1_);
        uStack_a4._0_3_ = CONCAT12(uVar3,(undefined2)uStack_a4);
        uStack_a4 = CONCAT13(uVar2,(undefined3)uStack_a4);
        uVar2 = (undefined1)uStack_a0;
        uVar3 = uStack_a0._1_1_;
        uStack_a0._0_2_ = CONCAT11(uStack_a0._2_1_,uStack_a0._3_1_);
        uStack_a0 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_a0));
        uVar2 = (undefined1)uStack_9c;
        uVar3 = uStack_9c._1_1_;
        uStack_9c._0_2_ = CONCAT11(uStack_9c._2_1_,uStack_9c._3_1_);
        uStack_9c = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_9c));
      }
      if (*(char *)(uStack_108 + 0xc) != '\0') {
        FUN_00b15e80();
        FUN_00b15e80("   + Name       = %s");
        FUN_00b15e80("   + Num events = %d",uStack_a4);
        FUN_00b15e80("   + Num types  = %d",uStack_a0);
        FUN_00b15e80("   + Num params = %d",uStack_9c);
        FUN_00b15e80("   + Enabled    = %d",uStack_98);
      }
      FUN_00b00b20();
      FUN_00b00b20();
      if (*(char *)(uVar11 + 0xc) != '\0') {
        FUN_00b15e80();
      }
      uVar11 = 0;
      if (uStack_a0 != 0) {
        do {
          pcVar6 = (char *)FUN_00aee020();
          pcVar9 = pcVar6;
          do {
            cVar5 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar5 != '\0');
          FUN_00b137d0(pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
          if (*(char *)(uStack_108 + 0xc) != '\0') {
            FUN_00b15e80();
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uStack_a0);
      }
      if (*(char *)(uStack_108 + 0xc) != '\0') {
        FUN_00b15e80();
      }
      uVar11 = 0;
      if (uStack_9c != 0) {
        do {
          pcVar6 = (char *)FUN_00aee020();
          pcVar9 = pcVar6;
          do {
            cVar5 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar5 != '\0');
          FUN_00b137d0(pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
          if (*(char *)(uStack_108 + 0xc) != '\0') {
            FUN_00b15e80();
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uStack_9c);
      }
      uStack_109 = 0;
      if (((iStack_b8 != 0) && (*(char *)(iStack_b8 + 2) != '\0')) ||
         ((iStack_bc != 0 && (*(char *)(iStack_bc + 2) != '\0')))) {
        uStack_109 = 1;
      }
      local_f8 = (*(code *)PTR_FUN_00f01b08)(0x2c,0x134,4,0,0);
      local_4c._0_1_ = 3;
      if (local_f8 == 0) {
        iVar7 = 0;
      }
      else {
        puVar10 = puStack_c4;
        if (puStack_c4 == (undefined1 *)0x0) {
          puVar10 = &DAT_00ded94d;
        }
        iVar7 = FUN_00b0f7e0(puVar10,local_e8);
      }
      *(bool *)(iVar7 + 0x28) = cStack_90 != '\0';
      local_4c._0_1_ = 2;
      FUN_00b0fa60(uStack_9c);
      FUN_00b0fa80(uStack_94);
      FUN_00b10660(iVar7);
      if (*(char *)(local_100 + 0xc) != '\0') {
        FUN_00b15e80("   + Motion Events:");
      }
      iVar12 = iStack_d4;
      iVar7 = iStack_fc;
      local_f8 = 0;
      if (uStack_9c != 0) {
        do {
          (**(code **)(*local_f4 + 8))(&local_ac,0x10);
          if (iVar7 == 1) {
            uVar2 = (undefined1)uStack_a4;
            uVar3 = uStack_a4._1_1_;
            uStack_a4._0_2_ = CONCAT11(uStack_a4._2_1_,uStack_a4._3_1_);
            uStack_a4._0_3_ = CONCAT12(uVar3,(undefined2)uStack_a4);
            uStack_a4 = CONCAT13(uVar2,(undefined3)uStack_a4);
            uStack_a0._0_2_ = CONCAT11((undefined1)uStack_a0,uStack_a0._1_1_);
            uVar2 = (undefined1)local_ac;
            uVar3 = local_ac._1_1_;
            local_ac._0_2_ = CONCAT11(local_ac._2_1_,local_ac._3_1_);
            local_ac = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)local_ac));
            uVar2 = (undefined1)local_a8;
            uVar3 = local_a8._1_1_;
            local_a8._0_2_ = CONCAT11(local_a8._2_1_,local_a8._3_1_);
            local_a8 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)local_a8));
          }
          if (*(char *)(local_100 + 0xc) != '\0') {
            puVar10 = *(undefined1 **)(iStack_e4 + (uStack_a0 & 0xffff) * 0xc);
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = &DAT_00ded94d;
            }
            puVar8 = *(undefined1 **)(iVar12 + uStack_a4 * 0xc);
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &DAT_00ded94d;
            }
            FUN_00b15e80("     [%d] StartTime = %f  -  EndTime = %f  -  Type = \'%s\'  -  Param = \'%s\'"
                         ,local_f8,(double)local_ac,(double)local_a8,puVar8,puVar10);
          }
          if (uStack_104._3_1_ != '\0') {
            puVar10 = *(undefined1 **)(iVar12 + uStack_a4 * 0xc);
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = &DAT_00ded94d;
            }
            cVar5 = FUN_00ae69b0(puVar10);
            if (cVar5 == '\0') {
              puVar10 = *(undefined1 **)(iVar12 + uStack_a4 * 0xc);
              if (puVar10 == (undefined1 *)0x0) {
                puVar10 = &DAT_00ded94d;
              }
              FUN_00ae6b00(puVar10,0xffffffff);
              if (*(char *)(local_100 + 0xc) != '\0') {
                FUN_00b15e10();
              }
            }
          }
          puVar10 = *(undefined1 **)(iStack_e4 + (uStack_a0 & 0xffff) * 0xc);
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = &DAT_00ded94d;
          }
          puVar8 = *(undefined1 **)(iVar12 + uStack_a4 * 0xc);
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_00ded94d;
          }
          FUN_00b0fbd0(local_ac,local_a8,puVar8,puVar10);
          local_f8 = local_f8 + 1;
        } while (local_f8 < uStack_9c);
      }
      local_ec = (int *)((int)local_ec + 1);
      uVar4 = local_4c._1_3_;
    } while (local_ec < uStack_108);
  }
  local_4c._1_3_ = uVar4;
  iVar12 = iStack_d0;
  local_4c = (void *)CONCAT31(local_4c._1_3_,1);
  for (iVar7 = local_e0; iVar7 != 0; iVar7 = iVar7 + -1) {
    FUN_00b13650();
  }
  if (iStack_e4 != 0) {
    (*(code *)PTR__free_00f01b10)(iStack_e4);
  }
  local_4c = (void *)((uint)local_4c & 0xffffff00);
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    FUN_00b13650();
  }
  if (iStack_d4 != 0) {
    (*(code *)PTR__free_00f01b10)(iStack_d4);
  }
  local_4c = (void *)0xffffffff;
  FUN_00b13650();
  ExceptionList = pvStack_54;
  __security_check_cookie(uStack_8c ^ (uint)&stack0xfffffec4);
  return;
}

