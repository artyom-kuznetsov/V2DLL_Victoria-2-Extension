// FUN_004a14a0 @ 004a14a0 body=[[004a14a0, 004a151d] [004a1521, 004a17ee] [004a17f2, 004a18fb]]


void FUN_004a14a0(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  undefined **local_a0;
  undefined4 local_9c;
  float local_98 [2];
  undefined **local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined **local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined **local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined **local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_15 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b401cb;
  local_10 = ExceptionList;
  iVar8 = *(int *)(*(int *)(param_1 + 0x2134) + 4);
  local_24 = *(int *)(*(int *)(param_1 + 0x2134) + 8);
  ExceptionList = &local_10;
  local_28 = iVar8;
  FUN_004a2970(iVar8);
  local_20 = 0;
  if (0 < iVar8) {
    do {
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_8 = 0;
      FUN_004a3370();
      iVar8 = local_24;
      local_8 = 0xffffffff;
      if (local_3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c);
      }
      puVar1 = (uint *)(((*(int *)(param_1 + 0x2ae4) - *(int *)(param_1 + 0x2ae0) & 0xfffffff0U) -
                        0x10) + *(int *)(param_1 + 0x2ae0));
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      FUN_004a2a90(local_24);
      local_1c = 0;
      if (0 < iVar8) {
        do {
          iVar8 = *(int *)(param_1 + 0x2134);
          local_15[0] = 0;
          if (99 < *(byte *)(*(int *)(iVar8 + 0x18) * local_1c + *(int *)(iVar8 + 0xc) * local_20 +
                            *(int *)(iVar8 + 0x20))) {
            iVar2 = *(int *)(param_1 + 0x212c);
            iVar8 = local_20;
            if (*(int *)(iVar2 + 4) + -1 < local_20) {
              iVar8 = *(int *)(iVar2 + 4) + -1;
            }
            iVar11 = local_1c;
            if (local_1c < 0) {
              iVar11 = 0;
            }
            if (*(int *)(iVar2 + 8) + -1 < iVar11) {
              iVar11 = *(int *)(iVar2 + 8) + -1;
            }
            iVar8 = *(int *)(*(int *)(param_1 + 0x2aa4) +
                            (uint)*(ushort *)
                                   (*(int *)(iVar2 + 0x18) * iVar11 + *(int *)(iVar2 + 0xc) * iVar8
                                   + *(int *)(iVar2 + 0x20)) * 4);
            if ((iVar8 != 0) && (*(char *)(iVar8 + 0x2a) != '\0')) {
              local_15[0] = 1;
            }
          }
          puVar3 = (undefined1 *)puVar1[1];
          if ((local_15 < puVar3) && (puVar4 = (undefined1 *)*puVar1, puVar4 <= local_15)) {
            if (puVar3 == (undefined1 *)puVar1[2]) {
              if ((int)puVar3 - (int)puVar4 == -1) {
LAB_004a16b7:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad("vector<T> too long");
              }
              uVar6 = ((int)puVar3 - (int)puVar4) + 1;
              uVar9 = (int)puVar1[2] - (int)puVar4;
              if (uVar9 < uVar6) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar6) {
                  uVar9 = uVar6;
                }
                FUN_004a2a90(uVar9);
              }
            }
            if ((undefined1 *)puVar1[1] != (undefined1 *)0x0) {
              *(undefined1 *)puVar1[1] = local_15[*puVar1 - (int)puVar4];
            }
          }
          else {
            if (puVar3 == (undefined1 *)puVar1[2]) {
              iVar8 = (int)puVar3 - *puVar1;
              if (iVar8 == -1) goto LAB_004a16b7;
              uVar6 = iVar8 + 1;
              uVar9 = (int)puVar1[2] - *puVar1;
              if (uVar9 < uVar6) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar6) {
                  uVar9 = uVar6;
                }
                FUN_004a2a90(uVar9);
              }
            }
            if ((undefined1 *)puVar1[1] != (undefined1 *)0x0) {
              *(undefined1 *)puVar1[1] = local_15[0];
            }
          }
          puVar1[1] = puVar1[1] + 1;
          local_1c = local_1c + 1;
        } while (local_1c < local_24);
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_28);
  }
  local_20 = 0;
  local_1c = *(int *)(param_1 + 0x2aa8);
  if (0 < *(int *)(param_1 + 0x2aa8)) {
    do {
      iVar8 = *(int *)(*(int *)(param_1 + 0x2aa4) + local_20 * 4);
      local_9c = 0x18d;
      local_a0 = CMapPoint::vftable;
      local_98[0] = *(float *)(iVar8 + 0x1d4);
      local_98[1] = (float)*(undefined4 *)(iVar8 + 0x1d8);
      local_8c = 0x18d;
      local_90 = CMapPoint::vftable;
      local_88 = *(undefined4 *)(iVar8 + 0x1b4);
      local_84 = *(undefined4 *)(iVar8 + 0x1b8);
      local_7c = 0x18d;
      local_80 = CMapPoint::vftable;
      local_78 = *(undefined4 *)(iVar8 + 0x1c4);
      local_74 = *(undefined4 *)(iVar8 + 0x1c8);
      if (DAT_0125ce80 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)FUN_00aae9af(0x3c);
        local_8 = 1;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[1] = 0x1ff;
          *puVar7 = 0;
          local_2c = puVar7;
          _Dst = (void *)FUN_00aad56b(0x7fc);
          puVar7[2] = _Dst;
          _memset(_Dst,0,puVar7[1] * 4);
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
        }
        puVar5 = DAT_0125ce80;
        local_8 = 2;
        local_2c = (undefined4 *)0x0;
        if ((puVar7 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
          FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar5);
        }
        local_8 = 0xffffffff;
        DAT_0125ce80 = puVar7;
      }
      iVar2 = local_20;
      iVar11 = *(int *)(DAT_0125ce80[0xc] + 0x58) * 0x10 + *(int *)(iVar8 + 0x330);
      local_6c = 0x18d;
      local_70 = CMapPoint::vftable;
      local_68 = *(undefined4 *)(iVar11 + 8);
      local_64 = *(undefined4 *)(iVar11 + 0xc);
      iVar11 = *(int *)(DAT_0125ce80[0xe] + 0x58) * 0x10 + *(int *)(iVar8 + 0x330);
      local_5c = 0x18d;
      local_60 = CMapPoint::vftable;
      local_58 = *(undefined4 *)(iVar11 + 8);
      local_54 = *(undefined4 *)(iVar11 + 0xc);
      iVar8 = *(int *)(DAT_0125ce80[0xd] + 0x58) * 0x10 + *(int *)(iVar8 + 0x330);
      local_4c = 0x18d;
      local_50 = CMapPoint::vftable;
      local_48 = *(undefined4 *)(iVar8 + 8);
      local_44 = *(undefined4 *)(iVar8 + 0xc);
      pfVar10 = local_98 + 1;
      iVar8 = 6;
      do {
        iVar11 = (int)pfVar10[-1];
        iVar12 = (int)*pfVar10;
        if ((((-1 < iVar11) && (iVar11 < local_28)) && (-1 < iVar12)) && (iVar12 < local_24)) {
          *(undefined1 *)(iVar12 + *(int *)(*(int *)(param_1 + 0x2ae0) + iVar11 * 0x10)) = 0;
        }
        pfVar10 = pfVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      _eh_vector_destructor_iterator_(&local_a0,0x10,6,FUN_004010c0);
      local_20 = iVar2 + 1;
    } while (iVar2 + 1 < local_1c);
  }
  ExceptionList = local_10;
  return;
}

