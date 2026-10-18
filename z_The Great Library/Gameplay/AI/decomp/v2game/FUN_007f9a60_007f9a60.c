// FUN_007f9a60 @ 007f9a60 body=[[007f9a60, 007f9fc6]]


void FUN_007f9a60(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int unaff_EDI;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar2 = (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x14) + 0x1c) + 0x16c))();
  uVar3 = (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x14) + 0x1c) + 0x174))();
  piVar9 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar9 + 0xe4))(piVar9,0x1b,1);
  piVar9 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar9 + 0xe4))(piVar9,0x13,5);
  piVar9 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar9 + 0xe4))(piVar9,0x14,6);
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0xe8))
            (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x228));
  local_8 = 0;
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0xfc))(*(int **)(unaff_EDI + 0x1a0),&local_8,0);
  if (*(int *)(unaff_EDI + 0x1b8) != 0) {
    (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x98))
              (*(int **)(unaff_EDI + 0x1a0),*(int *)(unaff_EDI + 0x1b8),uVar2);
  }
  if (*(int *)(unaff_EDI + 0x1bc) != 0) {
    (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x98))
              (*(int **)(unaff_EDI + 0x1a0),*(int *)(unaff_EDI + 0x1bc),uVar3);
  }
  if (*(int *)(unaff_EDI + 0x1c4) != 0) {
    iVar5 = *(int *)(unaff_EDI + 0x1590);
    local_18 = *(undefined4 *)(iVar5 + 0x13c);
    local_14 = *(undefined4 *)(iVar5 + 0x140);
    local_1c = *(undefined4 *)(iVar5 + 0x138);
    (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x50))
              (*(int **)(unaff_EDI + 0x1a0),*(int *)(unaff_EDI + 0x1c4),&local_1c,0xc);
  }
  if (*(uint *)(unaff_EDI + 0xb8) < 10000) {
    iVar5 = *(uint *)(unaff_EDI + 0xb8) * 0x2c;
    local_18 = *(undefined4 *)(iVar5 + 0x17c + *(int *)(unaff_EDI + 0x3c));
    iVar5 = *(int *)(iVar5 + 0x180 + *(int *)(unaff_EDI + 0x3c));
  }
  else {
    iVar5 = 0;
  }
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x78))
            (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1c8),(float)iVar5);
  if (*(uint *)(unaff_EDI + 0xb8) < 10000) {
    iVar6 = *(uint *)(unaff_EDI + 0xb8) * 0x2c;
    iVar5 = *(int *)(iVar6 + 0x17c + *(int *)(unaff_EDI + 0x3c));
    local_14 = *(undefined4 *)(iVar6 + 0x180 + *(int *)(unaff_EDI + 0x3c));
  }
  else {
    iVar5 = 0;
  }
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x78))
            (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1cc),(float)iVar5);
  if (*(uint *)(unaff_EDI + 0xb8) < 10000) {
    iVar5 = *(uint *)(unaff_EDI + 0xb8) * 0x2c;
    local_18 = *(undefined4 *)(iVar5 + 0x17c + *(int *)(unaff_EDI + 0x3c));
    uVar4 = *(uint *)(iVar5 + 0x180 + *(int *)(unaff_EDI + 0x3c));
  }
  else {
    uVar4 = 0;
  }
  uVar7 = 1;
  local_14 = uVar7;
  if (1 < uVar4) {
    do {
      local_14 = 0;
      if (uVar7 == 0) break;
      uVar7 = uVar7 * 2;
      local_14 = uVar7;
    } while (uVar7 < uVar4);
  }
  fVar1 = (float)(int)local_14;
  if ((int)local_14 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x78))
            (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1d0),fVar1);
  if (*(uint *)(unaff_EDI + 0xb8) < 10000) {
    uVar4 = *(uint *)(*(uint *)(unaff_EDI + 0xb8) * 0x2c + 0x17c + *(int *)(unaff_EDI + 0x3c));
  }
  else {
    uVar4 = 0;
  }
  uVar7 = 1;
  local_14 = uVar7;
  if (1 < uVar4) {
    do {
      local_14 = 0;
      if (uVar7 == 0) break;
      uVar7 = uVar7 * 2;
      local_14 = uVar7;
    } while (uVar7 < uVar4);
  }
  fVar1 = (float)(int)local_14;
  if ((int)local_14 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x78))
            (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1d4),fVar1);
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x78))
            (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1e0),
             (float)*(int *)(*(int *)(unaff_EDI + 0x40) + 0x2abc));
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x78))
            (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1e4),
             (float)*(int *)(*(int *)(unaff_EDI + 0x40) + 0x2ac0));
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x78))
            (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1d8),
             (float)*(int *)(unaff_EDI + 0x194));
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x78))
            (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1dc),
             (float)*(int *)(unaff_EDI + 0x198));
  local_10 = 0;
  if (local_8 != 0) {
    do {
      (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x100))(*(int **)(unaff_EDI + 0x1a0),local_10);
      (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0xd0))
                (*(int **)(unaff_EDI + 0x1a0),&DAT_00e1b2f4,
                 *(undefined4 *)(*(int *)(unaff_EDI + 0x158c) + 0x14));
      iVar6 = *(int *)(unaff_EDI + 0x40);
      iVar5 = 0;
      iVar8 = 0;
      if (0 < (int)(*(int *)(iVar6 + 0x34) - *(int *)(iVar6 + 0x30) & 0xfffffffcU)) {
        piVar9 = *(int **)(iVar6 + 0x30);
        do {
          if ((float)*piVar9 < *(float *)(*(int *)(unaff_EDI + 0x10) + 0x348)) {
            iVar5 = iVar8 + 1;
          }
          iVar8 = iVar8 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar8 < *(int *)(iVar6 + 0x34) - *(int *)(iVar6 + 0x30) >> 2);
      }
      uVar4 = *(uint *)(*(int *)(unaff_EDI + 0x28c) + iVar5 * 4);
      if ((uVar4 == 0xffffffff) || (9999 < uVar4)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(uVar4 * 0x2c + 0x15c + *(int *)(unaff_EDI + 0x3c));
      }
      (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0xd0))
                (*(int **)(unaff_EDI + 0x1a0),&DAT_00e1939c,uVar2);
      uVar4 = *(int *)(unaff_EDI + 0x84) - *(int *)(unaff_EDI + 0x80) >> 2;
      local_c = 0;
      local_14 = uVar4;
      if (0 < (int)uVar4) {
        do {
          iVar5 = *(int *)(*(int *)(unaff_EDI + 0x80) + local_c * 4) * 0x3c0 +
                  *(int *)(unaff_EDI + 0x19c);
          if ((*(int *)(iVar5 + 0x2a0) != 0) || (*(int *)(iVar5 + 0x2a4) != 0)) {
            if (*(int *)(unaff_EDI + 0x1c0) != 0) {
              (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x98))
                        (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1c0),
                         iVar5 + 0x1fc);
            }
            if (*(int *)(unaff_EDI + 0x1b4) != 0) {
              (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x98))
                        (*(int **)(unaff_EDI + 0x1a0),*(undefined4 *)(unaff_EDI + 0x1b4),
                         iVar5 + 0x17c);
            }
            (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x98))
                      (*(int **)(unaff_EDI + 0x1a0),"AbsoluteWorldMatrix",iVar5 + 0x13c);
            (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x104))(*(int **)(unaff_EDI + 0x1a0));
            piVar9 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
            (**(code **)(*piVar9 + 0x15c))(piVar9,*(undefined4 *)(unaff_EDI + 0x18f0));
            FUN_009f9d50();
            uVar4 = local_14;
          }
          local_c = local_c + 1;
        } while (local_c < (int)uVar4);
      }
      (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x104))(*(int **)(unaff_EDI + 0x1a0));
      (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x108))(*(int **)(unaff_EDI + 0x1a0));
      local_10 = local_10 + 1;
    } while (local_10 < local_8);
  }
  (**(code **)(**(int **)(unaff_EDI + 0x1a0) + 0x10c))(*(int **)(unaff_EDI + 0x1a0));
  piVar9 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar9 + 0xe4))(piVar9,0x13,5);
  piVar9 = *(int **)(*(int *)(unaff_EDI + 0x3c) + 100);
  (**(code **)(*piVar9 + 0xe4))(piVar9,0x14,6);
  return;
}

