// FUN_004b9cc0 @ 004b9cc0 body=[[004b9cc0, 004b9e27] [004b9e2b, 004b9e5c] [004b9e60, 004b9f78] [004b9f80, 004ba1e2] [004ba1e6, 004ba204] [004ba208, 004ba3e2]]


/* WARNING: Removing unreachable block (ram,0x004b9d30) */
/* WARNING: Removing unreachable block (ram,0x004b9d44) */
/* WARNING: Removing unreachable block (ram,0x004b9eb8) */

int * FUN_004b9cc0(int param_1,int param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 local_cc;
  undefined1 auStack_c4 [8];
  undefined1 local_bc [8];
  undefined8 *puStack_b4;
  undefined1 local_a4 [8];
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 *local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  int local_54;
  longlong local_50;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  int local_2c;
  int *local_28;
  char local_21;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b467ae;
  local_10 = ExceptionList;
  local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x128));
  local_3c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 300) * 4);
  iVar8 = *(int *)(local_3c + 0x844);
  piVar9 = (int *)(param_1 + 0x138);
  ExceptionList = &local_10;
  local_6c = iVar8;
  local_28 = piVar9;
  if (iVar8 != *(int *)(param_1 + 0x13c) - *piVar9 >> 3) {
    ExceptionList = &local_10;
    if (*piVar9 != *(int *)(param_1 + 0x13c)) {
      ExceptionList = &local_10;
      *(int *)(param_1 + 0x13c) = *piVar9;
    }
    if (0 < iVar8) {
      do {
        local_38 = 0;
        puStack_b4 = (undefined8 *)0x4b9d61;
        FUN_00423920();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  iVar8 = *piVar9;
  iVar5 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x13c) - iVar8 & 0xfffffff8U)) {
    do {
      *(undefined4 *)(iVar8 + iVar5 * 8) = 0;
      *(undefined4 *)(iVar8 + 4 + iVar5 * 8) = 0;
      iVar8 = *piVar9;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x13c) - iVar8 >> 3);
  }
  local_74 = *(int *)(DAT_01258a48 + 0x2c) - *(int *)(DAT_01258a48 + 0x28) >> 2;
  auStack_c4._4_4_ = *(uint *)(*(int *)(param_1 + 0x9c) + 0x228);
  local_bc._0_4_ =
       (((int)auStack_c4._4_4_ >> 0x1f) << 0xf | (uint)auStack_c4._4_4_ >> 0x11) << 0xf |
       (auStack_c4._4_4_ & 0x1ffff) >> 2;
  puStack_b4 = (undefined8 *)0x0;
  local_bc._4_4_ = 0x1f40000;
  auStack_c4._4_4_ = auStack_c4._4_4_ << 0x1e;
  auStack_c4._0_4_ = 0x4b9dc9;
  local_50 = __alldiv();
  local_50 = local_50 + 0x8000;
  if (DAT_0131bb34 == 0) {
    puStack_b4 = (undefined8 *)0x188;
    local_bc._4_4_ = 0x4b9de9;
    local_2c = FUN_00aae9af();
    local_8 = 0;
    if (local_2c == 0) {
      iVar8 = 0;
    }
    else {
      puStack_b4 = (undefined8 *)0x4b9dfd;
      iVar8 = FUN_0041a160();
    }
    iVar5 = DAT_0131bb34;
    local_8 = 1;
    local_2c = 0;
    if ((iVar8 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      puStack_b4 = (undefined8 *)DAT_0131bb34;
      local_bc._4_4_ = 0x4b9e22;
      FUN_0096dd80();
      puStack_b4 = (undefined8 *)iVar5;
                    /* WARNING: Subroutine does not return */
      local_bc._4_4_ = &UNK_004b9e28;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    DAT_0131bb34 = iVar8;
  }
  local_40 = 0;
  iVar8 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  if (0 < iVar8) {
    local_44 = 0;
    local_2c = iVar8;
    do {
      if ((param_2 == 0) || (*(char *)(local_40 + param_2) != '\0')) {
        local_bc._4_4_ = *(int *)(*(int *)(param_1 + 0x194) + local_44);
        while (local_bc._4_4_ != 0) {
          iVar5 = *(int *)(local_bc._4_4_ + 0x27c);
          puStack_b4 = &local_60;
          local_bc._0_4_ = 0x4b9ea8;
          local_78 = iVar5;
          local_54 = local_bc._4_4_;
          FUN_00963d10();
          local_bc._4_4_ = iVar5;
          if (0 < local_60) {
            auStack_c4._0_4_ = 0x4b9ecf;
            unique0x1000075d = local_50;
            unique0x10000765 = local_60;
            uVar11 = __allmul();
            local_bc._0_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
            puStack_b4 = (undefined8 *)0x0;
            local_bc._4_4_ = 0x13880000;
            auStack_c4._4_4_ = (uint)uVar11 & 0xffff8000;
            auStack_c4._0_4_ = 0x4b9ee2;
            lVar12 = __alldiv();
            puStack_b4 = (undefined8 *)local_a4;
            local_bc._4_4_ = 0x4b9ef8;
            local_60 = lVar12;
            FUN_004be4f0();
            local_8 = 2;
            local_48 = *(int **)(local_3c + 0x83c);
            if (local_48 != (int *)0x0) {
              local_68 = 0;
              do {
                piVar9 = local_48 + 2;
                local_64 = *local_48;
                local_7c = *(int *)(local_64 + 0x54);
                local_38 = *(undefined8 *)
                            (*(int *)(local_54 + 0x7c) + *(int *)(local_7c + 0x28) * 8);
                iVar8 = 0;
                local_20 = 0;
                local_48 = (int *)*piVar9;
                if (local_74 < 1) {
LAB_004ba024:
                  local_20 = 0;
                  lVar12 = 0;
                }
                else {
                  local_21 = *(char *)(local_54 + 0x4c);
                  lVar12 = 0;
                  local_70 = (undefined1 *)
                             (*(int *)(local_64 + 0x5c) - *(int *)(local_64 + 0x58) >> 2);
                  do {
                    if (iVar8 < (int)local_70) {
                      iVar5 = *(int *)(*(int *)(local_64 + 0x58) + iVar8 * 4);
                    }
                    else {
                      iVar5 = 0;
                    }
                    if (local_21 == '\0') {
                      iVar6 = *(int *)(local_3c + 0x84c);
                      if (iVar8 < *(int *)(iVar6 + 0x5c) - *(int *)(iVar6 + 0x58) >> 2) {
                        iVar6 = *(int *)(*(int *)(iVar6 + 0x58) + iVar8 * 4);
                      }
                      else {
                        iVar6 = 0;
                      }
                      if (((*(char *)(iVar5 + 0x134) == '\x01') &&
                          (*(char *)(iVar6 + 0x134) == '\0')) ||
                         ((*(char *)(iVar5 + 0x13c) == '\x01' &&
                          (*(char *)(iVar6 + 0x144) == '\x01')))) goto LAB_004ba024;
                    }
                    auStack_c4._4_4_ =
                         *(uint *)(*(int *)(local_54 + 0xa4) + *(int *)(iVar5 + 0x50) * 8);
                    local_bc._0_4_ =
                         *(int *)(*(int *)(local_54 + 0xa4) + *(int *)(iVar5 + 0x50) * 8 + 4) << 0xf
                         | (uint)auStack_c4._4_4_ >> 0x11;
                    puStack_b4 = (undefined8 *)0x0;
                    local_bc._4_4_ = 0x320000;
                    auStack_c4._4_4_ = auStack_c4._4_4_ << 0xf;
                    auStack_c4._0_4_ = 0x4ba008;
                    lVar13 = __alldiv();
                    lVar12 = lVar13 + lVar12;
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < local_74);
                }
                auStack_c4._4_4_ = *(undefined4 *)(local_54 + 0x118);
                local_bc._0_4_ = *(undefined4 *)(local_54 + 0x11c);
                puStack_b4 = (undefined8 *)local_38._4_4_;
                local_bc._4_4_ = (undefined4)local_38;
                auStack_c4._0_4_ = 0x4ba045;
                uVar11 = __allmul();
                local_bc._0_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
                puStack_b4 = (undefined8 *)0x0;
                local_bc._4_4_ = 0xa0000;
                auStack_c4._4_4_ = (uint)uVar11 & 0xffff8000;
                auStack_c4._0_4_ = 0x4ba058;
                lVar13 = __alldiv();
                lVar12 = lVar12 + lVar13;
                if (*(int *)(local_3c + 0x84c) == local_64) {
                  auStack_c4._4_4_ =
                       *(int *)(*(int *)(param_1 + 0x9c) + 0x100) +
                       *(int *)(*(int *)(local_3c + 0xa60) + 0xf8);
                  local_bc._0_4_ =
                       (((int)auStack_c4._4_4_ >> 0x1f) << 0xf | (uint)auStack_c4._4_4_ >> 0x11) <<
                       0xf | (auStack_c4._4_4_ & 0x1ffff) >> 2;
                  puStack_b4 = (undefined8 *)0x0;
                  local_bc._4_4_ = 0x1f40000;
                  auStack_c4._4_4_ = auStack_c4._4_4_ * 0x40000000;
                  auStack_c4._0_4_ = 0x4ba0a4;
                  join_0x00000008_0x00000000_ = __alldiv();
                  unique0x100003d4 = join_0x00000008_0x00000000_ + 0x8000;
                  auStack_c4._0_4_ = 0x4ba0b5;
                  unique0x1000073d = lVar12;
                  lVar12 = __allmul();
                  lVar12 = lVar12 >> 0xf;
                }
                local_70 = (undefined1 *)&local_cc;
                local_bc._4_4_ = 0xf;
                local_bc._0_4_ = 0;
                local_cc._0_4_ = (uint)local_cc & 0xffffff00;
                FUN_00408ed0(local_7c + 0xc,0,0xffffffff);
                iVar8 = FUN_004bd2d0(param_1);
                if (iVar8 != 0) {
                  uVar7 = *(uint *)(iVar8 + 8);
                  local_bc._0_4_ = *(uint *)(iVar8 + 0xc);
                  if ((0x7fffffff < (uint)local_bc._0_4_) &&
                     (((int)local_bc._0_4_ < -1 || (uVar7 < 0xffff8000)))) {
                    uVar7 = 0xffff8000;
                    local_bc._0_4_ = 0xffffffff;
                  }
                  auStack_c4._4_4_ = uVar7 + 0x8000;
                  local_bc._0_4_ = local_bc._0_4_ + (uint)(0xffff7fff < uVar7);
                  auStack_c4._0_4_ = 0x4ba125;
                  unique0x10000745 = lVar12;
                  lVar12 = __allmul();
                  lVar12 = lVar12 >> 0xf;
                }
                if (((int)((ulonglong)lVar12 >> 0x20) < 1) && (lVar12 < 0)) {
                  local_20 = 0;
                  lVar12 = 0;
                }
                iVar8 = local_68 + 8;
                *(int *)(iVar8 + local_9c) = (int)lVar12;
                *(int *)(local_68 + 0xc + local_9c) = (int)((ulonglong)lVar12 >> 0x20);
                local_68 = iVar8;
              } while (local_48 != (int *)0x0);
            }
            puStack_b4 = (undefined8 *)local_a4;
            local_bc._4_4_ = 0x4ba175;
            FUN_004be780();
            piVar9 = local_28;
            iVar8 = *local_28;
            iVar5 = 0;
            if (0 < (int)(local_28[1] - iVar8 & 0xfffffff8U)) {
              do {
                local_bc._0_4_ = *(int *)(local_9c + 0xc + iVar5 * 8);
                auStack_c4._4_4_ = *(uint *)(local_9c + 8 + iVar5 * 8);
                auStack_c4._0_4_ = 0x4ba1ad;
                unique0x10000755 = local_60;
                lVar12 = __allmul();
                uVar3 = (uint)(lVar12 >> 0xf);
                puVar4 = (uint *)(iVar8 + iVar5 * 8);
                uVar7 = *puVar4;
                *puVar4 = *puVar4 + uVar3;
                piVar1 = (int *)(iVar8 + 4 + iVar5 * 8);
                *piVar1 = *piVar1 + (int)((ulonglong)(lVar12 >> 0xf) >> 0x20) +
                          (uint)CARRY4(uVar7,uVar3);
                iVar8 = *piVar9;
                iVar5 = iVar5 + 1;
              } while (iVar5 < piVar9[1] - iVar8 >> 3);
            }
            local_8 = 0xffffffff;
            if (local_8c != 0) {
              puStack_b4 = (undefined8 *)local_8c;
                    /* WARNING: Subroutine does not return */
              local_bc._4_4_ = &UNK_004ba1e3;
              FUN_00aae91b();
            }
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            if (local_9c != 0) {
              puStack_b4 = (undefined8 *)local_9c;
                    /* WARNING: Subroutine does not return */
              local_bc._4_4_ = &UNK_004ba205;
              FUN_00aae91b();
            }
            local_9c = 0;
            local_98 = 0;
            local_94 = 0;
            local_bc._4_4_ = local_78;
            iVar8 = local_2c;
            piVar9 = local_28;
          }
        }
      }
      local_44 = local_44 + 0x10;
      local_40 = local_40 + 1;
    } while (local_40 < iVar8);
  }
  if (param_3 != '\0') {
    puVar4 = (uint *)*piVar9;
    iVar8 = piVar9[1] - (int)puVar4 >> 3;
    local_20._0_4_ = 0;
    local_20._4_4_ = 0;
    uVar7 = 0xfffb0000;
    local_38._4_4_ = 0xffffffff;
    param_2 = -1;
    _param_3 = 0;
    if (0 < iVar8) {
      local_2c = 0;
      do {
        uVar3 = *puVar4;
        bVar10 = CARRY4((uint)local_20,uVar3);
        local_20._0_4_ = (uint)local_20 + uVar3;
        uVar2 = puVar4[1];
        local_20._4_4_ = local_20._4_4_ + uVar2 + (uint)bVar10;
        if (((int)local_38._4_4_ <= (int)uVar2) &&
           (((int)local_38._4_4_ < (int)uVar2 || (uVar7 < uVar3)))) {
          uVar7 = *puVar4;
          local_38._4_4_ = puVar4[1];
          param_2 = _param_3;
        }
        _param_3 = _param_3 + 1;
        puVar4 = puVar4 + 2;
      } while (_param_3 < iVar8);
      if (((-1 < param_2) && (-1 < local_20._4_4_)) &&
         ((0 < local_20._4_4_ || ((uint)local_20 != 0)))) {
        auStack_c4._4_4_ = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x80);
        local_bc._0_4_ =
             (((int)auStack_c4._4_4_ >> 0x1f) << 0xf | (uint)auStack_c4._4_4_ >> 0x11) << 0xf |
             (auStack_c4._4_4_ & 0x1ffff) >> 2;
        puStack_b4 = (undefined8 *)0x0;
        local_bc._4_4_ = 0x1f40000;
        auStack_c4._4_4_ = auStack_c4._4_4_ << 0x1e;
        auStack_c4._0_4_ = 0x4ba301;
        uVar11 = __alldiv();
        auStack_c4._4_4_ = *(uint *)(*(int *)(param_1 + 0x9c) + 0x2d0);
        local_bc._0_4_ =
             (((int)auStack_c4._4_4_ >> 0x1f) << 0xf | (uint)auStack_c4._4_4_ >> 0x11) << 0xf |
             (auStack_c4._4_4_ & 0x1ffff) >> 2;
        puStack_b4 = (undefined8 *)0x0;
        local_bc._4_4_ = 0x1f40000;
        auStack_c4._4_4_ = auStack_c4._4_4_ << 0x1e;
        auStack_c4._0_4_ = 0x4ba331;
        lVar12 = __alldiv();
        local_50 = lVar12 + 0x8000;
        local_bc._0_4_ = local_38._4_4_ << 0xf | uVar7 >> 0x11;
        puStack_b4 = (undefined8 *)local_20._4_4_;
        local_bc._4_4_ = (uint)local_20;
        auStack_c4._4_4_ = uVar7 << 0xf;
        auStack_c4._0_4_ = 0x4ba358;
        join_0x00000008_0x00000000_ = __alldiv();
        auStack_c4._0_4_ = 0x4ba367;
        unique0x1000074d = local_50;
        local_cc = __allmul();
        puStack_b4 = (undefined8 *)0x0;
        local_cc = local_cc >> 0xf;
        auStack_c4 = (undefined1  [8])uVar11;
        lVar12 = __allmul();
        local_bc = (undefined1  [8])(lVar12 >> 0xf);
        piVar9 = *(int **)(local_3c + 0x83c);
        for (; param_2 != 0; param_2 = param_2 + -1) {
          piVar9 = (int *)piVar9[2];
        }
        auStack_c4._4_4_ = *(int *)(*piVar9 + 0x54) + 0xc;
        auStack_c4._0_4_ = param_1;
        local_cc._4_4_ = 0x4ba3b8;
        FUN_004bd400();
      }
      ExceptionList = local_10;
      return local_28;
    }
  }
  ExceptionList = local_10;
  return piVar9;
}

