// FUN_00b179c0 @ 00b179c0 body=[[00b179c0, 00b182d4]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b179c0(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float *local_58;
  undefined1 local_54 [16];
  float local_44 [4];
  float local_34 [4];
  float local_24 [4];
  float local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  pfVar11 = param_6;
  local_4 = DAT_00ef259c ^ (uint)&local_58;
  local_44[0] = 0.0;
  fVar1 = *param_6;
  local_34[0] = fVar1;
  fVar2 = param_6[1];
  local_34[1] = fVar2;
  local_58 = param_1;
  fVar3 = param_6[2];
  local_34[2] = fVar3;
  if (fVar2 == fVar1) {
    if (fVar3 == fVar1) {
      iVar14 = 3;
    }
    else {
      iVar14 = 2;
    }
  }
  else if (fVar3 == fVar1) {
    iVar14 = 1;
  }
  else {
    if (fVar2 != fVar3) {
      local_44[0] = param_2;
      local_44[1] = param_3;
      local_44[2] = param_4;
      local_44[3] = param_5;
      local_24[0] = 0.0;
      bVar5 = param_2 < 0.0;
      local_14 = (float)(uint)bVar5;
      if (param_2 < 0.0) {
        local_44[0] = -param_2;
      }
      local_24[1] = 0.0;
      bVar6 = param_3 < 0.0;
      local_10 = (uint)bVar6;
      if (param_3 < 0.0) {
        local_44[1] = -param_3;
      }
      local_24[2] = 0.0;
      bVar7 = param_4 < 0.0;
      local_c = (uint)bVar7;
      if (bVar7) {
        local_44[2] = -param_4;
      }
      local_24[3] = 0.0;
      bVar8 = param_5 < 0.0;
      local_8 = (uint)bVar8;
      if (bVar8) {
        local_44[3] = -param_5;
      }
      uVar17 = (uint)(local_44[0] <= local_44[1]);
      uVar15 = 2;
      if (local_44[2] <= local_44[3]) {
        uVar15 = 3;
      }
      if (local_44[uVar17] <= local_44[uVar15]) {
        uVar18 = uVar15 ^ 1;
        uVar16 = uVar15;
        uVar15 = uVar17;
        if (local_44[uVar17] < local_44[uVar18]) goto LAB_00b18139;
      }
      else {
        uVar18 = uVar17 ^ 1;
        uVar16 = uVar17;
        if (local_44[uVar15] < local_44[uVar18]) {
LAB_00b18139:
          uVar15 = uVar18;
        }
      }
      fVar9 = (local_44[1] + local_44[0] + local_44[2] + local_44[3]) * 0.5;
      fVar10 = (local_44[uVar15] + local_44[uVar16]) * 0.70710677;
      if (fVar9 <= fVar10) {
        if (fVar10 <= local_44[uVar16]) goto LAB_00b1826b;
        fVar1 = 0.70710677;
        if (*(char *)(&local_14 + uVar16) != '\0') {
          fVar1 = -0.70710677;
        }
        cVar4 = *(char *)(&local_14 + uVar15);
        local_24[uVar16] = fVar1;
        fVar1 = 0.70710677;
        if (cVar4 != '\0') {
          fVar1 = -0.70710677;
        }
        local_24[uVar15] = fVar1;
        uVar17 = uVar16;
        if (uVar16 < uVar15) {
          uVar17 = uVar15;
          uVar15 = uVar16;
        }
        if (uVar17 == 3) {
          uVar17 = (uint)(char)(&DAT_00de0640)[uVar15];
          uVar15 = (3 - uVar17) - uVar15;
        }
        local_34[3] = local_34[uVar17];
        local_34[uVar17] = local_34[uVar15];
        local_34[uVar15] = local_34[3];
      }
      else if (fVar9 <= local_44[uVar16]) {
LAB_00b1826b:
        if (*(char *)(&local_14 + uVar16) == '\0') {
          fVar1 = 1.0;
        }
        else {
          fVar1 = -1.0;
        }
        local_24[uVar16] = fVar1;
      }
      else {
        if (bVar5) {
          local_24[0] = -0.5;
        }
        else {
          local_24[0] = 0.5;
        }
        if (bVar6) {
          local_24[1] = -0.5;
        }
        else {
          local_24[1] = 0.5;
        }
        if (bVar7) {
          local_24[2] = -0.5;
        }
        else {
          local_24[2] = 0.5;
        }
        local_24[3] = -0.5;
        if (!bVar8) {
          local_24[3] = 0.5;
        }
        local_34[0] = fVar3;
        local_34[1] = fVar1;
        local_34[2] = fVar2;
        if (((bVar5 != bVar6) != bVar7) != bVar8) {
          local_34[0] = fVar2;
          local_34[1] = fVar3;
          local_34[2] = fVar1;
        }
      }
      fVar1 = -local_24[0];
      fVar2 = -local_24[1];
      fVar3 = -local_24[2];
      fVar9 = local_24[3];
      goto LAB_00b18298;
    }
    iVar14 = 0;
  }
  if ((DAT_00f20a68 & 1) == 0) {
    DAT_00f20a68 = DAT_00f20a68 | 1;
    _DAT_00f20a58 = 0.0;
    _DAT_00f20a60 = 0;
    _DAT_00f20a5c = 0x3f3504f3;
    _DAT_00f20a64 = 0x3f3504f3;
  }
  if ((DAT_00f20a68 & 2) == 0) {
    _DAT_00f20a48 = 0.70710677;
    DAT_00f20a68 = DAT_00f20a68 | 2;
    _DAT_00f20a54 = 0x3f3504f3;
    _DAT_00f20a4c = 0;
    _DAT_00f20a50 = 0;
  }
  if ((DAT_00f20a68 & 4) == 0) {
    DAT_00f20a68 = DAT_00f20a68 | 4;
    _DAT_00f20a38 = 0.5;
    _DAT_00f20a3c = 0x3f000000;
    _DAT_00f20a40 = 0xbf000000;
    _DAT_00f20a44 = 0xbf000000;
  }
  if ((DAT_00f20a68 & 8) == 0) {
    DAT_00f20a68 = DAT_00f20a68 | 8;
    _DAT_00f20a28 = 0.5;
    _DAT_00f20a2c = 0x3f000000;
    _DAT_00f20a30 = 0x3f000000;
    _DAT_00f20a34 = 0x3f000000;
  }
  if ((DAT_00f20a68 & 0x10) == 0) {
    _DAT_00f20a18 = -0.5;
    DAT_00f20a68 = DAT_00f20a68 | 0x10;
    _DAT_00f20a20 = 0xbf000000;
    _DAT_00f20a24 = 0xbf000000;
    _DAT_00f20a1c = 0x3f000000;
  }
  if ((DAT_00f20a68 & 0x20) == 0) {
    DAT_00f20a68 = DAT_00f20a68 | 0x20;
    _DAT_00f20a08 = 0.5;
    _DAT_00f20a0c = 0x3f000000;
    _DAT_00f20a10 = 0x3f000000;
    _DAT_00f20a14 = 0xbf000000;
  }
  if ((DAT_00f20a68 & 0x40) == 0) {
    DAT_00f20a68 = DAT_00f20a68 | 0x40;
    _DAT_00f209f8 = 0.0;
    _DAT_00f209fc = 0;
    _DAT_00f20a00 = 0;
    _DAT_00f20a04 = 0x3f800000;
  }
  if (-1 < (char)DAT_00f20a68) {
    _DAT_00f209e8 = 1.0;
    DAT_00f20a68 = DAT_00f20a68 | 0x80;
    _DAT_00f209ec = 0;
    _DAT_00f209f0 = 0;
    _DAT_00f209f4 = 0;
  }
  if (iVar14 == 0) {
    local_14 = _DAT_00f20a58;
    local_10 = _DAT_00f20a5c;
    local_c = _DAT_00f20a60;
    local_8 = _DAT_00f20a64;
    pfVar13 = (float *)FUN_00b185f0(local_24,&param_2,&local_14);
    fVar1 = local_34[0];
    param_2 = *pfVar13;
    param_3 = pfVar13[1];
    param_4 = pfVar13[2];
    param_5 = pfVar13[3];
    local_34[0] = local_34[2];
    local_34[2] = fVar1;
  }
  else if (iVar14 == 1) {
    local_14 = _DAT_00f20a48;
    local_10 = _DAT_00f20a4c;
    local_c = _DAT_00f20a50;
    local_8 = _DAT_00f20a54;
    pfVar13 = (float *)FUN_00b185f0(local_24,&param_2,&local_14);
    fVar1 = local_34[1];
    param_2 = *pfVar13;
    param_3 = pfVar13[1];
    param_4 = pfVar13[2];
    param_5 = pfVar13[3];
    local_34[1] = local_34[2];
    local_34[2] = fVar1;
  }
  else {
    if (iVar14 != 2) {
      *param_1 = -param_2;
      param_1[1] = -param_3;
      param_1[2] = -param_4;
      param_1[3] = param_5;
      __security_check_cookie(local_4 ^ (uint)&local_58);
      return;
    }
    local_14 = _DAT_00f209f8;
    local_10 = _DAT_00f209fc;
    local_c = _DAT_00f20a00;
    local_8 = _DAT_00f20a04;
  }
  fVar3 = local_34[2];
  fVar2 = local_34[0];
  param_2 = -param_2;
  param_3 = -param_3;
  param_4 = -param_4;
  local_24[0] = (param_5 * param_5 + param_4 * param_4) - 0.5;
  local_24[1] = param_4 * param_2 - param_3 * param_5;
  fVar1 = param_4 * param_3 + param_2 * param_5;
  bVar5 = 0.0 <= local_24[0];
  if (!bVar5) {
    local_24[0] = -local_24[0];
  }
  bVar6 = 0.0 <= local_24[1];
  if (!bVar6) {
    local_24[1] = -local_24[1];
  }
  local_24[2] = fVar1;
  if (fVar1 < 0.0) {
    local_24[2] = -fVar1;
  }
  if (local_24[0] <= local_24[1]) {
    iVar14 = 1;
    if (local_24[1] <= local_24[2]) goto LAB_00b17deb;
  }
  else if (local_24[0] <= local_24[2]) {
LAB_00b17deb:
    iVar14 = 2;
  }
  else {
    iVar14 = 0;
  }
  if (iVar14 == 0) {
    if (bVar5) {
      local_44[0] = _DAT_00f209f8;
      local_44[1] = (float)_DAT_00f209fc;
      local_44[2] = (float)_DAT_00f20a00;
      local_44[3] = (float)_DAT_00f20a04;
    }
    else {
      local_44[0] = _DAT_00f209e8;
      local_44[1] = (float)_DAT_00f209ec;
      local_44[2] = (float)_DAT_00f209f0;
      local_44[3] = (float)_DAT_00f209f4;
    }
  }
  else if (iVar14 == 1) {
    if (bVar6) {
      local_44[0] = _DAT_00f20a28;
      local_44[1] = (float)_DAT_00f20a2c;
      local_44[2] = (float)_DAT_00f20a30;
      local_44[3] = (float)_DAT_00f20a34;
    }
    else {
      local_44[0] = _DAT_00f20a38;
      local_44[1] = (float)_DAT_00f20a3c;
      local_44[2] = (float)_DAT_00f20a40;
      local_44[3] = (float)_DAT_00f20a44;
    }
    local_34[2] = local_34[1];
    local_34[1] = local_34[0];
    local_34[0] = fVar3;
  }
  else if (iVar14 == 2) {
    if (0.0 <= fVar1) {
      local_44[0] = _DAT_00f20a08;
      local_44[1] = (float)_DAT_00f20a0c;
      local_44[2] = (float)_DAT_00f20a10;
      local_44[3] = (float)_DAT_00f20a14;
    }
    else {
      local_44[0] = _DAT_00f20a18;
      local_44[1] = (float)_DAT_00f20a1c;
      local_44[2] = (float)_DAT_00f20a20;
      local_44[3] = (float)_DAT_00f20a24;
    }
    local_34[0] = local_34[1];
    local_34[1] = local_34[2];
    local_34[2] = fVar2;
  }
  iVar12 = FUN_00b185f0(local_54,&param_2,local_44);
  local_24[0] = 0.0;
  local_24[1] = 0.0;
  local_24[2] = -(*(float *)(iVar12 + 8) / SQRT(local_24[iVar14] + 0.5));
  local_24[3] = *(float *)(iVar12 + 0xc) / SQRT(local_24[iVar14] + 0.5);
  pfVar13 = (float *)FUN_00b185f0(local_54,local_44,local_24);
  local_44[3] = pfVar13[3];
  local_44[0] = -*pfVar13;
  local_44[1] = -pfVar13[1];
  local_44[2] = -pfVar13[2];
  pfVar13 = (float *)FUN_00b185f0(local_54,&local_14,local_44);
  fVar1 = *pfVar13;
  fVar2 = pfVar13[1];
  fVar3 = pfVar13[2];
  fVar9 = pfVar13[3];
LAB_00b18298:
  *pfVar11 = local_34[0];
  pfVar11[1] = local_34[1];
  pfVar11[2] = local_34[2];
  *local_58 = fVar1;
  local_58[1] = fVar2;
  local_58[2] = fVar3;
  local_58[3] = fVar9;
  __security_check_cookie(local_4 ^ (uint)&local_58);
  return;
}

