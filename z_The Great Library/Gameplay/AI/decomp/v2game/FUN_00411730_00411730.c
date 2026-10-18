// FUN_00411730 @ 00411730 body=[[00411730, 00411b03] [00411b07, 00411b39] [00411b3d, 004121c0]]


/* WARNING: Removing unreachable block (ram,0x00411aa3) */
/* WARNING: Removing unreachable block (ram,0x00411afb) */
/* WARNING: Removing unreachable block (ram,0x00411b07) */
/* WARNING: Removing unreachable block (ram,0x00411b34) */
/* WARNING: Removing unreachable block (ram,0x00411b19) */

void FUN_00411730(int param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,int *param_6)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar5 = DAT_012588e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b77a28;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x67) == '\0') {
    return;
  }
  ExceptionList = &local_10;
  if (*(int *)(DAT_012588e8 + 0xb60) != *(int *)(param_1 + 0x3a4)) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(iVar5 + 0xb60);
    FUN_004123a0(param_1);
    FUN_00412650(param_1);
    FUN_00412940(param_1);
    *(undefined4 *)(param_1 + 0x34c) = 0;
    *(undefined1 *)(param_1 + 0x39c) = 0;
    FUN_0040d870();
    FUN_0040f040(param_1);
    FUN_0040f740();
    FUN_0040f4d0();
  }
  (**(code **)(**(int **)(param_1 + 0x88) + 0x80))();
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x48))((*(int *)(param_1 + 0x34c) != 0) + '\x01');
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x48))((*(int *)(param_1 + 0x34c) != 1) + '\x01');
  }
  (**(code **)(**(int **)(param_1 + 0x74) + 0x48))((*(int *)(param_1 + 0x34c) != 2) + '\x01');
  if (*(int *)(param_1 + 0x34c) != 0) {
    ExceptionList = local_10;
    return;
  }
  iVar5 = *(int *)(param_1 + 0x390);
  if (iVar5 == 0) {
    ExceptionList = local_10;
    return;
  }
  if (*(char *)(iVar5 + 0x1f0) == '\0') {
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(iVar5 + 0x218) != *(int *)(param_1 + 0x3a4)) {
    ExceptionList = local_10;
    return;
  }
  fVar8 = **(float **)(param_1 + 0x398);
  bVar1 = false;
  local_20 = fVar8;
  if (((((fVar8 == 1.4013e-45) || (fVar8 == 4.2039e-45)) || (fVar8 == 2.8026e-45)) ||
      ((fVar8 == 5.60519e-45 || (fVar8 == 7.00649e-45)))) ||
     ((fVar8 == 0.0 &&
      ((cVar2 = (**(code **)(*param_5 + 0x30))(), cVar2 != '\0' ||
       (cVar2 = (**(code **)(*param_5 + 0x28))(), cVar2 != '\0')))))) {
    bVar1 = false;
    for (iVar5 = *param_6; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x20)) {
      if ((*(int *)(iVar5 + 8) == 0) && (*(int *)(iVar5 + 0x14) == 1)) {
        if (*(int *)(iVar5 + 0x10) == 3) {
          if (*(char *)(iVar5 + 0x18) == '\0') {
            bVar1 = true;
          }
          goto LAB_004118dc;
        }
LAB_004118e8:
        if ((((fVar8 == 7.00649e-45) || ((fVar8 == 4.2039e-45 || (fVar8 == 0.0)))) &&
            (*(int *)(iVar5 + 0x14) == 4)) &&
           ((cVar2 = (**(code **)(*param_5 + 0x30))(), cVar2 != '\0' ||
            (cVar2 = (**(code **)(*param_5 + 0x28))(), cVar2 != '\0')))) goto LAB_00411918;
      }
      else {
LAB_004118dc:
        if ((*(int *)(iVar5 + 0x10) != 3) || (*(int *)(iVar5 + 0x14) != 1)) goto LAB_004118e8;
LAB_00411918:
        *(undefined1 *)(iVar5 + 0x18) = 1;
      }
    }
  }
  param_6 = (int *)0x0;
  if ((((fVar8 == 7.00649e-45) || (fVar8 == 4.2039e-45)) || (fVar8 == 0.0)) &&
     (cVar2 = (**(code **)(*param_5 + 0x28))(), cVar2 != '\0')) {
    iVar4 = (**(code **)(*param_4 + 0x50))();
    iVar5 = *(int *)(param_1 + 0x3ac);
    if (iVar4 != iVar5) {
      *(int *)(param_1 + 0x3ac) = iVar4;
      param_6 = (int *)((uint)(iVar5 < iVar4) * 2 + -1);
      if (param_6 != (int *)0x0) {
        *(float *)(*(int *)(param_1 + 0x398) + 0x104) =
             (float)(int)param_6 * 0.15 + *(float *)(*(int *)(param_1 + 0x398) + 0x104);
      }
    }
  }
  if (fVar8 == 7.00649e-45) {
LAB_004119c9:
    cVar2 = (**(code **)(*param_5 + 0x30))();
    if (cVar2 != '\0') {
      iVar4 = (**(code **)(*param_4 + 0x50))();
      iVar5 = *(int *)(param_1 + 0x3ac);
      if (iVar4 != iVar5) {
        *(int *)(param_1 + 0x3ac) = iVar4;
        param_6 = (int *)((uint)(iVar5 < iVar4) * 2 + -1);
      }
      if (param_6 != (int *)0x0) {
        fVar8 = (float)(int)param_6 * 0.75 + *(float *)(*(int *)(param_1 + 0x398) + 0x108);
        fVar9 = 20.0;
        if ((20.0 < fVar8) || (fVar9 = DAT_00f14a8c, fVar8 < DAT_00f14a8c)) {
          fVar8 = fVar9;
        }
        *(float *)(*(int *)(param_1 + 0x398) + 0x108) = fVar8;
      }
    }
    if ((*(char *)(*(int *)(param_1 + 0x398) + 0xe4) == '\0') && (param_6 != (int *)0x0)) {
      local_8._0_1_ = 0;
      local_8._1_3_ = 0;
      FUN_00406d40(*(undefined4 *)(param_1 + 0x390));
      local_14 = 0;
      local_18 = 0.0;
      local_8 = 0xffffffff;
    }
LAB_00411b3d:
    if (local_20 == 7.00649e-45) goto LAB_00411b86;
  }
  else {
    if (fVar8 != 0.0) goto LAB_00411b3d;
    iVar5 = FUN_00406e40();
    if (0 < iVar5) goto LAB_004119c9;
  }
  iVar5 = *(int *)(param_1 + 0x390);
  if (*(int *)(iVar5 + 0xc) != 0) {
    if (*(int *)(iVar5 + 0xc) != 0) {
      (**(code **)(*(int *)(iVar5 + 0x50) + 0x14))(*(int *)(iVar5 + 0xc));
      if (*(int **)(iVar5 + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar5 + 0xc) + 0x24))(1);
      }
      *(undefined4 *)(iVar5 + 0xc) = 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x398) + 0xe4) = 0;
  }
LAB_00411b86:
  if (local_20 == 1.4013e-45) {
    FUN_00412c20(&local_24,param_4);
    cVar2 = (**(code **)(*param_4 + 0x30))();
    if (cVar2 == '\0') {
      if (**(int **)(param_1 + 0x390) != 0) {
        FUN_00405c40();
        ExceptionList = local_10;
        return;
      }
    }
    else {
      if ((bVar1) && (**(int **)(param_1 + 0x390) == 0)) {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x398) + 0x14);
        iVar5 = FUN_004148c0(uVar6);
        iVar5 = iVar5 + 0x28;
        uVar3 = (**(code **)(*param_5 + 0x28))(iVar5);
        FUN_00405b20(&local_24,param_2 + 0x33c,uVar3,iVar5,uVar6);
      }
      if (**(int **)(param_1 + 0x390) != 0) {
        iVar5 = **(int **)(param_1 + 0x390);
        local_2c = (*(float *)(param_2 + 0x33c) - *(float *)(iVar5 + 0x84)) + local_24;
        local_28 = local_20 + (*(float *)(param_2 + 0x340) - *(float *)(iVar5 + 0x8c));
        FUN_0098d2e0(iVar5);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else if (local_20 == 2.8026e-45) {
    FUN_00412c20(&local_2c,param_4);
    cVar2 = (**(code **)(*param_4 + 0x30))();
    if (cVar2 == '\0') {
      iVar5 = *(int *)(param_1 + 0x390);
      if (*(int *)(iVar5 + 4) != 0) {
        FUN_0098d860();
        FUN_0068f390();
        *(undefined1 *)(*(int *)(iVar5 + 4) + 0x164) = 1;
        *(undefined4 *)(iVar5 + 4) = 0;
        *(undefined1 *)(iVar5 + 0x21c) = 1;
        ExceptionList = local_10;
        return;
      }
    }
    else {
      if ((bVar1) && (*(int *)(*(int *)(param_1 + 0x390) + 4) == 0)) {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x398) + 0x14);
        iVar5 = FUN_004148c0(uVar6);
        FUN_00405c90(param_2 + 0x33c,iVar5 + 0x28,uVar6);
      }
      if (*(int *)(*(int *)(param_1 + 0x390) + 4) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x390) + 4);
        local_24 = (*(float *)(param_2 + 0x33c) - *(float *)(iVar5 + 0x84)) + local_2c;
        local_20 = local_28 + (*(float *)(param_2 + 0x340) - *(float *)(iVar5 + 0x8c));
        FUN_0098d2e0(iVar5);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else if (local_20 == 4.2039e-45) {
    FUN_00412c20(&local_2c,param_4);
    cVar2 = (**(code **)(*param_4 + 0x30))();
    if (cVar2 == '\0') {
      iVar5 = *(int *)(param_1 + 0x390);
      if (*(int *)(iVar5 + 8) != 0) {
        FUN_0068f390();
        *(undefined1 *)(*(int *)(iVar5 + 8) + 0x1c4) = 1;
        *(undefined4 *)(iVar5 + 8) = 0;
        *(undefined1 *)(iVar5 + 0x21c) = 1;
        ExceptionList = local_10;
        return;
      }
    }
    else {
      if ((bVar1) && (*(int *)(*(int *)(param_1 + 0x390) + 8) == 0)) {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x398) + 0x14);
        iVar5 = FUN_004148c0(uVar6);
        FUN_00405d50(iVar5 + 0x28,uVar6);
      }
      if (*(int *)(*(int *)(param_1 + 0x390) + 8) != 0) {
        FUN_00405dc0(&local_2c,*(undefined4 *)(*(int *)(param_1 + 0x398) + 0x104));
        ExceptionList = local_10;
        return;
      }
    }
  }
  else if (local_20 == 0.0) {
    FUN_00412c20(&local_24,param_4);
    cVar2 = (**(code **)(*param_4 + 0x30))();
    iVar5 = *(int *)(param_1 + 0x398);
    if (cVar2 == '\0') {
      if (*(char *)(iVar5 + 0x20) != '\0') {
        *(undefined1 *)(iVar5 + 0x20) = 0;
        local_1c = *(float *)(*(int *)(param_1 + 0x398) + 0x24);
        local_18 = *(float *)(*(int *)(param_1 + 0x398) + 0x28);
        fVar7 = (float10)FUN_00401030((local_24 - local_1c) * (local_24 - local_1c) +
                                      (local_20 - local_18) * (local_20 - local_18));
        if (fVar7 <= (float10)DAT_00f177e0) {
          FUN_004063e0();
          FUN_004064a0(*(undefined4 *)(param_1 + 0x390),&local_24,DAT_00f12d9c,param_2 + 0x33c);
        }
      }
      if (param_6 != (int *)0x0) {
        iVar5 = FUN_00406c00();
        iVar4 = FUN_00406ca0();
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0x1c8) = *(undefined4 *)(*(int *)(param_1 + 0x398) + 0x104);
        }
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x1c8) = *(undefined4 *)(*(int *)(param_1 + 0x398) + 0x104);
        }
        if ((iVar5 != 0) || (iVar4 != 0)) {
          *(undefined1 *)(*(int *)(param_1 + 0x390) + 0x21c) = 1;
          ExceptionList = local_10;
          return;
        }
      }
    }
    else if (*(char *)(iVar5 + 0x20) == '\0') {
      *(undefined1 *)(iVar5 + 0x20) = 1;
      iVar5 = *(int *)(param_1 + 0x398);
      *(float *)(iVar5 + 0x24) = local_24;
      *(float *)(iVar5 + 0x28) = local_20;
      ExceptionList = local_10;
      return;
    }
  }
  else if ((local_20 == 7.00649e-45) && (*(char *)(*(int *)(param_1 + 0x398) + 0xe4) != '\0')) {
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x390) + 0xc) == 0) {
        FUN_00405e40();
        ExceptionList = local_10;
        return;
      }
      FUN_00412c20(&local_2c,param_4);
      uVar6 = FUN_00414ba0(*(undefined4 *)(param_1 + 0x398));
      local_8 = 2;
      FUN_00405f20(&local_2c,*(undefined4 *)(*(int *)(param_1 + 0x398) + 0x108),uVar6,
                   *(undefined4 *)(*(int *)(param_1 + 0x398) + 0x104));
      local_8 = 0xffffffff;
      FUN_00408ad0();
      cVar2 = (**(code **)(*param_4 + 0x30))();
      if ((cVar2 != '\0') && (bVar1)) {
        *(undefined1 *)(param_1 + 0x3a8) = 1;
        iVar5 = *(int *)(param_1 + 0x390);
        FUN_0068f390();
        *(undefined1 *)(*(int *)(iVar5 + 0xc) + 0x1c4) = 1;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        *(undefined1 *)(iVar5 + 0x21c) = 1;
        ExceptionList = local_10;
        return;
      }
    }
    else {
      cVar2 = (**(code **)(*param_4 + 0x30))();
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x3a8) = 0;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

