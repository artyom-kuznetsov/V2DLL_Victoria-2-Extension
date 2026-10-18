// FUN_00afb2c0 @ 00afb2c0 body=[[00afb2c0, 00afb63c] [00afb640, 00afb8cb] [00afb8d0, 00afbcea]]


/* WARNING: Removing unreachable block (ram,0x00afb65d) */
/* WARNING: Removing unreachable block (ram,0x00afbb80) */

void FUN_00afb2c0(int *param_1,int param_2)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  undefined1 *puVar11;
  float fVar12;
  float unaff_EBP;
  int iVar13;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  int *piStack_74;
  undefined1 *puStack_70;
  int *local_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 local_5c;
  undefined **local_58;
  int *local_54;
  void *pvStack_50;
  size_t sStack_4c;
  undefined4 uStack_48;
  void *pvStack_44;
  size_t sStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b389ac;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)&uStack_84;
  ExceptionList = &local_c;
  local_5c = *(undefined4 *)(param_2 + 0x1c);
  local_6c = param_1;
  local_54 = (int *)param_2;
  (**(code **)(*param_1 + 8))(&local_30,0x10,DAT_00ef259c ^ (uint)&stack0xffffff6c);
  pcVar6 = (char *)FUN_00aee020();
  pvStack_50 = (void *)0x0;
  sStack_4c = 0;
  uStack_48 = 0;
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_00b13660((int)pcVar7 - (int)(pcVar6 + 1),0);
    if (pvStack_50 != (void *)0x0) {
      FID_conflict__memcpy(pvStack_50,pcVar6,sStack_4c);
    }
  }
  local_c = (void *)0x0;
  pcVar6 = (char *)FUN_00aee020();
  pvStack_44 = (void *)0x0;
  sStack_40 = 0;
  uStack_3c = 0;
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_00b13660((int)pcVar7 - (int)(pcVar6 + 1),0);
    if (pvStack_44 != (void *)0x0) {
      FID_conflict__memcpy(pvStack_44,pcVar6,sStack_40);
    }
  }
  iVar3 = iStack_60;
  local_c._0_1_ = 1;
  if (iStack_64 == 1) {
    uVar4 = (undefined1)uStack_2c;
    uVar5 = uStack_2c._1_1_;
    uStack_2c._0_2_ = CONCAT11(uStack_2c._2_1_,uStack_2c._3_1_);
    uStack_2c = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_2c));
    uVar4 = (undefined1)local_30;
    uVar5 = local_30._1_1_;
    local_30._0_2_ = CONCAT11(local_30._2_1_,local_30._3_1_);
    local_30 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)local_30));
    uVar4 = (undefined1)uStack_34;
    uVar5 = uStack_34._1_1_;
    uStack_34._0_2_ = CONCAT11(uStack_34._2_1_,uStack_34._3_1_);
    uStack_34 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_34));
    uVar4 = (undefined1)uStack_38;
    uVar5 = uStack_38._1_1_;
    uStack_38._0_2_ = CONCAT11(uStack_38._2_1_,uStack_38._3_1_);
    uStack_38 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_38));
  }
  if (*(char *)(iStack_60 + 0xc) != '\0') {
    FUN_00b15e80("- Material name = \'%s\'");
    FUN_00b15e80("  + Effect file       = \'%s\'");
    FUN_00b15e80("  + Num int32 params  = %d");
    FUN_00b15e80("  + Num float params  = %d",uStack_34);
    FUN_00b15e80("  + Num color params  = %d",local_30);
    FUN_00b15e80("  + Num bitmap params = %d",uStack_2c);
  }
  uStack_78 = (*(code *)PTR_FUN_00f01b08)(0x70,0xc9,4,0,0);
  local_c._0_1_ = 2;
  if (uStack_78 != 0) {
    FUN_00b118b0();
  }
  local_c._0_1_ = 1;
  local_58 = &PTR_FUN_00e3fb28;
  local_54 = (int *)0x0;
  FUN_00ad3250();
  local_c = (void *)CONCAT31(local_c._1_3_,3);
  if (local_54 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (**(code **)(*local_54 + 0x10))();
  }
  FUN_00ad8a20();
  uVar8 = FUN_00b157e0();
  *(undefined4 *)(iVar13 + 0x68) = uVar8;
  if (*(char *)(iVar3 + 0xc) != '\0') {
    FUN_00b15e80();
  }
  uStack_78 = 0;
  if (uStack_38 != 0) {
    do {
      iVar3 = iStack_64;
      (**(code **)(*piStack_74 + 8))(&stack0xffffff74);
      if (iVar3 == 1) {
        unaff_EBP = (float)CONCAT13(SUB41(unaff_EBP,0),
                                    CONCAT12((char)((uint)unaff_EBP >> 8),
                                             CONCAT11((char)((uint)unaff_EBP >> 0x10),
                                                      (char)((uint)unaff_EBP >> 0x18))));
      }
      pcVar6 = (char *)FUN_00aee020();
      uStack_84 = 0.0;
      uStack_80 = 0.0;
      if (pcVar6 != (char *)0x0) {
        pcVar7 = pcVar6 + 1;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00b13660((int)pcVar6 - (int)pcVar7,0);
      }
      local_c = (void *)CONCAT31(local_c._1_3_,4);
      if (*(char *)(iStack_60 + 0xc) != '\0') {
        FUN_00b15e80();
      }
      fVar9 = (float)FUN_00b157e0();
      uVar10 = *(int *)(iVar13 + 0x4c) + 1;
      *(uint *)(iVar13 + 0x4c) = uVar10;
      if (*(uint *)(iVar13 + 0x50) < uVar10) {
        FUN_00ae6430();
      }
      pfVar1 = (float *)(*(int *)(iVar13 + 0x48) + -8 + *(int *)(iVar13 + 0x4c) * 8);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = unaff_EBP;
        pfVar1[1] = fVar9;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,3);
      FUN_00b13650();
      uStack_78 = uStack_78 + 1;
    } while (uStack_78 < uStack_38);
  }
  uStack_78 = 0;
  if (uStack_34 != 0) {
    do {
      (**(code **)(*piStack_74 + 8))(&stack0xffffff74);
      if (iStack_64 == 1) {
        unaff_EBP = (float)CONCAT13(SUB41(unaff_EBP,0),
                                    CONCAT12((char)((uint)unaff_EBP >> 8),
                                             CONCAT11((char)((uint)unaff_EBP >> 0x10),
                                                      (char)((uint)unaff_EBP >> 0x18))));
      }
      pcVar6 = (char *)FUN_00aee020();
      puStack_70 = (undefined1 *)0x0;
      local_6c = (int *)0x0;
      uStack_68 = 0;
      if (pcVar6 != (char *)0x0) {
        pcVar7 = pcVar6;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        FUN_00b13660((int)pcVar7 - (int)(pcVar6 + 1),0);
        if (puStack_70 != (undefined1 *)0x0) {
          FID_conflict__memcpy(puStack_70,pcVar6,(size_t)local_6c);
        }
      }
      local_c = (void *)CONCAT31(local_c._1_3_,5);
      if (*(char *)(iStack_60 + 0xc) != '\0') {
        puVar11 = puStack_70;
        if (puStack_70 == (undefined1 *)0x0) {
          puVar11 = &DAT_00ded94d;
        }
        FUN_00b15e80("    + float %s = %f",puVar11,(double)unaff_EBP);
      }
      fVar9 = (float)FUN_00b157e0();
      iVar3 = *(int *)(iVar13 + 0x3c);
      uVar10 = iVar3 + 1;
      *(uint *)(iVar13 + 0x3c) = uVar10;
      if (*(uint *)(iVar13 + 0x40) < uVar10) {
        iVar3 = iVar3 + 2;
        if (iVar3 == 0) {
          *(undefined4 *)(iVar13 + 0x3c) = 0;
          *(undefined4 *)(iVar13 + 0x40) = 0;
          if (*(int *)(iVar13 + 0x38) != 0) {
            (*(code *)PTR__free_00f01b10)();
            *(undefined4 *)(iVar13 + 0x38) = 0;
          }
        }
        else {
          if (*(int *)(iVar13 + 0x38) == 0) {
            uVar8 = (*(code *)PTR_FUN_00f01b08)(iVar3 * 8,*(undefined2 *)(iVar13 + 0x44),4,2,0);
          }
          else {
            uVar8 = (*(code *)PTR_FUN_00f01b0c)();
          }
          *(undefined4 *)(iVar13 + 0x38) = uVar8;
          *(int *)(iVar13 + 0x40) = iVar3;
        }
      }
      pfVar1 = (float *)(*(int *)(iVar13 + 0x38) + -8 + *(int *)(iVar13 + 0x3c) * 8);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = unaff_EBP;
        pfVar1[1] = fVar9;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,3);
      FUN_00b13650();
      uStack_78 = uStack_78 + 1;
    } while (uStack_78 < uStack_34);
  }
  uStack_78 = 0;
  if (local_30 != 0) {
    do {
      (**(code **)(*piStack_74 + 8))(&fStack_28);
      iVar3 = iStack_64;
      pcVar6 = (char *)FUN_00aee020();
      puStack_70 = (undefined1 *)0x0;
      local_6c = (int *)0x0;
      uStack_68 = 0;
      if (pcVar6 != (char *)0x0) {
        pcVar7 = pcVar6;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        FUN_00b13660((int)pcVar7 - (int)(pcVar6 + 1),0);
        if (puStack_70 != (undefined1 *)0x0) {
          FID_conflict__memcpy(puStack_70,pcVar6,(size_t)local_6c);
        }
      }
      uStack_84 = fStack_24;
      local_c = (void *)CONCAT31(local_c._1_3_,6);
      uStack_80 = fStack_20;
      uStack_7c = fStack_1c;
      fVar9 = fStack_28;
      if (iVar3 == 1) {
        uStack_84._3_1_ = (undefined1)((uint)fStack_24 >> 0x18);
        fVar9 = (float)CONCAT13(SUB41(fStack_28,0),
                                CONCAT12((char)((uint)fStack_28 >> 8),
                                         CONCAT11((char)((uint)fStack_28 >> 0x10),
                                                  (char)((uint)fStack_28 >> 0x18))));
        uStack_84._0_1_ = SUB41(fStack_24,0);
        uVar4 = (undefined1)uStack_84;
        uStack_84._2_1_ = (undefined1)((uint)fStack_24 >> 0x10);
        uStack_84._1_1_ = (undefined1)((uint)fStack_24 >> 8);
        uVar5 = uStack_84._1_1_;
        uStack_84._0_2_ = CONCAT11(uStack_84._2_1_,uStack_84._3_1_);
        uStack_80._3_1_ = (undefined1)((uint)fStack_20 >> 0x18);
        uStack_84 = (float)CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_84));
        uStack_80._0_1_ = SUB41(fStack_20,0);
        uVar4 = (undefined1)uStack_80;
        uStack_80._2_1_ = (undefined1)((uint)fStack_20 >> 0x10);
        uStack_80._1_1_ = (undefined1)((uint)fStack_20 >> 8);
        uVar5 = uStack_80._1_1_;
        uStack_80._0_2_ = CONCAT11(uStack_80._2_1_,uStack_80._3_1_);
        uStack_7c._3_1_ = (undefined1)((uint)fStack_1c >> 0x18);
        uStack_80 = (float)CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_80));
        uStack_7c._0_1_ = SUB41(fStack_1c,0);
        uVar4 = (undefined1)uStack_7c;
        uStack_7c._2_1_ = (undefined1)((uint)fStack_1c >> 0x10);
        uStack_7c._1_1_ = (undefined1)((uint)fStack_1c >> 8);
        uVar5 = uStack_7c._1_1_;
        uStack_7c._0_2_ = CONCAT11(uStack_7c._2_1_,uStack_7c._3_1_);
        uStack_7c = (float)CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_7c));
      }
      if (*(char *)(iStack_60 + 0xc) != '\0') {
        puVar11 = puStack_70;
        if (puStack_70 == (undefined1 *)0x0) {
          puVar11 = &DAT_00ded94d;
        }
        FUN_00b15e80("    + color %s = (%f, %f, %f, %f)",puVar11,(double)fVar9,(double)uStack_84,
                     (double)uStack_80,(double)uStack_7c);
      }
      fVar12 = (float)FUN_00b157e0();
      iVar3 = *(int *)(iVar13 + 0x1c);
      uVar10 = iVar3 + 1;
      *(uint *)(iVar13 + 0x1c) = uVar10;
      if (*(uint *)(iVar13 + 0x20) < uVar10) {
        iVar3 = iVar3 + 2;
        if (iVar3 == 0) {
          *(undefined4 *)(iVar13 + 0x1c) = 0;
          *(undefined4 *)(iVar13 + 0x20) = 0;
          if (*(int *)(iVar13 + 0x18) != 0) {
            (*(code *)PTR__free_00f01b10)();
            *(undefined4 *)(iVar13 + 0x18) = 0;
          }
        }
        else {
          if (*(int *)(iVar13 + 0x18) == 0) {
            uVar8 = (*(code *)PTR_FUN_00f01b08)(iVar3 * 0x14,*(undefined2 *)(iVar13 + 0x24),4,2,0);
          }
          else {
            uVar8 = (*(code *)PTR_FUN_00f01b0c)();
          }
          *(undefined4 *)(iVar13 + 0x18) = uVar8;
          *(int *)(iVar13 + 0x20) = iVar3;
        }
      }
      pfVar1 = (float *)(*(int *)(iVar13 + 0x18) + (*(int *)(iVar13 + 0x1c) * 5 + -5) * 4);
      if (pfVar1 != (float *)0x0) {
        pfVar1[4] = fVar12;
        *pfVar1 = fVar9;
        pfVar1[1] = uStack_84;
        pfVar1[2] = uStack_80;
        pfVar1[3] = uStack_7c;
      }
      local_c = (void *)CONCAT31(local_c._1_3_,3);
      FUN_00b13650();
      uStack_78 = uStack_78 + 1;
    } while (uStack_78 < local_30);
  }
  uVar10 = 0;
  if (uStack_2c != 0) {
    do {
      pcVar6 = (char *)FUN_00aee020();
      uStack_84 = 0.0;
      uStack_80 = 0.0;
      if (pcVar6 != (char *)0x0) {
        pcVar7 = pcVar6 + 1;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00b13660((int)pcVar6 - (int)pcVar7,0);
      }
      local_c = (void *)CONCAT31(local_c._1_3_,7);
      pcVar6 = (char *)FUN_00aee020();
      puStack_70 = (undefined1 *)0x0;
      local_6c = (int *)0x0;
      uStack_68 = 0;
      if (pcVar6 != (char *)0x0) {
        pcVar7 = pcVar6;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        FUN_00b13660((int)pcVar7 - (int)(pcVar6 + 1),0);
        if (puStack_70 != (undefined1 *)0x0) {
          FID_conflict__memcpy(puStack_70,pcVar6,(size_t)local_6c);
        }
      }
      local_c._0_1_ = 8;
      if (*(char *)(iStack_60 + 0xc) != '\0') {
        FUN_00b15e80();
      }
      puVar11 = puStack_70;
      if (puStack_70 == (undefined1 *)0x0) {
        puVar11 = &DAT_00ded94d;
      }
      FUN_00b00d20(&DAT_00ded94d,puVar11);
      local_c._0_1_ = 7;
      FUN_00b13650();
      local_c = (void *)CONCAT31(local_c._1_3_,3);
      FUN_00b13650();
      uVar10 = uVar10 + 1;
    } while (uVar10 < uStack_2c);
  }
  local_c._0_1_ = 1;
  if (local_54 != (int *)0x0) {
    (**(code **)(*local_54 + 8))();
  }
  local_c = (void *)((uint)local_c._1_3_ << 8);
  FUN_00b13650();
  local_c = (void *)0xffffffff;
  FUN_00b13650();
  ExceptionList = pvStack_14;
  __security_check_cookie(uStack_18 ^ (uint)&stack0xffffff74);
  return;
}

