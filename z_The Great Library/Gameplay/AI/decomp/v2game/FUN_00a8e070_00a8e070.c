// FUN_00a8e070 @ 00a8e070 body=[[00a8e070, 00a8e2e7] [00a8e2f0, 00a8ebc9] [00a8ebd0, 00a8f26c] [00a8f270, 00a8f2fc] [00a8f300, 00a8f968] [00a8f970, 00a8fa27]]


void FUN_00a8e070(void)

{
  short *psVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  int unaff_ESI;
  byte *pbVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  char *pcVar65;
  undefined8 uVar66;
  int local_5c [6];
  byte abStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  undefined4 local_24;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  byte local_5;
  
  iVar5 = *(int *)(unaff_ESI + 0x28);
  if (2 < *(int *)(unaff_ESI + 0x268)) {
    pcVar65 = "      %d in block, %d after MTF & 1-2 coding, %d+2 syms in use\n";
    iVar4 = FUN_00aaf1e2("      %d in block, %d after MTF & 1-2 coding, %d+2 syms in use\n",
                         *(undefined4 *)(unaff_ESI + 0x44),*(undefined4 *)(unaff_ESI + 0x274));
    _fprintf((FILE *)(iVar4 + 0x40),pcVar65);
  }
  pbVar14 = (byte *)(*(int *)(unaff_ESI + 0x54) + 2);
  local_2c = (byte *)(unaff_ESI + 0x9324);
  local_1c = pbVar14;
  local_34 = (byte *)0x6;
  do {
    if (0 < (int)pbVar14) {
      _memset(local_2c,0xf,(size_t)pbVar14);
    }
    local_2c = local_2c + 0x102;
    local_34 = (byte *)((int)local_34 + -1);
  } while (local_34 != (byte *)0x0);
  pbVar14 = *(byte **)(unaff_ESI + 0x274);
  if ((int)pbVar14 < 1) {
    uVar66 = 0xe452a000000bb9;
    local_34 = (byte *)0x0;
  }
  else {
    if ((int)pbVar14 < 200) {
      local_24 = (byte *)0x2;
    }
    else if ((int)pbVar14 < 600) {
      local_24 = (byte *)0x3;
    }
    else if ((int)pbVar14 < 0x4b0) {
      local_24 = (byte *)0x4;
    }
    else {
      local_24 = (byte *)((0x95f < (int)pbVar14) + 5);
    }
    local_14 = local_24;
    local_10 = pbVar14;
    local_c = (byte *)0x0;
    if (local_24 != (byte *)0x0) {
      local_28 = (byte *)((int)(local_24 + 0x91) * 0x102 + unaff_ESI);
      local_2c = (byte *)0x0;
      local_34 = (byte *)0x0;
      do {
        local_30 = (byte *)((int)local_10 / (int)local_24);
        local_18 = local_c + -1;
        iVar4 = 0;
        if (0 < (int)local_30) {
          iVar6 = unaff_ESI + 0x278 + (int)local_18 * 4;
          do {
            if ((int)(local_1c + -1) <= (int)local_18) break;
            iVar4 = iVar4 + *(int *)(iVar6 + 4);
            iVar6 = iVar6 + 4;
            local_18 = local_18 + 1;
          } while (iVar4 < (int)local_30);
        }
        if ((((int)local_c < (int)local_18) && (local_24 != local_14)) && (local_24 != (byte *)0x1))
        {
          uVar7 = (uint)local_2c & 0x80000001;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
          }
          if (uVar7 == 1) {
            iVar4 = iVar4 - *(int *)(unaff_ESI + 0x278 + (int)local_18 * 4);
            local_18 = local_18 + -1;
          }
        }
        if (2 < *(int *)(unaff_ESI + 0x268)) {
          pcVar65 = "      initial group %d, [%d .. %d], has %d syms (%4.1f%%)\n";
          iVar6 = FUN_00aaf1e2("      initial group %d, [%d .. %d], has %d syms (%4.1f%%)\n",
                               local_24,local_c,local_18,iVar4,
                               ((double)iVar4 * 100.0) / (double)*(int *)(unaff_ESI + 0x274));
          _fprintf((FILE *)(iVar6 + 0x40),pcVar65);
        }
        iVar6 = 0;
        if (0 < (int)local_1c) {
          do {
            if ((iVar6 < (int)local_c) || ((int)local_18 < iVar6)) {
              *(undefined1 *)((int)local_28 + iVar6) = 0xf;
            }
            else {
              *(undefined1 *)((int)local_28 + iVar6) = 0;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)local_1c);
        }
        local_28 = (byte *)((int)local_28 + -0x102);
        local_2c = local_2c + 1;
        local_10 = local_10 + -iVar4;
        local_24 = local_24 + -1;
        local_c = local_18 + 1;
      } while (0 < (int)local_24);
    }
    local_34 = (byte *)0x0;
    do {
      if (0 < (int)local_14) {
        piVar15 = local_5c;
        for (pbVar14 = local_14; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
          *piVar15 = 0;
          piVar15 = piVar15 + 1;
        }
        puVar12 = (undefined4 *)(unaff_ESI + 0xb160);
        local_30 = local_14;
        do {
          pbVar14 = local_1c;
          puVar16 = puVar12;
          if (0 < (int)local_1c) {
            for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
              *puVar16 = 0;
              puVar16 = puVar16 + 1;
            }
          }
          puVar12 = puVar12 + 0x102;
          local_30 = local_30 + -1;
        } while (local_30 != (byte *)0x0);
      }
      if ((local_14 == (byte *)0x6) && (0 < (int)local_1c)) {
        pbVar14 = (byte *)(unaff_ESI + 0x9324);
        puVar10 = (uint *)(unaff_ESI + 0xc994);
        local_30 = local_1c;
        do {
          puVar10[-1] = (uint)pbVar14[0x102] << 0x10 | (uint)*pbVar14;
          *puVar10 = (uint)pbVar14[0x306] << 0x10 | (uint)pbVar14[0x204];
          puVar10[1] = (uint)pbVar14[0x50a] << 0x10 | (uint)pbVar14[0x408];
          pbVar14 = pbVar14 + 1;
          puVar10 = puVar10 + 4;
          local_30 = local_30 + -1;
        } while (local_30 != (byte *)0x0);
      }
      iVar4 = *(int *)(unaff_ESI + 0x274);
      local_28 = (byte *)0x0;
      local_30 = (byte *)0x0;
      local_c = (byte *)0x0;
      if (0 < iVar4) {
        do {
          pbVar14 = local_c + 0x31;
          local_2c = pbVar14;
          local_18 = pbVar14;
          if (iVar4 <= (int)pbVar14) {
            pbVar14 = (byte *)(iVar4 + -1);
            local_18 = pbVar14;
          }
          local_18 = pbVar14;
          if (0 < (int)local_14) {
            uVar7 = (uint)local_14 & 1;
            puVar12 = &local_40;
            for (uVar11 = (uint)local_14 >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            for (uVar7 = (uint)(uVar7 != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined2 *)puVar12 = 0;
              puVar12 = (undefined4 *)((int)puVar12 + 2);
            }
          }
          if ((local_14 == (byte *)0x6) && ((int)pbVar14 - (int)local_c == 0x31)) {
            uVar7 = (uint)*(ushort *)(iVar5 + (int)local_c * 2);
            uVar11 = (uint)*(ushort *)(iVar5 + 2 + (int)local_c * 2);
            iVar4 = unaff_ESI + uVar7 * 0x10;
            uVar17 = (uint)*(ushort *)(iVar5 + 4 + (int)local_c * 2);
            uVar18 = (uint)*(ushort *)(iVar5 + 6 + (int)local_c * 2);
            uVar19 = (uint)*(ushort *)(iVar5 + 8 + (int)local_c * 2);
            uVar20 = (uint)*(ushort *)(iVar5 + 10 + (int)local_c * 2);
            uVar21 = (uint)*(ushort *)(iVar5 + 0xc + (int)local_c * 2);
            uVar22 = (uint)*(ushort *)(iVar5 + 0xe + (int)local_c * 2);
            uVar23 = (uint)*(ushort *)(iVar5 + 0x10 + (int)local_c * 2);
            uVar24 = (uint)*(ushort *)(iVar5 + 0x12 + (int)local_c * 2);
            uVar25 = (uint)*(ushort *)(iVar5 + 0x14 + (int)local_c * 2);
            uVar26 = (uint)*(ushort *)(iVar5 + 0x16 + (int)local_c * 2);
            uVar27 = (uint)*(ushort *)(iVar5 + 0x18 + (int)local_c * 2);
            uVar28 = (uint)*(ushort *)(iVar5 + 0x1a + (int)local_c * 2);
            uVar29 = (uint)*(ushort *)(iVar5 + 0x1c + (int)local_c * 2);
            uVar30 = (uint)*(ushort *)(iVar5 + 0x1e + (int)local_c * 2);
            uVar31 = (uint)*(ushort *)(iVar5 + 0x20 + (int)local_c * 2);
            uVar32 = (uint)*(ushort *)(iVar5 + 0x22 + (int)local_c * 2);
            uVar33 = (uint)*(ushort *)(iVar5 + 0x24 + (int)local_c * 2);
            uVar34 = (uint)*(ushort *)(iVar5 + 0x26 + (int)local_c * 2);
            uVar35 = (uint)*(ushort *)(iVar5 + 0x28 + (int)local_c * 2);
            uVar36 = (uint)*(ushort *)(iVar5 + 0x2a + (int)local_c * 2);
            uVar37 = (uint)*(ushort *)(iVar5 + 0x2c + (int)local_c * 2);
            uVar38 = (uint)*(ushort *)(iVar5 + 0x2e + (int)local_c * 2);
            uVar39 = (uint)*(ushort *)(iVar5 + 0x30 + (int)local_c * 2);
            uVar40 = (uint)*(ushort *)(iVar5 + 0x32 + (int)local_c * 2);
            uVar41 = (uint)*(ushort *)(iVar5 + 0x34 + (int)local_c * 2);
            uVar42 = (uint)*(ushort *)(iVar5 + 0x36 + (int)local_c * 2);
            uVar43 = (uint)*(ushort *)(iVar5 + 0x38 + (int)local_c * 2);
            uVar44 = (uint)*(ushort *)(iVar5 + 0x3a + (int)local_c * 2);
            uVar45 = (uint)*(ushort *)(iVar5 + 0x3c + (int)local_c * 2);
            uVar46 = (uint)*(ushort *)(iVar5 + 0x3e + (int)local_c * 2);
            uVar47 = (uint)*(ushort *)(iVar5 + 0x40 + (int)local_c * 2);
            uVar48 = (uint)*(ushort *)(iVar5 + 0x42 + (int)local_c * 2);
            uVar49 = (uint)*(ushort *)(iVar5 + 0x44 + (int)local_c * 2);
            uVar50 = (uint)*(ushort *)(iVar5 + 0x46 + (int)local_c * 2);
            uVar51 = (uint)*(ushort *)(iVar5 + 0x48 + (int)local_c * 2);
            uVar52 = (uint)*(ushort *)(iVar5 + 0x4a + (int)local_c * 2);
            uVar53 = (uint)*(ushort *)(iVar5 + 0x4c + (int)local_c * 2);
            uVar54 = (uint)*(ushort *)(iVar5 + 0x4e + (int)local_c * 2);
            uVar55 = (uint)*(ushort *)(iVar5 + 0x50 + (int)local_c * 2);
            uVar56 = (uint)*(ushort *)(iVar5 + 0x52 + (int)local_c * 2);
            uVar57 = (uint)*(ushort *)(iVar5 + 0x54 + (int)local_c * 2);
            uVar58 = (uint)*(ushort *)(iVar5 + 0x56 + (int)local_c * 2);
            uVar59 = (uint)*(ushort *)(iVar5 + 0x58 + (int)local_c * 2);
            uVar60 = (uint)*(ushort *)(iVar5 + 0x5a + (int)local_c * 2);
            uVar61 = (uint)*(ushort *)(iVar5 + 0x5c + (int)local_c * 2);
            uVar62 = (uint)*(ushort *)(iVar5 + 0x5e + (int)local_c * 2);
            uVar63 = (uint)*(ushort *)(iVar5 + 0x60 + (int)local_c * 2);
            uVar64 = (uint)*(ushort *)(iVar5 + (int)local_2c * 2);
            local_40 = *(int *)(unaff_ESI + (uVar7 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar11 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar17 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar18 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar19 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar20 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar21 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar22 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar23 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar24 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar25 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar26 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar27 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar28 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar29 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar30 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar31 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar32 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar33 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar34 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar35 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar36 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar37 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar38 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar39 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar40 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar41 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar42 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar43 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar44 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar45 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar46 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar47 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar48 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar49 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar50 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar51 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar52 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar53 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar54 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar55 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar56 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar57 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar58 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar59 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar60 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar61 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar62 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar63 + 0xc99) * 0x10) +
                       *(int *)(unaff_ESI + (uVar64 + 0xc99) * 0x10);
            local_3c = *(int *)(iVar4 + 0xc994) + *(int *)(unaff_ESI + 0xc994 + uVar11 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar17 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar18 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar19 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar20 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar21 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar22 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar23 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar24 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar25 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar26 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar27 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar28 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar29 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar30 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar31 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar32 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar33 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar34 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar35 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar36 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar37 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar38 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar39 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar40 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar41 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar42 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar43 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar44 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar45 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar46 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar47 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar48 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar49 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar50 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar51 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar52 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar53 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar54 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar55 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar56 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar57 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar58 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar59 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar60 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar61 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar62 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar63 * 0x10) +
                       *(int *)(unaff_ESI + 0xc994 + uVar64 * 0x10);
            local_38 = *(int *)(iVar4 + 0xc998) + *(int *)(unaff_ESI + 0xc998 + uVar11 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar17 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar18 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar19 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar20 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar21 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar22 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar23 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar24 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar25 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar26 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar27 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar28 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar29 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar30 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar31 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar32 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar33 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar34 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar35 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar36 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar37 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar38 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar39 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar40 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar41 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar42 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar43 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar44 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar45 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar46 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar47 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar48 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar49 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar50 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar51 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar52 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar53 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar54 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar55 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar56 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar57 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar58 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar59 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar60 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar61 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar62 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar63 * 0x10) +
                       *(int *)(unaff_ESI + 0xc998 + uVar64 * 0x10);
          }
          else {
            local_10 = local_c;
            if ((int)local_c <= (int)pbVar14) {
              do {
                iVar4 = 0;
                if (0 < (int)local_14) {
                  local_24 = (byte *)(*(ushort *)(iVar5 + (int)local_10 * 2) + 0x9324 + unaff_ESI);
                  do {
                    psVar1 = (short *)((int)&local_40 + iVar4 * 2);
                    *psVar1 = *psVar1 + (ushort)*local_24;
                    local_24 = local_24 + 0x102;
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < (int)local_14);
                }
                local_10 = local_10 + 1;
              } while ((int)local_10 <= (int)local_18);
            }
          }
          pbVar14 = (byte *)0xffffffff;
          local_10 = (byte *)0x3b9ac9ff;
          local_24 = (byte *)0x0;
          if (0 < (int)local_14) {
            do {
              pbVar13 = (byte *)(uint)*(ushort *)((int)&local_40 + (int)local_24 * 2);
              if (pbVar13 < local_10) {
                local_10 = pbVar13;
                pbVar14 = local_24;
              }
              local_24 = local_24 + 1;
            } while ((int)local_24 < (int)local_14);
          }
          local_30 = local_30 + (int)local_10;
          local_5c[(int)pbVar14] = local_5c[(int)pbVar14] + 1;
          local_28[unaff_ESI + 0x680] = (byte)pbVar14;
          local_28 = local_28 + 1;
          if ((local_14 == (byte *)0x6) && ((int)local_18 - (int)local_c == 0x31)) {
            iVar4 = (int)(pbVar14 + 0x2c) * 0x102;
            piVar15 = (int *)(unaff_ESI + ((uint)*(ushort *)(iVar5 + (int)local_c * 2) + iVar4) * 4)
            ;
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 2 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 4 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 6 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 8 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 10 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0xc + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0xe + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x10 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x12 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x14 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x16 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x18 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x1a + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x1c + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x1e + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x20 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x22 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x24 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x26 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x28 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x2a + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x2c + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x2e + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x30 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x32 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x34 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x36 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x38 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x3a + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x3c + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x3e + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x40 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x42 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x44 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x46 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x48 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x4a + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x4c + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x4e + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x50 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x52 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x54 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x56 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x58 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x5a + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x5c + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x5e + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI +
                             ((uint)*(ushort *)(iVar5 + 0x60 + (int)local_c * 2) + iVar4) * 4);
            *piVar15 = *piVar15 + 1;
            piVar15 = (int *)(unaff_ESI + ((uint)*(ushort *)(iVar5 + (int)local_2c * 2) + iVar4) * 4
                             );
            *piVar15 = *piVar15 + 1;
          }
          else if ((int)local_c <= (int)local_18) {
            do {
              piVar15 = (int *)(unaff_ESI +
                               ((uint)*(ushort *)(iVar5 + (int)local_c * 2) +
                               (int)(pbVar14 + 0x2c) * 0x102) * 4);
              *piVar15 = *piVar15 + 1;
              local_c = local_c + 1;
            } while ((int)local_c <= (int)local_18);
          }
          iVar4 = *(int *)(unaff_ESI + 0x274);
          local_c = local_18 + 1;
        } while ((int)(local_18 + 1) < iVar4);
      }
      if (2 < *(int *)(unaff_ESI + 0x268)) {
        pcVar65 = "      pass %d: size is %d, grp uses are ";
        iVar4 = FUN_00aaf1e2("      pass %d: size is %d, grp uses are ",local_34 + 1);
        _fprintf((FILE *)(iVar4 + 0x40),pcVar65);
        iVar4 = 0;
        if (0 < (int)local_14) {
          do {
            pcVar65 = "%d ";
            iVar6 = FUN_00aaf1e2();
            _fprintf((FILE *)(iVar6 + 0x40),pcVar65);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)local_14);
        }
        pcVar65 = "\n";
        iVar4 = FUN_00aaf1e2();
        _fprintf((FILE *)(iVar4 + 0x40),pcVar65);
      }
      if (0 < (int)local_14) {
        local_30 = (byte *)(unaff_ESI + 0x9324);
        local_2c = local_14;
        do {
          FUN_00a93720(local_30);
          local_30 = local_30 + 0x102;
          local_2c = local_2c + -1;
        } while (local_2c != (byte *)0x0);
      }
      pbVar14 = local_14;
      local_34 = local_34 + 1;
    } while ((int)local_34 < 4);
    if ((int)local_14 < 8) {
      if (((int)local_28 < 0x8000) && ((int)local_28 < 0x4653)) {
        iVar4 = 0;
        if (0 < (int)local_14) {
          do {
            *(char *)((int)&local_24 + iVar4) = (char)iVar4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)pbVar14);
        }
        if (0 < (int)local_28) {
          local_30 = (byte *)(unaff_ESI + 0x4cd2);
          local_2c = local_28;
          bVar3 = (byte)local_24;
          do {
            local_34 = (byte *)0x0;
            local_5 = local_30[-0x4652];
            iVar4 = 0;
            iVar6 = iVar4;
            bVar2 = bVar3;
            if (local_30[-0x4652] != bVar3) {
              do {
                iVar4 = iVar6 + 1;
                bVar3 = *(byte *)((int)&local_24 + iVar6 + 1);
                *(byte *)((int)&local_24 + iVar6 + 1) = bVar2;
                iVar6 = iVar4;
                bVar2 = bVar3;
              } while (local_5 != bVar3);
            }
            *local_30 = (byte)iVar4;
            local_30 = local_30 + 1;
            local_2c = local_2c + -1;
            local_24 = (byte *)CONCAT31(local_24._1_3_,bVar3);
          } while (local_2c != (byte *)0x0);
        }
        local_24 = (byte *)0x0;
        if (0 < (int)local_14) {
          local_18 = (byte *)(unaff_ESI + 0x9324);
          local_2c = (byte *)(-0x6cd8 - unaff_ESI);
          do {
            pbVar14 = (byte *)0x0;
            iVar4 = 0;
            pbVar13 = (byte *)0x20;
            local_30 = (byte *)0x0;
            if (0 < (int)local_1c) {
              do {
                pbVar8 = (byte *)(uint)local_18[iVar4];
                if (pbVar14 < pbVar8) {
                  pbVar14 = pbVar8;
                }
                if (pbVar8 < pbVar13) {
                  pbVar13 = pbVar8;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)local_1c);
              local_30 = pbVar14;
              if ((byte *)0x11 < pbVar14) {
                uVar66 = 0xe452a000000bbc;
                goto LAB_00a8e0f5;
              }
              if (pbVar13 == (byte *)0x0) {
                uVar66 = 0xe452a000000bbd;
                goto LAB_00a8e0f5;
              }
            }
            iVar4 = 0;
            local_34 = pbVar13;
            if (pbVar13 <= local_30) {
              do {
                iVar6 = 0;
                if (0 < (int)local_1c) {
                  do {
                    if ((byte *)(uint)local_18[iVar6] == local_34) {
                      *(int *)(unaff_ESI +
                              (int)((byte *)(-0x6cd8 - unaff_ESI) + iVar6 + (int)local_18) * 4) =
                           iVar4;
                      iVar4 = iVar4 + 1;
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < (int)local_1c);
                }
                local_34 = local_34 + 1;
                iVar4 = iVar4 * 2;
              } while ((int)local_34 <= (int)local_30);
            }
            local_18 = local_18 + 0x102;
            local_24 = local_24 + 1;
          } while ((int)local_24 < (int)local_14);
        }
        iVar6 = 0;
        iVar4 = unaff_ESI + 0x58;
        do {
          abStack_44[iVar6] = 0;
          iVar9 = 0;
          do {
            if (*(char *)(iVar9 + iVar4) != '\0') {
              abStack_44[iVar6] = 1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0x10);
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 0x10;
        } while (iVar6 < 0x10);
        local_24 = (byte *)*(undefined4 *)(unaff_ESI + 0x4c);
        iVar4 = 0;
        do {
          FUN_00a8dde0();
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x10);
        local_10 = (byte *)0x0;
        local_34 = (byte *)(unaff_ESI + 0x58);
        do {
          if (abStack_44[(int)local_10] != 0) {
            iVar4 = 0;
            do {
              FUN_00a8dde0();
              iVar4 = iVar4 + 1;
            } while (iVar4 < 0x10);
          }
          local_34 = local_34 + 0x10;
          local_10 = local_10 + 1;
        } while ((int)local_10 < 0x10);
        if (2 < *(int *)(unaff_ESI + 0x268)) {
          pcVar65 = "      bytes: mapping %d, ";
          iVar4 = FUN_00aaf1e2();
          _fprintf((FILE *)(iVar4 + 0x40),pcVar65);
        }
        local_24 = *(byte **)(unaff_ESI + 0x4c);
        FUN_00a8dde0();
        pbVar14 = local_28;
        FUN_00a8dde0(0xf);
        if (0 < (int)pbVar14) {
          local_18 = (byte *)(unaff_ESI + 0x4cd2);
          local_34 = pbVar14;
          do {
            iVar4 = 0;
            if (*local_18 != 0) {
              do {
                FUN_00a8dde0();
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)(uint)*local_18);
            }
            FUN_00a8dde0();
            local_18 = local_18 + 1;
            local_34 = local_34 + -1;
          } while (local_34 != (byte *)0x0);
        }
        if (2 < *(int *)(unaff_ESI + 0x268)) {
          pcVar65 = "selectors %d, ";
          iVar4 = FUN_00aaf1e2();
          _fprintf((FILE *)(iVar4 + 0x40),pcVar65);
        }
        local_24 = *(byte **)(unaff_ESI + 0x4c);
        if (0 < (int)local_14) {
          local_10 = (byte *)(unaff_ESI + 0x9324);
          local_30 = local_14;
          do {
            uVar7 = (uint)*local_10;
            FUN_00a8dde0();
            if (0 < (int)local_1c) {
              local_18 = local_10;
              local_34 = local_1c;
              do {
                if ((int)uVar7 < (int)(uint)*local_18) {
                  do {
                    FUN_00a8dde0();
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < (int)(uint)*local_18);
                }
                if ((int)(uint)*local_18 < (int)uVar7) {
                  do {
                    FUN_00a8dde0();
                    uVar7 = uVar7 - 1;
                  } while ((int)(uint)*local_18 < (int)uVar7);
                }
                FUN_00a8dde0();
                local_18 = local_18 + 1;
                local_34 = local_34 + -1;
              } while (local_34 != (byte *)0x0);
            }
            local_10 = local_10 + 0x102;
            local_30 = local_30 + -1;
          } while (local_30 != (byte *)0x0);
        }
        if (2 < *(int *)(unaff_ESI + 0x268)) {
          pcVar65 = "code lengths %d, ";
          iVar4 = FUN_00aaf1e2();
          _fprintf((FILE *)(iVar4 + 0x40),pcVar65);
        }
        local_24 = *(byte **)(unaff_ESI + 0x4c);
        iVar4 = *(int *)(unaff_ESI + 0x274);
        local_1c = (byte *)0x0;
        local_c = (byte *)0x0;
        if (0 < iVar4) {
          do {
            local_2c = local_c + 0x31;
            local_18 = local_2c;
            if (iVar4 <= (int)local_2c) {
              local_18 = (byte *)(iVar4 + -1);
            }
            if ((int)local_14 <= (int)(uint)local_1c[unaff_ESI + 0x680]) {
              uVar66 = 0xe452a000000bbe;
              goto LAB_00a8e0f5;
            }
            if ((local_14 == (byte *)0x6) && ((int)local_18 - (int)local_c == 0x31)) {
              iVar4 = (local_1c[unaff_ESI + 0x680] + 0x92) * 0x102 + unaff_ESI;
              local_10 = (byte *)((local_1c[unaff_ESI + 0x680] + 0x26) * 0x408 + unaff_ESI);
              FUN_00a8dde0();
              FUN_00a8dde0(*(undefined1 *)(iVar4 + (uint)*(ushort *)(iVar5 + 2 + (int)local_c * 2)))
              ;
              FUN_00a8dde0(*(undefined1 *)(iVar4 + (uint)*(ushort *)(iVar5 + 4 + (int)local_c * 2)))
              ;
              FUN_00a8dde0(*(undefined1 *)(iVar4 + (uint)*(ushort *)(iVar5 + 6 + (int)local_c * 2)))
              ;
              FUN_00a8dde0(*(undefined1 *)(iVar4 + (uint)*(ushort *)(iVar5 + 8 + (int)local_c * 2)))
              ;
              FUN_00a8dde0(*(undefined1 *)(iVar4 + (uint)*(ushort *)(iVar5 + 10 + (int)local_c * 2))
                          );
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0xc + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0xe + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x10 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x12 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x14 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x16 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x18 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x1a + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x1c + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x1e + (int)local_c * 2)));
              FUN_00a8dde0();
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x22 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x24 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x26 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x28 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x2a + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x2c + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x2e + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x30 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x32 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x34 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x36 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x38 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x3a + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x3c + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x3e + (int)local_c * 2)));
              FUN_00a8dde0();
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x42 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x44 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x46 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x48 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x4a + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x4c + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x4e + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x50 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x52 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x54 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x56 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x58 + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x5a + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x5c + (int)local_c * 2)));
              FUN_00a8dde0(*(undefined1 *)
                            (iVar4 + (uint)*(ushort *)(iVar5 + 0x5e + (int)local_c * 2)));
              FUN_00a8dde0();
              FUN_00a8dde0(*(undefined1 *)(iVar4 + (uint)*(ushort *)(iVar5 + (int)local_2c * 2)));
            }
            else {
              pbVar14 = local_c;
              if ((int)local_c <= (int)local_18) {
                do {
                  FUN_00a8dde0();
                  pbVar14 = pbVar14 + 1;
                } while ((int)pbVar14 <= (int)local_18);
              }
            }
            iVar4 = *(int *)(unaff_ESI + 0x274);
            local_1c = local_1c + 1;
            local_c = local_18 + 1;
          } while ((int)local_c < iVar4);
        }
        if (local_1c == local_28) {
          if (2 < *(int *)(unaff_ESI + 0x268)) {
            pcVar65 = "codes %d\n";
            iVar5 = FUN_00aaf1e2();
            _fprintf((FILE *)(iVar5 + 0x40),pcVar65);
          }
          return;
        }
        uVar66 = 0xe452a000000bbf;
      }
      else {
        uVar66 = 0xe452a000000bbb;
      }
    }
    else {
      uVar66 = 0xe452a000000bba;
    }
  }
LAB_00a8e0f5:
  pcVar65 = 
  "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
  ;
  iVar5 = FUN_00aaf1e2("\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
                       ,uVar66);
  _fprintf((FILE *)(iVar5 + 0x40),pcVar65);
                    /* WARNING: Subroutine does not return */
  _exit(3);
}

