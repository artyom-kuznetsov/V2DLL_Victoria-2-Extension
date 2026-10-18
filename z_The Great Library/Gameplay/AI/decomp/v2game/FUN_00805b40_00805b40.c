// FUN_00805b40 @ 00805b40 body=[[00805b40, 00806d29]]


void FUN_00805b40(int *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  if (*param_1 < 1) {
    return;
  }
  if (*(int *)(*(int *)(unaff_ESI + 0x40) + 0x2abc) + -1 <= *param_1) {
    return;
  }
  local_18 = param_1[1];
  if (local_18 < 1) {
    return;
  }
  if (*(int *)(*(int *)(unaff_ESI + 0x40) + 0x2ac0) + -1 <= local_18) {
    return;
  }
  local_18 = local_18 + 1;
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') goto LAB_00805dbf;
  local_38 = 0;
  iVar5 = param_1[1];
  local_20 = 0;
  local_8 = *param_1 + 1;
  local_3c = 0;
  local_24 = 0;
  local_28 = DAT_00f17898;
  local_30 = DAT_00f17898;
  iVar4 = DAT_00f17898;
  iVar6 = DAT_00f1f768;
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') {
LAB_00805cf8:
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') && (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      local_58 = *param_1;
      local_4c = local_3c;
      local_44 = local_24;
      local_50 = 8;
      local_48 = local_28;
      local_40 = local_30;
LAB_00805dae:
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      goto LAB_00805dba;
    }
    cVar3 = FUN_00494c90();
    if (cVar3 == '\0') {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        local_58 = *param_1;
        local_50 = 0xd;
        local_4c = local_3c;
        local_48 = local_28;
        local_44 = local_3c;
        local_40 = local_28;
        goto LAB_00805dae;
      }
    }
    else {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        local_58 = *param_1;
        local_50 = 0xc;
        local_4c = local_24;
        local_48 = local_30;
        local_44 = local_24;
        local_40 = local_30;
        goto LAB_00805dae;
      }
    }
  }
  else {
    local_10 = *param_1 + -1;
    cVar3 = FUN_00494c90();
    if (cVar3 == '\0') goto LAB_00805cf8;
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      cVar3 = FUN_00494c90();
      if (cVar3 != '\0') {
        local_58 = *param_1;
        local_50 = 0xb;
        local_4c = local_3c;
        local_44 = iVar4;
        local_34 = iVar4;
        goto LAB_00805c4e;
      }
      cVar3 = FUN_00494c90();
      local_58 = *param_1;
      if (cVar3 != '\0') {
        local_50 = 10;
        local_44 = local_24;
        local_4c = iVar6;
        local_2c = iVar6;
        goto LAB_00805c4e;
      }
      local_4c = local_3c;
      local_48 = local_28;
      local_44 = local_24;
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      local_50 = 7;
      local_40 = local_30;
    }
    else {
      local_58 = *param_1;
      local_50 = 9;
      local_4c = iVar6;
      local_44 = iVar4;
      local_34 = iVar4;
      local_2c = iVar6;
LAB_00805c4e:
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      local_40 = local_30;
      local_48 = local_28;
    }
LAB_00805dba:
    local_54 = iVar5 + 1;
    FUN_007d2d20(uVar7,unaff_EDI,&local_58);
  }
LAB_00805dbf:
  local_20 = param_1[1] + -1;
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') goto LAB_00805ff6;
  iVar5 = param_1[1];
  local_38 = 0;
  local_18 = 0;
  local_8 = *param_1 + 1;
  local_1c = 0;
  local_3c = 0;
  local_28 = DAT_00f1f768;
  local_30 = DAT_00f1f768;
  iVar4 = DAT_00f1f768;
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') {
LAB_00805f35:
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') && (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      local_58 = *param_1;
      local_4c = local_1c;
      local_48 = local_28;
      local_50 = 1;
      local_44 = local_3c;
      local_40 = local_30;
LAB_00805fdf:
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      goto LAB_00805ff1;
    }
    cVar3 = FUN_00494c90();
    if (cVar3 == '\0') {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        local_58 = *param_1;
        local_50 = 6;
        local_44 = local_1c;
        local_40 = local_28;
        local_4c = local_1c;
        local_48 = local_28;
        goto LAB_00805fdf;
      }
    }
    else {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        local_58 = *param_1;
        local_50 = 5;
        local_44 = local_3c;
        local_40 = local_30;
        local_4c = local_3c;
        local_48 = local_30;
        goto LAB_00805fdf;
      }
    }
  }
  else {
    local_10 = *param_1 + -1;
    cVar3 = FUN_00494c90();
    if (cVar3 == '\0') goto LAB_00805f35;
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      cVar3 = FUN_00494c90();
      if (cVar3 != '\0') {
        local_58 = *param_1;
        local_50 = 4;
        iVar4 = local_1c;
        goto LAB_00805e72;
      }
      cVar3 = FUN_00494c90();
      local_58 = *param_1;
      if (cVar3 != '\0') {
        local_44 = local_3c;
        local_50 = 3;
        local_4c = iVar4;
        local_2c = iVar4;
        goto LAB_00805e8e;
      }
      local_4c = local_1c;
      local_44 = local_3c;
      local_48 = local_28;
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      local_50 = 0;
      local_40 = local_30;
    }
    else {
      local_58 = *param_1;
      local_50 = 2;
      local_2c = iVar4;
LAB_00805e72:
      local_34 = DAT_00f17898;
      local_44 = DAT_00f17898;
      local_4c = iVar4;
LAB_00805e8e:
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      local_40 = local_30;
      local_48 = local_28;
    }
LAB_00805ff1:
    local_54 = iVar5 + -1;
    FUN_007d2d20(uVar7,unaff_EDI,&local_58);
  }
LAB_00805ff6:
  local_8 = *param_1 + 1;
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') goto LAB_00806244;
  local_14 = 0;
  local_3c = 0;
  local_38 = 0;
  local_10 = 0;
  local_2c = DAT_00f17898;
  local_34 = DAT_00f17898;
  iVar5 = DAT_00f17898;
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') {
LAB_00806181:
    local_18 = param_1[1] + 1;
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') && (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      local_54 = param_1[1];
      local_48 = local_38;
      local_50 = 0xf;
      local_44 = local_34;
      local_40 = local_10;
      local_4c = local_2c;
LAB_0080622d:
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      goto LAB_0080623f;
    }
    cVar3 = FUN_00494c90();
    if (cVar3 == '\0') {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        local_54 = param_1[1];
        local_50 = 0x13;
        local_40 = local_10;
        local_4c = local_34;
        local_48 = local_10;
        local_44 = local_34;
        goto LAB_0080622d;
      }
    }
    else {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        local_54 = param_1[1];
        local_50 = 0x14;
        local_40 = local_38;
        local_4c = local_2c;
        local_48 = local_38;
        local_44 = local_2c;
        goto LAB_0080622d;
      }
    }
  }
  else {
    local_20 = param_1[1] + -1;
    cVar3 = FUN_00494c90();
    if (cVar3 == '\0') goto LAB_00806181;
    local_18 = param_1[1] + 1;
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        cVar3 = FUN_00494c90();
        local_54 = param_1[1];
        local_48 = local_38;
        local_4c = local_2c;
        local_44 = local_34;
        if (cVar3 != '\0') {
          local_50 = 0x12;
          goto LAB_008060b8;
        }
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_50 = 0xe;
        local_40 = local_10;
      }
      else {
        local_54 = param_1[1];
        local_4c = local_2c;
        local_40 = local_10;
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_50 = 0x11;
        local_44 = local_34;
        local_48 = iVar5;
        local_28 = iVar5;
      }
    }
    else {
      local_54 = param_1[1];
      local_50 = 0x10;
      local_48 = iVar5;
      local_28 = iVar5;
LAB_008060b8:
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      local_30 = DAT_00f1f768;
      local_40 = DAT_00f1f768;
      local_4c = local_2c;
      local_44 = local_34;
    }
LAB_0080623f:
    local_58 = local_8;
    FUN_007d2d20(uVar7,unaff_EDI,&local_58);
  }
LAB_00806244:
  local_10 = *param_1 + -1;
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') goto LAB_008064a3;
  local_3c = 0;
  local_c = 0;
  local_38 = 0;
  local_8 = 0;
  local_2c = DAT_00f1f768;
  local_34 = DAT_00f1f768;
  iVar5 = DAT_00f1f768;
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') {
LAB_008063d7:
    local_18 = param_1[1] + 1;
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') && (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      local_54 = param_1[1];
      local_48 = local_38;
      local_44 = local_34;
      local_50 = 0x16;
      local_4c = local_2c;
      local_40 = local_8;
LAB_0080648f:
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      goto LAB_0080649e;
    }
    cVar3 = FUN_00494c90();
    if (cVar3 == '\0') {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        local_54 = param_1[1];
        local_50 = 0x1a;
        local_40 = local_8;
        local_4c = local_34;
        local_48 = local_8;
        local_44 = local_34;
        goto LAB_0080648f;
      }
    }
    else {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        local_54 = param_1[1];
        local_50 = 0x1b;
        local_40 = local_38;
        local_4c = local_2c;
        local_48 = local_38;
        local_44 = local_2c;
        goto LAB_0080648f;
      }
    }
  }
  else {
    local_20 = param_1[1] + -1;
    cVar3 = FUN_00494c90();
    if (cVar3 == '\0') goto LAB_008063d7;
    local_18 = param_1[1] + 1;
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
        cVar3 = FUN_00494c90();
        local_54 = param_1[1];
        local_4c = local_2c;
        local_48 = local_38;
        local_44 = local_34;
        if (cVar3 != '\0') {
          local_50 = 0x19;
          goto LAB_0080630e;
        }
        local_40 = local_8;
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_50 = 0x15;
      }
      else {
        local_54 = param_1[1];
        local_4c = local_2c;
        local_40 = local_8;
        local_28 = DAT_00f17898;
        local_48 = DAT_00f17898;
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_50 = 0x18;
        local_44 = local_34;
      }
    }
    else {
      local_54 = param_1[1];
      local_28 = DAT_00f17898;
      local_50 = 0x17;
      local_48 = DAT_00f17898;
LAB_0080630e:
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      local_4c = local_2c;
      local_44 = local_34;
      local_40 = iVar5;
      local_30 = iVar5;
    }
LAB_0080649e:
    local_58 = local_10;
    FUN_007d2d20(uVar7,unaff_EDI,&local_58);
  }
LAB_008064a3:
  local_20 = param_1[1] + -1;
  local_10 = *param_1 + -1;
  cVar3 = FUN_00494c90();
  if (cVar3 != '\0') {
    local_3c = 0;
    local_38 = 0;
    local_2c = DAT_00f1f768;
    local_28 = DAT_00f1f768;
    local_34 = DAT_00f1f768;
    local_30 = DAT_00f1f768;
    iVar5 = DAT_00f1f768;
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      cVar3 = FUN_00494c90();
      if ((cVar3 != '\0') || (cVar3 = FUN_00494c90(), cVar3 != '\0')) goto LAB_008066bd;
      local_58 = local_10;
      local_54 = local_20;
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      local_50 = 0x27;
      local_34 = iVar5;
      local_30 = iVar5;
      local_2c = iVar5;
      local_28 = iVar5;
    }
    else {
      local_18 = param_1[1] + 1;
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
LAB_0080653e:
        bVar2 = false;
      }
      else {
        cVar3 = FUN_00494c90();
        bVar2 = true;
        if (cVar3 == '\0') goto LAB_0080653e;
      }
      local_8 = *param_1 + 1;
      cVar3 = FUN_00494c90();
      if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar2) {
        local_48 = local_28;
        local_40 = local_28;
        local_58 = local_10;
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_54 = local_20;
        local_50 = 0x23;
        local_4c = local_2c;
        local_44 = local_2c;
        if (bVar1) goto LAB_008065e4;
        FUN_007d2d20(uVar7,unaff_EDI,&local_58);
        local_58 = *param_1 + -1;
        local_54 = param_1[1] + -1;
        local_50 = 0x26;
      }
      else if (bVar1) {
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_50 = 0x24;
LAB_008065e4:
        local_48 = local_28;
        local_4c = local_2c;
        local_54 = local_20;
        local_58 = local_10;
        local_44 = local_4c;
        local_40 = local_48;
        FUN_007d2d20(uVar7,unaff_EDI,&local_58);
        local_58 = *param_1 + -1;
        local_54 = param_1[1] + -1;
        local_50 = 0x25;
      }
      else {
        local_58 = local_10;
        local_54 = local_20;
        local_50 = 0x22;
      }
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
    }
    local_4c = local_2c;
    local_48 = local_28;
    local_44 = local_2c;
    local_40 = local_28;
    FUN_007d2d20(uVar7,unaff_EDI,&local_58);
  }
LAB_008066bd:
  local_20 = param_1[1] + -1;
  local_8 = *param_1 + 1;
  cVar3 = FUN_00494c90();
  if (cVar3 != '\0') {
    local_38 = 0;
    local_3c = 0;
    local_28 = DAT_00f1f768;
    local_2c = DAT_00f17898;
    local_30 = DAT_00f1f768;
    local_34 = DAT_00f17898;
    iVar5 = DAT_00f1f768;
    iVar4 = DAT_00f17898;
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      cVar3 = FUN_00494c90();
      if ((cVar3 != '\0') || (cVar3 = FUN_00494c90(), cVar3 != '\0')) goto LAB_008068df;
      local_58 = local_8;
      local_54 = local_20;
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      local_50 = 0x21;
      local_34 = iVar4;
      local_30 = iVar5;
      local_2c = iVar4;
      local_28 = iVar5;
    }
    else {
      local_18 = param_1[1] + 1;
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
LAB_00806760:
        bVar2 = false;
      }
      else {
        cVar3 = FUN_00494c90();
        bVar2 = true;
        if (cVar3 == '\0') goto LAB_00806760;
      }
      local_10 = *param_1 + -1;
      cVar3 = FUN_00494c90();
      if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar2) {
        local_58 = local_8;
        local_54 = local_20;
        local_4c = local_2c;
        local_44 = local_2c;
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_50 = 0x1d;
        local_48 = local_28;
        local_40 = local_28;
        if (bVar1) goto LAB_00806806;
        FUN_007d2d20(uVar7,unaff_EDI,&local_58);
        local_58 = *param_1 + 1;
        local_54 = param_1[1] + -1;
        local_50 = 0x20;
      }
      else if (bVar1) {
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_50 = 0x1e;
LAB_00806806:
        local_48 = local_28;
        local_4c = local_2c;
        local_54 = local_20;
        local_58 = local_8;
        local_44 = local_4c;
        local_40 = local_48;
        FUN_007d2d20(uVar7,unaff_EDI,&local_58);
        local_58 = *param_1 + 1;
        local_54 = param_1[1] + -1;
        local_50 = 0x1f;
      }
      else {
        local_58 = local_8;
        local_54 = local_20;
        local_50 = 0x1c;
      }
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
    }
    local_4c = local_2c;
    local_48 = local_28;
    local_44 = local_2c;
    local_40 = local_28;
    FUN_007d2d20(uVar7,unaff_EDI,&local_58);
  }
LAB_008068df:
  local_18 = param_1[1] + 1;
  local_10 = *param_1 + -1;
  cVar3 = FUN_00494c90();
  if (cVar3 != '\0') {
    local_2c = DAT_00f1f768;
    local_28 = DAT_00f17898;
    local_34 = DAT_00f1f768;
    local_30 = DAT_00f17898;
    iVar5 = DAT_00f1f768;
    iVar4 = DAT_00f17898;
    cVar3 = FUN_00494c90();
    if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
      cVar3 = FUN_00494c90();
      if ((cVar3 != '\0') || (cVar3 = FUN_00494c90(), cVar3 != '\0')) goto LAB_00806ae8;
      local_58 = local_10;
      local_54 = local_18;
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
      local_50 = 0x33;
      local_34 = iVar5;
      local_30 = iVar4;
      local_2c = iVar5;
      local_28 = iVar4;
    }
    else {
      local_8 = *param_1 + 1;
      cVar3 = FUN_00494c90();
      if (cVar3 == '\0') {
LAB_00806969:
        bVar2 = false;
      }
      else {
        cVar3 = FUN_00494c90();
        bVar2 = true;
        if (cVar3 == '\0') goto LAB_00806969;
      }
      local_20 = param_1[1] + -1;
      cVar3 = FUN_00494c90();
      if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar2) {
        local_48 = local_28;
        local_40 = local_28;
        local_58 = local_10;
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_54 = local_18;
        local_50 = 0x2f;
        local_4c = local_2c;
        local_44 = local_2c;
        if (bVar1) goto LAB_00806a0f;
        FUN_007d2d20(uVar7,unaff_EDI,&local_58);
        local_58 = *param_1 + -1;
        local_54 = param_1[1] + 1;
        local_50 = 0x32;
      }
      else if (bVar1) {
        uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
        local_50 = 0x30;
LAB_00806a0f:
        local_48 = local_28;
        local_4c = local_2c;
        local_54 = local_18;
        local_58 = local_10;
        local_44 = local_4c;
        local_40 = local_48;
        FUN_007d2d20(uVar7,unaff_EDI,&local_58);
        local_58 = *param_1 + -1;
        local_54 = param_1[1] + 1;
        local_50 = 0x31;
      }
      else {
        local_58 = local_10;
        local_54 = local_18;
        local_50 = 0x2e;
      }
      uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
    }
    local_4c = local_2c;
    local_48 = local_28;
    local_44 = local_2c;
    local_40 = local_28;
    FUN_007d2d20(uVar7,unaff_EDI,&local_58);
  }
LAB_00806ae8:
  local_10 = *param_1;
  local_18 = param_1[1] + 1;
  local_8 = local_10 + 1;
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') {
    return;
  }
  local_38 = 0;
  local_3c = 0;
  local_28 = DAT_00f17898;
  local_2c = DAT_00f17898;
  local_30 = DAT_00f17898;
  local_34 = DAT_00f17898;
  iVar5 = DAT_00f17898;
  cVar3 = FUN_00494c90();
  if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
    cVar3 = FUN_00494c90();
    iVar4 = local_18;
    if (cVar3 != '\0') {
      return;
    }
    cVar3 = FUN_00494c90();
    if (cVar3 != '\0') {
      return;
    }
    local_58 = local_8;
    local_50 = 0x2d;
    local_54 = iVar4;
    local_4c = iVar5;
    local_48 = iVar5;
    local_44 = iVar5;
    local_40 = iVar5;
    local_34 = iVar5;
    local_30 = iVar5;
    local_2c = iVar5;
    local_28 = iVar5;
    FUN_007d2d20(*(undefined4 *)(unaff_ESI + 0x1588),unaff_EDI,&local_58);
    return;
  }
  cVar3 = FUN_00494c90();
  if (cVar3 == '\0') {
LAB_00806b88:
    bVar2 = false;
  }
  else {
    cVar3 = FUN_00494c90();
    bVar2 = true;
    if (cVar3 == '\0') goto LAB_00806b88;
  }
  local_20 = param_1[1] + -1;
  cVar3 = FUN_00494c90();
  if ((cVar3 == '\0') || (cVar3 = FUN_00494c90(), cVar3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar2) {
    local_58 = local_8;
    local_54 = local_18;
    local_4c = local_2c;
    local_44 = local_2c;
    uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
    local_50 = 0x29;
    local_48 = local_28;
    local_40 = local_28;
    if (!bVar1) {
      FUN_007d2d20(uVar7,unaff_EDI,&local_58);
      local_50 = 0x2c;
      goto LAB_00806c7f;
    }
  }
  else {
    if (!bVar1) {
      local_48 = local_28;
      local_40 = local_28;
      local_58 = local_8;
      local_54 = local_18;
      local_50 = 0x28;
      local_4c = local_2c;
      local_44 = local_2c;
      FUN_007d2d20(*(undefined4 *)(unaff_ESI + 0x1588),unaff_EDI,&local_58);
      return;
    }
    uVar7 = *(undefined4 *)(unaff_ESI + 0x1588);
    local_50 = 0x2a;
  }
  local_48 = local_28;
  local_4c = local_2c;
  local_54 = local_18;
  local_58 = local_8;
  local_44 = local_4c;
  local_40 = local_48;
  FUN_007d2d20(uVar7,unaff_EDI,&local_58);
  local_50 = 0x2b;
LAB_00806c7f:
  local_48 = local_28;
  local_40 = local_28;
  local_58 = *param_1 + 1;
  local_54 = param_1[1] + 1;
  local_4c = local_2c;
  local_44 = local_2c;
  FUN_007d2d20(*(undefined4 *)(unaff_ESI + 0x1588),unaff_EDI,&local_58);
  return;
}

