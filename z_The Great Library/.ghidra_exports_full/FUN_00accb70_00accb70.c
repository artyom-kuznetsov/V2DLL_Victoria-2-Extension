// $I10_OUTPUT @ 00accb70 body=[[00accb70, 00acd467]]


/* WARNING: Removing unreachable block (ram,0x00acd07f) */
/* WARNING: Removing unreachable block (ram,0x00acd089) */
/* WARNING: Removing unreachable block (ram,0x00acd08e) */
/* Library Function - Single Match
    _$I10_OUTPUT
   
   Library: Visual Studio 2010 Release */

void __cdecl
_I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  errno_t eVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  short *psVar17;
  short *psVar18;
  ushort uVar19;
  short *psVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  ushort *local_74;
  ushort *local_70;
  undefined *local_6c;
  ushort local_64;
  ushort *local_5c;
  int local_58;
  int local_54;
  short local_50;
  int local_4c;
  int local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  ushort local_2c [4];
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
  uVar6 = CONCAT22(local_24._2_2_,(ushort)local_24);
  uVar22 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
  uVar9 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
  iVar21 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_64 = param_3 & 0x8000;
  uVar12 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c[0] = 0xcccc;
  local_2c[1] = 0x3ffb;
  if (local_64 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((short)uVar12 == 0) {
    if ((param_2 == 0) && (param_1 == 0)) {
      *param_6 = 0;
      *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
      *(undefined2 *)((int)param_6 + 3) = 0x3001;
      *(undefined1 *)((int)param_6 + 5) = 0;
      iVar1 = iVar21;
      goto LAB_00acd41c;
    }
  }
  else if ((short)uVar12 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((local_64 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_00accc8f;
        pcVar23 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_00accc8f:
          pcVar23 = "1#QNAN";
          goto LAB_00accc94;
        }
        pcVar23 = "1#IND";
      }
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar5 != 0) goto LAB_00accc41;
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar23 = "1#SNAN";
LAB_00accc94:
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar5 != 0) {
LAB_00accc41:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
    uVar6 = CONCAT22(local_24._2_2_,(ushort)local_24);
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    goto LAB_00acd41c;
  }
  local_50 = (short)(((uVar12 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar12 * 0x4d10
                    >> 0x10);
  local_24._0_2_ = 0;
  uVar14 = -(int)local_50;
  local_1a = (undefined1)uVar12;
  bStack_19 = (byte)(uVar12 >> 8);
  uStack_20._2_2_ = (ushort)param_2;
  uStack_1c = (ushort)(param_2 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar6 = param_1 << 0x10;
  uStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
  uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
  local_6c = &DAT_00ef3350;
  if (uVar14 != 0) {
    iVar1 = iVar21;
    uVar9 = uStack_12;
    uVar22 = uStack_e;
    uVar6 = param_1 << 0x10;
    uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
    if ((int)uVar14 < 0) {
      local_6c = &DAT_00ef34b0;
      uVar14 = (int)local_50;
    }
joined_r0x00accd13:
    if (uVar14 != 0) {
      local_6c = local_6c + 0x54;
      uVar15 = (int)uVar14 >> 3;
      uVar12 = uVar14 & 7;
      uVar14 = uVar15;
      if (uVar12 != 0) {
        puVar8 = (ushort *)(local_6c + uVar12 * 0xc);
        if (0x7fff < *puVar8) {
          local_40 = (ushort)*(undefined4 *)puVar8;
          uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar8 >> 0x10);
          puVar2 = puVar8 + 4;
          uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar8 + 2);
          uStack_3a = (ushort)((uint)*(undefined4 *)(puVar8 + 2) >> 0x10);
          puVar8 = &local_40;
          local_38 = *(int *)puVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        local_4c = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12._0_2_ = 0;
        uStack_12._2_2_ = 0;
        uVar9 = 0;
        uStack_e._0_2_ = 0;
        uStack_e._2_2_ = 0;
        uVar22 = 0;
        uStack_a = 0;
        uVar10 = (puVar8[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar11 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar7 = puVar8[5] & 0x7fff;
        uVar19 = uVar7 + uVar11;
        if (((uVar11 < 0x7fff) && (uVar7 < 0x7fff)) && (uVar19 < 0xbffe)) {
          if (0x3fbf < uVar19) {
            if (((uVar11 == 0) &&
                (uVar19 = uVar19 + 1,
                (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
               ((uVar16 == 0 && (uVar6 == 0)))) {
              local_1a = 0;
              bStack_19 = 0;
              goto joined_r0x00accd13;
            }
            if (((uVar7 != 0) || (uVar19 = uVar19 + 1, (*(uint *)(puVar8 + 4) & 0x7fffffff) != 0))
               || ((*(int *)(puVar8 + 2) != 0 || (*(int *)puVar8 != 0)))) {
              local_58 = 0;
              psVar20 = (short *)((int)&uStack_12 + 2);
              local_44 = 5;
              do {
                local_54 = local_44;
                if (0 < local_44) {
                  local_74 = (ushort *)((int)&local_24 + local_58 * 2);
                  local_70 = puVar8 + 4;
                  do {
                    bVar4 = false;
                    uVar9 = *(uint *)(psVar20 + -2) + (uint)*local_74 * (uint)*local_70;
                    if ((uVar9 < *(uint *)(psVar20 + -2)) ||
                       (uVar9 < (uint)*local_74 * (uint)*local_70)) {
                      bVar4 = true;
                    }
                    *(uint *)(psVar20 + -2) = uVar9;
                    if (bVar4) {
                      *psVar20 = *psVar20 + 1;
                    }
                    local_74 = local_74 + 1;
                    local_70 = local_70 + -1;
                    local_54 = local_54 + -1;
                  } while (0 < local_54);
                }
                psVar20 = psVar20 + 1;
                local_58 = local_58 + 1;
                local_44 = local_44 + -1;
              } while (0 < local_44);
              uVar19 = uVar19 + 0xc002;
              if ((short)uVar19 < 1) {
LAB_00accec6:
                uVar19 = uVar19 - 1;
                if ((short)uVar19 < 0) {
                  uVar9 = (uint)(ushort)-uVar19;
                  uVar19 = 0;
                  do {
                    if ((local_14 & 1) != 0) {
                      local_4c = local_4c + 1;
                    }
                    iVar3 = CONCAT22(uStack_a,uStack_e._2_2_);
                    uVar6 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    iVar21 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                    uStack_a = uStack_a >> 1;
                    uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10)
                    ;
                    uVar22 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                    uStack_12._0_2_ =
                         (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar21 << 0x1f) >> 0x10);
                    uVar9 = uVar9 - 1;
                    uStack_12._2_2_ = (ushort)(uVar6 >> 1);
                    local_14 = (byte)uVar22;
                    uStack_13 = (undefined1)(uVar22 >> 8);
                  } while (uVar9 != 0);
                  if (local_4c != 0) {
                    local_14 = local_14 | 1;
                  }
                }
              }
              else {
                do {
                  uVar11 = (ushort)uStack_e;
                  uVar7 = (ushort)uStack_12;
                  if ((uStack_a & 0x8000) != 0) break;
                  iVar21 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                  local_14 = (byte)iVar21;
                  uStack_13 = (undefined1)((uint)iVar21 >> 8);
                  uStack_12._0_2_ = (ushort)((uint)iVar21 >> 0x10);
                  iVar21 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
                  uStack_12._2_2_ = (ushort)iVar21 | uVar7 >> 0xf;
                  uStack_e._0_2_ = (ushort)((uint)iVar21 >> 0x10);
                  iVar21 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
                  uStack_e._2_2_ = (ushort)iVar21 | uVar11 >> 0xf;
                  uVar19 = uVar19 - 1;
                  uStack_a = (ushort)((uint)iVar21 >> 0x10);
                } while (0 < (short)uVar19);
                if ((short)uVar19 < 1) goto LAB_00accec6;
              }
              if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
                 (uVar22 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
                 uVar9 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
                 (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
                if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
                  uVar9 = 0;
                  if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                    if (uStack_a == 0xffff) {
                      uStack_a = 0x8000;
                      uVar19 = uVar19 + 1;
                      uVar22 = 0;
                      uVar9 = 0;
                    }
                    else {
                      uStack_a = uStack_a + 1;
                      uVar22 = 0;
                      uVar9 = 0;
                    }
                  }
                  else {
                    uVar22 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                  }
                }
                else {
                  uVar9 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
                  uVar22 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
                }
              }
              if (uVar19 < 0x7fff) {
                bStack_19 = (byte)(uVar19 >> 8) | (byte)(uVar10 >> 8);
                local_24 = uVar9;
                uStack_20 = uVar22;
                uStack_1c = uStack_a;
                local_1a = (undefined1)uVar19;
                uVar6 = uVar9;
                uVar16 = uVar22;
              }
              else {
                uStack_20._0_2_ = 0;
                uStack_20._2_2_ = 0;
                local_24._0_2_ = 0;
                local_24._2_2_ = 0;
                iVar21 = ((uVar10 == 0) - 1 & 0x80000000) + 0x7fff8000;
                uStack_1c = (ushort)iVar21;
                local_1a = (undefined1)((uint)iVar21 >> 0x10);
                bStack_19 = (byte)((uint)iVar21 >> 0x18);
                uVar6 = 0;
                uVar16 = 0;
              }
              goto joined_r0x00accd13;
            }
          }
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
        }
        else {
          iVar21 = ((uVar10 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar21;
          local_1a = (undefined1)((uint)iVar21 >> 0x10);
          bStack_19 = (byte)((uint)iVar21 >> 0x18);
        }
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        uVar9 = 0;
        uVar22 = 0;
        uVar6 = 0;
        uVar16 = 0;
      }
      goto joined_r0x00accd13;
    }
  }
  uVar12 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uStack_12 = uVar9;
  uStack_e = uVar22;
  if (0x3ffe < (ushort)(uVar12 >> 0x10)) {
    local_50 = local_50 + 1;
    local_54 = 0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12._0_2_ = 0;
    uStack_12._2_2_ = 0;
    uStack_12 = 0;
    uStack_e._0_2_ = 0;
    uStack_e._2_2_ = 0;
    uStack_e = 0;
    uStack_a = 0;
    uVar9 = uVar12 >> 0x10 & 0x7fff;
    iVar21 = uVar9 + 0x3ffb;
    if (((ushort)uVar9 < 0x7fff) && ((ushort)iVar21 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar21) {
        if (((((ushort)uVar9 == 0) &&
             (iVar21 = uVar9 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) && (uVar16 == 0)
            ) && (uVar6 == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          goto LAB_00acd254;
        }
        local_58 = 0;
        psVar20 = (short *)((int)&uStack_12 + 2);
        local_44 = 5;
        do {
          local_4c = local_44;
          if (0 < local_44) {
            local_5c = local_2c;
            puVar8 = (ushort *)((int)&local_24 + local_58 * 2);
            do {
              bVar4 = false;
              uVar9 = *(uint *)(psVar20 + -2) + (uint)*local_5c * (uint)*puVar8;
              if ((uVar9 < *(uint *)(psVar20 + -2)) || (uVar9 < (uint)*local_5c * (uint)*puVar8)) {
                bVar4 = true;
              }
              *(uint *)(psVar20 + -2) = uVar9;
              if (bVar4) {
                *psVar20 = *psVar20 + 1;
              }
              local_5c = local_5c + -1;
              puVar8 = puVar8 + 1;
              local_4c = local_4c + -1;
            } while (0 < local_4c);
          }
          psVar20 = psVar20 + 1;
          local_58 = local_58 + 1;
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar21 = iVar21 + 0xc002;
        if ((short)iVar21 < 1) {
LAB_00acd14f:
          uVar19 = (ushort)(iVar21 + 0xffff);
          if ((short)uVar19 < 0) {
            uVar9 = -(iVar21 + 0xffff);
            uVar6 = uVar9 & 0xffff;
            uVar19 = uVar19 + (short)uVar9;
            do {
              if ((local_14 & 1) != 0) {
                local_54 = local_54 + 1;
              }
              iVar3 = CONCAT22(uStack_a,uStack_e._2_2_);
              uVar9 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              iVar21 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
              uStack_a = uStack_a >> 1;
              uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
              uVar22 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar21 << 0x1f) >> 0x10);
              uVar6 = uVar6 - 1;
              uStack_12._2_2_ = (ushort)(uVar9 >> 1);
              local_14 = (byte)uVar22;
              uStack_13 = (undefined1)(uVar22 >> 8);
            } while (uVar6 != 0);
            if (local_54 != 0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar7 = (ushort)uStack_e;
            uVar19 = (ushort)uStack_12;
            if ((short)uStack_a < 0) break;
            iVar3 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar3;
            uStack_13 = (undefined1)((uint)iVar3 >> 8);
            uStack_12._0_2_ = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
            uStack_12._2_2_ = (ushort)iVar3 | uVar19 >> 0xf;
            uStack_e._0_2_ = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
            uStack_e._2_2_ = (ushort)iVar3 | uVar7 >> 0xf;
            iVar21 = iVar21 + 0xffff;
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar21);
          uVar19 = (ushort)iVar21;
          if ((short)uVar19 < 1) goto LAB_00acd14f;
        }
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uStack_e = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
           uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
           (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
            uStack_12 = 0;
            if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar19 = uVar19 + 1;
                uStack_e = 0;
                uStack_12 = 0;
              }
              else {
                uStack_a = uStack_a + 1;
                uStack_e = 0;
                uStack_12 = 0;
              }
            }
            else {
              uStack_e = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
            }
          }
          else {
            uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
            uStack_e = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
          }
        }
        if (uVar19 < 0x7fff) {
          bStack_19 = (byte)(uVar19 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar19;
          uVar6 = uStack_12;
          uVar16 = uStack_e;
        }
        else {
          iVar21 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar21;
          local_1a = (undefined1)((uint)iVar21 >> 0x10);
          bStack_19 = (byte)((uint)iVar21 >> 0x18);
          uVar6 = 0;
          uVar16 = 0;
        }
        goto LAB_00acd254;
      }
      iVar21 = 0;
    }
    else {
      iVar21 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
    }
    uStack_1c = (ushort)iVar21;
    local_1a = (undefined1)((uint)iVar21 >> 0x10);
    bStack_19 = (byte)((uint)iVar21 >> 0x18);
    uStack_12 = 0;
    uStack_e = 0;
    uVar6 = 0;
    uVar16 = 0;
  }
LAB_00acd254:
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar21 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    local_48 = 8;
    uVar9 = uVar6;
    uVar22 = uVar16;
    do {
      uVar6 = uVar9 << 1;
      uVar16 = uVar22 * 2 | uVar9 >> 0x1f;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uVar22 >> 0x1f);
      local_48 = local_48 + -1;
      uStack_20._0_2_ = (undefined2)uVar16;
      uStack_20._2_2_ = (ushort)(uVar22 * 2 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
      uVar9 = uVar6;
      uVar22 = uVar16;
    } while (local_48 != 0);
    if ((iVar21 < 0) && (uVar22 = -iVar21 & 0xff, uVar22 != 0)) {
      do {
        iVar21 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar6 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar6;
        local_1a = (undefined1)(uVar6 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uVar12 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20) >> 1;
        uVar16 = uVar12 | iVar21 << 0x1f;
        uVar6 = uVar9 >> 1 | CONCAT22(uStack_20._2_2_,(undefined2)uStack_20) << 0x1f;
        uVar22 = uVar22 - 1;
        uStack_20._0_2_ = (undefined2)uVar12;
        uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
        local_24._0_2_ = (ushort)(uVar9 >> 1);
        local_24._2_2_ = (ushort)(uVar6 >> 0x10);
        uVar9 = CONCAT22(local_24._2_2_,(ushort)local_24);
      } while (0 < (int)uVar22);
    }
    psVar20 = param_6 + 2;
    psVar17 = psVar20;
    for (param_4 = param_4 + 1; 0 < param_4; param_4 = param_4 + -1) {
      uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
      uStack_20._0_2_ = (undefined2)uVar16;
      local_24._2_2_ = (ushort)(uVar6 >> 0x10);
      local_24._0_2_ = (ushort)uVar6;
      iVar1 = CONCAT22((undefined2)uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar22 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 |
               (uint)(uStack_20._2_2_ >> 0xf)) * 2 | (uVar16 & 0x7fffffff) >> 0x1e;
      uVar12 = (uVar16 * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 | (uVar6 & 0x7fffffff) >> 0x1e;
      uVar9 = uVar6 * 5;
      if ((uVar9 < uVar6 * 4) || (uVar14 = uVar12, uVar9 < uVar6)) {
        uVar14 = uVar12 + 1;
        bVar4 = false;
        if ((uVar14 < uVar12) || (uVar14 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar22 = uVar22 + 1;
        }
      }
      uVar12 = uVar16 + uVar14;
      if ((uVar12 < uVar14) || (uVar12 < uVar16)) {
        uVar22 = uVar22 + 1;
      }
      iVar21 = (uVar22 + local_38) * 2;
      uStack_1c = (ushort)iVar21 | (ushort)(uVar12 >> 0x1f);
      uVar6 = uVar6 * 10;
      local_1a = (undefined1)((uint)iVar21 >> 0x10);
      uVar16 = uVar12 * 2 | uVar9 >> 0x1f;
      *(char *)psVar17 = (char)((uint)iVar21 >> 0x18) + '0';
      psVar17 = (short *)((int)psVar17 + 1);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uStack_20._2_2_;
    }
    psVar18 = psVar17 + -1;
    if (*(char *)((int)psVar17 + -1) < '5') {
      for (; (psVar20 <= psVar18 && ((char)*psVar18 == '0')); psVar18 = (short *)((int)psVar18 + -1)
          ) {
      }
      if (psVar18 < psVar20) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar20 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_00acd41c;
      }
    }
    else {
      for (; (psVar20 <= psVar18 && ((char)*psVar18 == '9')); psVar18 = (short *)((int)psVar18 + -1)
          ) {
        *(char *)psVar18 = '0';
      }
      if (psVar18 < psVar20) {
        psVar18 = (short *)((int)psVar18 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar18 = (char)*psVar18 + '\x01';
    }
    cVar13 = ((char)psVar18 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar13;
    *(undefined1 *)(cVar13 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined2 *)((int)param_6 + 3) = 0x3001;
    *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_00acd41c:
  uStack_3e = iVar1;
  local_24 = uVar6;
  uStack_20 = uVar16;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

