// FUN_00440250 @ 00440250 body=[[00440250, 00440a1b]]


/* WARNING: Removing unreachable block (ram,0x0044093d) */

void FUN_00440250(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint3 uVar5;
  undefined1 uVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint unaff_EBX;
  undefined8 uVar14;
  undefined2 uVar15;
  char cStack_74;
  uint local_70;
  int local_68;
  int local_64;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  float fStack_40;
  int local_3c;
  int local_38;
  int local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [16];
  int local_18;
  int iStack_14;
  
  *(undefined1 *)(param_1 + 0xb4) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_3c = *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x94) >> 2;
  if (local_3c < 1) goto LAB_004409e3;
  local_18 = *(int *)(DAT_012588e8 + 0xb5c);
  local_30 = DAT_012588e8 + 0xb5c;
  local_4c = -1;
  local_48 = -1;
  local_38 = -1;
  local_58 = 0.0;
  local_50 = 0.0;
  local_5c = 0.0;
  local_54 = 0.0;
  local_64 = 0;
  local_68 = 0;
  bVar4 = false;
  uVar5 = (uint3)(undefined3)local_70 >> 8;
  bVar3 = false;
  local_70 = (uint)(ushort)((short)uVar5 << 8);
  local_60 = 0;
  if (local_3c < 1) {
LAB_00440970:
    pcVar13 = *(code **)(**(int **)(param_1 + 0x88) + 0x48);
    cVar7 = '\x03';
LAB_00440980:
    (*pcVar13)(cVar7);
  }
  else {
    do {
      piVar11 = *(int **)(*(int *)(param_1 + 0x94) + local_60 * 4);
      (**(code **)(*(int *)piVar11[0x42] + 0x58))(&local_18);
      iVar10 = *(int *)(DAT_012587e4 + 4);
      iVar1 = *(int *)(iVar10 + piVar11[0x31] * 4);
      iStack_14 = *(int *)(iVar1 + 0xcf8);
      iVar1 = *(int *)(iVar1 + 0xcfc);
      if (((iVar1 == 0) || (iVar1 != local_18)) ||
         (iStack_14 = piVar11[0x30],
         *(int *)(*(int *)(*(int *)(*(int *)(iVar10 + piVar11[0x31] * 4) + 0xbe8) + iVar1 * 4) +
                 0x1c) != iVar1)) {
LAB_00440463:
        bVar2 = false;
      }
      else {
        iStack_14 = piVar11[0x30];
        if (((*(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 <= piVar11[0x31])
            || (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + piVar11[0x31] * 4) != 0)) ||
           (iStack_14 = piVar11[0x30],
           *(char *)(*(int *)(*(int *)(*(int *)(iVar10 + piVar11[0x31] * 4) + 0xbe8) + iVar1 * 4) +
                    0x70) == '\0')) goto LAB_00440463;
        bVar2 = true;
        bVar4 = true;
      }
      iVar10 = piVar11[0x33];
      if (iVar10 == *(int *)(local_48 + 0x20)) {
LAB_004404a3:
        unaff_EBX = unaff_EBX & 0xffff0000;
      }
      else {
        uVar15 = (undefined2)(unaff_EBX >> 0x10);
        if (*(int *)(*(int *)(*(int *)(local_48 + 0xbe8) + iVar10 * 4) + 0x34) == 0) {
          if ((((char)piVar11[0x32] == 'R') && (*(char *)((int)piVar11 + 0xc9) == 'E')) &&
             (*(char *)((int)piVar11 + 0xca) == 'B')) {
            unaff_EBX = CONCAT22(uVar15,0x100);
          }
          else if (((*(char *)(local_48 + 0x1c) != 'R') || (*(char *)(local_48 + 0x1d) != 'E')) ||
                  (unaff_EBX = CONCAT22(uVar15,0x100), *(char *)(local_48 + 0x1e) != 'B'))
          goto LAB_004404a3;
        }
        else {
          unaff_EBX = CONCAT22(uVar15,0x100);
        }
      }
      if ((char)(unaff_EBX >> 0x10) == '\0') {
        uVar6 = FUN_0051af10(1);
        unaff_EBX = CONCAT13((char)(unaff_EBX >> 0x18),CONCAT12(uVar6,(short)unaff_EBX));
      }
      if ((char)piVar11[0x59] != '\0') {
        unaff_EBX = CONCAT13(1,(int3)unaff_EBX);
      }
      if (((cStack_74 == '\0') && (local_70 != 0)) && ((iVar10 == iRam00000003 || (bVar2)))) {
        piVar8 = (int *)(**(code **)(*piVar11 + 0x7c))(auStack_2c);
        piVar9 = (int *)(**(code **)(*piVar11 + 0x78))(auStack_2c);
        iVar10 = *piVar8 + *piVar9;
        if (local_70 == 0) {
          iVar10 = -1;
        }
        else if (iVar10 + 0x189373U < 0x39580e) {
          iVar10 = (iVar10 * 1000) / (int)local_70;
        }
        else {
          uVar14 = __allmul(iVar10,iVar10 >> 0x1f,1000,0);
          iVar10 = __alldiv(uVar14,local_70,0);
        }
        if (0 < iVar10) {
          cStack_74 = '\x01';
        }
      }
      cVar7 = (char)(unaff_EBX >> 8);
      if (((local_50 == -NAN) && (cVar7 == '\0')) || (piVar11[0x33] == *(int *)(local_48 + 0x20))) {
        local_50 = (float)piVar11[0x33];
        iStack_14 = piVar11[0x32];
        local_3c = FUN_0052fc10();
      }
      if ((local_4c == -1) && (cVar7 != '\0')) {
        local_4c = piVar11[0x33];
        iStack_14 = piVar11[0x32];
        local_38 = FUN_0052fc10();
      }
      cVar7 = (**(code **)(*piVar11 + 0x3c))();
      if (cVar7 != '\0') {
        bVar3 = true;
      }
      if (((*(char *)(param_1 + 0xb4) == '\0') && ((int *)piVar11[0x43] != (int *)0x0)) &&
         (cVar7 = (**(code **)(*(int *)piVar11[0x43] + 0x3c))(), cVar7 != '\0')) {
        *(undefined1 *)(param_1 + 0xb4) = 1;
      }
      (**(code **)(*piVar11 + 0x28))(&local_30);
      local_48 = -0x457ced91;
      piVar8 = (int *)(**(code **)(*piVar11 + 0x94))(auStack_28);
      piVar11 = (int *)(**(code **)(*piVar11 + 0x44))(auStack_28);
      iVar10 = *piVar8;
      uVar12 = extraout_ECX;
      if (iVar10 == 0) {
        iVar10 = -1;
      }
      else {
        iVar1 = *piVar11;
        if ((iVar1 < -0x189373) || (0x20c49a < iVar1)) {
          uVar14 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
          iVar10 = __alldiv(uVar14,iVar10,iVar10 >> 0x1f);
          uVar12 = extraout_ECX_00;
        }
        else {
          iVar10 = (iVar1 * 1000) / iVar10;
        }
      }
      if (bVar2) {
        local_68 = local_68 + 1;
        local_50 = (float)iVar10 / 1000.0 + local_50;
        local_54 = fStack_40 + local_54;
      }
      else {
        local_64 = local_64 + 1;
        local_58 = (float)iVar10 / 1000.0 + local_58;
        local_5c = fStack_40 + local_5c;
      }
      local_60 = local_60 + 1;
    } while (local_60 < local_3c);
    if (local_5c <= 0.0) {
      if (0.0 < local_54) {
        FUN_00401000((local_54 + 0.0005) * 1000.0,uVar12);
        uVar12 = FUN_00b31c00();
        FUN_004400d0(uVar12);
        iVar10 = local_68;
        uVar12 = extraout_ECX_02;
        if (0 < local_68) goto LAB_00440832;
        FUN_00440170(0);
      }
    }
    else {
      FUN_00401000((local_5c + 0.0005) * 1000.0,uVar12);
      uVar12 = FUN_00b31c00();
      FUN_004400d0(uVar12);
      iVar10 = local_64;
      local_50 = local_58;
      uVar12 = extraout_ECX_01;
      if (local_64 < 1) {
        FUN_00440170(0);
      }
      else {
LAB_00440832:
        FUN_00401000((local_50 / (float)iVar10 + 0.0005) * 1000.0,uVar12);
        uVar12 = FUN_00b31c00();
        FUN_00440170(uVar12);
      }
    }
    if (local_4c == -1) {
      FUN_00440200();
    }
    else if ((*(int *)(param_1 + 0xac) != local_38) || (local_4c != *(int *)(param_1 + 0xb0))) {
      *(int *)(param_1 + 0xb0) = local_4c;
      *(int *)(param_1 + 0xac) = local_38;
      (**(code **)(**(int **)(param_1 + 0x90) + 0xd4))(local_4c);
      piVar11 = (int *)(**(code **)(**(int **)(param_1 + 0x90) + 0xec))();
      (**(code **)(*piVar11 + 0x150))(local_38);
    }
    if (bVar3) {
      (**(code **)(**(int **)(param_1 + 0x88) + 0x48))(3);
    }
    else {
      if (local_68 == 0) {
        if (local_64 == 0) goto LAB_00440970;
        pcVar13 = *(code **)(**(int **)(param_1 + 0x88) + 0x48);
        cVar7 = !bVar4 * '\x02' + '\x01';
        goto LAB_00440980;
      }
      (**(code **)(**(int **)(param_1 + 0x88) + 0x48))(2);
    }
  }
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    if ((char)(unaff_EBX >> 0x18) == '\0') {
      cVar7 = bVar3 + '\x01';
    }
    else {
      cVar7 = '\x03';
    }
    (**(code **)(**(int **)(param_1 + 0x24) + 0x48))(cVar7);
  }
  piVar11 = *(int **)(param_1 + 0x8c);
  if (cStack_74 == '\0') {
    if (*(char *)((int)piVar11 + 0x4f) == '\0') goto LAB_004409e3;
    pcVar13 = *(code **)(*piVar11 + 0x104);
  }
  else {
    if (*(char *)((int)piVar11 + 0x4f) != '\0') goto LAB_004409e3;
    (**(code **)(*piVar11 + 0x108))();
    pcVar13 = *(code **)(**(int **)(param_1 + 0x8c) + 0x34);
  }
  (*pcVar13)();
LAB_004409e3:
  if ((*(char *)(param_1 + 0xb4) == '\0') && (*(int *)(param_1 + 0xb8) == 5)) {
    *(bool *)(param_1 + 0xb4) =
         0 < (int)(*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x94) & 0xfffffffcU);
  }
  return;
}

