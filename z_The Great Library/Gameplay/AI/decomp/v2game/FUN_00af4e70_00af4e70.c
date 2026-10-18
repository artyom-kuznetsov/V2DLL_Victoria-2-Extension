// FUN_00af4e70 @ 00af4e70 body=[[00af4e70, 00af5873]]


void FUN_00af4e70(int *param_1,uint *param_2)

{
  int iVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined **ppuVar15;
  uint *puVar16;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar17;
  int iVar18;
  undefined4 uStack_94;
  uint uStack_90;
  int *piStack_7c;
  undefined **ppuStack_78;
  int *piStack_74;
  uint local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *pvStack_24;
  undefined4 uStack_1c;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b386eb;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)&piStack_7c;
  uStack_90 = DAT_00ef259c ^ (uint)&stack0xffffff74;
  ExceptionList = &local_c;
  uVar17 = param_2[7];
  uVar11 = *param_2;
  pcVar3 = (char *)param_2[3];
  uStack_94 = 0x1c;
  local_70 = uVar17;
  local_68 = pcVar3;
  local_54 = uVar11;
  (**(code **)(*param_1 + 8))();
  if ((char)uStack_28 == '\0') {
    cVar5 = *pcVar3;
  }
  else {
    cVar5 = pcVar3[1];
  }
  if (cVar5 == '\0') {
    iVar18 = (**(code **)(*param_1 + 0x74))();
    (**(code **)(*param_1 + 0x84))(iVar18 + -0x28);
    (**(code **)(*param_1 + 8))(&uStack_28,0xc);
    if (uVar17 == 1) {
      uVar2 = (undefined1)uStack_30;
      uVar4 = uStack_30._1_1_;
      uStack_30._0_2_ = CONCAT11(uStack_30._2_1_,uStack_30._3_1_);
      uStack_30._0_3_ = CONCAT12(uVar4,(undefined2)uStack_30);
      uStack_30 = CONCAT13(uVar2,(undefined3)uStack_30);
      uVar2 = (char)uStack_28;
      uVar4 = uStack_28._1_1_;
      uStack_28._0_2_ = CONCAT11(uStack_28._2_1_,uStack_28._3_1_);
      uStack_28 = CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)uStack_28));
      uVar2 = (undefined1)uStack_2c;
      uVar4 = uStack_2c._1_1_;
      uStack_2c._0_2_ = CONCAT11(uStack_2c._2_1_,uStack_2c._3_1_);
      uStack_2c._0_3_ = CONCAT12(uVar4,(undefined2)uStack_2c);
      uStack_2c = CONCAT13(uVar2,(undefined3)uStack_2c);
    }
    (**(code **)(*param_1 + 0x80))(uStack_2c);
  }
  else {
    if (uVar17 == 1) {
      uVar2 = (undefined1)uStack_40;
      uVar4 = uStack_40._1_1_;
      uStack_40._0_2_ = CONCAT11(uStack_40._2_1_,uStack_40._3_1_);
      uStack_40 = CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)uStack_40));
      uVar2 = (undefined1)uStack_3c;
      uVar4 = uStack_3c._1_1_;
      uStack_3c._0_2_ = CONCAT11(uStack_3c._2_1_,uStack_3c._3_1_);
      uStack_3c._0_3_ = CONCAT12(uVar4,(undefined2)uStack_3c);
      uStack_3c = CONCAT13(uVar2,(undefined3)uStack_3c);
      uVar2 = (undefined1)uStack_30;
      uVar4 = uStack_30._1_1_;
      uStack_30._0_2_ = CONCAT11(uStack_30._2_1_,uStack_30._3_1_);
      uStack_30._0_3_ = CONCAT12(uVar4,(undefined2)uStack_30);
      uStack_30 = CONCAT13(uVar2,(undefined3)uStack_30);
      uVar2 = (undefined1)uStack_2c;
      uVar4 = uStack_2c._1_1_;
      uStack_2c._0_2_ = CONCAT11(uStack_2c._2_1_,uStack_2c._3_1_);
      uStack_2c._0_3_ = CONCAT12(uVar4,(undefined2)uStack_2c);
      uStack_2c = CONCAT13(uVar2,(undefined3)uStack_2c);
      uVar2 = (char)uStack_34;
      uVar4 = uStack_34._1_1_;
      uStack_34._0_2_ = CONCAT11(uStack_34._2_1_,uStack_34._3_1_);
      uStack_34 = CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)uStack_34));
      uVar2 = (char)local_38;
      uVar4 = local_38._1_1_;
      local_38._0_2_ = CONCAT11(local_38._2_1_,local_38._3_1_);
      local_38._0_3_ = CONCAT12(uVar4,(undefined2)local_38);
      local_38 = CONCAT13(uVar2,(undefined3)local_38);
    }
    if ((char)piStack_74[3] != '\0') {
      FUN_00b15e80("- Mesh");
      puVar6 = (undefined4 *)
               FUN_00b15770(*(undefined4 *)
                             (*(int *)(*(int *)(uVar11 + 0x80) + uStack_40 * 4) + 0x10));
      puVar7 = (undefined1 *)*puVar6;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_00ded94d;
      }
      FUN_00b15e80("    + NodeIndex         = %d (%s)",uStack_40,puVar7);
      FUN_00b15e80("    + NumOrgVerts       = %d",uStack_3c);
      FUN_00b15e80("    + NumVerts          = %d",local_38);
      FUN_00b15e80("    + NumIndices        = %d (%d triangles)",uStack_34,uStack_34 / 3);
      FUN_00b15e80("    + NumSubMeshes      = %d",uStack_30);
      FUN_00b15e80("    + Num attrib layers = %d",uStack_2c);
      puVar8 = &DAT_00e17a94;
      if ((char)uStack_28 == '\0') {
        puVar8 = &DAT_00e17a90;
      }
      FUN_00b15e80("    + IsCollisionMesh   = %s",puVar8);
    }
    iVar18 = -1;
    local_70 = (*(code *)PTR_FUN_00f01b08)(0x40,0xca,4,0,0);
    uStack_1c = 0;
    if (local_70 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_00adeb60(uStack_48,uStack_44 / 3,uStack_4c);
    }
    uStack_1c = 0xffffffff;
    ppuStack_78 = &PTR_FUN_00ddd998;
    piStack_74 = (int *)0x0;
    FUN_00ae6710(uVar9);
    piVar14 = piStack_74;
    uStack_1c = 1;
    if ((char)local_38 == '\0') {
      iVar10 = *(int *)(*(int *)(*(int *)(uVar11 + 0x80) + iStack_50 * 4) + 0x1c);
      if (piStack_74 != (int *)0x0) {
        (**(code **)(*piStack_74 + 4))();
      }
      piVar12 = *(int **)(iVar10 + 4);
      *(int **)(iVar10 + 4) = piVar14;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 8))();
      }
    }
    else {
      iVar10 = *(int *)(*(int *)(*(int *)(uVar11 + 0x80) + iStack_50 * 4) + 0x1c);
      if (piStack_74 != (int *)0x0) {
        (**(code **)(*piStack_74 + 4))();
      }
      piVar12 = *(int **)(iVar10 + 0xc);
      *(int **)(iVar10 + 0xc) = piVar14;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 8))();
      }
    }
    uVar17 = uStack_3c;
    if (piVar14 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (**(code **)(*piVar14 + 0x10))();
    }
    if (*(uint *)(iVar10 + 0x38) < uVar17) {
      FUN_00aeb6c0(uVar17);
    }
    uStack_90 = 0;
    if (uVar17 != 0) {
      do {
        (**(code **)(*param_1 + 8))(&uStack_34,0xc);
        if (uStack_90 == 1) {
          uVar2 = (undefined1)uStack_3c;
          uVar4 = uStack_3c._1_1_;
          uStack_3c._0_2_ = CONCAT11(uStack_3c._2_1_,uStack_3c._3_1_);
          uStack_3c._0_3_ = CONCAT12(uVar4,(undefined2)uStack_3c);
          uStack_3c = CONCAT13(uVar2,(undefined3)uStack_3c);
          uVar2 = (char)local_38;
          uVar4 = local_38._1_1_;
          local_38._0_2_ = CONCAT11(local_38._2_1_,local_38._3_1_);
          local_38._0_3_ = CONCAT12(uVar4,(undefined2)local_38);
          local_38 = CONCAT13(uVar2,(undefined3)local_38);
        }
        if (*(char *)(uVar17 + 0xc) != '\0') {
          FUN_00b15e80("   - Layer #%d:",&local_38);
          uVar9 = FUN_00ad9a50(uStack_3c);
          FUN_00b15e80("     + Type ID:         %d (%s)",uStack_3c,uVar9);
          FUN_00b15e80("     + Attribute size:  %d bytes",local_38);
          puVar8 = &DAT_00e17a94;
          if ((char)uStack_34 == '\0') {
            puVar8 = &DAT_00e17a90;
          }
          FUN_00b15e80("     + Keep originals:  %s",puVar8);
          puVar8 = &DAT_00e17a94;
          if (uStack_34._1_1_ == '\0') {
            puVar8 = &DAT_00e17a90;
          }
          FUN_00b15e80("     + Is scale factor: %s",puVar8);
        }
        iVar10 = iStack_50;
        uVar11 = 0;
        if (*(uint *)(unaff_ESI + 0x20) != 0) {
          puVar16 = *(uint **)(unaff_ESI + 0x1c);
          do {
            if (*puVar16 == uStack_3c) {
              if (uVar11 != 0xffffffff) {
                if (*(char *)(uVar17 + 0xc) != '\0') {
                  FUN_00b15e80(
                              "     + Skipping layer data as this was specified in the actor import settings..."
                              );
                }
                (**(code **)(*param_1 + 0x80))(iVar10 * local_38);
                goto LAB_00af547e;
              }
              break;
            }
            uVar11 = uVar11 + 1;
            puVar16 = puVar16 + 1;
          } while (uVar11 < *(uint *)(unaff_ESI + 0x20));
        }
        ppuStack_78 = (undefined **)(*(code *)PTR_FUN_00f01b08)(0x1c,0xcc,4,0,0,0xffffffff);
        pvStack_24._0_1_ = 2;
        if (ppuStack_78 == (undefined **)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)FUN_00b07970(iVar10,uStack_3c,local_38,(char)uStack_34 != '\0');
        }
        pvStack_24 = (void *)CONCAT31(pvStack_24._1_3_,1);
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 0x10))();
        }
        FUN_00adeb30(piVar12);
        iVar10 = *param_1;
        uVar9 = FUN_00b07720(0);
        uVar9 = (**(code **)(*piVar12 + 0x14))(uVar9);
        (**(code **)(iVar10 + 8))(uVar9);
        cVar5 = (**(code **)(uStack_90 + 0x2c))(piVar12,&local_38);
        if (cVar5 == '\0') {
          uVar9 = FUN_00ad9a50(uStack_44);
          FUN_00b15da0("   + Don\'t know how to endian and/or coordinate system convert layer with type %d (%s)"
                       ,uStack_44,uVar9);
        }
        (**(code **)(*piVar12 + 0x18))();
LAB_00af547e:
        uStack_90 = uStack_90 + 1;
      } while (uStack_90 < uVar17);
    }
    piStack_7c = (int *)0x0;
    iVar10 = 0;
    if (piVar14 == (int *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = (**(code **)(*piVar14 + 0x10))();
    }
    uVar17 = uStack_40;
    local_68 = *(char **)(iVar13 + 0x10);
    local_70 = uStack_40;
    if (piVar14 == (int *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = (**(code **)(*piVar14 + 0x10))();
    }
    uVar11 = *(uint *)(iVar13 + 4);
    if (((uVar17 != uVar11) && (*(uint *)(iVar13 + 4) = uVar17, uVar11 < uVar17)) &&
       (*(uint *)(iVar13 + 8) < uVar17)) {
      FUN_00aeb6c0(uVar17);
    }
    uStack_90 = 0;
    if (uVar17 != 0) {
      do {
        (**(code **)(*param_1 + 8))(&uStack_60,0x10);
        if (uStack_90 == 1) {
          uVar2 = (undefined1)uStack_60;
          uVar4 = uStack_60._1_1_;
          uStack_60._0_2_ = CONCAT11(uStack_60._2_1_,uStack_60._3_1_);
          uStack_60 = CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)uStack_60));
          uVar2 = (undefined1)uStack_64;
          uVar4 = uStack_64._1_1_;
          uStack_64._0_2_ = CONCAT11(uStack_64._2_1_,uStack_64._3_1_);
          uStack_64 = CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)uStack_64));
          uVar2 = (undefined1)local_68;
          uVar4 = local_68._1_1_;
          local_68._0_2_ = CONCAT11(local_68._2_1_,local_68._3_1_);
          local_68 = (char *)CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)local_68));
          uVar2 = (undefined1)uStack_5c;
          uVar4 = uStack_5c._1_1_;
          uStack_5c._0_2_ = CONCAT11(uStack_5c._2_1_,uStack_5c._3_1_);
          uStack_5c = CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)uStack_5c));
        }
        if (*(char *)(iVar10 + 0xc) != '\0') {
          FUN_00b15e80("   - SubMesh #%d:",&local_38);
          iVar13 = *(int *)piStack_74[0x32] + uStack_60 * 8;
          if (*(int *)(iVar13 + 4) != 0) {
            (**(code **)(**(int **)(iVar13 + 4) + 0x10))();
          }
          uVar9 = FUN_00adf8e0();
          FUN_00b15e80("     + Material:       %d (%s)",uStack_60,uVar9);
          FUN_00b15e80("     + Num vertices:   %d",uStack_64);
          FUN_00b15e80("     + Num indices:    %d (%d triangles)",local_68,(uint)local_68 / 3);
          FUN_00b15e80("     + Num bones:      %d",uStack_5c);
        }
        local_6c = (*(code *)PTR_FUN_00f01b08)(0x28,0xca,4,0,0,0xffffffff);
        pvStack_24._0_1_ = 3;
        if (local_6c == 0) {
          piVar14 = (int *)0x0;
        }
        else {
          if (piStack_7c == (int *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)(*piStack_7c + 0x10))();
          }
          piVar14 = (int *)FUN_00b07530(uVar9,uStack_94,unaff_EBP,uStack_64,local_68,uStack_60,
                                        uStack_5c);
        }
        pvStack_24 = (void *)CONCAT31(pvStack_24._1_3_,1);
        if (piStack_7c == (int *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)(**(code **)(*piStack_7c + 0x10))();
        }
        *(int **)(*piVar12 + (int)&local_38 * 4) = piVar14;
        iVar13 = (*(code *)PTR_FUN_00f01b08)((int)local_68 * 4,600,4,0,0,0);
        (**(code **)(*param_1 + 8))(iVar13,(int)local_68 * 4);
        if ((&local_38 == (undefined4 *)0x1) && (local_70 != 0)) {
          puVar7 = (undefined1 *)(iVar13 + 2);
          uVar17 = local_70;
          do {
            uVar2 = puVar7[-2];
            puVar7[-2] = puVar7[1];
            puVar7[1] = uVar2;
            uVar2 = puVar7[-1];
            puVar7[-1] = *puVar7;
            *puVar7 = uVar2;
            puVar7 = puVar7 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        uVar17 = 0;
        if (local_70 != 0) {
          ppuVar15 = ppuStack_78 + iVar10;
          do {
            iVar1 = uVar17 * 4;
            uVar17 = uVar17 + 1;
            *ppuVar15 = (undefined *)(*(int *)(iVar13 + iVar1) + iVar18);
            ppuVar15 = ppuVar15 + 1;
          } while (uVar17 < local_70);
        }
        (*(code *)PTR__free_00f01b10)(iVar13);
        uVar17 = 0;
        if (local_54 != 0) {
          do {
            (**(code **)(*param_1 + 8))(&uStack_94,4);
            if (unaff_ESI == 1) {
              uVar2 = (undefined1)uStack_94;
              uVar4 = uStack_94._1_1_;
              uStack_94._0_2_ = CONCAT11(uStack_94._2_1_,uStack_94._3_1_);
              uStack_94 = CONCAT13(uVar2,CONCAT12(uVar4,(undefined2)uStack_94));
            }
            *(undefined4 *)(*piVar14 + uVar17 * 4) = uStack_94;
            uVar17 = uVar17 + 1;
          } while (uVar17 < local_54);
        }
        iVar10 = iVar10 + uStack_5c;
        piStack_7c = (int *)((int)piStack_7c + uStack_60);
        uStack_90 = uStack_90 + 1;
      } while (uStack_90 < local_70);
    }
    piVar14 = piStack_74;
    if (piStack_74 != (int *)0x0) {
      (**(code **)(*piStack_74 + 0x10))();
    }
    iVar18 = FUN_00add410(2,0);
    if ((iVar18 == 0) && (*(char *)(unaff_EBX + 10) != '\0')) {
      if (*(char *)(unaff_EBP + 0xc) != '\0') {
        FUN_00b15e80("    + Generating tangents...");
      }
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0x10))();
      }
      FUN_00adec30(0);
    }
    uStack_1c = 0xffffffff;
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 8))();
    }
  }
  ExceptionList = pvStack_24;
  __security_check_cookie(uStack_28 ^ (uint)&uStack_94);
  return;
}

