// FUN_00afbcf0 @ 00afbcf0 body=[[00afbcf0, 00afc1bc] [00afc1c0, 00afc769] [00afc770, 00afccf1]]


/* WARNING: Removing unreachable block (ram,0x00afc962) */
/* WARNING: Removing unreachable block (ram,0x00afc51d) */
/* WARNING: Removing unreachable block (ram,0x00afc245) */
/* WARNING: Removing unreachable block (ram,0x00afc38f) */
/* WARNING: Removing unreachable block (ram,0x00afc7cf) */
/* WARNING: Removing unreachable block (ram,0x00afcbdc) */

void FUN_00afbcf0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 uStack_9c;
  int iStack_98;
  char cStack_91;
  int *local_90;
  int iStack_8c;
  int *local_88;
  undefined1 *local_84;
  int local_80;
  void *pvStack_7c;
  size_t sStack_78;
  undefined4 uStack_74;
  void *pvStack_70;
  size_t sStack_6c;
  undefined4 uStack_68;
  void *pvStack_64;
  size_t sStack_60;
  undefined4 uStack_5c;
  undefined **ppuStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b38a4f;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)&uStack_9c;
  ExceptionList = &local_c;
  local_90 = *(int **)(param_2 + 0x1c);
  local_88 = param_1;
  local_80 = param_2;
  (**(code **)(*param_1 + 8))(&local_28,0x18,DAT_00ef259c ^ (uint)&stack0xffffff54);
  pcVar5 = (char *)FUN_00aee020();
  pvStack_64 = (void *)0x0;
  sStack_60 = 0;
  uStack_5c = 0;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar6 - (int)(pcVar5 + 1),0);
    if (pvStack_64 != (void *)0x0) {
      FID_conflict__memcpy(pvStack_64,pcVar5,sStack_60);
    }
  }
  local_c = (void *)0x0;
  pcVar5 = (char *)FUN_00aee020();
  pvStack_70 = (void *)0x0;
  sStack_6c = 0;
  uStack_68 = 0;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar6 - (int)(pcVar5 + 1),0);
    if (pvStack_70 != (void *)0x0) {
      FID_conflict__memcpy(pvStack_70,pcVar5,sStack_6c);
    }
  }
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  pcVar5 = (char *)FUN_00aee020();
  pvStack_7c = (void *)0x0;
  sStack_78 = 0;
  uStack_74 = 0;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar6 - (int)(pcVar5 + 1),0);
    if (pvStack_7c != (void *)0x0) {
      FID_conflict__memcpy(pvStack_7c,pcVar5,sStack_78);
    }
  }
  iVar2 = iStack_8c;
  local_c._0_1_ = 2;
  if (iStack_98 == 1) {
    uVar3 = (undefined1)uStack_1c;
    uVar4 = uStack_1c._1_1_;
    uStack_1c._0_2_ = CONCAT11(uStack_1c._2_1_,uStack_1c._3_1_);
    uStack_1c = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_1c));
    uVar3 = (undefined1)local_28;
    uVar4 = local_28._1_1_;
    local_28._0_2_ = CONCAT11(local_28._2_1_,local_28._3_1_);
    local_28 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)local_28));
    uVar3 = (undefined1)uStack_2c;
    uVar4 = uStack_2c._1_1_;
    uStack_2c._0_2_ = CONCAT11(uStack_2c._2_1_,uStack_2c._3_1_);
    uStack_2c = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_2c));
    uVar3 = (undefined1)uStack_30;
    uVar4 = uStack_30._1_1_;
    uStack_30._0_2_ = CONCAT11(uStack_30._2_1_,uStack_30._3_1_);
    uStack_30 = (undefined1 *)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_30));
    uVar3 = (undefined1)uStack_24;
    uVar4 = uStack_24._1_1_;
    uStack_24._0_2_ = CONCAT11(uStack_24._2_1_,uStack_24._3_1_);
    uStack_24 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_24));
    uVar3 = (undefined1)uStack_20;
    uVar4 = uStack_20._1_1_;
    uStack_20._0_2_ = CONCAT11(uStack_20._2_1_,uStack_20._3_1_);
    uStack_20 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_20));
  }
  if (*(char *)(iStack_8c + 0xc) != '\0') {
    FUN_00b15e80("- Material name = \'%s\'");
    FUN_00b15e80("  + Effect file       = \'%s\'");
    FUN_00b15e80("  + Shader technique  = \'%s\'");
    FUN_00b15e80("  + Num int32 params  = %d");
    FUN_00b15e80("  + Num float params  = %d",uStack_2c);
    FUN_00b15e80("  + Num color params  = %d",local_28);
    FUN_00b15e80("  + Num bool params = %d",uStack_24);
    FUN_00b15e80("  + Num vector3 params = %d",uStack_20);
    FUN_00b15e80("  + Num bitmap params = %d",uStack_1c);
  }
  uStack_50 = (undefined1 *)(*(code *)PTR_FUN_00f01b08)(0x70,0xc9,4,0,0);
  local_c._0_1_ = 3;
  if (uStack_50 != (undefined1 *)0x0) {
    FUN_00b118b0();
  }
  local_c._0_1_ = 2;
  ppuStack_58 = &PTR_FUN_00e3fb28;
  piStack_54 = (int *)0x0;
  FUN_00ad3250();
  local_c = (void *)CONCAT31(local_c._1_3_,4);
  if (piStack_54 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (**(code **)(*piStack_54 + 0x10))();
  }
  FUN_00ad8a20();
  uVar7 = FUN_00b157e0();
  *(undefined4 *)(iVar13 + 0x68) = uVar7;
  uVar7 = FUN_00b157e0();
  *(undefined4 *)(iVar13 + 0x6c) = uVar7;
  if (*(char *)(iVar2 + 0xc) != '\0') {
    FUN_00b15e80();
  }
  local_84 = (undefined1 *)0x0;
  if (uStack_30 != (undefined1 *)0x0) {
    do {
      iVar2 = iStack_98;
      (**(code **)(*local_90 + 8))(&uStack_50);
      if (iVar2 == 1) {
        uVar3 = (undefined1)uStack_50;
        uVar4 = uStack_50._1_1_;
        uStack_50._0_2_ = CONCAT11(uStack_50._2_1_,uStack_50._3_1_);
        uStack_50._0_3_ = CONCAT12(uVar4,(undefined2)uStack_50);
        uStack_50 = (undefined1 *)CONCAT13(uVar3,(undefined3)uStack_50);
      }
      pcVar5 = (char *)FUN_00aee020();
      uStack_9c = 0;
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00b13660((int)pcVar5 - (int)pcVar6,0);
      }
      local_c = (void *)CONCAT31(local_c._1_3_,5);
      if (*(char *)(iStack_8c + 0xc) != '\0') {
        FUN_00b15e80();
      }
      puVar12 = uStack_50;
      uVar7 = FUN_00b157e0();
      uVar8 = *(int *)(iVar13 + 0x4c) + 1;
      *(uint *)(iVar13 + 0x4c) = uVar8;
      if (*(uint *)(iVar13 + 0x50) < uVar8) {
        FUN_00ae6430();
      }
      puVar11 = (undefined4 *)(*(int *)(iVar13 + 0x48) + -8 + *(int *)(iVar13 + 0x4c) * 8);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = puVar12;
        puVar11[1] = uVar7;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,4);
      FUN_00b13650();
      local_84 = local_84 + 1;
    } while (local_84 < uStack_30);
  }
  uVar8 = 0;
  if (uStack_2c != 0) {
    do {
      (**(code **)(*local_90 + 8))(&uStack_50);
      if (iStack_98 == 1) {
        uVar3 = (undefined1)uStack_50;
        uVar4 = uStack_50._1_1_;
        uStack_50._0_2_ = CONCAT11(uStack_50._2_1_,uStack_50._3_1_);
        uStack_50._0_3_ = CONCAT12(uVar4,(undefined2)uStack_50);
        uStack_50 = (undefined1 *)CONCAT13(uVar3,(undefined3)uStack_50);
      }
      pcVar5 = (char *)FUN_00aee020();
      uStack_9c = 0;
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00b13660((int)pcVar5 - (int)pcVar6,0);
      }
      local_c = (void *)CONCAT31(local_c._1_3_,6);
      if (*(char *)(iStack_8c + 0xc) != '\0') {
        FUN_00b15e80("    + float %s = %f",&DAT_00ded94d,(double)(float)uStack_50);
      }
      local_84 = uStack_50;
      uVar7 = FUN_00b157e0();
      iVar2 = *(int *)(iVar13 + 0x3c);
      uVar9 = iVar2 + 1;
      *(uint *)(iVar13 + 0x3c) = uVar9;
      if (*(uint *)(iVar13 + 0x40) < uVar9) {
        iVar2 = iVar2 + 2;
        if (iVar2 == 0) {
          *(undefined4 *)(iVar13 + 0x3c) = 0;
          *(undefined4 *)(iVar13 + 0x40) = 0;
          if (*(int *)(iVar13 + 0x38) != 0) {
            (*(code *)PTR__free_00f01b10)();
            *(undefined4 *)(iVar13 + 0x38) = 0;
          }
        }
        else {
          if (*(int *)(iVar13 + 0x38) == 0) {
            uVar10 = (*(code *)PTR_FUN_00f01b08)(iVar2 * 8,*(undefined2 *)(iVar13 + 0x44),4,2,0);
          }
          else {
            uVar10 = (*(code *)PTR_FUN_00f01b0c)();
          }
          *(undefined4 *)(iVar13 + 0x38) = uVar10;
          *(int *)(iVar13 + 0x40) = iVar2;
        }
      }
      puVar11 = (undefined4 *)(*(int *)(iVar13 + 0x38) + -8 + *(int *)(iVar13 + 0x3c) * 8);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = local_84;
        puVar11[1] = uVar7;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,4);
      FUN_00b13650();
      uVar8 = uVar8 + 1;
    } while (uVar8 < uStack_2c);
  }
  local_84 = (undefined1 *)0x0;
  if (local_28 != 0) {
    do {
      iVar2 = iStack_98;
      (**(code **)(*local_90 + 8))(&uStack_50);
      pcVar5 = (char *)FUN_00aee020();
      uStack_9c = 0;
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00b13660((int)pcVar5 - (int)pcVar6,0);
      }
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      local_c = (void *)CONCAT31(local_c._1_3_,7);
      uStack_38 = uStack_48;
      uStack_34 = fStack_44;
      if (iVar2 == 1) {
        uStack_40._3_1_ = (undefined1)((uint)uStack_50 >> 0x18);
        uStack_40._0_1_ = SUB41(uStack_50,0);
        uVar3 = (undefined1)uStack_40;
        uStack_40._2_1_ = (undefined1)((uint)uStack_50 >> 0x10);
        uStack_40._1_1_ = (undefined1)((uint)uStack_50 >> 8);
        uVar4 = uStack_40._1_1_;
        uStack_40._0_2_ = CONCAT11(uStack_40._2_1_,uStack_40._3_1_);
        uStack_3c._3_1_ = (undefined1)((uint)uStack_4c >> 0x18);
        uStack_40 = (undefined1 *)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_40));
        uStack_3c._0_1_ = SUB41(uStack_4c,0);
        uVar3 = (undefined1)uStack_3c;
        uStack_3c._2_1_ = (undefined1)((uint)uStack_4c >> 0x10);
        uStack_3c._1_1_ = (undefined1)((uint)uStack_4c >> 8);
        uVar4 = uStack_3c._1_1_;
        uStack_3c._0_2_ = CONCAT11(uStack_3c._2_1_,uStack_3c._3_1_);
        uStack_38._3_1_ = (undefined1)((uint)uStack_48 >> 0x18);
        uStack_3c = (float)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_3c));
        uStack_38._0_1_ = SUB41(uStack_48,0);
        uVar3 = (undefined1)uStack_38;
        uStack_38._2_1_ = (undefined1)((uint)uStack_48 >> 0x10);
        uStack_38._1_1_ = (undefined1)((uint)uStack_48 >> 8);
        uVar4 = uStack_38._1_1_;
        uStack_38._0_2_ = CONCAT11(uStack_38._2_1_,uStack_38._3_1_);
        uStack_34._3_1_ = (undefined1)((uint)fStack_44 >> 0x18);
        uStack_38 = (float)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_38));
        uStack_34._0_1_ = SUB41(fStack_44,0);
        uVar3 = (undefined1)uStack_34;
        uStack_34._2_1_ = (undefined1)((uint)fStack_44 >> 0x10);
        uStack_34._1_1_ = (undefined1)((uint)fStack_44 >> 8);
        uVar4 = uStack_34._1_1_;
        uStack_34._0_2_ = CONCAT11(uStack_34._2_1_,uStack_34._3_1_);
        uStack_34 = (float)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_34));
      }
      if (*(char *)(iStack_8c + 0xc) != '\0') {
        FUN_00b15e80("    + color %s = (%f, %f, %f, %f)",&DAT_00ded94d,(double)(float)uStack_40,
                     (double)uStack_3c,(double)uStack_38,(double)uStack_34);
      }
      uVar7 = FUN_00b157e0();
      iVar2 = *(int *)(iVar13 + 0x1c);
      uVar8 = iVar2 + 1;
      *(uint *)(iVar13 + 0x1c) = uVar8;
      if (*(uint *)(iVar13 + 0x20) < uVar8) {
        iVar2 = iVar2 + 2;
        if (iVar2 == 0) {
          *(undefined4 *)(iVar13 + 0x1c) = 0;
          *(undefined4 *)(iVar13 + 0x20) = 0;
          if (*(int *)(iVar13 + 0x18) != 0) {
            (*(code *)PTR__free_00f01b10)();
            *(undefined4 *)(iVar13 + 0x18) = 0;
          }
        }
        else {
          if (*(int *)(iVar13 + 0x18) == 0) {
            uVar10 = (*(code *)PTR_FUN_00f01b08)(iVar2 * 0x14,*(undefined2 *)(iVar13 + 0x24),4,2,0);
          }
          else {
            uVar10 = (*(code *)PTR_FUN_00f01b0c)();
          }
          *(undefined4 *)(iVar13 + 0x18) = uVar10;
          *(int *)(iVar13 + 0x20) = iVar2;
        }
      }
      puVar11 = (undefined4 *)(*(int *)(iVar13 + 0x18) + (*(int *)(iVar13 + 0x1c) * 5 + -5) * 4);
      if (puVar11 != (undefined4 *)0x0) {
        puVar11[4] = uVar7;
        *puVar11 = uStack_40;
        puVar11[1] = uStack_3c;
        puVar11[2] = uStack_38;
        puVar11[3] = uStack_34;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,4);
      FUN_00b13650();
      local_84 = (undefined1 *)((int)local_84 + 1);
    } while (local_84 < local_28);
  }
  local_84 = (undefined1 *)0x0;
  if (uStack_24 != 0) {
    do {
      (**(code **)(*local_90 + 8))(&cStack_91);
      pcVar5 = (char *)FUN_00aee020();
      uStack_9c = 0;
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00b13660((int)pcVar5 - (int)pcVar6,0);
      }
      local_c = (void *)CONCAT31(local_c._1_3_,8);
      if (*(char *)(iStack_8c + 0xc) != '\0') {
        FUN_00b15e80();
      }
      uStack_50 = (undefined1 *)CONCAT31(uStack_50._1_3_,cStack_91 != '\0');
      uVar7 = FUN_00b157e0();
      iVar2 = *(int *)(iVar13 + 0x5c);
      uVar8 = iVar2 + 1;
      *(uint *)(iVar13 + 0x5c) = uVar8;
      if (*(uint *)(iVar13 + 0x60) < uVar8) {
        iVar2 = iVar2 + 2;
        if (iVar2 == 0) {
          *(undefined4 *)(iVar13 + 0x5c) = 0;
          *(undefined4 *)(iVar13 + 0x60) = 0;
          if (*(int *)(iVar13 + 0x58) != 0) {
            (*(code *)PTR__free_00f01b10)();
            *(undefined4 *)(iVar13 + 0x58) = 0;
          }
        }
        else {
          if (*(int *)(iVar13 + 0x58) == 0) {
            uVar10 = (*(code *)PTR_FUN_00f01b08)(iVar2 * 8,*(undefined2 *)(iVar13 + 100),4,2,0);
          }
          else {
            uVar10 = (*(code *)PTR_FUN_00f01b0c)();
          }
          *(undefined4 *)(iVar13 + 0x58) = uVar10;
          *(int *)(iVar13 + 0x60) = iVar2;
        }
      }
      puVar11 = (undefined4 *)(*(int *)(iVar13 + 0x58) + -8 + *(int *)(iVar13 + 0x5c) * 8);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = uStack_50;
        puVar11[1] = uVar7;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,4);
      FUN_00b13650();
      local_84 = (undefined1 *)((int)local_84 + 1);
    } while (local_84 < uStack_24);
  }
  local_84 = (undefined1 *)0x0;
  if (uStack_20 != 0) {
    do {
      (**(code **)(*local_90 + 8))(&uStack_40);
      iVar2 = iStack_98;
      pcVar5 = (char *)FUN_00aee020();
      uStack_9c = 0;
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00b13660((int)pcVar5 - (int)pcVar6,0);
      }
      uStack_50 = uStack_40;
      uStack_4c = uStack_3c;
      local_c = (void *)CONCAT31(local_c._1_3_,9);
      uStack_48 = uStack_38;
      if (iVar2 == 1) {
        uStack_50._3_1_ = (undefined1)((uint)uStack_40 >> 0x18);
        uStack_50._0_1_ = SUB41(uStack_40,0);
        uVar3 = (undefined1)uStack_50;
        uStack_50._2_1_ = (undefined1)((uint)uStack_40 >> 0x10);
        uStack_50._1_1_ = (undefined1)((uint)uStack_40 >> 8);
        uVar4 = uStack_50._1_1_;
        uStack_50._0_2_ = CONCAT11(uStack_50._2_1_,uStack_50._3_1_);
        uStack_4c._3_1_ = (undefined1)((uint)uStack_3c >> 0x18);
        uStack_50._0_3_ = CONCAT12(uVar4,(undefined2)uStack_50);
        uStack_50 = (undefined1 *)CONCAT13(uVar3,(undefined3)uStack_50);
        uStack_4c._0_1_ = SUB41(uStack_3c,0);
        uVar3 = (undefined1)uStack_4c;
        uStack_4c._2_1_ = (undefined1)((uint)uStack_3c >> 0x10);
        uStack_4c._1_1_ = (undefined1)((uint)uStack_3c >> 8);
        uVar4 = uStack_4c._1_1_;
        uStack_4c._0_2_ = CONCAT11(uStack_4c._2_1_,uStack_4c._3_1_);
        uStack_48._3_1_ = (undefined1)((uint)uStack_38 >> 0x18);
        uStack_4c = (float)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_4c));
        uStack_48._0_1_ = SUB41(uStack_38,0);
        uVar3 = (undefined1)uStack_48;
        uStack_48._2_1_ = (undefined1)((uint)uStack_38 >> 0x10);
        uStack_48._1_1_ = (undefined1)((uint)uStack_38 >> 8);
        uVar4 = uStack_48._1_1_;
        uStack_48._0_2_ = CONCAT11(uStack_48._2_1_,uStack_48._3_1_);
        uStack_48 = (float)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_48));
      }
      if (*(char *)(iStack_8c + 0xc) != '\0') {
        FUN_00b15e80("    + vector3 %s = (%f, %f, %f)",&DAT_00ded94d,(double)(float)uStack_50,
                     (double)uStack_4c,(double)uStack_48);
      }
      uVar7 = FUN_00b157e0();
      iVar2 = *(int *)(iVar13 + 0x2c);
      uVar8 = iVar2 + 1;
      *(uint *)(iVar13 + 0x2c) = uVar8;
      if (*(uint *)(iVar13 + 0x30) < uVar8) {
        iVar2 = iVar2 + 2;
        if (iVar2 == 0) {
          *(undefined4 *)(iVar13 + 0x2c) = 0;
          *(undefined4 *)(iVar13 + 0x30) = 0;
          if (*(int *)(iVar13 + 0x28) != 0) {
            (*(code *)PTR__free_00f01b10)();
            *(undefined4 *)(iVar13 + 0x28) = 0;
          }
        }
        else {
          if (*(int *)(iVar13 + 0x28) == 0) {
            uVar10 = (*(code *)PTR_FUN_00f01b08)(iVar2 * 0x10,*(undefined2 *)(iVar13 + 0x34),4,2,0);
          }
          else {
            uVar10 = (*(code *)PTR_FUN_00f01b0c)();
          }
          *(undefined4 *)(iVar13 + 0x28) = uVar10;
          *(int *)(iVar13 + 0x30) = iVar2;
        }
      }
      puVar11 = (undefined4 *)((*(int *)(iVar13 + 0x2c) + -1) * 0x10 + *(int *)(iVar13 + 0x28));
      if (puVar11 != (undefined4 *)0x0) {
        puVar11[3] = uVar7;
        *puVar11 = uStack_50;
        puVar11[1] = uStack_4c;
        puVar11[2] = uStack_48;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,4);
      FUN_00b13650();
      local_84 = (undefined1 *)((int)local_84 + 1);
    } while (local_84 < uStack_20);
  }
  uVar8 = 0;
  if (uStack_1c != 0) {
    do {
      pcVar5 = (char *)FUN_00aee020();
      uStack_50 = (undefined1 *)0x0;
      uStack_4c = 0.0;
      uStack_48 = 0.0;
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00b13660((int)pcVar6 - (int)(pcVar5 + 1),0);
        if (uStack_50 != (undefined1 *)0x0) {
          FID_conflict__memcpy(uStack_50,pcVar5,(size_t)uStack_4c);
        }
      }
      local_c = (void *)CONCAT31(local_c._1_3_,10);
      pcVar5 = (char *)FUN_00aee020();
      uStack_9c = 0;
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00b13660((int)pcVar5 - (int)pcVar6,0);
      }
      local_c._0_1_ = 0xb;
      if (*(char *)(iStack_8c + 0xc) != '\0') {
        FUN_00b15e80();
      }
      puVar12 = uStack_50;
      if (uStack_50 == (undefined1 *)0x0) {
        puVar12 = &DAT_00ded94d;
      }
      FUN_00b00d20(puVar12,&DAT_00ded94d);
      local_c._0_1_ = 10;
      FUN_00b13650();
      local_c = (void *)CONCAT31(local_c._1_3_,4);
      FUN_00b13650();
      uVar8 = uVar8 + 1;
    } while (uVar8 < uStack_1c);
  }
  local_c._0_1_ = 2;
  if (piStack_54 != (int *)0x0) {
    (**(code **)(*piStack_54 + 8))();
  }
  local_c._0_1_ = 1;
  FUN_00b13650();
  local_c = (void *)((uint)local_c._1_3_ << 8);
  FUN_00b13650();
  local_c = (void *)0xffffffff;
  FUN_00b13650();
  ExceptionList = pvStack_14;
  __security_check_cookie(uStack_18 ^ (uint)&stack0xffffff5c);
  return;
}

