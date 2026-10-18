// __ld12tof @ 00acb7d8 body=[[00acb7d8, 00acbd28]]


/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2010 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  INTRNCVT_STATUS IVar7;
  byte bVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  bool bVar17;
  uint local_2c;
  uint local_24;
  uint local_14;
  float local_10;
  uint local_c [2];
  
  local_c[1] = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  uVar1 = *(ushort *)(_Ifp->ld12 + 10);
  uVar2 = *(uint *)(_Ifp->ld12 + 6);
  local_14 = uVar2;
  fVar15 = *(float *)(_Ifp->ld12 + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  uVar5 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_10 = fVar15;
  local_c[0] = uVar5;
  bVar3 = (byte)DAT_00ef33a4;
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar13 = 0;
    do {
      if ((&local_14)[iVar13] != 0) {
        local_14 = 0;
        local_10 = 0.0;
        local_c[0] = 0;
        break;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
  }
  else {
    bVar4 = false;
    iVar16 = DAT_00ef33a0 + -1;
    iVar14 = (int)(DAT_00ef33a0 + (DAT_00ef33a0 >> 0x1f & 0x1fU)) >> 5;
    puVar10 = &local_14 + iVar14;
    bVar8 = 0x1f - ((byte)DAT_00ef33a0 & 0x1f);
    if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
      uVar11 = (&local_14)[iVar14] & ~(-1 << (bVar8 & 0x1f));
      iVar6 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar6 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar16 & 0x1f) & 0x1f);
          puVar9 = &local_14 + iVar6;
          local_24 = *puVar9 + uVar11;
          if (local_24 < *puVar9) goto LAB_00acb91c;
          bVar17 = local_24 < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_00acb923;
LAB_00acb91c:
            do {
              bVar4 = true;
LAB_00acb923:
              iVar6 = iVar6 + -1;
              *puVar9 = local_24;
              if ((iVar6 < 0) || (!bVar4)) goto LAB_00acb931;
              puVar9 = &local_14 + iVar6;
              local_24 = *puVar9 + 1;
            } while (local_24 < *puVar9);
            bVar17 = local_24 == 0;
          } while( true );
        }
        iVar6 = iVar6 + 1;
        if (2 < iVar6) break;
        uVar11 = (&local_14)[iVar6];
      }
    }
LAB_00acb931:
    *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = &local_14 + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < DAT_00ef339c - DAT_00ef33a0) {
      local_14 = 0;
      local_10 = 0.0;
      local_c[0] = 0;
    }
    else {
      if (DAT_00ef339c < iVar14) {
        if (iVar14 < DAT_00ef3398) {
          iVar14 = iVar14 + DAT_00ef33ac;
          local_14 = local_14 & 0x7fffffff;
          iVar13 = (int)(DAT_00ef33a4 + (DAT_00ef33a4 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar2 = (&local_14)[local_24];
            (&local_14)[local_24] = uVar2 >> bVar8 | local_2c;
            local_2c = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar16 = 2;
          puVar10 = local_c + -iVar13;
          do {
            if (iVar16 < iVar13) {
              (&local_14)[iVar16] = 0;
            }
            else {
              (&local_14)[iVar16] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar16 = iVar16 + -1;
          } while (-1 < iVar16);
        }
        else {
          local_10 = 0.0;
          local_c[0] = 0;
          local_14 = 0x80000000;
          iVar13 = (int)(DAT_00ef33a4 + (DAT_00ef33a4 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar2 = (&local_14)[local_24];
            (&local_14)[local_24] = uVar2 >> bVar8 | local_2c;
            local_2c = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar14 = 2;
          puVar10 = local_c + -iVar13;
          do {
            if (iVar14 < iVar13) {
              (&local_14)[iVar14] = 0;
            }
            else {
              (&local_14)[iVar14] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
          iVar14 = DAT_00ef33ac + DAT_00ef3398;
        }
        goto LAB_00acbcdc;
      }
      iVar13 = DAT_00ef339c - iVar13;
      local_14 = uVar2;
      local_10 = fVar15;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      local_c[0] = uVar5;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar2 = (&local_14)[local_24];
        (&local_14)[local_24] = uVar2 >> bVar8 | local_2c;
        local_2c = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar13 = 2;
      puVar10 = local_c + -iVar14;
      do {
        if (iVar13 < iVar14) {
          (&local_14)[iVar13] = 0;
        }
        else {
          (&local_14)[iVar13] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
      iVar14 = DAT_00ef33a0 + -1;
      iVar13 = (int)(DAT_00ef33a0 + (DAT_00ef33a0 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)DAT_00ef33a0 & 0x1f);
      puVar10 = &local_14 + iVar13;
      if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
        uVar2 = (&local_14)[iVar13] & ~(-1 << (bVar8 & 0x1f));
        iVar16 = iVar13;
        while (uVar2 == 0) {
          iVar16 = iVar16 + 1;
          if (2 < iVar16) goto LAB_00acbad0;
          uVar2 = (&local_14)[iVar16];
        }
        iVar16 = (int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar12 = 1 << (0x1f - ((byte)iVar14 & 0x1f) & 0x1f);
        uVar5 = (&local_14)[iVar16];
        uVar2 = uVar5 + uVar12;
        if ((uVar2 < uVar5) || (uVar2 < uVar12)) {
          bVar4 = true;
        }
        (&local_14)[iVar16] = uVar2;
        while ((iVar16 = iVar16 + -1, -1 < iVar16 && (bVar4))) {
          uVar5 = (&local_14)[iVar16];
          uVar2 = uVar5 + 1;
          bVar4 = false;
          if ((uVar2 < uVar5) || (uVar2 == 0)) {
            bVar4 = true;
          }
          (&local_14)[iVar16] = uVar2;
        }
      }
LAB_00acbad0:
      *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
      iVar13 = iVar13 + 1;
      if (iVar13 < 3) {
        puVar10 = &local_14 + iVar13;
        for (iVar14 = 3 - iVar13; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar13 = (int)(DAT_00ef33a4 + 1 + (DAT_00ef33a4 + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar2 = (&local_14)[local_24];
        (&local_14)[local_24] = uVar2 >> bVar8 | local_2c;
        local_2c = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar14 = 2;
      puVar10 = local_c + -iVar13;
      do {
        if (iVar14 < iVar13) {
          (&local_14)[iVar14] = 0;
        }
        else {
          (&local_14)[iVar14] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    iVar14 = 0;
  }
LAB_00acbcdc:
  fVar15 = (float)(iVar14 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
                  local_14);
  if (DAT_00ef33a8 == 0x40) {
    _F[1].f = fVar15;
    _F->f = local_10;
  }
  else if (DAT_00ef33a8 == 0x20) {
    _F->f = fVar15;
  }
  IVar7 = __security_check_cookie(local_c[1] ^ (uint)&stack0xfffffffc);
  return IVar7;
}

