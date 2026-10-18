// FUN_007f9fd0 @ 007f9fd0 body=[[007f9fd0, 007fa738]]


void FUN_007f9fd0(void)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int unaff_ESI;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  iVar6 = *(int *)(unaff_ESI + 0x40);
  iVar5 = 0;
  local_c = 0;
  if (0 < (int)(*(int *)(iVar6 + 0x44) - *(int *)(iVar6 + 0x40) & 0xfffffffcU)) {
    piVar7 = *(int **)(iVar6 + 0x40);
    do {
      if ((float)*piVar7 < *(float *)(*(int *)(unaff_ESI + 0x10) + 0x348)) {
        local_c = iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar5 < *(int *)(iVar6 + 0x44) - *(int *)(iVar6 + 0x40) >> 2);
  }
  uVar3 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x14) + 0x1c) + 0x16c))();
  uVar4 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x14) + 0x1c) + 0x174))();
  local_10 = 0;
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x1b,1);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x13,5);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x14,1);
  piVar7 = *(int **)(unaff_ESI + 0x1a0);
  local_5 = '\0';
  if (*(int *)(*(int *)(unaff_ESI + 0x192c) + 0xf0) == 0) {
    (**(code **)(*piVar7 + 0xe8))(piVar7,*(undefined4 *)(unaff_ESI + 0x218));
    local_5 = '\x01';
  }
  else {
    if (local_c == 0) {
      uVar8 = *(undefined4 *)(unaff_ESI + 0x220);
    }
    else {
      uVar8 = *(undefined4 *)(unaff_ESI + 0x224);
    }
    (**(code **)(*piVar7 + 0xe8))(piVar7,uVar8);
  }
  if (*(uint *)(unaff_ESI + 0xb8) < 10000) {
    iVar6 = *(uint *)(unaff_ESI + 0xb8) * 0x2c;
    local_24 = *(undefined4 *)(iVar6 + 0x17c + *(int *)(unaff_ESI + 0x3c));
    iVar6 = *(int *)(iVar6 + 0x180 + *(int *)(unaff_ESI + 0x3c));
  }
  else {
    iVar6 = 0;
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1c8),(float)iVar6);
  if (*(uint *)(unaff_ESI + 0xb8) < 10000) {
    iVar5 = *(uint *)(unaff_ESI + 0xb8) * 0x2c;
    iVar6 = *(int *)(iVar5 + 0x17c + *(int *)(unaff_ESI + 0x3c));
    local_20 = *(undefined4 *)(iVar5 + 0x180 + *(int *)(unaff_ESI + 0x3c));
  }
  else {
    iVar6 = 0;
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1cc),(float)iVar6);
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1e0),
             (float)*(int *)(*(int *)(unaff_ESI + 0x40) + 0x2abc));
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1e4),
             (float)*(int *)(*(int *)(unaff_ESI + 0x40) + 0x2ac0));
  local_10 = 0;
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xfc))(*(int **)(unaff_ESI + 0x1a0),&local_10,0);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0x15c))(piVar7,*(undefined4 *)(unaff_ESI + 0x18ec));
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x100))(*(int **)(unaff_ESI + 0x1a0),0);
  if (*(int *)(unaff_ESI + 0x1b8) != 0) {
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
              (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1b8),uVar3);
  }
  if (*(int *)(unaff_ESI + 0x1bc) != 0) {
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
              (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1bc),uVar4);
  }
  if (*(int *)(unaff_ESI + 0x1c4) != 0) {
    iVar6 = *(int *)(unaff_ESI + 0x1590);
    local_24 = *(undefined4 *)(iVar6 + 0x13c);
    local_20 = *(undefined4 *)(iVar6 + 0x140);
    local_28 = *(undefined4 *)(iVar6 + 0x138);
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x50))
              (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1c4),&local_28,0xc);
  }
  cVar2 = local_5;
  if (local_5 == '\0') {
    uVar1 = *(uint *)(unaff_ESI + 0xbc);
    if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
    }
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
              (*(int **)(unaff_ESI + 0x1a0),&DAT_00e1b2f4,uVar3);
    uVar1 = *(uint *)(unaff_ESI + 0xb4);
    if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
    }
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
              (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1a4),uVar3);
  }
  else {
    uVar1 = *(uint *)(unaff_ESI + 0xb8);
    if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
    }
    (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
              (*(int **)(unaff_ESI + 0x1a0),&DAT_00e1b2f4,uVar3);
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1ac),
             *(undefined4 *)(*(int *)(unaff_ESI + 0x158c) + 0xc));
  uVar1 = *(uint *)(*(int *)(unaff_ESI + 0x27c) + local_c * 4);
  if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + *(int *)(unaff_ESI + 0x3c));
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
            (*(int **)(unaff_ESI + 0x1a0),&DAT_00e1b30c,uVar3);
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1d8),
             (float)*(int *)(unaff_ESI + 0x194));
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
            (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1dc),
             (float)*(int *)(unaff_ESI + 0x198));
  local_c = 0xbfd9999a;
  if (cVar2 == '\0') {
    local_c = DAT_00f17a1c;
  }
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0x114))(piVar7,0,8,local_c);
  local_20 = *(int *)(unaff_ESI + 0x84) - *(int *)(unaff_ESI + 0x80) >> 2;
  local_c = 0;
  if (0 < local_20) {
    do {
      iVar6 = *(int *)(*(int *)(unaff_ESI + 0x80) + local_c * 4) * 0x3c0 +
              *(int *)(unaff_ESI + 0x19c);
      if ((*(int *)(iVar6 + 0x2c4) != 0) || (*(int *)(iVar6 + 0x2c8) != 0)) {
        if (*(int *)(iVar6 + 0x39c) != 0) {
          (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0xd0))
                    (*(int **)(unaff_ESI + 0x1a0),*(undefined4 *)(unaff_ESI + 0x1a8),
                     *(int *)(iVar6 + 0x39c));
          uVar3 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                            (*(int **)(unaff_ESI + 0x1a0),0,"TerrainIndexOffsetX");
          local_14 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                               (*(int **)(unaff_ESI + 0x1a0),0,"TerrainIndexOffsetY");
          local_18 = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                               (*(int **)(unaff_ESI + 0x1a0),0,"TerrainIndexSizeX");
          local_1c = (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x24))
                               (*(int **)(unaff_ESI + 0x1a0),0,"TerrainIndexSizeY");
          (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
                    (*(int **)(unaff_ESI + 0x1a0),uVar3,(float)*(int *)(iVar6 + 0x3b0));
          (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
                    (*(int **)(unaff_ESI + 0x1a0),local_14,(float)*(int *)(iVar6 + 0x3b4));
          (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
                    (*(int **)(unaff_ESI + 0x1a0),local_18,(float)*(int *)(iVar6 + 0x3b8));
          (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x78))
                    (*(int **)(unaff_ESI + 0x1a0),local_1c,(float)*(int *)(iVar6 + 0x3bc));
        }
        if (*(int *)(unaff_ESI + 0x1c0) != 0) {
          (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
                    (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1c0),iVar6 + 0x1fc);
        }
        if (*(int *)(unaff_ESI + 0x1b4) != 0) {
          (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
                    (*(int **)(unaff_ESI + 0x1a0),*(int *)(unaff_ESI + 0x1b4),iVar6 + 0x17c);
        }
        (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x98))
                  (*(int **)(unaff_ESI + 0x1a0),"AbsoluteWorldMatrix",iVar6 + 0x13c);
        if ((*(int *)(iVar6 + 0x2e8) != 0) || (*(int *)(iVar6 + 0x2ec) != 0)) {
          (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x104))(*(int **)(unaff_ESI + 0x1a0));
          piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
          if (*(int *)(iVar6 + 0x2d4) != 0) {
            (**(code **)(*piVar7 + 0x164))(piVar7,*(int *)(iVar6 + 0x2d4));
          }
          (**(code **)(*piVar7 + 400))
                    (piVar7,0,*(undefined4 *)(iVar6 + 0x2b8),0,*(undefined4 *)(iVar6 + 0x2d0));
          (**(code **)(*piVar7 + 0x1a0))(piVar7,*(undefined4 *)(iVar6 + 0x2e0));
          (**(code **)(*piVar7 + 0x148))
                    (piVar7,4,0,0,*(undefined4 *)(iVar6 + 0x2c4),0,*(undefined4 *)(iVar6 + 0x2ec));
        }
      }
      local_c = local_c + 1;
    } while (local_c < local_20);
  }
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x104))(*(int **)(unaff_ESI + 0x1a0));
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x108))(*(int **)(unaff_ESI + 0x1a0));
  (**(code **)(**(int **)(unaff_ESI + 0x1a0) + 0x10c))(*(int **)(unaff_ESI + 0x1a0));
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  local_20 = 0;
  (**(code **)(*piVar7 + 0x114))(piVar7,0,8,0);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x13,5);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x14,6);
  piVar7 = *(int **)(*(int *)(unaff_ESI + 0x3c) + 100);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x16,1);
  return;
}

