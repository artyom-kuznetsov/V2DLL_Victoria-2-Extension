// FUN_00859710 @ 00859710  (requested 00859920, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_00859710(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iStack_bc;
  int *piStack_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  int *local_a4;
  int *local_a0;
  int *local_9c;
  int local_94;
  int local_90;
  int iStack_8c;
  int *local_88;
  int local_84;
  undefined4 local_80;
  int iStack_78;
  int iStack_74;
  int local_6c;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00ba0a85;
  local_14 = ExceptionList;
  local_68 = *(undefined4 *)(param_1 + 0x34);
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x12d0) !=
      '\0') {
    iVar5 = 0;
    local_a4 = (int *)0x0;
    local_a0 = (int *)0x0;
    local_9c = (int *)0x0;
    local_c = 0;
    ExceptionList = &local_14;
    FUN_008a8650(0);
    local_6c = (int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / 365.0);
    if (DAT_0125eadc == 0) {
      local_94 = FUN_00aae9af(0x9c);
      local_c = CONCAT31(local_c._1_3_,1);
      if (local_94 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00576fe0(local_94);
      }
      FUN_0057ab10(uVar2);
    }
    local_88 = (int *)0x0;
    local_84 = 0;
    local_80 = 0;
    local_c._0_1_ = 2;
    FUN_009beeb0(DAT_0125eadc);
    local_b4 = (int *)0x0;
    local_b0 = (int *)0x0;
    local_ac = (int *)0x0;
    local_c = CONCAT31(local_c._1_3_,4);
    local_90 = 0xe10;
    iVar7 = local_84 - (int)local_88 >> 2;
    if (0 < iVar7) {
      do {
        cVar1 = (**(code **)(*(int *)local_88[iVar5] + 0x20))();
        if ((cVar1 != '\0') &&
           (iVar3 = FUN_0057a4c0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38)),
           local_90 < iVar3)) {
          local_90 = iVar3;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar7);
      piVar6 = local_88;
      if (0 < iVar7) {
        do {
          local_94 = iVar7;
          piStack_b8 = piVar6;
          cVar1 = (**(code **)(*(int *)*piVar6 + 0x20))();
          if (cVar1 != '\0') {
            iStack_78 = *(int *)(param_1 + 0x34);
            cVar1 = FUN_00569920();
            if (cVar1 != '\0') {
              if ((piVar6 < local_a0) && (local_a4 <= piVar6)) {
                iVar5 = (int)piVar6 - (int)local_a4;
                if (local_a0 == local_9c) {
                  FUN_00a513f0();
                }
                if (local_a0 != (int *)0x0) {
                  *local_a0 = local_a4[iVar5 >> 2];
                }
              }
              else {
                if (local_a0 == local_9c) {
                  FUN_00a513f0();
                }
                if (local_a0 != (int *)0x0) {
                  *local_a0 = *piVar6;
                }
              }
              uStack_58 = *(undefined4 *)(param_1 + 0x34);
              local_a0 = local_a0 + 1;
              uStack_54 = *(undefined4 *)(param_1 + 0x38);
              FUN_0056bc50();
              iVar5 = *(int *)(*(int *)(*piVar6 + 0x310) + 0x44);
              iStack_78 = *(int *)(param_1 + 0x34);
              iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) +
                              0xe40);
              if (DAT_0125eadc == 0) {
                iStack_bc = FUN_00aae9af(0x9c);
                local_c._0_1_ = 5;
                if (iStack_bc == 0) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = FUN_00576fe0(iStack_bc);
                }
                local_c = CONCAT31(local_c._1_3_,6);
                iStack_78 = 0;
                if ((iVar3 != DAT_0125eadc) && (iStack_bc = DAT_0125eadc, DAT_0125eadc != 0)) {
                  FUN_00576d10(DAT_0125eadc);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(iStack_bc);
                }
                local_c = CONCAT31(local_c._1_3_,4);
                DAT_0125eadc = iVar3;
              }
              iVar5 = __alldiv((longlong)
                               (*(int *)(*(int *)(*(int *)(*(int *)(DAT_0125eadc + 0x80) + iVar7 * 4
                                                          ) + 0x18) + iVar5 * 8) + 1000) *
                               (longlong)iStack_8c,1000,0);
              iVar7 = local_6c - *(int *)(*piStack_b8 + 0x340);
              if (0 < iVar7) {
                FUN_00401000(0x40b00000);
                iVar3 = FUN_00b31c00();
                iVar7 = __alldiv((longlong)iVar3 * (longlong)(iVar7 * 1000),1000,0);
                iVar5 = __alldiv((longlong)(iVar7 + 1000) * (longlong)iVar5,1000,0);
              }
              iVar8 = local_90 * 1000;
              iVar7 = FUN_0057a4c0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
              iVar3 = iVar7 * 1000;
              if (iVar8 == 0) {
                iVar8 = -1;
              }
              else if (iVar3 + 0x189373U < 0x39580e) {
                iVar8 = (iVar7 * 1000000) / iVar8;
              }
              else {
                iStack_64 = iVar8 >> 0x1f;
                uVar10 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
                iVar8 = __alldiv(uVar10,iVar8,iStack_64);
                iStack_74 = iVar8 >> 0x1f;
              }
              iVar5 = __alldiv((longlong)(2000 - iVar8) * (longlong)iVar5,1000,0);
              iStack_8c = iVar5;
              FUN_00401000(0x43fa4001);
              iVar7 = FUN_00b31c00();
              iVar5 = (iVar7 + iVar5) / 1000;
              iStack_bc = iVar5;
              if ((&iStack_bc < local_b0) && (local_b4 <= &iStack_bc)) {
                iVar5 = (int)&iStack_bc - (int)local_b4;
                if (local_b0 == local_ac) {
                  FUN_007b94a0();
                }
                if (local_b0 != (int *)0x0) {
                  *local_b0 = local_b4[iVar5 >> 2];
                }
              }
              else {
                if (local_b0 == local_ac) {
                  FUN_007b94a0();
                }
                if (local_b0 != (int *)0x0) {
                  *local_b0 = iVar5;
                }
              }
              local_b0 = local_b0 + 1;
              piVar6 = piStack_b8;
            }
          }
          piVar6 = piVar6 + 1;
          iVar7 = local_94 + -1;
        } while (local_94 + -1 != 0);
        local_94 = 0;
        piStack_b8 = piVar6;
      }
    }
    iVar5 = DAT_012588e8;
    iVar7 = (int)local_b0 - (int)local_b4 >> 2;
    piVar6 = local_b4;
    if (iVar7 != 0) {
      iVar3 = DAT_012588e8 + 0xb4;
      if (*(int *)(DAT_012588e8 + 0xa74) == 0) {
        FUN_009b7700();
      }
      piVar6 = local_b4;
      iVar8 = *(int *)(iVar5 + 0xa74);
      uVar4 = *(uint *)(iVar3 + iVar8 * 4);
      uVar4 = uVar4 ^ (int)uVar4 >> 0xb;
      uVar4 = uVar4 ^ (uVar4 & 0xff3a58ad) << 7;
      uVar4 = uVar4 ^ (uVar4 & 0xffffdf8c) << 0xf;
      iVar9 = 0;
      iVar3 = 0;
      *(int *)(iVar5 + 0xa74) = (iVar8 + 1) % 0x270;
      if (0 < iVar7) {
        do {
          if (0 < local_b4[iVar3]) {
            iVar9 = iVar9 + local_b4[iVar3];
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar7);
        if (iVar9 != 0) {
          iVar5 = 0;
          iVar3 = 0;
          do {
            if ((0 < local_b4[iVar3]) &&
               (iVar5 = iVar5 + local_b4[iVar3], (int)(uVar4 ^ (int)uVar4 >> 0x12) % iVar9 < iVar5))
            {
              if (iVar3 != -1) {
                iStack_78 = FUN_00aae9af(0x48);
                local_c._0_1_ = 7;
                if (iStack_78 == 0) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = FUN_0058ad00(iStack_78,*(undefined4 *)(param_1 + 0x34),
                                       *(undefined4 *)(param_1 + 0x38),local_a4[iVar3]);
                }
                local_c = CONCAT31(local_c._1_3_,4);
                iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
                (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(uVar2);
              }
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar7);
        }
      }
    }
    if (piVar6 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piVar6);
    }
    if (local_88 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    if (local_a4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4);
    }
  }
  ExceptionList = local_14;
  return;
}

