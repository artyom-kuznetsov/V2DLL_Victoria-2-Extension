// FUN_00635207 @ 00635207 body=[[00635207, 00635459] [0063545d, 00635546] [0063554a, 006355d7] [006355db, 006356bc] [006356c0, 0063577c] [00635780, 00635858] [0063585c, 00635997] [006359a1, 00635aa0] [00635aa4, 00635acd] [00635ad1, 00635ae7] [00635aeb, 00635b00] [00635b09, 00635b16] [00635b20, 00635bcf] [00635bd3, 00635bfc] [00635c00, 00635c16] [00635c1a, 00635c2f] [00635c38, 00635d2f] [00635d33, 00635d80] [00635d89, 00635e4d] [00635e51, 00635ed2] [00635ed6, 00635f0e] [00635f12, 00635fcb] [00635fcf, 0063609d] [006360a1, 0063615a] [0063615e, 006361e1] [006361e5, 0063621d] [00636221, 00636427] [00636430, 006364dc] [006364e0, 00636506] [0063650a, 00636520] [00636524, 00636539] [00636542, 006365fc] [00636600, 00636626] [0063662a, 00636640] [00636644, 00636659] [00636662, 0063675b] [0063675f, 00636838] [0063683c, 00636851] [0063685a, 00636900] [00636904, 006369cc] [006369d0, 00636a83] [00636a87, 00636b47] [00636b4b, 00636bd2] [00636bd6, 00636c08] [00636c0c, 00636cd1] [00636cd5, 00636d56] [00636d5a, 00636d8c] [00636d90, 00636e4f] [00636e53, 00636f2c] [00636f30, 00636fb1] [00636fb5, 00636fe8] [00636fec, 006371df] [006371e3, 00637209] [0063720d, 006372ec] [006372f0, 00637408] [0063740c, 00637462] [00637466, 00637487] [0063748b, 00637520] [00637524, 006375a2] [006375a6, 006375cb] [006375cf, 006375f4] [006375f8, 0063761d] [00637621, 00637646] [0063764a, 0063766f] [00637673, 00637698] [0063769c, 006376c1] [006376c5, 006376d5]]


void FUN_00635207(void)

{
  char *pcVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  HANDLE pvVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  char cVar13;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  int iVar14;
  float10 fVar15;
  char *pcStack_a8;
  undefined8 uStack_a4;
  PPROCESS_MEMORY_COUNTERS pPVar16;
  DWORD DVar17;
  
  iVar14 = *(int *)(unaff_EBP + -0x40);
  iVar7 = *(int *)(iVar14 + 0xec);
  fVar3 = *(float *)(iVar7 + 0x80) * 0.01;
  *(float *)(unaff_EBP + -0x34) = *(float *)(iVar7 + 0x88) * 0.01 * fVar3;
  fVar4 = DAT_00f141a4;
  fVar3 = *(float *)(iVar7 + 0x84) * 0.01 * fVar3;
  *(float *)(unaff_EBP + -0x60) = fVar3;
  if (fVar4 != fVar3) {
    piVar5 = (int *)FUN_009c7290();
    (**(code **)(*piVar5 + 0x54))();
  }
  if (DAT_00f141a0 != *(float *)(unaff_EBP + -0x34)) {
    piVar5 = (int *)FUN_009e8090();
    (**(code **)(*piVar5 + 0x1c))();
  }
  DAT_00f141a0 = *(float *)(unaff_EBP + -0x34);
  DAT_00f141a4 = *(float *)(unaff_EBP + -0x60);
  piVar5 = (int *)FUN_009c7290();
  if ((DAT_00f20c18 == unaff_EBX) &&
     (puVar6 = (undefined4 *)FUN_00aae9af(), DAT_00f20c18 = unaff_EBX, puVar6 != unaff_EBX)) {
    *puVar6 = &PTR_FUN_00e38b28;
    DAT_00f20c18 = puVar6;
  }
  fVar15 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  *(float *)(unaff_EBP + -0x60) = (float)fVar15;
  (**(code **)(*piVar5 + 0x74))();
  iVar7 = FUN_00475500();
  cVar13 = (char)unaff_EBX;
  if (0.0 < *(float *)(iVar7 + 0x80)) {
    piVar5 = (int *)FUN_009e8090();
    *(undefined1 **)(unaff_EBP + -0x60) = &stack0xffffffe0;
    FUN_00409350();
    (**(code **)(*piVar5 + 8))();
    piVar5 = (int *)FUN_009e8090();
    (**(code **)(*piVar5 + 0xc))();
  }
  fVar15 = (float10)(**(code **)(**(int **)(iVar14 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_00987d20();
  FUN_0048c130();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined8 *)(unaff_EBP + -0xa8) = *(undefined8 *)(unaff_EBP + -100);
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_004015b0();
  DVar17 = 0x28;
  pPVar16 = (PPROCESS_MEMORY_COUNTERS)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  pvVar8 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar8,pPVar16,DVar17);
  fVar3 = (float)*(int *)(unaff_EBP + -0x94);
  if (*(int *)(unaff_EBP + -0x94) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)(unaff_EBP + -0x60) = fVar3 * 0.0009765625;
  FUN_00987d20();
  FUN_00455470();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  FUN_00987d20();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar6 = (undefined4 *)FUN_00aae9af();
  *(undefined4 **)(unaff_EBP + -0x60) = puVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (puVar6 == unaff_EBX) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_007e06f0();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  puVar11 = *(undefined4 **)(iVar14 + 0x11c);
  if ((puVar6 != puVar11) && (puVar11 != unaff_EBX)) {
    (**(code **)*puVar11)();
  }
  *(undefined4 **)(iVar14 + 0x11c) = puVar6;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  FUN_00987d20();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar6 = (undefined4 *)FUN_00aae9af();
  *(undefined4 **)(unaff_EBP + -0x60) = puVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  if (puVar6 != unaff_EBX) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x2c) = cVar13;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    *(undefined4 *)(unaff_EBP + -0x38) = 1;
    puVar6 = (undefined4 *)FUN_00aae9af();
    *(undefined4 **)(unaff_EBP + -0x34) = puVar6;
    *(undefined4 *)(unaff_EBP + -4) = 0x48;
    if (puVar6 != unaff_EBX) {
      FUN_0098ffc0();
      *puVar6 = &PTR_FUN_00e37c3c;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_009a0bf0();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x49;
  FUN_007e7540();
  FUN_007e75a0();
  *(undefined4 *)(unaff_EBP + -4) = 0x28;
  if (((*(byte *)(unaff_EBP + -0x38) & 1) != 0) &&
     (*(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) & 0xfffffffe,
     0xf < *(uint *)(unaff_EBP + -0x18))) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  FUN_004015b0();
  DVar17 = 0x28;
  pPVar16 = (PPROCESS_MEMORY_COUNTERS)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  pvVar8 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar8,pPVar16,DVar17);
  fVar3 = (float)*(int *)(unaff_EBP + -0x94);
  if (*(int *)(unaff_EBP + -0x94) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)(unaff_EBP + -0x60) = fVar3 * 0.0009765625;
  FUN_00987d20();
  FUN_00455470();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 **)(unaff_EBP + -0xd8) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0xd4) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0xd0) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x114) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x110) = unaff_EBX;
  *(undefined4 **)(unaff_EBP + -0x10c) = unaff_EBX;
  iVar14 = 0;
  *(undefined4 **)(unaff_EBP + -0xb8) = unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 **)(unaff_EBP + -0xb0) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  puVar6 = *(undefined4 **)(unaff_EBP + -0x3c);
  if (puVar6 != unaff_EBX) {
    FUN_00992240();
    iVar14 = *(int *)(unaff_EBP + -0xb4);
  }
  if (puVar6 != (undefined4 *)0x1) {
    *(undefined4 **)(unaff_EBP + -0xe8) = unaff_EBX;
    *(undefined4 **)(unaff_EBP + -0xe4) = unaff_EBX;
    *(undefined4 **)(unaff_EBP + -0xe0) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    FUN_00992240();
    iVar7 = (*(int *)(unaff_EBP + -0xe4) - *(int *)(unaff_EBP + -0xe8)) / 0x1c;
    if ((int)unaff_EBX < iVar7) {
      *(int *)(unaff_EBP + -0x60) = iVar7;
      do {
        iVar7 = FUN_0045c080();
        if (iVar7 == iVar14) {
          FUN_00a840b0();
          iVar14 = *(int *)(unaff_EBP + -0xb4);
        }
        piVar5 = (int *)(unaff_EBP + -0x60);
        *piVar5 = *piVar5 + -1;
      } while (*piVar5 != 0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if (*(undefined4 **)(unaff_EBP + -0xe8) != unaff_EBX) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  uVar9 = *(undefined4 *)(unaff_EBP + -0x114);
  FUN_00419660();
  *(undefined4 *)(unaff_EBP + -0xfc) = uVar9;
  while ((uVar12 = *(uint *)(unaff_EBP + -0xfc), *(uint *)(unaff_EBP + -0x114) <= uVar12 &&
         (uVar12 < *(uint *)(unaff_EBP + -0x110)))) {
    *(uint *)(unaff_EBP + -0xfc) = uVar12 + 0x1c;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x4c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x5c) = cVar13;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x2c) = cVar13;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x52;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    FUN_00a840b0();
    if (0xf < *(uint *)(unaff_EBP + -0xe0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xe0) = 0xf;
    *(undefined4 **)(unaff_EBP + -0xe4) = unaff_EBX;
    *(char *)(unaff_EBP + -0xf4) = cVar13;
    if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x68) = unaff_EBX;
    *(char *)(unaff_EBP + -0x78) = cVar13;
    if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x104) = *(undefined4 *)(unaff_EBP + -0xb8);
  while ((uVar12 = *(uint *)(unaff_EBP + -0x104), *(uint *)(unaff_EBP + -0xb8) <= uVar12 &&
         (uVar12 < *(uint *)(unaff_EBP + -0xb4)))) {
    *(uint *)(unaff_EBP + -0x104) = uVar12 + 0x1c;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x4c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x5c) = cVar13;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0x54;
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x2c) = cVar13;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x56;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x57;
    FUN_00a840b0();
    if (0xf < *(uint *)(unaff_EBP + -0xe0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0xe0) = 0xf;
    *(undefined4 **)(unaff_EBP + -0xe4) = unaff_EBX;
    *(char *)(unaff_EBP + -0xf4) = cVar13;
    if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x68) = unaff_EBX;
    *(char *)(unaff_EBP + -0x78) = cVar13;
    if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  *(undefined4 *)(unaff_EBP + -0xe0) = *(undefined4 *)(unaff_EBP + -0xd8);
  while ((uVar12 = *(uint *)(unaff_EBP + -0xe0), *(uint *)(unaff_EBP + -0xd8) <= uVar12 &&
         (uVar12 < *(uint *)(unaff_EBP + -0xd4)))) {
    *(uint *)(unaff_EBP + -0xe0) = uVar12 + 0x1c;
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x2c) = cVar13;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0x58;
    puVar6 = (undefined4 *)FUN_00aae9af();
    *(undefined4 **)(unaff_EBP + -0x60) = puVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    if (puVar6 == unaff_EBX) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
      *(undefined4 **)(unaff_EBP + -0x4c) = unaff_EBX;
      *(char *)(unaff_EBP + -0x5c) = cVar13;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) | 2;
      puVar6 = (undefined4 *)FUN_00aae9af();
      *(undefined4 **)(unaff_EBP + -0x34) = puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0x5b;
      if (puVar6 != unaff_EBX) {
        FUN_0098ffc0();
        *puVar6 = &PTR_FUN_00e37c3c;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      puVar6 = (undefined4 *)FUN_009a0bf0();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x58;
    if ((*(byte *)(unaff_EBP + -0x38) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) & 0xfffffffd;
      if (0xf < *(uint *)(unaff_EBP + -0x48)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
      *(undefined4 **)(unaff_EBP + -0x4c) = unaff_EBX;
      *(char *)(unaff_EBP + -0x5c) = cVar13;
    }
    puVar11 = *(undefined4 **)(*(int *)(unaff_EBP + -0x40) + 0x11c);
    if (puVar11 == unaff_EBX) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = puVar11 + 1;
    }
    (**(code **)(*piVar5 + 0xc))();
    if (puVar6 != unaff_EBX) {
      (**(code **)*puVar6)();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  fVar15 = (float10)(**(code **)(**(int **)(*(int *)(unaff_EBP + -0x40) + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x5e;
  FUN_00987d20();
  FUN_0048c130();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x5f;
  FUN_009a8ee0();
  *(undefined1 *)(unaff_EBP + -4) = 0x60;
  FUN_00475500();
  FUN_009a9880();
  *(undefined1 *)(unaff_EBP + -4) = 0x61;
  FUN_007e1210();
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x84) = unaff_EBX;
  *(char *)(unaff_EBP + -0x94) = cVar13;
  *(undefined1 *)(unaff_EBP + -4) = 0x62;
  FUN_009adb70();
  FUN_004d8540();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined8 *)(unaff_EBP + -0xa8) = *(undefined8 *)(unaff_EBP + -100);
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 99;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 100;
  FUN_009da350();
  FUN_00b31c00();
  FUN_00987d20();
  FUN_00455470();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 99;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar14 = *(int *)(unaff_EBP + -0x40);
  FUN_009977e0();
  fVar15 = (float10)(**(code **)(**(int **)(iVar14 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x65;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x66;
  FUN_00987d20();
  FUN_0048c130();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x65;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined8 *)(unaff_EBP + -0xa8) = *(undefined8 *)(unaff_EBP + -100);
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x67;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x68;
  FUN_009da350();
  FUN_00b31c00();
  FUN_00987d20();
  FUN_00455470();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x67;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  FUN_00409350();
  *(undefined1 *)(unaff_EBP + -4) = 0x69;
  uVar9 = FUN_009a8ee0();
  *(undefined4 *)(unaff_EBP + -0x60) = uVar9;
  *(undefined1 *)(unaff_EBP + -4) = 0x6a;
  FUN_00475500();
  FUN_009a9880();
  *(undefined1 *)(unaff_EBP + -4) = 0x6b;
  FUN_007e1210();
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x84) = unaff_EBX;
  *(char *)(unaff_EBP + -0x94) = cVar13;
  *(undefined1 *)(unaff_EBP + -4) = 0x6c;
  FUN_009adb70();
  FUN_004d8540();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar6 = (undefined4 *)FUN_00aae9af();
  *(undefined4 **)(unaff_EBP + -0x60) = puVar6;
  iVar14 = *(int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x6d;
  if (puVar6 == unaff_EBX) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_009a2ec0();
    *puVar6 = CEU3Gui::vftable;
    puVar6[1] = CEU3Gui::vftable;
    puVar6[3] = CEU3Gui::vftable;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  puVar11 = *(undefined4 **)(iVar14 + 0x120);
  if ((puVar6 != puVar11) && (puVar11 != unaff_EBX)) {
    (**(code **)*puVar11)();
  }
  *(undefined4 **)(iVar14 + 0x120) = puVar6;
  FUN_004138b0();
  FUN_004138b0();
  FUN_004138b0();
  puVar6 = *(undefined4 **)(unaff_EBP + -0x3c);
  if (puVar6 != unaff_EBX) {
    FUN_00992240();
  }
  if (puVar6 != (undefined4 *)0x1) {
    *(undefined4 **)(unaff_EBP + -0x6c) = unaff_EBX;
    *(undefined4 **)(unaff_EBP + -0x68) = unaff_EBX;
    *(undefined4 **)(unaff_EBP + -100) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    FUN_00992240();
    iVar14 = (*(int *)(unaff_EBP + -0x68) - *(int *)(unaff_EBP + -0x6c)) / 0x1c;
    if ((int)unaff_EBX < iVar14) {
      *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x6c);
      iVar7 = *(int *)(unaff_EBP + -0xb4);
      *(int *)(unaff_EBP + -0x3c) = iVar14;
      do {
        iVar14 = FUN_0045c080();
        if (iVar14 == iVar7) {
          FUN_00a840b0();
        }
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 0x1c;
        piVar5 = (int *)(unaff_EBP + -0x3c);
        *piVar5 = *piVar5 + -1;
      } while (*piVar5 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      FUN_0040b3c0();
    }
    else {
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      FUN_0040b3c0();
    }
  }
  uVar9 = *(undefined4 *)(unaff_EBP + -0x114);
  FUN_00419660();
  *(undefined4 *)(unaff_EBP + -0xfc) = uVar9;
  while ((uVar12 = *(uint *)(unaff_EBP + -0xfc), *(uint *)(unaff_EBP + -0x114) <= uVar12 &&
         (uVar12 < *(uint *)(unaff_EBP + -0x110)))) {
    *(uint *)(unaff_EBP + -0xfc) = uVar12 + 0x1c;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x4c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x5c) = cVar13;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x2c) = cVar13;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x70;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x71;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x72;
    FUN_00a840b0();
    if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x84) = unaff_EBX;
    *(char *)(unaff_EBP + -0x94) = cVar13;
    if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x68) = unaff_EBX;
    *(char *)(unaff_EBP + -0x78) = cVar13;
    if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x104) = *(undefined4 *)(unaff_EBP + -0xb8);
  while ((uVar12 = *(uint *)(unaff_EBP + -0x104), *(uint *)(unaff_EBP + -0xb8) <= uVar12 &&
         (uVar12 < *(uint *)(unaff_EBP + -0xb4)))) {
    *(uint *)(unaff_EBP + -0x104) = uVar12 + 0x1c;
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x4c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x5c) = cVar13;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0x73;
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x2c) = cVar13;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x74;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x75;
    FUN_00988f20();
    *(undefined1 *)(unaff_EBP + -4) = 0x76;
    FUN_00a840b0();
    if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x84) = unaff_EBX;
    *(char *)(unaff_EBP + -0x94) = cVar13;
    if (0xf < *(uint *)(unaff_EBP + -100)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x68) = unaff_EBX;
    *(char *)(unaff_EBP + -0x78) = cVar13;
    if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  *(undefined4 *)(unaff_EBP + -0xe0) = *(undefined4 *)(unaff_EBP + -0xd8);
  while ((uVar12 = *(uint *)(unaff_EBP + -0xe0), *(uint *)(unaff_EBP + -0xd8) <= uVar12 &&
         (uVar12 < *(uint *)(unaff_EBP + -0xd4)))) {
    *(uint *)(unaff_EBP + -0xe0) = uVar12 + 0x1c;
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x2c) = cVar13;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 0x77;
    puVar6 = (undefined4 *)FUN_00aae9af();
    *(undefined4 **)(unaff_EBP + -0x3c) = puVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x78;
    if (puVar6 == unaff_EBX) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
      *(undefined4 **)(unaff_EBP + -0x4c) = unaff_EBX;
      *(char *)(unaff_EBP + -0x5c) = cVar13;
      FUN_00409350();
      *(undefined1 *)(unaff_EBP + -4) = 0x79;
      *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) | 4;
      puVar6 = (undefined4 *)FUN_00aae9af();
      *(undefined4 **)(unaff_EBP + -0x60) = puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0x7a;
      if (puVar6 != unaff_EBX) {
        FUN_0098ffc0();
        *puVar6 = &PTR_FUN_00e37c3c;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x79;
      puVar6 = (undefined4 *)FUN_009a0bf0();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x77;
    if ((*(byte *)(unaff_EBP + -0x38) & 4) != 0) {
      *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) & 0xfffffffb;
      if (0xf < *(uint *)(unaff_EBP + -0x48)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
      *(undefined4 **)(unaff_EBP + -0x4c) = unaff_EBX;
      *(char *)(unaff_EBP + -0x5c) = cVar13;
    }
    puVar11 = *(undefined4 **)(*(int *)(unaff_EBP + -0x40) + 0x120);
    if (puVar11 == unaff_EBX) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = puVar11 + 1;
    }
    (**(code **)(*piVar5 + 0xc))();
    if (puVar6 != unaff_EBX) {
      (**(code **)*puVar6)();
    }
    *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x4c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x5c) = cVar13;
    FUN_00409350();
    *(undefined1 *)(unaff_EBP + -4) = 0x7c;
    FUN_004015b0();
    *(undefined1 *)(unaff_EBP + -4) = 0x7d;
    FUN_00987d20();
    FUN_00418e30();
    FUN_00401280();
    *(undefined1 *)(unaff_EBP + -4) = 0x7c;
    FUN_00987ac0();
    *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
    FUN_00aad52d();
    if (0xf < *(uint *)(unaff_EBP + -0x48)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  FUN_004471e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x7f;
  FUN_009da350();
  FUN_00b31c00();
  FUN_00987d20();
  FUN_00455470();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pcVar1 = *(char **)(unaff_EBP + -0x40);
  FUN_009a4190();
  fVar15 = (float10)(**(code **)(**(int **)(pcVar1 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  FUN_004471e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x80;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x81;
  FUN_00987d20();
  FUN_0048c130();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x80;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined8 *)(unaff_EBP + -0xa8) = *(undefined8 *)(unaff_EBP + -100);
  FUN_004471e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  FUN_009da350();
  FUN_00b31c00();
  FUN_00987d20();
  FUN_00455470();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00639120();
  fVar15 = (float10)(**(code **)(**(int **)(pcVar1 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  FUN_004471e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x85;
  FUN_00987d20();
  FUN_0048c130();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  fVar15 = (float10)(**(code **)(**(int **)(pcVar1 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -0xa8) = (double)fVar15;
  FUN_004471e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  uVar9 = FUN_009a8ee0();
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar9;
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  FUN_00475500();
  FUN_009a9880();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  FUN_007e1210();
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x84) = unaff_EBX;
  *(char *)(unaff_EBP + -0x94) = cVar13;
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  FUN_009a9740();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_008a6620();
  FUN_008a67b0();
  fVar15 = (float10)(**(code **)(**(int **)(pcVar1 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  FUN_004471e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x89;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x8a;
  FUN_00987d20();
  FUN_0048c130();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x89;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined8 *)(unaff_EBP + -0xa8) = *(undefined8 *)(unaff_EBP + -100);
  FUN_004471e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x8b;
  uVar9 = FUN_009a8ee0();
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar9;
  *(undefined1 *)(unaff_EBP + -4) = 0x8c;
  FUN_00475500();
  FUN_009a9880();
  *(undefined1 *)(unaff_EBP + -4) = 0x8d;
  FUN_007e1210();
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x84) = unaff_EBX;
  *(char *)(unaff_EBP + -0x94) = cVar13;
  *(undefined1 *)(unaff_EBP + -4) = 0x8b;
  FUN_009a9740();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_0063ed90();
  fVar15 = (float10)(**(code **)(**(int **)(pcVar1 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  FUN_004471e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x8e;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x8f;
  FUN_00987d20();
  FUN_0048c130();
  FUN_00418e30();
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x8e;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined8 *)(unaff_EBP + -0xa8) = *(undefined8 *)(unaff_EBP + -100);
  FUN_007e0c00();
  fVar15 = (float10)(**(code **)(**(int **)(pcVar1 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  FUN_004471e0();
  *(undefined1 *)(unaff_EBP + -4) = 0x90;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x91;
  FUN_00987d20();
  uStack_a4._4_4_ = (undefined1 *)0x636edf;
  uStack_a4._4_4_ = (undefined1 *)FUN_0048c130();
  uStack_a4._0_4_ = 0x636ee5;
  uStack_a4._0_4_ = FUN_00418e30();
  pcStack_a8 = (char *)0x636eeb;
  FUN_00401280();
  *(undefined1 *)(unaff_EBP + -4) = 0x90;
  uStack_a4._4_4_ = (undefined1 *)0x636efe;
  FUN_00987ac0();
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  uStack_a4._4_4_ = (undefined1 *)0x636f14;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    uStack_a4._4_4_ = &UNK_00636f2d;
    FUN_00aae91b();
  }
  *(undefined8 *)(unaff_EBP + -0xa8) = *(undefined8 *)(unaff_EBP + -100);
  uStack_a4._4_4_ = (undefined1 *)0x636f4a;
  FUN_004471e0();
  uStack_a4._4_4_ = (undefined1 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x92;
  uStack_a4._0_4_ = 0x636f5b;
  uVar9 = FUN_009a8ee0();
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar9;
  *(undefined1 *)(unaff_EBP + -4) = 0x93;
  iVar14 = FUN_00475500();
  pcStack_a8 = (char *)*(undefined8 *)(iVar14 + 0x6c);
  uStack_a4._0_4_ = (int)((ulonglong)*(undefined8 *)(iVar14 + 0x6c) >> 0x20);
  uStack_a4._4_4_ = (undefined1 *)*(undefined8 *)(iVar14 + 0x74);
  uStack_a4._0_4_ = FUN_009a9880();
  uStack_a4._4_4_ = (undefined1 *)0x1;
  *(undefined1 *)(unaff_EBP + -4) = 0x94;
  pcStack_a8 = (char *)0x636fa0;
  FUN_007e1210();
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    uStack_a4._4_4_ = &UNK_00636fb2;
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x84) = unaff_EBX;
  *(char *)(unaff_EBP + -0x94) = cVar13;
  *(undefined1 *)(unaff_EBP + -4) = 0x92;
  uStack_a4._4_4_ = (undefined1 *)0x636fd6;
  FUN_009a9740();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  iVar14 = DAT_012586dc;
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    uStack_a4._4_4_ = &UNK_00636fe9;
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  *(undefined4 *)(DAT_012588e8 + 0xb0c) = *(undefined4 *)(iVar14 + 8);
  uStack_a4._4_4_ = (undefined1 *)0x637010;
  FUN_0067db50();
  uStack_a4._4_4_ = (undefined1 *)0x637025;
  FUN_005edf10();
  uStack_a4._4_4_ = (undefined1 *)0x637042;
  FUN_005edf10();
  uStack_a4._4_4_ = (undefined1 *)0x63704e;
  FUN_0068dfc0();
  uStack_a4._4_4_ = (undefined1 *)0x637060;
  FUN_005f2000();
  uVar12 = *(uint *)(DAT_012588e8 + 0xadc);
  puVar10 = (uint *)(DAT_012588e8 + 0xadc);
  *(uint **)(unaff_EBP + -0x3c) = puVar10;
  *(uint *)(unaff_EBP + -0xe0) = uVar12;
  while ((*puVar10 <= uVar12 && (uVar12 < puVar10[1]))) {
    *(int *)(unaff_EBP + -0xe0) = *(int *)(unaff_EBP + -0xe0) + 4;
    FUN_00538040();
    puVar10 = *(uint **)(unaff_EBP + -0x3c);
    uVar12 = *(uint *)(unaff_EBP + -0xe0);
  }
  uStack_a4._4_4_ = (undefined1 *)DAT_012588e8;
  uStack_a4._0_4_ = 0x6370b7;
  FUN_0068d250();
  pcVar2 = *(code **)(*DAT_0125870c + 0x24);
  iVar14 = 1;
  *(undefined4 *)(unaff_EBP + -0x40) = 1;
  iVar7 = (*pcVar2)();
  if (1 < iVar7) {
    do {
      if (*(char *)(*(int *)(*(int *)(DAT_0125870c[0x88e] + iVar14 * 4) + 0x5c) + 0x2a) != cVar13) {
        uStack_a4._4_4_ = (undefined1 *)0x6370f5;
        puVar6 = (undefined4 *)FUN_004b9520();
        if ((puVar6 == (undefined4 *)(DAT_012587f0 + 0x48)) || (puVar6 == unaff_EBX)) {
          uStack_a4._4_4_ = (undefined1 *)0x637117;
          FUN_004471e0();
          iVar14 = *(int *)(unaff_EBP + -0x40);
          *(undefined1 *)(unaff_EBP + -4) = 0x95;
          uStack_a4._4_4_ = (undefined1 *)0x63713b;
          uVar9 = (**(code **)(**(int **)(DAT_0125870c[0x88e] + iVar14 * 4) + 0x1c))();
          *(undefined4 *)(unaff_EBP + -0x34) = uVar9;
          uStack_a4._4_4_ = (undefined1 *)0x10004;
          pcStack_a8 = (char *)(unaff_EBP + -0x2c);
          uStack_a4._0_4_ = 0x23a;
          *(undefined1 *)(unaff_EBP + -4) = 0x96;
          FUN_004015b0();
          uStack_a4._4_4_ = &DAT_00ded950;
          *(undefined1 *)(unaff_EBP + -4) = 0x97;
          pcStack_a8 = (char *)0x637174;
          uStack_a4._0_4_ = iVar14;
          pcStack_a8 = (char *)FUN_00987d20();
          uStack_a4._4_4_ = (undefined1 *)FUN_00455470();
          uStack_a4._0_4_ = 0x637180;
          uStack_a4._4_4_ = (undefined1 *)FUN_00418e30();
          uStack_a4._0_4_ = 0x63719c;
          uStack_a4._0_4_ = FUN_00418e30();
          pcStack_a8 = (char *)0x6371a2;
          FUN_00401280();
          *(undefined1 *)(unaff_EBP + -4) = 0x96;
          uStack_a4._4_4_ = (undefined1 *)0x6371b5;
          FUN_00987ac0();
          *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
          uStack_a4._4_4_ = (undefined1 *)0x6371cb;
          FUN_00aad52d();
          if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
            uStack_a4._4_4_ = &UNK_006371e0;
            FUN_00aae91b();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          *(undefined4 *)(unaff_EBP + -0x80) = 0xf;
          *(undefined4 **)(unaff_EBP + -0x84) = unaff_EBX;
          *(char *)(unaff_EBP + -0x94) = cVar13;
          if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
            uStack_a4._4_4_ = &UNK_0063720a;
            FUN_00aae91b();
          }
          *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
          iVar14 = *(int *)(unaff_EBP + -0x40);
          *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
          *(char *)(unaff_EBP + -0x2c) = cVar13;
        }
      }
      pcVar2 = *(code **)(*DAT_0125870c + 0x24);
      iVar14 = iVar14 + 1;
      *(int *)(unaff_EBP + -0x40) = iVar14;
      iVar7 = (*pcVar2)();
    } while (iVar14 < iVar7);
  }
  fVar15 = (float10)(**(code **)(**(int **)(pcVar1 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  uStack_a4._4_4_ = (undefined1 *)0x637252;
  FUN_004471e0();
  uStack_a4._0_4_ = unaff_EBP + -0x94;
  uStack_a4._4_4_ = (undefined1 *)0x242;
  *(undefined1 *)(unaff_EBP + -4) = 0x98;
  pcStack_a8 = (char *)0x637272;
  FUN_004015b0();
  *(undefined1 *)(unaff_EBP + -4) = 0x99;
  uStack_a4 = *(double *)(unaff_EBP + -100) - *(double *)(unaff_EBP + -0xa8);
  pcStack_a8 = (char *)0x637299;
  pcStack_a8 = (char *)FUN_00987d20();
  FUN_0048c130();
  uVar9 = FUN_00418e30();
  FUN_00401280(uVar9);
  pcStack_a8 = (char *)(unaff_EBP + -0x168);
  *(undefined1 *)(unaff_EBP + -4) = 0x98;
  FUN_00987ac0();
  pcStack_a8 = (char *)(unaff_EBP + -0x168);
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
    pcStack_a8 = *(char **)(unaff_EBP + -0x94);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pcStack_a8 = (char *)0x6372fd;
  fVar15 = (float10)(**(code **)(**(int **)(pcVar1 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -0xa8) = (double)fVar15;
  pcStack_a8 = (char *)0x770;
  puVar6 = (undefined4 *)FUN_00aae9af();
  *(undefined4 **)(unaff_EBP + -0x3c) = puVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x9a;
  if (puVar6 == unaff_EBX) {
    pcStack_a8 = (char *)0x0;
  }
  else {
    pcStack_a8 = pcVar1;
    pcStack_a8 = (char *)FUN_00754a00(puVar6,*(undefined4 *)(pcVar1 + 0x11c),
                                      *(undefined4 *)(pcVar1 + 0x120));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  *(undefined4 **)(unaff_EBP + -0x3c) = unaff_EBX;
  *(char ***)(unaff_EBP + -0x60) = &pcStack_a8;
  FUN_009df260();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  pcStack_a8 = (char *)0x63735b;
  fVar15 = (float10)(**(code **)(**(int **)(pcVar1 + 0x128) + 0x14))();
  *(double *)(unaff_EBP + -100) = (double)fVar15;
  pcStack_a8 = "eu3application.cpp";
  FUN_004471e0();
  pcStack_a8 = (char *)0x10006;
  *(undefined1 *)(unaff_EBP + -4) = 0x9c;
  FUN_004015b0(unaff_EBP + -0x94,0x248);
  *(undefined1 *)(unaff_EBP + -4) = 0x9d;
  pcStack_a8 = ">";
  uVar9 = FUN_00987d20(*(double *)(unaff_EBP + -100) - *(double *)(unaff_EBP + -0xa8));
  uVar9 = FUN_0048c130(uVar9);
  uVar9 = FUN_00418e30(uVar9);
  FUN_00401280(uVar9);
  *(undefined1 *)(unaff_EBP + -4) = 0x9c;
  FUN_00987ac0(unaff_EBP + -0x168);
  *(undefined ***)(unaff_EBP + -0x168) = std::ios_base::vftable;
  FUN_00aad52d(unaff_EBP + -0x168);
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x94));
  }
  FUN_006377a0(pcVar1);
  FUN_004471e0("ButtonMenuWindow");
  *(undefined1 *)(unaff_EBP + -4) = 0x9e;
  FUN_004471e0("ButtonMenuButton");
  *(undefined1 *)(unaff_EBP + -4) = 0x9f;
  FUN_009c2d40(unaff_EBP + -0x94,DAT_01258a80);
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x2c));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2c) = cVar13;
  if (0xf < *(uint *)(unaff_EBP + -0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x94));
  }
  puVar6 = (undefined4 *)FUN_00aae9af(0x360);
  *(undefined4 **)(unaff_EBP + -0x3c) = puVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0xa0;
  if (puVar6 == unaff_EBX) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_004471e0("UNNAMED_SESSION");
    *(undefined1 *)(unaff_EBP + -4) = 0xa1;
    *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) | 8;
    puVar11 = (undefined4 *)FUN_00aae9af(0x114);
    *(undefined4 **)(unaff_EBP + -0x60) = puVar11;
    *(undefined4 *)(unaff_EBP + -4) = 0xa2;
    if (puVar11 == unaff_EBX) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      FUN_0098ffc0(unaff_EBP + -0x2b4);
      *puVar11 = &PTR_FUN_00e37c3c;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xa1;
    puVar6 = (undefined4 *)FUN_009a0bf0(puVar6,puVar11,1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x4e;
  if ((*(byte *)(unaff_EBP + -0x38) & 8) != 0) {
    if (0xf < *(uint *)(unaff_EBP + -0x18)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x2c));
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
    *(undefined4 **)(unaff_EBP + -0x1c) = unaff_EBX;
    *(char *)(unaff_EBP + -0x2c) = cVar13;
  }
  puVar11 = puVar6;
  uVar9 = FUN_00754640(puVar6);
  FUN_00754690(uVar9,puVar11);
  if (puVar6 != unaff_EBX) {
    (**(code **)*puVar6)(1);
  }
  FUN_0040b3c0();
  FUN_0040b3c0();
  FUN_0040b3c0();
  FUN_0040b3c0();
  FUN_0040b3c0();
  if (0xf < *(uint *)(unaff_EBP + -0x284)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x298));
  }
  *(undefined4 *)(unaff_EBP + -0x284) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x288) = unaff_EBX;
  *(char *)(unaff_EBP + -0x298) = cVar13;
  if (0xf < *(uint *)(unaff_EBP + -0x268)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x27c));
  }
  *(undefined4 *)(unaff_EBP + -0x268) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x26c) = unaff_EBX;
  *(char *)(unaff_EBP + -0x27c) = cVar13;
  if (0xf < *(uint *)(unaff_EBP + -0x2a0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x2b4));
  }
  *(undefined4 *)(unaff_EBP + -0x2a0) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x2a4) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2b4) = cVar13;
  if (0xf < *(uint *)(unaff_EBP + -700)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x2d0));
  }
  *(undefined4 *)(unaff_EBP + -700) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x2c0) = unaff_EBX;
  *(char *)(unaff_EBP + -0x2d0) = cVar13;
  if (0xf < *(uint *)(unaff_EBP + -0x24c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x260));
  }
  *(undefined4 *)(unaff_EBP + -0x24c) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x250) = unaff_EBX;
  *(char *)(unaff_EBP + -0x260) = cVar13;
  if (0xf < *(uint *)(unaff_EBP + -0x214)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x228));
  }
  *(undefined4 *)(unaff_EBP + -0x214) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x218) = unaff_EBX;
  *(char *)(unaff_EBP + -0x228) = cVar13;
  if (0xf < *(uint *)(unaff_EBP + -0x1f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x20c));
  }
  *(undefined4 *)(unaff_EBP + -0x1f8) = 0xf;
  *(undefined4 **)(unaff_EBP + -0x1fc) = unaff_EBX;
  *(char *)(unaff_EBP + -0x20c) = cVar13;
  if (0xf < *(uint *)(unaff_EBP + -0x230)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_EBP + -0x244));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

