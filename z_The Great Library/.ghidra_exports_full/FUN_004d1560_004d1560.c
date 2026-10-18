// FUN_004d1560 @ 004d1560 body=[[004d1560, 004d1822] [004d1826, 004d1853] [004d1857, 004d1887] [004d188b, 004d1b02] [004d1b06, 004d1b13] [004d1b17, 004d1b20] [004d1b24, 004d1b35] [004d1b40, 004d1bd6]]


void FUN_004d1560(int *param_1)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int local_170;
  undefined8 local_168;
  undefined4 local_160;
  int local_154;
  int local_150;
  void *local_14c;
  undefined4 local_148;
  undefined1 *local_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [4];
  uint local_12c;
  undefined4 local_11c;
  uint local_118;
  uint uStack_110;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f4;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **ppuStack_60;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c._0_1_ = 0xff;
  local_c._1_3_ = 0xffffff;
  puStack_10 = &LAB_00baf6cd;
  local_14 = ExceptionList;
  iVar2 = param_1[0x1a];
  if (iVar2 != 0) {
    ExceptionList = &local_14;
    local_168 = __alldiv(0x40000000,0);
    iVar3 = param_1[0x18];
    while (iVar3 != 0) {
      local_154 = 0;
      local_170 = 0;
      iVar9 = *(int *)(iVar3 + 0x224);
      iVar15 = *(int *)(*(int *)(iVar3 + 0x18) + 300);
      uVar10 = *(uint *)(iVar15 + 0x128);
      local_14c = (void *)(((int)*(uint *)(iVar3 + 0x20) >> 0x1f) << 0xf |
                          *(uint *)(iVar3 + 0x20) >> 0x11);
      lVar16 = __allmul(uVar10 << 0xf,((int)uVar10 >> 0x1f) << 0xf | uVar10 >> 0x11);
      FUN_004ee150(iVar3 + 0xe0,iVar15,
                   (uint)(lVar16 >> 0xf) >> 0xf | (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) << 0x11)
      ;
      FUN_004ee300();
      FUN_004ee990(iVar3 + 0xe0,iVar15);
      iVar5 = *(int *)(iVar3 + 0xf4) - *(int *)(iVar3 + 0xf0) >> 4;
      iVar15 = 0;
      local_140 = (undefined1 *)0x0;
      if (1 < iVar5) {
        piVar11 = (int *)(*(int *)(iVar3 + 0xf0) + 0x1c);
        iVar14 = (iVar5 - 2U >> 1) + 1;
        iVar15 = iVar14 * 2;
        do {
          local_154 = local_154 + piVar11[-4];
          local_170 = local_170 + *piVar11;
          piVar11 = piVar11 + 8;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      iVar14 = 0;
      if (iVar15 < iVar5) {
        iVar14 = *(int *)(*(int *)(iVar3 + 0xf0) + 0xc + iVar15 * 0x10);
      }
      iVar3 = iVar9;
      if (iVar14 + local_154 + local_170 < 1) {
        local_118 = 0xf;
        local_11c = 0;
        local_12c = local_12c & 0xffffff00;
        FUN_00409350();
        local_c = 0;
        puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x20))();
        puStack_10._0_1_ = 1;
        puVar7 = (undefined4 *)FUN_004f3800();
        puStack_10._0_1_ = 2;
        uVar8 = FUN_004015b0(auStack_130,0x3c9);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
        FUN_00987d50(uVar8,"No workers for ",0xf);
        if (0xf < (uint)puVar7[5]) {
          puVar7 = (undefined4 *)*puVar7;
        }
        uVar8 = FUN_00418e30(uVar8,puVar7);
        uVar8 = FUN_00418e30(uVar8,&DAT_00df12c8);
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        piVar11 = (int *)FUN_00418e30(uVar8,puVar6);
        FUN_00408be0(piVar11);
        bVar4 = false;
        if ((*(byte *)(*(int *)(*piVar11 + 4) + 0xc + (int)piVar11) & 6) == 0) {
          iVar9 = (**(code **)(**(int **)(*(int *)(*piVar11 + 4) + 0x38 + (int)piVar11) + 0x34))();
          if (iVar9 == -1) {
            bVar4 = true;
          }
        }
        if (bVar4) {
          FUN_00401120();
        }
        local_c = CONCAT31(local_c._1_3_,2);
        FUN_00987ac0();
        ppuStack_60 = std::ios_base::vftable;
        FUN_00aad52d();
        if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_fc = 0xf;
        uStack_100 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c._0_1_ = 0xff;
        local_c._1_3_ = 0xffffff;
        uStack_e0 = 0xf;
        uStack_e4 = 0;
        local_f4 = local_f4 & 0xffffff00;
        if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_118 = 0xf;
        local_11c = 0;
        local_12c = local_12c & 0xffffff00;
      }
    }
    piVar11 = (int *)0x0;
    if (1 < iVar2) {
      local_168._0_4_ = (int *)0x0;
      local_168._4_4_ = 0;
      local_160 = 0;
      local_150 = 0;
      local_14c = (void *)0x0;
      local_148 = 0;
      local_c._0_1_ = 5;
      local_c._1_3_ = 0;
      iVar2 = param_1[0x18];
      iVar3 = local_150;
      while (iVar9 = iVar2, local_150 = iVar3, iVar9 != 0) {
        iVar2 = *(int *)(iVar9 + 0x224);
        if ((local_168._4_4_ - (int)piVar11 & 0xfffffffcU) == 0) {
          if (*(int *)(iVar9 + 0x140) - *(int *)(iVar9 + 0x13c) >> 2 != 0) {
            FUN_0043cb20(&local_168);
            piVar11 = (int *)local_168;
          }
          uVar10 = *(int *)(iVar9 + 0x140) - *(int *)(iVar9 + 0x13c) >> 2;
          uVar12 = (int)local_14c - iVar3 >> 2;
          if (uVar12 < uVar10) {
            FUN_0043cb20(&local_150);
          }
          else if ((uVar10 < uVar12) && (_Dst = (void *)(iVar3 + uVar10 * 4), _Dst != local_14c)) {
            FID_conflict__memcpy(_Dst,local_14c,0);
            local_14c = _Dst;
          }
        }
        iVar3 = *(int *)(*(int *)(iVar9 + 0x18) + 300);
        iVar5 = 0;
        iVar15 = *(int *)(iVar3 + 0x11c) - *(int *)(iVar3 + 0x118) >> 3;
        if (0 < iVar15) {
          do {
            piVar11 = (int *)(local_150 +
                             *(int *)(*(int *)(*(int *)(iVar3 + 0x118) + iVar5 * 8) + 0x28) * 4);
            *piVar11 = *piVar11 + 1;
            iVar5 = iVar5 + 1;
            piVar11 = (int *)local_168;
          } while (iVar5 < iVar15);
        }
        iVar15 = 0;
        iVar5 = *(int *)(iVar9 + 0x140) - *(int *)(iVar9 + 0x13c) >> 2;
        iVar3 = local_150;
        if (0 < iVar5) {
          do {
            piVar11[iVar15] = piVar11[iVar15] + *(int *)(*(int *)(iVar9 + 0x13c) + iVar15 * 4);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar5);
        }
      }
      local_170 = local_168._4_4_ - (int)piVar11 >> 2;
      if (0 < local_170) {
        iStack_13c = 0;
        uStack_138 = 0;
        uStack_134 = 0;
        local_c._0_1_ = 6;
        if (local_170 != 0) {
          FUN_0043cb20(&iStack_13c);
        }
        if (0 < local_170) {
          piVar13 = piVar11;
          do {
            iVar2 = *(int *)((iVar3 - (int)piVar11) + (int)piVar13);
            if ((0 < iVar2) && (0 < *piVar13)) {
              *(int *)((iStack_13c - (int)piVar11) + (int)piVar13) = *piVar13 / iVar2;
            }
            piVar13 = piVar13 + 1;
            local_170 = local_170 + -1;
          } while (local_170 != 0);
        }
        iVar2 = param_1[0x18];
        while (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + 0x224);
          FUN_004ee4a0();
        }
        iVar2 = param_1[0x18];
        while (iVar2 != 0) {
          uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x18) + 300);
          iVar3 = *(int *)(iVar2 + 0x224);
          FUN_004edfd0();
          local_140 = &stack0xfffffe78;
          FUN_004ee990(iVar2 + 0xe0,uVar8);
          iVar2 = iVar3;
          piVar11 = (int *)local_168;
        }
        if (iStack_13c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      if (local_150 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (piVar11 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    iVar2 = param_1[0x18];
    while (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x224);
      FUN_0047e3e0();
      lVar16 = __allmul(local_168);
      lVar16 = __allmul(lVar16 >> 0xf);
      uVar12 = (uint)(lVar16 >> 0xf);
      puVar1 = (uint *)(iVar2 + 0x210);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 + uVar12;
      *(int *)(iVar2 + 0x214) =
           *(int *)(iVar2 + 0x214) + (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) +
           (uint)CARRY4(uVar10,uVar12);
      *(int *)(iVar2 + 0x218) = *(int *)(iVar2 + 0x218) + 0xe;
      iVar2 = iVar3;
    }
  }
  ExceptionList = local_14;
  return;
}

