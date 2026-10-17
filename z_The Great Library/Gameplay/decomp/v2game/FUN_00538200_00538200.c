// FUN_00538200 @ 00538200  (requested 00538200, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Removing unreachable block (ram,0x00538975) */
/* WARNING: Removing unreachable block (ram,0x0053868b) */
/* WARNING: Removing unreachable block (ram,0x005388b8) */

void FUN_00538200(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 extraout_EDX;
  int iVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  int local_27c;
  uint local_270 [4];
  undefined8 local_260;
  uint local_258;
  uint local_250;
  int local_24c;
  uint local_248;
  int local_244;
  undefined **local_240;
  undefined4 local_23c;
  byte local_238 [64];
  uint *local_1f8;
  uint *local_1f4;
  uint *local_1f0;
  int *local_1e8;
  undefined4 local_1dc;
  undefined4 local_1d4;
  int iStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined1 local_178 [72];
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 local_120 [72];
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 local_70 [72];
  int iStack_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8f0fa;
  pvStack_14 = ExceptionList;
  local_270[3] = *(undefined4 *)(DAT_012588e8 + 0xbcc);
  ExceptionList = &pvStack_14;
  FUN_0047db00();
  local_c = 3;
  FUN_0047de60(local_70);
  FUN_0047db00();
  local_c._0_1_ = 4;
  FUN_0047de60(local_120);
  FUN_0047db00();
  local_c._0_1_ = 5;
  FUN_0047db00();
  local_c._0_1_ = 6;
  FUN_0047dc20();
  FUN_0047dc20();
  FUN_0047df00();
  FUN_0047db00();
  local_c._0_1_ = 7;
  FUN_0047dca0();
  piVar8 = *(int **)(param_1 + 0x9d8);
  while ((*(int **)(param_1 + 0x9d8) <= piVar8 && (piVar8 < *(int **)(param_1 + 0x9dc)))) {
    piVar5 = *(int **)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + *piVar8 * 4) + 0xd8);
    piVar8 = piVar8 + 1;
    while (local_1e8 = piVar8, piVar5 != (int *)0x0) {
      piVar3 = (int *)piVar5[2];
      iVar13 = *piVar5;
      iVar4 = *(int *)(iVar13 + 0x54);
      piVar5 = piVar3;
      if (iVar4 != 0) {
        FUN_008604c0(iVar4,&local_248,local_178,local_270[3]);
        if ((-1 < local_244) && ((0 < local_244 || (local_248 != 0)))) {
          puVar12 = (uint *)(param_1 + 0xe78);
          uVar9 = *puVar12;
          *puVar12 = *puVar12 + local_248;
          *(int *)(param_1 + 0xe7c) =
               *(int *)(param_1 + 0xe7c) + local_244 + (uint)CARRY4(uVar9,local_248);
          iVar14 = *(int *)(param_1 + (DAT_01258738 + 0xd) * 0x10);
          puVar12 = (uint *)(iVar14 + 0x48);
          uVar9 = *puVar12;
          *puVar12 = *puVar12 + local_248;
          piVar8 = (int *)(iVar14 + 0x4c);
          *piVar8 = *piVar8 + local_244 + (uint)CARRY4(uVar9,local_248);
        }
        cVar7 = FUN_008605d0();
        if (cVar7 == '\0') {
          local_23c = 0x18d;
          local_240 = CGoodsPool::vftable;
          local_1f8 = (uint *)0x0;
          local_1f4 = (uint *)0x0;
          local_1f0 = (uint *)0x0;
          local_c._0_1_ = 10;
          _memset(local_238,0,0x40);
          if ((local_1f4 < (uint *)((int)&DAT_0125e448 + 1)) || (&DAT_0125e448 < local_1f8)) {
            if (local_1f4 == local_1f0) {
              uVar9 = (int)local_1f4 - (int)local_1f8 >> 3;
              if (0x1ffffffe < uVar9) goto LAB_00538827;
              if ((uint)((int)local_1f0 - (int)local_1f8 >> 3) < uVar9 + 1) {
                FUN_004237e0();
              }
            }
            if (local_1f4 != (uint *)0x0) {
              *local_1f4 = DAT_0125e448;
              local_1f4[1] = DAT_0125e44c;
            }
          }
          else {
            iVar13 = (int)&DAT_0125e448 - (int)local_1f8 >> 3;
            if (local_1f4 == local_1f0) {
              uVar9 = (int)local_1f4 - (int)local_1f8 >> 3;
              if (0x1ffffffe < uVar9) {
LAB_00538827:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad();
              }
              if ((uint)((int)local_1f0 - (int)local_1f8 >> 3) < uVar9 + 1) {
                FUN_004237e0();
              }
            }
            if (local_1f4 != (uint *)0x0) {
              *local_1f4 = local_1f8[iVar13 * 2];
              local_1f4[1] = local_1f8[iVar13 * 2 + 1];
            }
          }
          puVar15 = local_1f4 + 2;
          local_c._0_1_ = 0xb;
          local_27c = 0;
          iVar13 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
          puVar12 = local_1f8;
          local_1f4 = puVar15;
          if (0 < iVar13) {
            do {
              uVar9 = (uint)*(byte *)(iVar4 + 0x68 + local_27c);
              iVar14 = *(int *)(*(int *)(iVar4 + 0xa8) + 4 + uVar9 * 8);
              local_258 = *(uint *)(*(int *)(iVar4 + 0xa8) + uVar9 * 8);
              if ((-1 < iVar14) && ((0 < iVar14 || (local_258 != 0)))) {
                FUN_00b31c36();
                puVar1 = (undefined4 *)
                         (*(int *)(iVar4 + 0x50) + (uint)*(byte *)(iVar4 + 0x10 + local_27c) * 8);
                local_1dc = puVar1[1];
                local_1d4 = extraout_EDX;
                lVar16 = __allmul(*puVar1,local_1dc);
                local_260 = lVar16 >> 0xf;
                local_250 = local_258;
                local_24c = iVar14;
                if (CONCAT44(iVar14,local_258) < local_260) {
                  puVar10 = &local_250;
                }
                else {
                  puVar10 = (uint *)&local_260;
                }
                uVar9 = *puVar10;
                local_270[1] = puVar10[1];
                bVar2 = local_238[local_27c];
                local_270[0] = uVar9;
                if (bVar2 == 0) {
                  local_238[local_27c] = (byte)((int)puVar15 - (int)puVar12 >> 3);
                  if ((local_270 < local_1f4) && (local_1f8 <= local_270)) {
                    iVar14 = (int)local_270 - (int)local_1f8 >> 3;
                    if (local_1f4 == local_1f0) {
                      uVar9 = (int)local_1f4 - (int)local_1f8 >> 3;
                      if (0x1ffffffe < uVar9) goto LAB_00538827;
                      if ((uint)((int)local_1f0 - (int)local_1f8 >> 3) < uVar9 + 1) {
                        FUN_004237e0();
                      }
                    }
                    if (local_1f4 != (uint *)0x0) {
                      *local_1f4 = local_1f8[iVar14 * 2];
                      uVar9 = local_1f8[iVar14 * 2 + 1];
LAB_005387c3:
                      local_1f4[1] = uVar9;
                    }
                  }
                  else {
                    if (local_1f4 == local_1f0) {
                      uVar11 = (int)local_1f4 - (int)local_1f8 >> 3;
                      if (0x1ffffffe < uVar11) goto LAB_00538827;
                      if ((uint)((int)local_1f0 - (int)local_1f8 >> 3) < uVar11 + 1) {
                        FUN_004237e0();
                      }
                    }
                    if (local_1f4 != (uint *)0x0) {
                      *local_1f4 = uVar9;
                      uVar9 = local_270[1];
                      goto LAB_005387c3;
                    }
                  }
                  puVar15 = local_1f4 + 2;
                  puVar12 = local_1f8;
                  local_1f4 = puVar15;
                }
                else {
                  puVar12[(uint)bVar2 * 2] = uVar9;
                  (puVar12 + (uint)bVar2 * 2)[1] = local_270[1];
                }
              }
              local_27c = local_27c + 1;
            } while (local_27c < iVar13);
          }
          FUN_0047df80();
          local_c._0_1_ = 7;
          piVar8 = local_1e8;
          if (puVar12 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        else {
          uVar11 = *(uint *)(iVar4 + 0xb8);
          puVar12 = (uint *)(param_1 + 0xe78);
          uVar9 = *puVar12;
          *puVar12 = *puVar12 + uVar11;
          *(int *)(param_1 + 0xe7c) =
               *(int *)(param_1 + 0xe7c) + *(int *)(iVar4 + 0xbc) + (uint)CARRY4(uVar9,uVar11);
          if (*(undefined4 **)(iVar13 + 0x54) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar13 + 0x54))();
          }
          *(undefined4 *)(iVar13 + 0x54) = 0;
          piVar8 = local_1e8;
        }
      }
    }
  }
  piVar8 = *(int **)(param_1 + 0xe44);
  while (piVar8 != (int *)0x0) {
    piVar5 = (int *)piVar8[2];
    iVar13 = *(int *)(*piVar8 + 0x60);
    while (iVar4 = iVar13, piVar8 = piVar5, iVar4 != 0) {
      iVar14 = *(int *)(iVar4 + 0x1d0);
      iVar13 = *(int *)(iVar4 + 0x224);
      if (iVar14 != 0) {
        FUN_008604c0(iVar14,&local_260,local_178,local_270[3]);
        if (0 < local_260) {
          puVar12 = (uint *)(param_1 + 0xe78);
          uVar9 = *puVar12;
          *puVar12 = *puVar12 + (uint)local_260;
          *(int *)(param_1 + 0xe7c) =
               *(int *)(param_1 + 0xe7c) + local_260._4_4_ + (uint)CARRY4(uVar9,(uint)local_260);
          iVar6 = *(int *)(param_1 + (DAT_01258738 + 0xd) * 0x10);
          puVar12 = (uint *)(iVar6 + 0x48);
          uVar9 = *puVar12;
          *puVar12 = *puVar12 + (uint)local_260;
          piVar8 = (int *)(iVar6 + 0x4c);
          *piVar8 = *piVar8 + local_260._4_4_ + (uint)CARRY4(uVar9,(uint)local_260);
        }
        cVar7 = FUN_008605d0();
        if (cVar7 == '\0') {
          FUN_0047df80();
        }
        else {
          uVar11 = *(uint *)(iVar14 + 0xb8);
          puVar12 = (uint *)(param_1 + 0xe78);
          uVar9 = *puVar12;
          *puVar12 = *puVar12 + uVar11;
          *(int *)(param_1 + 0xe7c) =
               *(int *)(param_1 + 0xe7c) + *(int *)(iVar14 + 0xbc) + (uint)CARRY4(uVar9,uVar11);
          if (*(undefined4 **)(iVar4 + 0x1d0) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar4 + 0x1d0))();
          }
          *(undefined4 *)(iVar4 + 0x1d0) = 0;
        }
      }
    }
  }
  FUN_0047dbb0();
  _memset((void *)(param_1 + 0x1134),0,0x40);
  if (*(int *)(param_1 + 0x1174) != *(int *)(param_1 + 0x1178)) {
    *(int *)(param_1 + 0x1178) = *(int *)(param_1 + 0x1174);
  }
  uVar9 = *(uint *)(param_1 + 0x1178);
  if ((uVar9 < 0x125e449) || (&DAT_0125e448 < *(undefined4 **)(param_1 + 0x1174))) {
    if (uVar9 == *(uint *)(param_1 + 0x117c)) {
      FUN_00423780();
    }
    puVar12 = *(uint **)(param_1 + 0x1178);
    if (puVar12 == (uint *)0x0) goto LAB_005389fc;
    *puVar12 = DAT_0125e448;
    uVar9 = DAT_0125e44c;
  }
  else {
    iVar13 = (int)&DAT_0125e448 - (int)*(undefined4 **)(param_1 + 0x1174) >> 3;
    if (uVar9 == *(uint *)(param_1 + 0x117c)) {
      FUN_00423780();
    }
    puVar12 = *(uint **)(param_1 + 0x1178);
    if (puVar12 == (uint *)0x0) goto LAB_005389fc;
    iVar4 = *(int *)(param_1 + 0x1174);
    *puVar12 = *(uint *)(iVar4 + iVar13 * 8);
    uVar9 = *(uint *)(iVar4 + 4 + iVar13 * 8);
  }
  puVar12[1] = uVar9;
LAB_005389fc:
  *(int *)(param_1 + 0x1178) = *(int *)(param_1 + 0x1178) + 8;
  FUN_0047dbb0();
  FUN_0047dc20();
  if (iStack_130 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  if (iStack_188 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  if (iStack_80 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  if (iStack_d8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  if (iStack_28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_14;
  return;
}

