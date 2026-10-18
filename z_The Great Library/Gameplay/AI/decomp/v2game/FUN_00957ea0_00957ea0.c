// FUN_00957ea0 @ 00957ea0 body=[[00957ea0, 00958358] [00958360, 00958dee]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00958b07) */
/* WARNING: Removing unreachable block (ram,0x0095858b) */
/* WARNING: Removing unreachable block (ram,0x00958cd4) */

void FUN_00957ea0(int param_1,int param_2)

{
  ulonglong uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int in_ECX;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined1 local_94 [8];
  undefined4 local_8c;
  undefined4 local_88;
  int local_70;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00bab340;
  local_10 = ExceptionList;
  local_4c._0_4_ = *(uint *)(*(int *)(in_ECX + 100) + 0x128);
  local_20 = *(int **)(DAT_012587e4[1] + *(int *)(*(int *)(in_ECX + 100) + 300) * 4);
  ExceptionList = &local_10;
  if (*(char *)(*(int *)(in_ECX + 0x68) + 0x3d9) == '\0') {
    uStack_ac._4_4_ = (int **)0x957ef6;
    ExceptionList = &local_10;
    FUN_00967a80();
  }
  uStack_ac._4_4_ = (int **)0x957f01;
  iVar4 = FUN_00967f50();
  iVar5 = DAT_012586dc;
  if (iVar4 == 0) {
    iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x124);
    if ((iVar4 <= *(int *)(in_ECX + 0x124)) &&
       ((iVar4 < *(int *)(in_ECX + 0x124) ||
        (*(uint *)(*(int *)(DAT_012586dc + 0x50) + 0x120) < *(uint *)(in_ECX + 0x120))))) {
      if (*(int *)(in_ECX + 0x274) == 0) {
        uStack_ac._4_4_ = (int **)0x0;
        local_4c._0_4_ = 0x2d2d2d;
        uStack_ac._0_4_ = 0x2d2d2d;
        local_4c._4_4_ = (int *)local_c8;
        local_b4 = CONCAT44(local_b4._4_4_,0xf);
        local_b8 = 0;
        local_c8[0] = 0;
        FUN_00409350(&DAT_00ded94d,0);
        iVar5 = FUN_0068bc90(DAT_012588e8,in_ECX,0);
        if (iVar5 != 0) {
          local_b4 = CONCAT44(0x957f7e,(undefined4)local_b4);
          uStack_ac._0_4_ = iVar5;
          FUN_004e7c00();
        }
      }
      goto LAB_00957fb6;
    }
  }
  uStack_ac._4_4_ = (int **)0x957f85;
  iVar4 = FUN_00967f50();
  if (iVar4 != 0) {
    iVar4 = *(int *)(*(int *)(iVar5 + 0x50) + 0x124);
    if ((*(int *)(in_ECX + 0x124) <= iVar4) &&
       ((*(int *)(in_ECX + 0x124) < iVar4 ||
        (*(uint *)(in_ECX + 0x120) < *(uint *)(*(int *)(iVar5 + 0x50) + 0x120))))) {
      uStack_ac._4_4_ = (int **)0x957fb1;
      FUN_00967f10();
      uStack_ac._4_4_ = (int **)0x957fb6;
      FUN_004e7db0();
    }
  }
LAB_00957fb6:
  if (*(char *)(*(int *)(in_ECX + 0x68) + 0x3d9) == '\0') {
    uStack_ac._4_4_ = *(int ***)(in_ECX + 0x1a0);
    if ((*(int *)(*(int *)(in_ECX + 0x68) + 0x3c8) < (int)uStack_ac._4_4_) ||
       (*(int *)(in_ECX + 0x58) <= (int)uStack_ac._4_4_)) {
      local_b4 = CONCAT44(local_20,0x957fe4);
      uStack_ac._0_4_ = in_ECX;
      FUN_00534810();
      *(undefined4 *)(in_ECX + 0x1a0) = 0;
    }
    if (0 < *(int *)(in_ECX + 0x58)) {
      uStack_ac._4_4_ = *(int ***)(in_ECX + 0x1a4);
      if ((*(int *)(*(int *)(in_ECX + 0x68) + 0x3c8) < (int)uStack_ac._4_4_) ||
         (*(int *)(in_ECX + 0x58) <= (int)uStack_ac._4_4_)) {
        local_b4 = CONCAT44(local_20,0x958019);
        uStack_ac._0_4_ = in_ECX;
        FUN_00534930();
        *(undefined4 *)(in_ECX + 0x1a4) = 0;
      }
      iVar5 = DAT_012588e8;
      if (0 < *(int *)(in_ECX + 0x58)) {
        if ((*(int *)(*(int *)(in_ECX + 0x68) + 0x3c8) < *(int *)(in_ECX + 0x1a8)) ||
           (*(int *)(in_ECX + 0x58) <= *(int *)(in_ECX + 0x1a8))) {
          uVar12 = *DAT_012587e4;
          uStack_ac._4_4_ = (int **)0x95805d;
          iVar4 = -(uVar12 * 4 + 8);
          piVar10 = (int *)(&stack0xffffff60 + iVar4);
          local_4c._4_4_ = piVar10 + uVar12;
          local_44._4_4_ = uVar12;
          *local_4c._4_4_ = -0x5eef3582;
          iVar6 = 0;
          local_30 = piVar10;
          if (0 < (int)uVar12) {
            do {
              piVar10[iVar6] = *(int *)(*(int *)(DAT_012588e8 + 0xadc) + iVar6 * 4);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar12);
          }
          *(undefined4 *)((int)&uStack_ac + iVar4 + 4) = 0x9580a2;
          FUN_008a88d0();
          local_1c = 0;
          if (0 < (int)uVar12) {
            do {
              iVar4 = local_30[local_1c];
              if (((int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU) < 1) ||
                 (*(int *)(iVar4 + 0x20) == local_20[8])) {
LAB_0095829b:
                *(undefined4 *)(iVar4 + 0x1438) = 0xffffd8f0;
              }
              else {
                if ((char)local_20[0x4b4] == '\0') {
                  if (*(char *)(iVar4 + 0x12d0) == '\0') goto LAB_00958110;
                  goto LAB_0095829b;
                }
                if (*(char *)(iVar4 + 0x12d0) == '\0') goto LAB_0095829b;
LAB_00958110:
                if ((*(int *)(*(int *)(*(int *)(iVar5 + 0xacc) + *(int *)(iVar4 + 0xbe4) * 4) +
                             0x16c) ==
                     *(int *)(*(int *)(*(int *)(iVar5 + 0xacc) + local_20[0x2f9] * 4) + 0x16c)) &&
                   (local_3c._0_4_ = *(uint *)(iVar4 + 0x1c),
                   *(char *)(*(int *)(iVar4 + 0x20) + local_20[0x342]) == '\0')) goto LAB_0095829b;
                local_8c = *(undefined4 *)(iVar4 + 0x1c);
                local_88 = *(undefined4 *)(iVar4 + 0x20);
                *(int *)(local_70 + 0x14) = in_ECX;
                iVar5 = *(int *)(in_ECX + 0x68);
                local_2c = *(int *)(iVar5 + 0x98);
                local_28 = iVar5 + 0x90;
                if ((*(int *)(iVar5 + 0xa0) - *(int *)(iVar5 + 0x9c) & 0xfffffffcU) != 0) {
                  local_18 = 0;
                  local_3c._4_4_ = *(int *)(iVar5 + 0xa0) - *(int *)(iVar5 + 0x9c) >> 2;
                  if (0 < (int)local_3c._4_4_) {
                    do {
                      iVar5 = *(int *)(*(int *)(local_28 + 0xc) + local_18 * 4);
                      local_24 = 0;
                      iVar4 = *(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8) >> 2;
                      if (0 < iVar4) {
                        do {
                          uStack_ac._4_4_ = (int **)local_94;
                          uStack_ac._0_4_ = 0x9581e7;
                          cVar3 = (**(code **)(**(int **)(*(int *)(iVar5 + 8) + local_24 * 4) + 0x18
                                              ))();
                          if (cVar3 == '\0') goto LAB_0095821d;
                          local_24 = local_24 + 1;
                        } while (local_24 < iVar4);
                      }
                      local_b4 = (longlong)
                                 *(int *)(*(int *)(*(int *)(local_28 + 0xc) + local_18 * 4) + 0x20)
                                 * (longlong)local_2c;
                      uStack_ac._4_4_ = (int **)0x0;
                      uStack_ac._0_4_ = 1000;
                      local_b8 = 0x958216;
                      local_2c = __alldiv();
                      if (local_2c < 1) break;
LAB_0095821d:
                      local_18 = local_18 + 1;
                    } while ((int)local_18 < (int)local_3c._4_4_);
                  }
                }
                uStack_ac._4_4_ = (int **)0x41280000;
                uStack_ac._0_4_ = 0x95823c;
                FUN_00401000();
                uStack_ac._4_4_ = (int **)0x958244;
                iVar4 = FUN_00b31c00();
                iVar5 = local_2c;
                if (local_2c <= iVar4) {
                  iVar5 = iVar4;
                }
                iVar4 = local_30[local_1c];
                local_b4 = (longlong)(*(int *)(*(int *)(iVar4 + 0xa60) + 0x2d8) + 1000) *
                           (longlong)iVar5;
                uStack_ac._4_4_ = (int **)0x0;
                uStack_ac._0_4_ = 1000;
                local_b8 = 0x958276;
                iVar5 = __alldiv();
                uStack_ac._4_4_ = (int **)0x0;
                uStack_ac._0_4_ = 100000;
                local_b4 = (longlong)iVar5;
                local_b8 = 0x958285;
                local_b4 = __allmul();
                uStack_ac._4_4_ = (int **)0x0;
                uStack_ac._0_4_ = 1000;
                local_b8 = 0x958293;
                uVar7 = __alldiv();
                *(undefined4 *)(iVar4 + 0x1438) = uVar7;
              }
              local_1c = local_1c + 1;
              iVar5 = DAT_012588e8;
            } while (local_1c < (int)local_44._4_4_);
          }
          piVar10 = local_30;
          local_44._4_4_ = local_44._4_4_ & 0xffffff00;
          uStack_ac._4_4_ = (int **)local_44._4_4_;
          uStack_ac._0_4_ = (int)local_4c._4_4_ - (int)local_30 >> 2;
          local_b4 = CONCAT44(local_4c._4_4_,local_30);
          local_b8 = 0x9582d2;
          FUN_00968250();
          iVar5 = *(int *)(*piVar10 + 0x1438) / 1000;
          iVar4 = 0;
          if (0 < iVar5) {
            iVar4 = iVar5;
          }
          iVar5 = *(int *)(piVar10[1] + 0x1438) / 1000;
          if (0 < iVar5) {
            iVar4 = iVar4 + iVar5;
          }
          iVar5 = *(int *)(piVar10[2] + 0x1438) / 1000;
          if (0 < iVar5) {
            iVar4 = iVar4 + iVar5;
          }
          if (0 < iVar4) {
            iVar4 = *(int *)(param_2 + ((*(int *)(in_ECX + 0xc) + 0x3fcU) % 1000) * 4) % iVar4;
            iVar5 = 0;
            do {
              iVar6 = (int)((ulonglong)((longlong)*(int *)(piVar10[iVar5] + 0x1438) * -0x10624dd3)
                           >> 0x20);
              iVar4 = iVar4 + ((iVar6 >> 6) - (iVar6 >> 0x1f));
              if (iVar4 < 1) {
                uStack_ac._4_4_ = *(int ***)(in_ECX + 0x1a8);
                local_b4 = CONCAT44(piVar10[iVar5],0x958399);
                FUN_00534810();
                *(undefined4 *)(in_ECX + 0x1a8) = 0;
                break;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 3);
          }
        }
        if (0 < *(int *)(in_ECX + 0x58)) {
          if ((*(int *)(*(int *)(in_ECX + 0x68) + 0x3c8) < *(int *)(in_ECX + 400)) ||
             (*(int *)(in_ECX + 0x58) <= *(int *)(in_ECX + 400))) {
            uStack_ac._4_4_ = (int **)param_1;
            *(int *)(param_1 + 0x14) = in_ECX;
            local_b4 = CONCAT44(0x9583d4,(undefined4)local_b4);
            local_30 = (int *)FUN_0095b4e0();
            uStack_ac._4_4_ = (int **)0x9583e0;
            cVar3 = (**(code **)(*local_30 + 0x20))();
            if (cVar3 == '\0') {
              *(undefined4 *)(in_ECX + 400) = 0;
              ExceptionList = local_10;
              return;
            }
            uVar12 = *(uint *)(in_ECX + 0x58);
            local_18 = uVar12;
            if ((int)uVar12 < *(int *)(in_ECX + 400)) {
              *(uint *)(in_ECX + 400) = uVar12;
              if (*(char *)(*(int *)(in_ECX + 0x68) + 0x40) == '\0') {
                *(undefined4 *)(in_ECX + 0x60) = 0;
              }
              else {
                iVar5 = *(int *)(in_ECX + 0x60);
                if (0 < iVar5) {
                  iVar4 = *(int *)(*(int *)(in_ECX + 100) + 0x58);
                  local_2c = iVar5;
                  if (DAT_01258728 == (int *)0x0) {
                    uStack_ac._4_4_ = (int **)0x14;
                    uStack_ac._0_4_ = 0x958443;
                    DAT_01258728 = (int *)FUN_00aae9af();
                    if (DAT_01258728 == (int *)0x0) {
                      DAT_01258728 = (int *)0x0;
                    }
                    else {
                      *DAT_01258728 = 0;
                      DAT_01258728[1] = 0;
                      DAT_01258728[2] = 0;
                      *(undefined1 *)(DAT_01258728 + 4) = 0;
                    }
                  }
                  uStack_ac._4_4_ = (int **)&local_2c;
                  uStack_ac._0_4_ = iVar4 * 0xb0 + 0x10 + *DAT_01258728;
                  local_b4 = CONCAT44(0x958478,(undefined4)local_b4);
                  FUN_004ee550();
                  uStack_ac._4_4_ = (int **)&local_2c;
                  local_b4 = CONCAT44(0x95848b,(undefined4)local_b4);
                  FUN_004d1020();
                }
              }
              *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x58);
              *(undefined4 *)(in_ECX + 0x58) = 0;
              if (*(int *)(in_ECX + 0x5c) == 0) {
                *(undefined4 *)(in_ECX + 0x5c) = 0;
              }
              *(int *)(in_ECX + 0x164) = *(int *)(in_ECX + 0x164) - uVar12;
            }
            else {
              if ((int)(uVar12 - *(int *)(in_ECX + 400)) < *(int *)(*(int *)(in_ECX + 0x68) + 0x3c8)
                 ) {
                *(uint *)(in_ECX + 400) = uVar12;
              }
              local_4c._4_4_ = (int *)(uVar12 - *(int *)(in_ECX + 400));
              uStack_ac._4_4_ = (int **)0x9584cd;
              FUN_00955fd0();
              *(int *)(in_ECX + 0x164) = *(int *)(in_ECX + 0x164) + ((int)local_4c._4_4_ - uVar12);
            }
            piVar2 = local_30;
            local_4c._4_4_ = (int *)local_30[0x16];
            iVar5 = *(int *)(in_ECX + 400) + (int)local_4c._4_4_;
            uStack_ac._4_4_ = (int **)0x9584f0;
            FUN_00955fd0();
            piVar10 = piVar2 + 0x59;
            *piVar10 = *piVar10 + (iVar5 - (int)local_4c._4_4_);
            iVar5 = piVar2[0x1a];
            local_4c._4_4_ = *(int **)(iVar5 + 0x10c);
            uVar12 = *(uint *)(iVar5 + 0x108);
            uVar9 = *(uint *)(in_ECX + 400);
            uVar8 = uVar9 * 0x8000 + uVar12;
            uStack_ac._0_4_ = local_18 * 0x8000 + uVar12;
            uStack_ac._4_4_ =
                 (int **)((((int)local_18 >> 0x1f) << 0xf | local_18 >> 0x11) + (int)local_4c._4_4_
                         + (uint)CARRY4(local_18 * 0x8000,uVar12));
            local_b4 = CONCAT44(((((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) + (int)local_4c._4_4_
                                + (uint)CARRY4(uVar9 * 0x8000,uVar12)) * 0x8000 | uVar8 >> 0x11,
                                uVar8 * 0x8000);
            local_b8 = 0x958543;
            uVar15 = __alldiv();
            piVar10 = local_30;
            local_4c._0_4_ = (uint)uVar15;
            bVar14 = *(char *)(local_30[0x1a] + 0x3da) != '\0';
            local_11 = 0;
            if (bVar14) {
              uStack_ac._4_4_ = (int **)0x958568;
              uVar15 = FUN_00b31c36();
            }
            uVar12 = (uint)((ulonglong)uVar15 >> 0x20);
            local_4c._0_4_ = (uint)uVar15;
            uStack_ac._4_4_ = (int **)0x958576;
            local_11 = bVar14;
            local_3c = FUN_00b31c36();
            local_44._0_4_ = (uint)local_4c;
            local_44._4_4_ = uVar12;
            if (CONCAT44(uVar12,(uint)local_4c) < local_3c) {
              puVar11 = (uint *)&local_44;
            }
            else {
              puVar11 = (uint *)&local_3c;
            }
            local_4c._0_4_ = *puVar11;
            local_4c._4_4_ = (int *)puVar11[1];
            if ((-1 < (int)local_4c._4_4_) &&
               ((0 < (int)local_4c._4_4_ || (0x8000 < (uint)local_4c)))) {
              local_4c._0_4_ = 0x8000;
              local_4c._4_4_ = (int *)0x0;
            }
            local_b4 = *(longlong *)(in_ECX + 0x180);
            local_b8 = 0x9585d2;
            uStack_ac._0_4_ = (uint)local_4c;
            uStack_ac._4_4_ = (int **)local_4c._4_4_;
            lVar16 = __allmul();
            uVar9 = (uint)(lVar16 >> 0xf);
            iVar6 = (int)((ulonglong)(lVar16 >> 0xf) >> 0x20);
            puVar11 = (uint *)(in_ECX + 0x180);
            uVar12 = *puVar11;
            *puVar11 = *puVar11 - uVar9;
            *(int *)(in_ECX + 0x184) = (*(int *)(in_ECX + 0x184) - iVar6) - (uint)(uVar12 < uVar9);
            iVar4 = piVar10[0x60] + uVar9;
            uVar12 = (uint)CARRY4(piVar10[0x60],uVar9);
            iVar5 = piVar10[0x61] + iVar6;
            iVar13 = iVar5 + uVar12;
            if (iVar13 < 0) {
              piVar10[0x60] = 0;
              piVar10[0x61] = 0;
            }
            else if (iVar13 == 0 || SCARRY4(piVar10[0x61],iVar6) != SCARRY4(iVar5,uVar12)) {
              piVar10[0x60] = iVar4;
              piVar10[0x61] = iVar13;
            }
            else {
              piVar10[0x60] = iVar4;
              piVar10[0x61] = iVar13;
            }
            if (local_11 == '\0') {
              uStack_ac._4_4_ = *(int ***)(in_ECX + 0x254);
              uStack_ac._0_4_ = *(undefined4 *)(in_ECX + 0x250);
              local_b4 = CONCAT44(local_4c._4_4_,(uint)local_4c);
              local_b8 = 0x95867e;
              lVar16 = __allmul();
              uVar9 = (uint)(lVar16 >> 0xf);
              iVar5 = (int)((ulonglong)(lVar16 >> 0xf) >> 0x20);
              puVar11 = (uint *)(in_ECX + 0x250);
              uVar12 = *puVar11;
              *puVar11 = *puVar11 - uVar9;
              *(int *)(in_ECX + 0x254) = (*(int *)(in_ECX + 0x254) - iVar5) - (uint)(uVar12 < uVar9)
              ;
              if ((*(int *)(in_ECX + 0x254) < 1) && (*(int *)(in_ECX + 0x254) < 0)) {
                *(undefined4 *)(in_ECX + 0x250) = 0;
                *(undefined4 *)(in_ECX + 0x254) = 0;
              }
              puVar11 = (uint *)(piVar10 + 0x94);
              uVar12 = *puVar11;
              *puVar11 = *puVar11 + uVar9;
              piVar10[0x95] = piVar10[0x95] + iVar5 + (uint)CARRY4(uVar12,uVar9);
            }
            else {
              uVar12 = piVar10[0x94];
              uVar9 = *(uint *)(in_ECX + 0x250);
              iVar5 = *(int *)(in_ECX + 0x254);
              piVar10[0x94] = uVar12 + *(uint *)(in_ECX + 0x250);
              piVar10[0x95] = piVar10[0x95] + iVar5 + (uint)CARRY4(uVar12,uVar9);
              *(undefined4 *)(in_ECX + 0x250) = 0;
              *(undefined4 *)(in_ECX + 0x254) = 0;
            }
            *(undefined4 *)(in_ECX + 400) = 0;
          }
          if (0 < *(int *)(in_ECX + 0x58)) {
            if ((*(int *)(*(int *)(in_ECX + 0x68) + 0x3c8) < *(int *)(in_ECX + 0x194)) ||
               (*(int *)(in_ECX + 0x58) <= *(int *)(in_ECX + 0x194))) {
              uStack_ac._4_4_ = (int **)param_1;
              *(int *)(param_1 + 0x14) = in_ECX;
              local_b4 = CONCAT44(0x9586f6,(undefined4)local_b4);
              local_30 = (int *)FUN_0095bc10();
              uStack_ac._4_4_ = (int **)0x958702;
              cVar3 = (**(code **)(*local_30 + 0x20))();
              if (cVar3 == '\0') {
                *(undefined4 *)(in_ECX + 0x194) = 0;
                ExceptionList = local_10;
                return;
              }
              uVar12 = *(uint *)(in_ECX + 0x58);
              local_18 = uVar12;
              if ((int)uVar12 < *(int *)(in_ECX + 0x194)) {
                *(uint *)(in_ECX + 0x194) = uVar12;
                if (*(char *)(*(int *)(in_ECX + 0x68) + 0x40) == '\0') {
                  *(undefined4 *)(in_ECX + 0x60) = 0;
                }
                else if (0 < *(int *)(in_ECX + 0x60)) {
                  iVar5 = *(int *)(*(int *)(in_ECX + 100) + 0x58);
                  uStack_ac._4_4_ = (int **)0x958756;
                  local_2c = *(int *)(in_ECX + 0x60);
                  piVar10 = (int *)FUN_004c25b0();
                  uStack_ac._4_4_ = (int **)&local_2c;
                  uStack_ac._0_4_ = iVar5 * 0xb0 + 0x10 + *piVar10;
                  local_b4 = CONCAT44(0x95876e,(undefined4)local_b4);
                  FUN_004ee550();
                  uStack_ac._4_4_ = (int **)&local_2c;
                  local_b4 = CONCAT44(0x958781,(undefined4)local_b4);
                  FUN_004d1020();
                }
                *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x58);
                *(undefined4 *)(in_ECX + 0x58) = 0;
                if (*(int *)(in_ECX + 0x5c) == 0) {
                  *(undefined4 *)(in_ECX + 0x5c) = 0;
                }
                *(int *)(in_ECX + 0x164) = *(int *)(in_ECX + 0x164) - uVar12;
              }
              else {
                if ((int)(uVar12 - *(int *)(in_ECX + 0x194)) <
                    *(int *)(*(int *)(in_ECX + 0x68) + 0x3c8)) {
                  *(uint *)(in_ECX + 0x194) = uVar12;
                }
                local_4c._4_4_ = (int *)(uVar12 - *(int *)(in_ECX + 0x194));
                uStack_ac._4_4_ = (int **)0x9587c3;
                FUN_00955fd0();
                *(int *)(in_ECX + 0x164) = *(int *)(in_ECX + 0x164) + ((int)local_4c._4_4_ - uVar12)
                ;
              }
              piVar2 = local_30;
              local_4c._4_4_ = (int *)local_30[0x16];
              iVar5 = *(int *)(in_ECX + 0x194) + (int)local_4c._4_4_;
              uStack_ac._4_4_ = (int **)0x9587e6;
              FUN_00955fd0();
              piVar10 = piVar2 + 0x59;
              *piVar10 = *piVar10 + (iVar5 - (int)local_4c._4_4_);
              iVar5 = piVar2[0x1a];
              local_4c._4_4_ = *(int **)(iVar5 + 0x10c);
              uVar12 = *(uint *)(iVar5 + 0x108);
              uVar9 = *(uint *)(in_ECX + 400);
              uVar8 = uVar9 * 0x8000 + uVar12;
              uStack_ac._0_4_ = local_18 * 0x8000 + uVar12;
              uStack_ac._4_4_ =
                   (int **)((((int)local_18 >> 0x1f) << 0xf | local_18 >> 0x11) +
                            (int)local_4c._4_4_ + (uint)CARRY4(local_18 * 0x8000,uVar12));
              local_b4 = CONCAT44(((((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) +
                                   (int)local_4c._4_4_ + (uint)CARRY4(uVar9 * 0x8000,uVar12)) *
                                  0x8000 | uVar8 >> 0x11,uVar8 * 0x8000);
              local_b8 = 0x958839;
              local_b4 = __alldiv();
              uStack_ac._4_4_ = *(int ***)(in_ECX + 0x184);
              uStack_ac._0_4_ = *(undefined4 *)(in_ECX + 0x180);
              local_b8 = 0x958854;
              local_4c = local_b4;
              lVar16 = __allmul();
              piVar10 = local_30;
              lVar16 = lVar16 >> 0xf;
              puVar11 = (uint *)(in_ECX + 0x180);
              uVar12 = *puVar11;
              *puVar11 = *puVar11 - (uint)lVar16;
              *(int *)(in_ECX + 0x184) =
                   (*(int *)(in_ECX + 0x184) - (int)((ulonglong)lVar16 >> 0x20)) -
                   (uint)(uVar12 < (uint)lVar16);
              lVar16 = lVar16 + CONCAT44(local_30[0x61],local_30[0x60]);
              if (lVar16 < 0) {
                local_30[0x60] = 0;
                local_30[0x61] = 0;
              }
              else {
                local_30[0x60] = (int)lVar16;
                local_30[0x61] = (int)((ulonglong)lVar16 >> 0x20);
              }
              uStack_ac._4_4_ = *(int ***)(in_ECX + 0x254);
              uStack_ac._0_4_ = *(undefined4 *)(in_ECX + 0x250);
              local_b4 = local_4c;
              local_b8 = 0x9588b9;
              lVar16 = __allmul();
              uVar9 = (uint)(lVar16 >> 0xf);
              iVar5 = (int)((ulonglong)(lVar16 >> 0xf) >> 0x20);
              puVar11 = (uint *)(in_ECX + 0x250);
              uVar12 = *puVar11;
              *puVar11 = *puVar11 - uVar9;
              *(int *)(in_ECX + 0x254) = (*(int *)(in_ECX + 0x254) - iVar5) - (uint)(uVar12 < uVar9)
              ;
              if ((*(int *)(in_ECX + 0x254) < 1) && (*(int *)(in_ECX + 0x254) < 0)) {
                *(undefined4 *)(in_ECX + 0x250) = 0;
                *(undefined4 *)(in_ECX + 0x254) = 0;
              }
              puVar11 = (uint *)(piVar10 + 0x94);
              uVar12 = *puVar11;
              *puVar11 = *puVar11 + uVar9;
              piVar10 = piVar10 + 0x95;
              *piVar10 = *piVar10 + iVar5 + (uint)CARRY4(uVar12,uVar9);
              *(undefined4 *)(in_ECX + 0x194) = 0;
            }
            if (0 < *(int *)(in_ECX + 0x58)) {
              if (*(int *)(in_ECX + 0x70) != local_20[0x39a]) {
                uStack_ac._0_4_ = 0x958923;
                iVar5 = FUN_0095aca0();
                *(int *)(in_ECX + 0x198) = *(int *)(in_ECX + 0x198) + iVar5;
                if ((*(int *)(*(int *)(in_ECX + 0x68) + 0x3c8) < *(int *)(in_ECX + 0x198)) ||
                   (*(int *)(in_ECX + 0x58) <= *(int *)(in_ECX + 0x198))) {
                  uStack_ac._0_4_ = 0x958949;
                  piVar10 = (int *)FUN_0095f260();
                  uStack_ac._4_4_ = (int **)0x958957;
                  local_20 = piVar10;
                  cVar3 = (**(code **)(*piVar10 + 0x20))();
                  if ((cVar3 == '\0') && (*(char *)(*(int *)(in_ECX + 0x70) + 0x6c) != '\0')) {
                    iVar5 = *(int *)(in_ECX + 100);
                    local_4c._0_4_ = *(undefined4 *)(iVar5 + 0x128);
                    if (*(char *)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(iVar5 + 300) * 4) +
                                          0xe68) + 0x6c) == '\0') {
                      uStack_ac._4_4_ = *(int ***)(in_ECX + 0x68);
                      local_b4 = CONCAT44(0x958998,(undefined4)local_b4);
                      uStack_ac._0_4_ = iVar5;
                      piVar10 = (int *)FUN_004b8d30();
                      uStack_ac._4_4_ = (int **)0x9589a2;
                      local_20 = piVar10;
                      FUN_00955a00();
                      local_4c = CONCAT44(local_4c._4_4_,
                                          *(undefined4 *)(*(int *)(in_ECX + 100) + 0x128));
                      piVar10[0x1c] =
                           *(int *)(*(int *)(DAT_012587e4[1] +
                                            *(int *)(*(int *)(in_ECX + 100) + 300) * 4) + 0xe68);
                    }
                  }
                  uStack_ac._4_4_ = (int **)0x9589d2;
                  cVar3 = (**(code **)(*piVar10 + 0x20))();
                  if (cVar3 != '\0') {
                    uVar12 = *(uint *)(in_ECX + 0x58);
                    local_18 = uVar12;
                    if ((int)uVar12 < *(int *)(in_ECX + 0x198)) {
                      *(uint *)(in_ECX + 0x198) = uVar12;
                      if (*(char *)(*(int *)(in_ECX + 0x68) + 0x40) == '\0') {
                        *(undefined4 *)(in_ECX + 0x60) = 0;
                      }
                      else if (0 < (int)*(int **)(in_ECX + 0x60)) {
                        iVar5 = *(int *)(*(int *)(in_ECX + 100) + 0x58);
                        uStack_ac._4_4_ = (int **)0x958a19;
                        local_30 = *(int **)(in_ECX + 0x60);
                        piVar10 = (int *)FUN_004c25b0();
                        uStack_ac._4_4_ = &local_30;
                        uStack_ac._0_4_ = iVar5 * 0xb0 + 0x10 + *piVar10;
                        local_b4 = CONCAT44(0x958a31,(undefined4)local_b4);
                        FUN_004ee550();
                        uStack_ac._4_4_ = &local_30;
                        local_b4 = CONCAT44(0x958a44,(undefined4)local_b4);
                        uStack_ac._0_4_ = in_ECX;
                        FUN_004d1020();
                      }
                      *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x58);
                      *(undefined4 *)(in_ECX + 0x58) = 0;
                      if (*(int *)(in_ECX + 0x5c) == 0) {
                        *(undefined4 *)(in_ECX + 0x5c) = 0;
                      }
                      *(int *)(in_ECX + 0x16c) = *(int *)(in_ECX + 0x16c) - uVar12;
                    }
                    else {
                      if ((int)(uVar12 - *(int *)(in_ECX + 0x198)) <
                          *(int *)(*(int *)(in_ECX + 0x68) + 0x3c8)) {
                        *(uint *)(in_ECX + 0x198) = uVar12;
                      }
                      local_4c._4_4_ = (int *)(uVar12 - *(int *)(in_ECX + 0x198));
                      uStack_ac._4_4_ = (int **)0x958a86;
                      FUN_00955fd0();
                      *(int *)(in_ECX + 0x16c) =
                           *(int *)(in_ECX + 0x16c) + ((int)local_4c._4_4_ - uVar12);
                    }
                    piVar2 = local_20;
                    local_4c._4_4_ = (int *)local_20[0x16];
                    iVar5 = *(int *)(in_ECX + 0x198) + (int)local_4c._4_4_;
                    uStack_ac._4_4_ = (int **)0x958aa9;
                    FUN_00955fd0();
                    piVar10 = piVar2 + 0x5b;
                    *piVar10 = *piVar10 + (iVar5 - (int)local_4c._4_4_);
                    iVar5 = piVar2[0x1a];
                    local_4c._4_4_ = *(int **)(iVar5 + 0x10c);
                    uVar12 = *(uint *)(iVar5 + 0x108);
                    uVar9 = *(uint *)(in_ECX + 0x198);
                    uVar8 = uVar9 * 0x8000 + uVar12;
                    uStack_ac._0_4_ = local_18 * 0x8000 + uVar12;
                    uStack_ac._4_4_ =
                         (int **)((int)local_4c._4_4_ +
                                 (uint)CARRY4(local_18 * 0x8000,uVar12) +
                                 (((int)local_18 >> 0x1f) << 0xf | local_18 >> 0x11));
                    local_b4 = CONCAT44(((int)local_4c._4_4_ +
                                        (uint)CARRY4(uVar9 * 0x8000,uVar12) +
                                        (((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11)) * 0x8000 |
                                        uVar8 >> 0x11,uVar8 * 0x8000);
                    local_b8 = 0x958afc;
                    local_b4 = __alldiv();
                    if (0x8000 < local_b4) {
                      local_b4 = 0x8000;
                    }
                    uVar1 = (ulonglong)local_b4 >> 0x20;
                    local_4c._0_4_ = (uint)local_b4;
                    uStack_ac._4_4_ = *(int ***)(in_ECX + 0x184);
                    uStack_ac._0_4_ = *(undefined4 *)(in_ECX + 0x180);
                    local_b8 = 0x958b2f;
                    lVar16 = __allmul();
                    piVar10 = local_20;
                    local_44._0_4_ = (uint)(lVar16 >> 0xf);
                    iVar4 = (int)((ulonglong)(lVar16 >> 0xf) >> 0x20);
                    puVar11 = (uint *)(in_ECX + 0x180);
                    uVar12 = *puVar11;
                    *puVar11 = *puVar11 - (uint)local_44;
                    *(int *)(in_ECX + 0x184) =
                         (*(int *)(in_ECX + 0x184) - iVar4) - (uint)(uVar12 < (uint)local_44);
                    iVar5 = local_20[0x60] + (uint)local_44;
                    iVar4 = local_20[0x61] + iVar4 + (uint)CARRY4(local_20[0x60],(uint)local_44);
                    if (iVar4 < 0) {
                      iVar5 = 0;
                      local_20[0x61] = 0;
                    }
                    else {
                      local_20[0x61] = iVar4;
                    }
                    local_20[0x60] = iVar5;
                    uStack_ac._4_4_ = *(int ***)(in_ECX + 0x254);
                    uStack_ac._0_4_ = *(undefined4 *)(in_ECX + 0x250);
                    local_b4 = CONCAT44((int)uVar1,(uint)local_4c);
                    local_b8 = 0x958b8f;
                    lVar16 = __allmul();
                    uVar9 = (uint)(lVar16 >> 0xf);
                    iVar5 = (int)((ulonglong)(lVar16 >> 0xf) >> 0x20);
                    puVar11 = (uint *)(in_ECX + 0x250);
                    uVar12 = *puVar11;
                    *puVar11 = *puVar11 - uVar9;
                    *(int *)(in_ECX + 0x254) =
                         (*(int *)(in_ECX + 0x254) - iVar5) - (uint)(uVar12 < uVar9);
                    if ((*(int *)(in_ECX + 0x254) < 1) && (*(int *)(in_ECX + 0x254) < 0)) {
                      *(undefined4 *)(in_ECX + 0x250) = 0;
                      *(undefined4 *)(in_ECX + 0x254) = 0;
                    }
                    puVar11 = (uint *)(piVar10 + 0x94);
                    uVar12 = *puVar11;
                    *puVar11 = *puVar11 + uVar9;
                    piVar10 = piVar10 + 0x95;
                    *piVar10 = *piVar10 + iVar5 + (uint)CARRY4(uVar12,uVar9);
                    *(undefined4 *)(in_ECX + 0x198) = 0;
                  }
                }
              }
              if (0 < *(int *)(in_ECX + 0x58)) {
                local_44 = CONCAT44(local_44._4_4_,(uint)local_44);
                if (*(char *)(in_ECX + 0x4c) == '\0') {
                  uStack_ac._4_4_ = (int **)param_1;
                  local_b4 = CONCAT44(0x958bf2,(undefined4)local_b4);
                  iVar5 = FUN_0095ad40();
                  *(int *)(in_ECX + 0x19c) = iVar5;
                  local_44 = CONCAT44(local_44._4_4_,(uint)local_44);
                  if ((0 < iVar5) &&
                     (local_44 = CONCAT44(local_44._4_4_,(uint)local_44),
                     1 < *(int *)(in_ECX + 0x58))) {
                    uStack_ac._0_4_ = 0x958c10;
                    piVar10 = (int *)FUN_0095f3d0();
                    uStack_ac._4_4_ = (int **)0x958c1c;
                    cVar3 = (**(code **)(*piVar10 + 0x20))();
                    if (cVar3 != '\0') {
                      uVar12 = *(uint *)(in_ECX + 0x58);
                      iVar5 = *(int *)(in_ECX + 0x19c);
                      local_18 = uVar12;
                      if ((int)uVar12 < iVar5) {
                        *(uint *)(in_ECX + 0x19c) = uVar12;
                        uStack_ac._4_4_ = (int **)0x958c43;
                        FUN_00955fd0();
                        *(int *)(in_ECX + 0x168) = *(int *)(in_ECX + 0x168) - uVar12;
                      }
                      else {
                        uStack_ac._4_4_ = (int **)0x958c54;
                        FUN_00955fd0();
                        *(int *)(in_ECX + 0x168) =
                             *(int *)(in_ECX + 0x168) + ((uVar12 - iVar5) - local_18);
                      }
                      local_4c._4_4_ = (int *)piVar10[0x16];
                      iVar5 = *(int *)(in_ECX + 0x19c) + (int)local_4c._4_4_;
                      uStack_ac._4_4_ = (int **)0x958c75;
                      FUN_00955fd0();
                      piVar10[0x5a] = piVar10[0x5a] + (iVar5 - (int)local_4c._4_4_);
                      local_4c._4_4_ = *(int **)(piVar10[0x1a] + 0x10c);
                      uVar12 = *(uint *)(piVar10[0x1a] + 0x108);
                      uVar9 = *(uint *)(in_ECX + 0x19c);
                      uVar8 = uVar9 * 0x8000 + uVar12;
                      uStack_ac._0_4_ = local_18 * 0x8000 + uVar12;
                      uStack_ac._4_4_ =
                           (int **)((((int)local_18 >> 0x1f) << 0xf | local_18 >> 0x11) +
                                    (int)local_4c._4_4_ + (uint)CARRY4(local_18 * 0x8000,uVar12));
                      local_b4 = CONCAT44(((((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) +
                                           (int)local_4c._4_4_ + (uint)CARRY4(uVar9 * 0x8000,uVar12)
                                          ) * 0x8000 | uVar8 >> 0x11,uVar8 * 0x8000);
                      local_b8 = 0x958cc8;
                      local_44 = __alldiv();
                      if (0x8000 < local_44) {
                        local_44 = 0x8000;
                      }
                      uStack_ac._4_4_ = (int **)0x958cfa;
                      FUN_0043a6a0();
                      puVar11 = (uint *)(in_ECX + 0x180);
                      uVar12 = *puVar11;
                      *puVar11 = *puVar11 - (uint)local_3c;
                      *(int *)(in_ECX + 0x184) =
                           (*(int *)(in_ECX + 0x184) - local_3c._4_4_) -
                           (uint)(uVar12 < (uint)local_3c);
                      local_4c._4_4_ = (int *)&uStack_ac;
                      uStack_ac = local_3c + *(longlong *)(piVar10 + 0x60);
                      local_b4 = CONCAT44(0x958d34,(undefined4)local_b4);
                      FUN_0095a5b0();
                      uStack_ac._4_4_ = (int **)0x958d45;
                      puVar11 = (uint *)FUN_0043a6a0();
                      uVar9 = *puVar11;
                      uStack_ac._4_4_ = (int **)puVar11[1];
                      local_b4 = CONCAT44(0x958d61,(undefined4)local_b4);
                      uStack_ac._0_4_ = uVar9;
                      local_3c._4_4_ = (uint)uStack_ac._4_4_;
                      FUN_009666b0();
                      puVar11 = (uint *)(piVar10 + 0x94);
                      uVar12 = *puVar11;
                      *puVar11 = *puVar11 + uVar9;
                      piVar10[0x95] = piVar10[0x95] + local_3c._4_4_ + (uint)CARRY4(uVar12,uVar9);
                    }
                    *(undefined4 *)(in_ECX + 0x19c) = 0;
                  }
                }
                if (0 < *(int *)(in_ECX + 0x58)) {
                  if (*(char *)(*(int *)(in_ECX + 0x68) + 0x39c) != '\0') {
                    uStack_ac._4_4_ = (int **)0x0;
                    uStack_ac._0_4_ = param_2;
                    local_b4 = CONCAT44(in_ECX,0x958d98);
                    FUN_009599a0();
                  }
                  uStack_ac._0_4_ = 0x958d9e;
                  iVar5 = FUN_0095dec0();
                  iVar4 = *(int *)(*(int *)(in_ECX + 0x68) + 0x30);
                  if ((((iVar4 == -1) || (*(int *)(in_ECX + 0x58) < iVar4)) || (iVar5 < 1)) &&
                     (iVar5 != 0)) {
                    local_18 = *(int *)(in_ECX + 0x58);
                    iVar5 = iVar5 + local_18;
                    uStack_ac._4_4_ = (int **)0x958dcd;
                    FUN_00955fd0();
                    *(int *)(in_ECX + 0x158) = *(int *)(in_ECX + 0x158) + (iVar5 - local_18);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

