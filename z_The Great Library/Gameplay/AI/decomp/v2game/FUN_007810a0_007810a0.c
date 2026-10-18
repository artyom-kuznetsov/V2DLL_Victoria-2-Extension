// FUN_007810a0 @ 007810a0 body=[[007810a0, 007812f7] [007812fb, 00781526] [0078152a, 00781554] [00781558, 00781654] [00781658, 00781682] [00781686, 007816ef] [007816f3, 00781738]]


void FUN_007810a0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  char *pcVar6;
  undefined4 *******pppppppuVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 unaff_EBX;
  int iVar11;
  uint auStack_98 [4];
  uint uStack_88;
  uint uStack_84;
  int local_7c;
  int local_78;
  int iStack_74;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 ******appppppuStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  char acStack_38 [36];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b91ae7;
  pvStack_14 = ExceptionList;
  iVar3 = *(int *)(param_1[5] + 0x10);
  iVar1 = *(int *)(param_1[5] + 0x14);
  iVar10 = 0;
  iVar11 = 0;
  local_7c = iVar3;
  if ((char)param_1[0x288] == '\0') {
    for (piVar4 = *(int **)(iVar3 + 0x20); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      if (*piVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar4 + 0x38;
      }
      iVar11 = iVar11 + *(int *)(iVar3 + 8);
    }
    for (piVar4 = *(int **)(iVar1 + 0x20); ExceptionList = &pvStack_14, piVar4 != (int *)0x0;
        piVar4 = (int *)piVar4[2]) {
      if (*piVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar4 + 0x38;
      }
      iVar10 = iVar10 + *(int *)(iVar3 + 8);
    }
  }
  else {
    ExceptionList = &pvStack_14;
    if ((char)param_1[0x2ad] != '\0') {
      ExceptionList = &pvStack_14;
      *(undefined1 *)(param_1 + 0x2ad) = 0;
      FUN_00780a90(param_1,param_1[3],iVar3,0,param_1[0x2ac] == 1);
      FUN_00780a90(param_1,param_1[4],iVar1,1,param_1[0x2ac] == 2);
    }
    iVar11 = FUN_00780f00(param_1,iVar3,param_1[0x2ac] == 1);
    local_78 = FUN_00780f00(param_1,iVar1,param_1[0x2ac] == 2);
    iVar3 = (**(code **)(*(int *)param_1[3] + 0x2c))();
    iVar3 = *(int *)(iVar3 + 8);
    iVar10 = (**(code **)(*(int *)param_1[4] + 0x2c))();
    iStack_74 = *(int *)(iVar10 + 8);
    if (iVar11 != iVar3) {
      FUN_00780a90(param_1,param_1[3],local_7c,0,param_1[0x2ac] == 1);
    }
    iVar10 = local_78;
    if (local_78 != iStack_74) {
      FUN_00780a90(param_1,param_1[4],iVar1,1,param_1[0x2ac] == 2);
      iVar10 = local_78;
    }
  }
  iVar3 = local_7c;
  if (((iVar11 == 0) || (iVar10 == 0)) && (param_1[0x2ac] == 0)) {
    if (*(char *)(*param_1 + 0x67) == '\0') {
      ExceptionList = pvStack_14;
      return;
    }
    (**(code **)(*(int *)(*param_1 + 0x18) + 0x38))();
    ExceptionList = pvStack_14;
    return;
  }
  cVar2 = (**(code **)(*(int *)param_1[5] + 0x2c))();
  uStack_84 = 0xf;
  auStack_98[0] = auStack_98[0] & 0xffffff00;
  if (cVar2 == '\0') {
    uStack_88 = 0;
    FUN_00409350("combat_may_retreat",0x12);
    uStack_c = 0;
    piVar4 = (int *)(**(code **)(*(int *)*param_1 + 0x44))(auStack_98);
    pcVar5 = *(code **)(*piVar4 + 0x34);
  }
  else {
    uStack_88 = 0;
    FUN_00409350("combat_may_retreat",0x12);
    uStack_c = 1;
    piVar4 = (int *)(**(code **)(*(int *)*param_1 + 0x44))(auStack_98);
    pcVar5 = *(code **)(*piVar4 + 0x38);
  }
  (*pcVar5)();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < uStack_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  FUN_00785400(param_1,iVar3,param_1[1]);
  FUN_00785400(param_1,unaff_EBX,param_1[2]);
  FUN_00786ce0(param_1,iVar3,param_1[1],0);
  FUN_00786ce0(param_1,unaff_EBX,param_1[2],1);
  if ((char)param_1[0x288] != '\0') {
    (**(code **)(*(int *)param_1[3] + 0x80))();
    (**(code **)(*(int *)param_1[4] + 0x80))();
  }
  if (DAT_0131ca9c == (int *)0x0) {
    piVar4 = (int *)FUN_00aae9af(0xc);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[1] = 10000;
      *(undefined1 *)((int)piVar4 + 9) = 1;
      *piVar4 = (int)CNullSound::vftable;
    }
    puStack_10 = (undefined1 *)0x2;
    local_78 = 0;
    if ((piVar4 != DAT_0131ca9c) && (DAT_0131ca9c != (int *)0x0)) {
      (**(code **)*DAT_0131ca9c)(1);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    DAT_0131ca9c = piVar4;
  }
  cVar2 = (**(code **)(*DAT_0131ca9c + 0x68))(param_1[8]);
  if (cVar2 == '\0') {
    if (param_1[0x286] == 0) {
      FUN_009b7700();
    }
    uVar8 = param_1[param_1[0x286] + 0x16] ^ param_1[param_1[0x286] + 0x16] >> 0xb;
    uVar8 = uVar8 ^ (uVar8 & 0xff3a58ad) << 7;
    uVar8 = uVar8 ^ (uVar8 & 0xffffdf8c) << 0xf;
    param_1[0x286] = (param_1[0x286] + 1) % 0x270;
    if ((int)(uVar8 ^ (int)uVar8 >> 0x12) % 100 < 6) {
      iVar3 = (**(code **)(*(int *)param_1[5] + 0x24))();
      if (iVar3 == 1) {
        uVar8 = FUN_009b7610();
        iVar3 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
        uStack_84 = 0xf;
        uStack_88 = 0;
        auStack_98[0] = auStack_98[0] & 0xffffff00;
        uStack_c = 3;
        pcVar6 = __itoa(iVar3 + (iVar3 / 6) * -6 + 1,acStack_38,10);
        pcVar9 = pcVar6;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        FUN_00409350(pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
        uStack_c = 4;
        uStack_5c = 0xf;
        uStack_60 = 0;
        auStack_70[0] = auStack_70[0] & 0xffffff00;
        FUN_00409350("land_combat_",0xc);
        uStack_c._0_1_ = 5;
        FUN_00988f20(auStack_98);
        if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_70[0]);
        }
        uStack_5c = 0xf;
        uStack_60 = 0;
        auStack_70[0] = auStack_70[0] & 0xffffff00;
        uStack_c = CONCAT31(uStack_c._1_3_,8);
        if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_98[0]);
        }
        auStack_98[0] = auStack_98[0] & 0xffffff00;
      }
      else {
        iVar3 = (**(code **)(*(int *)param_1[5] + 0x24))();
        if (iVar3 != 2) goto LAB_00781704;
        uVar8 = FUN_009b7610();
        iVar3 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
        uStack_5c = 0xf;
        uStack_60 = 0;
        auStack_70[0] = auStack_70[0] & 0xffffff00;
        uStack_c = 0xb;
        pcVar6 = __itoa(iVar3 + (iVar3 / 6) * -6 + 1,acStack_38,10);
        pcVar9 = pcVar6;
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        FUN_00409350(pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
        uStack_c = 0xc;
        uStack_84 = 0xf;
        uStack_88 = 0;
        auStack_98[0] = auStack_98[0] & 0xffffff00;
        FUN_00409350("naval_combat_",0xd);
        uStack_c._0_1_ = 0xd;
        FUN_00988f20(auStack_70);
        if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_98[0]);
        }
        uStack_84 = 0xf;
        uStack_88 = 0;
        auStack_98[0] = auStack_98[0] & 0xffffff00;
        uStack_c = CONCAT31(uStack_c._1_3_,0x10);
        if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_70[0]);
        }
        auStack_70[0] = auStack_70[0] & 0xffffff00;
      }
      uStack_5c = 0xf;
      uStack_60 = 0;
      uStack_84 = 0xf;
      uStack_88 = 0;
      FUN_009c7290();
      pppppppuVar7 = (undefined4 *******)appppppuStack_54[0];
      if (uStack_40 < 0x10) {
        pppppppuVar7 = appppppuStack_54;
      }
      iVar3 = (**(code **)(PTR_PTR_00f0f77c + 8))(pppppppuVar7);
      param_1[8] = iVar3;
      if (iVar3 != -1) {
        piVar4 = (int *)FUN_009c7290();
        (**(code **)(*piVar4 + 0x28))(param_1[8],0);
      }
      uStack_c = 0xffffffff;
      if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(appppppuStack_54[0]);
      }
      appppppuStack_54[0] = (undefined4 ******)((uint)appppppuStack_54[0] & 0xffffff00);
      uStack_44 = 0;
      uStack_40 = 0xf;
    }
  }
LAB_00781704:
  if ((char)param_1[0x14] != '\0') {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(1);
  }
  ExceptionList = pvStack_14;
  return;
}

