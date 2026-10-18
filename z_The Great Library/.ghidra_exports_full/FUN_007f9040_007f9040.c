// FUN_007f9040 @ 007f9040 body=[[007f9040, 007f9768] [007f9770, 007f9a5a]]


void FUN_007f9040(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int unaff_ESI;
  int iVar9;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  char local_6;
  char local_5;
  
  iVar5 = *(int *)(unaff_ESI + 0x40);
  iVar9 = 0;
  iVar4 = 0;
  local_14 = 0;
  local_6 = '\0';
  if (0 < (int)(*(int *)(iVar5 + 0x44) - *(int *)(iVar5 + 0x40) & 0xfffffffcU)) {
    piVar7 = *(int **)(iVar5 + 0x40);
    do {
      if ((float)*piVar7 < *(float *)(*(int *)(unaff_ESI + 0x10) + 0x348)) {
        iVar9 = iVar4 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
      local_14 = iVar9;
    } while (iVar4 < *(int *)(iVar5 + 0x44) - *(int *)(iVar5 + 0x40) >> 2);
  }
  piVar7 = *(int **)(unaff_ESI + 0x1a0);
  iVar9 = *piVar7;
  local_5 = '\0';
  if (*(int *)(*(int *)(unaff_ESI + 0x192c) + 0xf0) == 0) {
    (**(code **)(iVar9 + 0xe8))(piVar7,*(undefined4 *)(unaff_ESI + 0x208));
    local_5 = '\x01';
    if (DAT_00f092fa != '\0') goto LAB_007f9142;
    DAT_00f092fa = '\x01';
  }
  else if (local_14 == 0) {
    (**(code **)(iVar9 + 0xe8))(piVar7,*(undefined4 *)(unaff_ESI + 0x210));
    if (DAT_00f092fa != '\0') goto LAB_007f9142;
    DAT_00f092fa = '\x01';
  }
  else {
    (**(code **)(iVar9 + 0xe8))(piVar7,*(undefined4 *)(unaff_ESI + 0x214));
    local_6 = '\x01';
    if (DAT_00f092fa == '\0') goto LAB_007f9142;
    DAT_00f092fa = '\0';
  }
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xdc))();
LAB_007f9142:
  uVar2 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x14) + 0x1c) + 0x16c))();
  uVar3 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x14) + 0x1c) + 0x174))();
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x1b,0);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x13,2);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x14,1);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x16,3);
  local_c = 0;
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xfc))(*(int **)(unaff_ESI + 0x1a0),&local_c,0);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0x15c))(piVar7,*(undefined4 *)(unaff_ESI + 0x18e8));
  if (*(int *)(unaff_ESI + 0x1b8) != 0) {
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
              (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1b8),uVar2);
  }
  if (*(int *)(unaff_ESI + 0x1bc) != 0) {
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
              (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1bc),uVar3);
  }
  if (*(int *)(unaff_ESI + 0x1c4) != 0) {
    iVar9 = *(int *)(unaff_ESI + 0x1590);
    local_2c = *(undefined4 *)(iVar9 + 0x13c);
    local_28 = *(undefined4 *)(iVar9 + 0x140);
    local_30 = *(undefined4 *)(iVar9 + 0x138);
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x50))
              (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1c4),&local_30,0xc);
  }
  if (*(uint *)(unaff_ESI + 0xb8) < 10000) {
    iVar9 = *(uint *)(unaff_ESI + 0xb8) * 0x2c;
    local_2c = *(undefined4 *)(iVar9 + 0x17c + *(int *)(unaff_ESI + 0x3c));
    iVar9 = *(int *)(iVar9 + 0x180 + *(int *)(unaff_ESI + 0x3c));
  }
  else {
    iVar9 = 0;
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1c8),(float)iVar9);
  if (*(uint *)(unaff_ESI + 0xb8) < 10000) {
    iVar5 = *(uint *)(unaff_ESI + 0xb8) * 0x2c;
    iVar9 = *(int *)(iVar5 + 0x17c + *(int *)(unaff_ESI + 0x3c));
    local_28 = *(undefined4 *)(iVar5 + 0x180 + *(int *)(unaff_ESI + 0x3c));
  }
  else {
    iVar9 = 0;
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1cc),(float)iVar9);
  if (*(uint *)(unaff_ESI + 0xb8) < 10000) {
    iVar9 = *(uint *)(unaff_ESI + 0xb8) * 0x2c;
    local_2c = *(undefined4 *)(iVar9 + 0x17c + *(int *)(unaff_ESI + 0x3c));
    uVar8 = *(uint *)(iVar9 + 0x180 + *(int *)(unaff_ESI + 0x3c));
  }
  else {
    uVar8 = 0;
  }
  uVar6 = 1;
  local_28 = uVar6;
  if (1 < uVar8) {
    do {
      local_28 = 0;
      if (uVar6 == 0) break;
      uVar6 = uVar6 * 2;
      local_28 = uVar6;
    } while (uVar6 < uVar8);
  }
  fVar1 = (float)(int)local_28;
  if ((int)local_28 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1d0),fVar1);
  if (*(uint *)(unaff_ESI + 0xb8) < 10000) {
    uVar8 = *(uint *)(*(uint *)(unaff_ESI + 0xb8) * 0x2c + 0x17c + *(int *)(unaff_ESI + 0x3c));
  }
  else {
    uVar8 = 0;
  }
  uVar6 = 1;
  local_28 = uVar6;
  if (1 < uVar8) {
    do {
      local_28 = 0;
      if (uVar6 == 0) break;
      uVar6 = uVar6 * 2;
      local_28 = uVar6;
    } while (uVar6 < uVar8);
  }
  fVar1 = (float)(int)local_28;
  if ((int)local_28 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1d4),fVar1);
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1e0),
             (float)*(int *)(*(int *)(unaff_ESI + 0x40) + 0x2abc));
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1e4),
             (float)*(int *)(*(int *)(unaff_ESI + 0x40) + 0x2ac0));
  uVar8 = *(uint *)(unaff_ESI + 0xb4);
  if ((uVar8 == 0xffffffff) || (9999 < uVar8)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar8 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1a4),uVar2);
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1d8),
             (float)*(int *)(unaff_ESI + 0x194));
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1dc),
             (float)*(int *)(unaff_ESI + 0x198));
  local_10 = -0x40400000;
  if (local_5 == '\0') {
    local_10 = DAT_00f17a1c;
  }
  iVar9 = local_10;
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0x114))(piVar7,0,8,local_10);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0x114))(piVar7,1,8,iVar9);
  local_18 = 0;
  if (local_c != 0) {
    do {
      uVar8 = local_18;
      (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x100))(*(int **)(unaff_ESI + 0x1a0),local_18);
      if (local_5 == '\0') {
        uVar6 = *(uint *)(unaff_ESI + 0xc0);
        if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(uVar6 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
        }
        (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                  (*(int **)(unaff_ESI + 0x1a0),&DAT_00e1b2fc,uVar2);
        (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                  (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1ac),
                   *(undefined4 *)(*(int *)(unaff_ESI + 0x158c) + 0xc));
        (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                  (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1b0),
                   *(undefined4 *)(*(int *)(unaff_ESI + 0x158c) + 0x10));
        uVar6 = *(uint *)(unaff_ESI + 0xbc);
        if ((uVar6 == 0xffffffff) || (9999 < uVar6)) goto LAB_007f9636;
        uVar2 = *(undefined4 *)(uVar6 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
      }
      else {
        (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                  (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1ac),
                   *(undefined4 *)(*(int *)(unaff_ESI + 0x158c) + 0xc));
        (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                  (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1b0),
                   *(undefined4 *)(*(int *)(unaff_ESI + 0x158c) + 0x10));
        uVar6 = *(uint *)(unaff_ESI + 0xb8);
        if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
LAB_007f9636:
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(uVar6 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
        }
      }
      (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                (*(int **)(unaff_ESI + 0x1a0),&DAT_00e1b2f4,uVar2);
      if (local_6 == '\0') {
        if (DAT_012589cc == 0) {
          uVar6 = *(uint *)(unaff_ESI + 0x184);
          if ((uVar6 == 0xffffffff) || (9999 < uVar6)) goto LAB_007f96ef;
          uVar2 = *(undefined4 *)(uVar6 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
        }
        else if (DAT_012589cc == 1) {
          uVar6 = *(uint *)(unaff_ESI + 0x180);
          if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
LAB_007f96ef:
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(uVar6 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
          }
        }
        else {
          uVar6 = *(uint *)(unaff_ESI + 0x17c);
          if ((uVar6 == 0xffffffff) || (9999 < uVar6)) goto LAB_007f96ef;
          uVar2 = *(undefined4 *)(uVar6 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
        }
      }
      else {
        uVar6 = *(uint *)(unaff_ESI + 0x2a4);
        if ((uVar6 == 0xffffffff) || (9999 < uVar6)) goto LAB_007f96ef;
        uVar2 = *(undefined4 *)(uVar6 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
      }
      (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                (*(int **)(unaff_ESI + 0x1a0),&DAT_00e1b304,uVar2);
      uVar6 = *(uint *)(*(int *)(unaff_ESI + 0x27c) + local_14 * 4);
      if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(uVar6 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
      }
      (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                (*(int **)(unaff_ESI + 0x1a0),&DAT_00e1b30c,uVar2);
      uVar6 = *(int *)(unaff_ESI + 0x84) - *(int *)(unaff_ESI + 0x80) >> 2;
      local_10 = 0;
      local_28 = uVar6;
      if (0 < (int)uVar6) {
        do {
          iVar9 = *(int *)(*(int *)(unaff_ESI + 0x80) + local_10 * 4) * 0x3c0 +
                  *(int *)(unaff_ESI + 0x19c);
          if ((*(int *)(iVar9 + 600) != 0) || (*(int *)(iVar9 + 0x25c) != 0)) {
            if (*(int *)(iVar9 + 0x39c) != 0) {
              (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                        (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1a8),
                         *(int *)(iVar9 + 0x39c));
              uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                                (*(int **)(unaff_ESI + 0x1a0),0,"TerrainIndexOffsetX");
              local_1c = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                                   (*(int **)(unaff_ESI + 0x1a0),0,"TerrainIndexOffsetY");
              local_20 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                                   (*(int **)(unaff_ESI + 0x1a0),0,"TerrainIndexSizeX");
              local_24 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                                   (*(int **)(unaff_ESI + 0x1a0),0,"TerrainIndexSizeY");
              (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
                        (*(int **)(unaff_ESI + 0x1a0),uVar2,(float)*(int *)(iVar9 + 0x3b0));
              (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
                        (*(int **)(unaff_ESI + 0x1a0),local_1c,(float)*(int *)(iVar9 + 0x3b4));
              (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
                        (*(int **)(unaff_ESI + 0x1a0),local_20,(float)*(int *)(iVar9 + 0x3b8));
              (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
                        (*(int **)(unaff_ESI + 0x1a0),local_24,(float)*(int *)(iVar9 + 0x3bc));
            }
            if (*(int *)(unaff_ESI + 0x1c0) != 0) {
              (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
                        (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1c0),iVar9 + 0x1fc);
            }
            if (*(int *)(unaff_ESI + 0x1b4) != 0) {
              (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
                        (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1b4),iVar9 + 0x17c);
            }
            (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
                      (*(int **)(unaff_ESI + 0x1a0),"AbsoluteWorldMatrix",iVar9 + 0x13c);
            (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x104))(*(int **)(unaff_ESI + 0x1a0));
            piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
            if (*(int *)(iVar9 + 0x28c) != 0) {
              (**(code **)(*piVar7 + 0x164))(piVar7,*(int *)(iVar9 + 0x28c));
            }
            (**(code **)(*piVar7 + 400))
                      (piVar7,0,*(undefined4 *)(iVar9 + 0x270),0,*(undefined4 *)(iVar9 + 0x288));
            (**(code **)(*piVar7 + 0x1a0))(piVar7,*(undefined4 *)(iVar9 + 0x250));
            (**(code **)(*piVar7 + 0x148))
                      (piVar7,4,0,0,*(undefined4 *)(iVar9 + 0x27c),0,*(undefined4 *)(iVar9 + 0x25c))
            ;
            uVar6 = local_28;
          }
          local_10 = local_10 + 1;
          uVar8 = local_18;
        } while (local_10 < (int)uVar6);
      }
      (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x104))(*(int **)(unaff_ESI + 0x1a0));
      (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x108))(*(int **)(unaff_ESI + 0x1a0));
      local_18 = uVar8 + 1;
    } while (local_18 < local_c);
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x10c))(*(int **)(unaff_ESI + 0x1a0));
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  local_28 = 0;
  (**(code **)(*piVar7 + 0x114))(piVar7,0,8,0);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0x114))(piVar7,1,8,0);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x13,5);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x14,6);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x16,1);
  return;
}

