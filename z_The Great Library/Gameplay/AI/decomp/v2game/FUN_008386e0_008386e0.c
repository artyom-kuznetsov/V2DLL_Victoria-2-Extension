// FUN_008386e0 @ 008386e0 body=[[008386e0, 0083885d] [00838860, 00838eae]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_008386e0(void)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 **ppuVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint *puVar9;
  int in_ECX;
  undefined4 *puVar10;
  int iVar11;
  float in_XMM0_Da;
  undefined8 uStack_158;
  undefined1 **ppuStack_150;
  undefined1 **ppuStack_14c;
  undefined **local_d0;
  undefined1 local_a4 [12];
  int *local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 *local_84;
  undefined1 **local_80;
  int *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined1 **local_50;
  int local_4c;
  uint local_48;
  undefined1 *local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  int *local_28;
  undefined1 *local_24;
  undefined1 **local_20;
  char local_19;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bac29c;
  local_10 = ExceptionList;
  local_5c = *(undefined4 *)(in_ECX + 0x34);
  puVar1 = (ulonglong *)(in_ECX + 0x34);
  iVar11 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4);
  ExceptionList = &local_10;
  local_4c = in_ECX;
  local_14 = iVar11;
  if (*(int *)(iVar11 + 0x4ac) == 0) {
    local_34 = 0;
    local_18 = &stack0xfffffeb8 + *(int *)(iVar11 + 0x3e4) * -4;
    (&ppuStack_14c)[-*(int *)(iVar11 + 0x3e4)] = (undefined1 **)0x83875a;
    local_2c = &stack0xfffffeb8;
    puVar10 = (undefined4 *)&stack0xfffffeb8;
    ExceptionList = &local_10;
    if (*(int **)(iVar11 + 0x3dc) != (int *)0x0) {
      local_38 = local_18 + -(int)&stack0xfffffeb8;
      local_28 = *(int **)(iVar11 + 0x3dc);
      ExceptionList = &local_10;
      local_2c = &stack0xfffffeb8;
      do {
        iVar11 = *local_28;
        local_28 = (int *)local_28[2];
        ppuStack_14c = *(undefined1 ***)(iVar11 + 0xc);
        ppuStack_150 = *(undefined1 ***)(iVar11 + 8);
        uStack_158 = CONCAT44(local_4c,0x83878e);
        FUN_00844210();
        if (20.0 <= in_XMM0_Da) {
          uVar2 = *(undefined4 *)(iVar11 + 0xc);
          local_34 = local_34 + 1;
          *(int *)(local_38 + (int)puVar10) = (int)in_XMM0_Da;
          *puVar10 = uVar2;
          puVar10 = puVar10 + 1;
        }
      } while (local_28 != (int *)0x0);
    }
    iVar11 = DAT_012588e8;
    ppuStack_14c = (undefined1 **)0x8387c7;
    ppuStack_14c = (undefined1 **)FUN_009b7610();
    ppuStack_150 = (undefined1 **)local_34;
    uStack_158 = CONCAT44(0x8387d4,(undefined4)uStack_158);
    iVar4 = FUN_009dcac0();
    if (iVar4 != -1) {
      iVar11 = *(int *)(*(int *)(iVar11 + 0xadc) + *(int *)(local_2c + iVar4 * 4) * 4);
      ppuStack_14c = *(undefined1 ***)(iVar11 + 0x20);
      ppuStack_150 = *(undefined1 ***)(iVar11 + 0x1c);
      uStack_158 = CONCAT44(0x83880b,(undefined4)uStack_158);
      FUN_0085f880();
    }
  }
  if ((*(int *)(local_14 + 0x4ac) != 0) && (*(char *)(local_14 + 0x67c) == '\0')) {
    if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0) {
      ppuStack_14c = (undefined1 **)0x838843;
      cVar3 = FUN_0042b220();
      if (cVar3 != '\0') {
        ExceptionList = local_10;
        return;
      }
    }
    piVar7 = *(int **)(local_14 + 0x4a4);
joined_r0x00838856:
    if (piVar7 != (int *)0x0) {
      local_28 = (int *)piVar7[2];
      iVar11 = *piVar7;
      local_30 = *(undefined4 *)(iVar11 + 8);
      iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar11 + 0xc) * 4);
      local_18 = (undefined1 *)iVar11;
      if ((int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU) < 1) {
        ppuStack_14c = *(undefined1 ***)(iVar11 + 0xc);
        ppuStack_150 = *(undefined1 ***)(iVar11 + 8);
        uStack_158 = CONCAT44(0x8388ac,(undefined4)uStack_158);
        FUN_0085f990();
        piVar7 = local_28;
      }
      else {
        if (*(char *)(local_4c + 0x80) != '\0') {
          ExceptionList = local_10;
          return;
        }
        ppuStack_14c = *(undefined1 ***)(iVar11 + 0xc);
        ppuStack_150 = *(undefined1 ***)(iVar11 + 8);
        uStack_158 = CONCAT44(0x8388d7,(undefined4)uStack_158);
        cVar3 = FUN_0085fa60();
        piVar7 = local_28;
        if (cVar3 != '\0') {
          local_24 = *(undefined1 **)(iVar11 + 8);
          local_30 = *(undefined4 *)puVar1;
          ppuVar6 = *(undefined1 ***)(iVar11 + 0xc);
          ppuStack_14c = &local_24;
          uStack_158 = CONCAT44(*(undefined4 *)
                                 (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                   *(int *)(in_ECX + 0x38) * 4) + 0xbe8) +
                                 (int)ppuVar6 * 4),0x838913);
          ppuStack_150 = (undefined1 **)puVar1;
          local_20 = ppuVar6;
          local_19 = FUN_0092ede0();
          iVar11 = DAT_012587e4;
          if (local_19 == '\0') {
            iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4) +
                            0x156c);
            local_30 = *(undefined4 *)puVar1;
            if (((iVar4 == 0) || (*(undefined1 ***)(iVar4 + 0x14) != ppuVar6)) ||
               (*(char *)(iVar4 + 0x18) == '\0')) {
              ppuStack_14c = (undefined1 **)0x83895a;
              iVar4 = FUN_009b7610();
              local_2c = (undefined1 *)(iVar4 % 1000);
              local_40 = *(undefined4 *)puVar1;
              iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x60) + 0x88) / 1000;
              if ((*(char *)(*(int *)(*(int *)(iVar11 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x12d0)
                   != '\0') &&
                 (*(char *)(*(int *)(*(int *)(iVar11 + 4) + (int)local_20 * 4) + 0x12d0) == '\0')) {
                iVar4 = iVar4 + *(int *)(*(int *)(DAT_012586dc + 0x60) + 0x8c) / 1000;
              }
              iVar11 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24);
              iVar5 = *(int *)(local_14 + 0x1430);
              if (iVar11 == 0) {
                iVar11 = -1;
              }
              else if (iVar5 + 0x189373U < 0x39580e) {
                iVar11 = (iVar5 * 1000) / iVar11;
              }
              else {
                local_58 = iVar5 >> 0x1f;
                local_50 = (undefined1 **)(iVar11 >> 0x1f);
                ppuStack_14c = (undefined1 **)0x0;
                ppuStack_150 = (undefined1 **)0x3e8;
                uStack_158 = (ulonglong)iVar5;
                local_54 = iVar11;
                uStack_158 = __allmul();
                ppuStack_14c = local_50;
                ppuStack_150 = (undefined1 **)local_54;
                iVar11 = __alldiv();
                local_3c = iVar11 >> 0x1f;
              }
              ppuStack_14c = (undefined1 **)0x447a1fff;
              ppuStack_150 = (undefined1 **)0x838a41;
              FUN_00401000();
              ppuStack_14c = (undefined1 **)0x838a49;
              iVar5 = FUN_00b31c00();
              uStack_158 = (longlong)(iVar4 * 1000) * (longlong)(iVar5 - iVar11);
              ppuStack_14c = (undefined1 **)0x0;
              ppuStack_150 = (undefined1 **)0x3e8;
              iVar11 = __alldiv();
              piVar7 = local_28;
              if (iVar11 / 1000 <= (int)local_2c) goto joined_r0x00838856;
              ppuStack_14c = (undefined1 **)0x838a8c;
              FUN_0094bd40();
              local_88 = *(undefined4 *)(in_ECX + 0x38);
              local_8c = *(undefined4 *)puVar1;
              ppuStack_14c = (undefined1 **)0x0;
              ppuStack_150 = (undefined1 **)0x1;
              local_2c = (undefined1 *)&uStack_158;
              local_84 = local_24;
              uStack_158 = (ulonglong)(*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24) - 2000);
              local_80 = local_20;
              FUN_00845ad0(&local_38,local_14,local_a4,7000 < *(int *)(local_14 + 0x1430));
              piVar7 = local_98;
              if (20000 < (int)local_38) {
                ppuStack_14c = (undefined1 **)0x838b0d;
                cVar3 = (**(code **)(*local_98 + 0x1c))();
                if (cVar3 != '\0') {
                  ppuStack_14c = local_20;
                  uStack_158 = *puVar1;
                  ppuStack_150 = (undefined1 **)local_24;
                  FUN_00926c40();
                  local_8 = 0;
                  local_40 = *(undefined4 *)puVar1;
                  local_68 = piVar7;
                  piVar7 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(in_ECX + 0x38) * 4) + 0xcdc);
                  ppuStack_14c = (undefined1 **)0x838b5a;
                  ppuVar6 = (undefined1 **)FUN_009115b0();
                  ppuStack_14c = (undefined1 **)0x838b65;
                  iVar11 = (**(code **)(*piVar7 + 0x44))();
                  ppuStack_150 = (undefined1 **)0x838b70;
                  ppuStack_14c = ppuVar6;
                  (**(code **)(**(int **)(iVar11 + 0x38) + 0x18))();
                  local_8 = 0xffffffff;
                }
              }
            }
          }
          iVar11 = DAT_012587e4;
          local_40 = *(undefined4 *)puVar1;
          ppuStack_14c = (undefined1 **)0x838ba5;
          piVar7 = (int *)FUN_0092d780();
          if (*piVar7 < 1) {
            piVar7 = local_28;
            if (local_19 != '\0') {
              local_40 = *(undefined4 *)puVar1;
              iVar11 = *(int *)(*(int *)(*(int *)(*(int *)(iVar11 + 4) + *(int *)(in_ECX + 0x38) * 4
                                                 ) + 0xbe8) + *(int *)((int)local_18 + 0xc) * 4);
              if ((*(int *)(iVar11 + 0x34) != 0) ||
                 (*(int *)(iVar11 + 0x6c) <= *(int *)(DAT_012588e8 + 0xb0c))) {
                ppuStack_14c = local_20;
                uStack_158 = *puVar1;
                ppuStack_150 = (undefined1 **)local_24;
                FUN_00913440();
                local_8 = 3;
                ppuStack_14c = (undefined1 **)0x838cc9;
                FUN_0094bd40();
                iVar4 = local_14;
                ppuVar6 = local_20;
                local_8c = *(undefined4 *)puVar1;
                local_88 = *(undefined4 *)(in_ECX + 0x38);
                iVar11 = *(int *)(*(int *)(local_14 + 0xe64) + 0x50);
                local_64 = *(undefined1 **)(iVar11 + 0x1c);
                local_84 = local_24;
                local_60 = *(undefined4 *)(iVar11 + 0x20);
                ppuStack_14c = &local_64;
                local_80 = local_20;
                ppuStack_150 = (undefined1 **)0x838d0a;
                cVar3 = FUN_00848540();
                if (cVar3 == '\0') {
                  local_48 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24) - 2000;
                  puVar9 = &local_48;
                }
                else {
                  local_34 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x24);
                  puVar9 = &local_34;
                }
                ppuStack_14c = (undefined1 **)0x0;
                ppuStack_150 = (undefined1 **)0x1;
                local_2c = (undefined1 *)&uStack_158;
                uStack_158 = (ulonglong)*puVar9;
                FUN_00845ad0(&local_44,iVar4,local_a4,1);
                if (local_44 != (undefined1 *)0x0) {
                  ppuStack_14c = (undefined1 **)0x838d75;
                  FUN_00424b60();
                }
                ppuStack_14c = ppuVar6;
                ppuStack_150 = (undefined1 **)local_24;
                uStack_158 = CONCAT44(0x838d85,(undefined4)uStack_158);
                FUN_0085f990();
                ppuStack_14c = (undefined1 **)0x0;
                ppuStack_150 = (undefined1 **)0x838d92;
                cVar3 = FUN_00911760();
                if (cVar3 != '\0') {
                  local_38 = DAT_01317d64;
                  local_2c = DAT_01317d64;
                  local_40 = *(undefined4 *)puVar1;
                  ppuStack_14c = &local_44;
                  ppuStack_150 = (undefined1 **)&local_48;
                  local_48 = 0;
                  local_44 = (undefined1 *)0x0;
                  uStack_158 = CONCAT44(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(in_ECX + 0x38) * 4) + 0x7b4,0x838df0);
                  FUN_005dcbd0();
                  ppuStack_14c = &local_2c;
                  ppuStack_150 = &local_38;
                  uStack_158 = CONCAT44(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)ppuVar6 * 4) +
                                        0x7b4,0x838e0f);
                  FUN_005dcbd0();
                  local_40 = *(undefined4 *)puVar1;
                  piVar7 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(in_ECX + 0x38) * 4) + 0xcdc);
                  ppuStack_14c = (undefined1 **)0x838e76;
                  ppuVar6 = (undefined1 **)FUN_009115b0();
                  ppuStack_14c = (undefined1 **)0x838e81;
                  iVar11 = (**(code **)(*piVar7 + 0x44))();
                  ppuStack_150 = (undefined1 **)0x838e8c;
                  ppuStack_14c = ppuVar6;
                  (**(code **)(**(int **)(iVar11 + 0x38) + 0x18))();
                  *(undefined1 *)(local_4c + 0x80) = 1;
                  ExceptionList = local_10;
                  return;
                }
                local_8 = 0xffffffff;
                piVar7 = local_28;
              }
            }
          }
          else {
            ppuStack_14c = *(undefined1 ***)((int)local_18 + 0xc);
            ppuStack_150 = *(undefined1 ***)((int)local_18 + 8);
            uStack_158 = *puVar1;
            FUN_00832cd0();
            local_8 = 1;
            local_40 = *(undefined4 *)puVar1;
            piVar7 = *(int **)(*(int *)(*(int *)(iVar11 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xcdc)
            ;
            ppuStack_14c = (undefined1 **)0x40;
            ppuStack_150 = (undefined1 **)0x838bff;
            puVar8 = (undefined1 *)FUN_00aae9af();
            local_8._0_1_ = 2;
            local_2c = puVar8;
            if (puVar8 == (undefined1 *)0x0) {
              ppuVar6 = (undefined1 **)0x0;
            }
            else {
              ppuStack_14c = (undefined1 **)0x838c20;
              ppuStack_14c = (undefined1 **)(*(code *)local_d0[0xc])();
              uStack_158 = CONCAT44(0x838c27,(undefined4)uStack_158);
              ppuStack_150 = (undefined1 **)puVar8;
              ppuVar6 = (undefined1 **)FUN_0090f620();
            }
            local_8 = CONCAT31(local_8._1_3_,1);
            ppuStack_14c = (undefined1 **)0x838c3a;
            iVar11 = (**(code **)(*piVar7 + 0x44))();
            ppuStack_150 = (undefined1 **)0x838c45;
            ppuStack_14c = ppuVar6;
            (**(code **)(**(int **)(iVar11 + 0x38) + 0x18))();
            local_8 = 0xffffffff;
            local_d0 = CDiplomaticAction::vftable;
            piVar7 = local_28;
          }
        }
      }
      goto joined_r0x00838856;
    }
  }
  ExceptionList = local_10;
  return;
}

