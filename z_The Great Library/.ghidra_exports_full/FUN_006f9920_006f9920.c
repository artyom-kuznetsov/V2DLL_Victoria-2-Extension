// FUN_006f9920 @ 006f9920 body=[[006f9920, 006f99ac] [006f99b0, 006f9a12] [006f9a16, 006f9a8e] [006f9a92, 006f9ab9] [006f9abd, 006f9b35] [006f9b39, 006f9b60] [006f9b64, 006f9bfc] [006f9c00, 006f9c2a] [006f9c2e, 006f9c89] [006f9c8d, 006f9d0c] [006f9d10, 006f9f1a] [006f9f1e, 006f9f32]]


void FUN_006f9920(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar10;
  uint *puVar11;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  void *local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7d0ce;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = (void *)((uint)local_50 & 0xffffff00);
  FUN_00409350("Build",5);
  local_c = 0;
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(&local_50);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x30);
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_58);
  }
  uStack_44 = 0xf;
  uStack_48 = 0;
  uStack_58 = uStack_58 & 0xffffff00;
  FUN_00409350("Cancel",6);
  pvStack_14 = (void *)0x1;
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(&uStack_58);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x80);
  uStack_1c = 0xffffffff;
  if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_60);
  }
  uStack_4c = 0xf;
  local_50 = (void *)0x0;
  uStack_60 = uStack_60 & 0xffffff00;
  FUN_00409350("PRODUCTIONVIEW_BUILD_DIALOG",0x1b);
  uStack_1c = 2;
  uStack_68 = 0xf;
  uStack_6c = 0;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_00409350("Build",5);
  uStack_1c = CONCAT31(uStack_1c._1_3_,3);
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(&uStack_7c);
  puVar11 = &uStack_64;
  (**(code **)(*piVar5 + 0x78))();
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_84);
  }
  uStack_24 = 0xffffffff;
  uStack_70 = 0xf;
  uStack_74 = 0;
  uStack_84 = uStack_84 & 0xffffff00;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_68);
  }
  uStack_54 = 0xf;
  uStack_58 = 0;
  uStack_68 = uStack_68 & 0xffffff00;
  FUN_00409350("PRODUCTIONVIEW_BUILD_DIALOG",0x1b);
  uStack_24 = 4;
  uStack_70 = 0xf;
  uStack_74 = 0;
  uStack_84 = uStack_84 & 0xffffff00;
  FUN_00409350("Cancel",6);
  uStack_24 = CONCAT31(uStack_24._1_3_,5);
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(&uStack_84);
  (**(code **)(*piVar5 + 0x78))(&uStack_6c);
  if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_8c);
  }
  uStack_2c = 0xffffffff;
  uStack_78 = 0xf;
  uStack_7c = 0;
  uStack_8c = uStack_8c & 0xffffff00;
  if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_70);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x18) + 0x34))();
  uStack_5c = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  FUN_00409350("state_name",10);
  uStack_2c = 6;
  uVar6 = (**(code **)(**(int **)(in_ECX + 0xd0) + 0x20))(&uStack_8c);
  uStack_30 = 7;
  (**(code **)(**(int **)(in_ECX + 0x28) + 0x3c))(&uStack_74);
  FUN_00408ed0(uVar6,0,0xffffffff);
  FUN_00a5ecc0(uVar6,0);
  if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI);
  }
  uStack_34 = 0xffffffff;
  uStack_80 = 0xf;
  uStack_84 = 0;
  if (uStack_64 < 0x10) {
    uStack_80 = 0xf;
    uStack_84 = 0;
    FUN_00409350("factory_type",0xc);
    uStack_34 = 8;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x28) + 0x7c))(&stack0xffffff6c);
    uStack_38 = 0xffffffff;
    if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_EDI);
    }
    uStack_84 = 0xf;
    uStack_88 = 0;
    (**(code **)(*piVar5 + 0x38))(1);
    (**(code **)(*piVar5 + 4))(in_ECX + 0x24);
    uStack_70 = 0xf;
    uStack_74 = 0;
    uStack_84 = uStack_84 & 0xffffff00;
    FUN_00409350("employment_info",0xf);
    local_40 = 9;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x6c))(&uStack_84);
    uStack_44 = 0xffffffff;
    if (uStack_74 < 0x10) {
      uStack_74 = 0xf;
      uStack_78 = 0;
      uStack_88 = uStack_88 & 0xffffff00;
      (**(code **)(**(int **)(iVar4 + 0x494) + 0xb0))();
      iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
      if (DAT_0125ce80 == 0) {
        iVar7 = FUN_00aae9af(0x3c);
        uStack_44 = 10;
        if (iVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_004dada0();
        }
        uStack_44 = 0xffffffff;
        FUN_004dc340(uVar6);
      }
      piVar5 = (int *)(DAT_0125ce80 + 0xc);
      iVar8 = *(int *)(DAT_0125ce80 + 0x10) - *(int *)(DAT_0125ce80 + 0xc) >> 2;
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar10 = *(int *)(*piVar5 + iVar7 * 4);
          iVar9 = *(int *)(iVar10 + 300);
          if (((((DAT_01258734 != 0) && (iVar9 != DAT_01258734 + 0x10)) && (iVar9 != 0)) &&
              ((*(int *)(iVar9 + 0x138) == 1 &&
               ((*(char *)(*(int *)(iVar10 + 0x58) + *(int *)(*(int *)(iVar4 + 0xbcc) + 0x2fc)) !=
                 '\0' || (*(char *)(iVar10 + 0x130) != '\0')))))) &&
             ((*(char *)(iVar10 + 0x130) != '\0' ||
              (0 < *(int *)(*(int *)(*(int *)(iVar4 + 0xbcc) + 8) + *(int *)(iVar10 + 0x58) * 4)))))
          {
            iVar10 = iVar7;
            iVar9 = FUN_00aae9af(0x30);
            uStack_44 = 0xb;
            if (iVar9 == 0) {
              uVar6 = 0;
            }
            else {
              iVar2 = *piVar5;
              uVar6 = *(undefined4 *)(in_ECX + 0xd0);
              iVar1 = iVar7 * 4;
              uVar3 = FUN_0052c9b0(uVar6);
              iVar7 = iVar10;
              uVar6 = FUN_006f8be0(iVar9,*(undefined4 *)(iVar2 + iVar1),uVar3,uVar6);
            }
            uStack_44 = 0xffffffff;
            (**(code **)(*puVar11 + 0x10))(uVar6,1);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
      }
      uStack_58 = 0xf;
      uStack_5c = 0;
      uStack_6c = uStack_6c & 0xffffff00;
      FUN_00409350("Build",5);
      uStack_44 = 0xc;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(&uStack_6c);
      (**(code **)(*piVar5 + 0xbc))();
      if (uStack_5c < 0x10) {
        ExceptionList = local_50;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_70);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_88);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_78);
}

