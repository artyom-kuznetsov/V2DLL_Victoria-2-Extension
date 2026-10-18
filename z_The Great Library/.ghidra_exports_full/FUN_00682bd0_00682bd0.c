// FUN_00682bd0 @ 00682bd0 body=[[00682bd0, 00682d74] [00682d80, 00682eb3]]


void FUN_00682bd0(void)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  undefined4 uVar11;
  float in_XMM0_Da;
  float local_28 [4];
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar4 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  fVar2 = in_XMM0_Da + *(float *)(in_ECX + 0xb14);
  ExceptionList = &local_10;
  *(float *)(in_ECX + 0xb14) = fVar2;
  if (*(char *)(in_ECX + 0xb20) != '\0') {
    ExceptionList = pvVar4;
    return;
  }
  local_28[0] = DAT_00f17b58;
  local_28[1] = (float)DAT_00f17b54;
  local_28[2] = (float)DAT_00f092fc;
  local_28[3] = (float)DAT_00f17898;
  local_18 = 0x38d1b717;
  if (local_28[*(int *)(in_ECX + 0xb28)] <= fVar2) {
    bVar3 = true;
    uVar5 = *(uint *)(in_ECX + 0xb84);
    do {
      if ((uVar5 < *(uint *)(in_ECX + 0xb84)) || (*(uint *)(in_ECX + 0xb88) <= uVar5))
      goto LAB_00682c9f;
      piVar1 = (int *)(uVar5 + 8);
      uVar5 = uVar5 + 0x10;
    } while (*piVar1 == 0);
    bVar3 = false;
LAB_00682c9f:
    iVar6 = (**(code **)(**(int **)(in_ECX + 0xb24) + 0x44))();
    if ((*(char *)(iVar6 + 0x34) != '\0') && (bVar3)) {
      *(undefined4 *)(in_ECX + 0xb14) = 0;
      local_14 = FUN_00aae9af(0x4c);
      uVar11 = 0;
      local_8 = 0;
      if (local_14 != 0) {
        uVar11 = FUN_0072ec40(local_14,in_ECX + 0xb74);
      }
      local_8 = 0xffffffff;
      iVar6 = (**(code **)(**(int **)(in_ECX + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar11);
    }
  }
  if (*(char *)(in_ECX + 3000) == '\0') {
    if (DAT_012588ec < 2) {
      if (DAT_012588ec != 0) {
        DAT_012588ec = 0;
        ExceptionList = local_10;
        return;
      }
      if (DAT_012588e6 == '\0') {
        DAT_012588e6 = 1;
        DAT_012588ec = 0;
        DAT_012588f0 = DAT_012588f0 * 0.95;
        ExceptionList = local_10;
        return;
      }
      DAT_012588ec = 0;
      ExceptionList = local_10;
      return;
    }
    goto LAB_00682df5;
  }
  iVar7 = FUN_0068b610(in_ECX);
  iVar6 = *(int *)(in_ECX + 0x18);
  iVar7 = (*(int *)(iVar7 + 0x34) + -43800000) / 0x18;
  iVar8 = (int)((double)iVar7 / 365.0);
  bVar3 = true;
  if (iVar6 == 0) {
LAB_00682de2:
    if (DAT_012588e6 == '\0') goto LAB_00682e48;
  }
  else {
    do {
      iVar10 = (*(int *)(iVar6 + 0x34) + -43800000) / 0x18;
      iVar6 = *(int *)(iVar6 + 0x3c);
      iVar9 = (int)((float)iVar10 / 365.0);
      iVar10 = ((iVar9 * 0x16d - (int)((float)iVar9 * 365.0)) -
               (iVar7 + (iVar8 * 0x16d - (int)((float)iVar8 * 365.0)))) + iVar10;
      if (1 < iVar10) {
        bVar3 = false;
      }
      if (2 < iVar10) {
        if (DAT_012588e6 == '\0') {
          DAT_012588e6 = 1;
          DAT_012588ec = 0;
          DAT_012588f0 = (float)(iVar10 + -2) * 0.5 + DAT_012588f0;
          ExceptionList = local_10;
          return;
        }
        break;
      }
    } while (iVar6 != 0);
    if (bVar3) goto LAB_00682de2;
  }
  if (1 < DAT_012588ec) {
LAB_00682df5:
    DAT_012588ec = 0;
    DAT_012588f0 = DAT_012588f0 + 0.5;
    ExceptionList = local_10;
    return;
  }
  if (DAT_012588ec != 0) {
    DAT_012588ec = 0;
    ExceptionList = local_10;
    return;
  }
  if (DAT_012588e6 != '\0') {
    DAT_012588ec = 0;
    ExceptionList = local_10;
    return;
  }
LAB_00682e48:
  DAT_012588f0 = DAT_012588f0 * 0.9;
  DAT_012588ec = 0;
  DAT_012588e6 = 1;
  ExceptionList = local_10;
  return;
}

