// FUN_005f2000 @ 005f2000 body=[[005f2000, 005f2101] [005f2105, 005f21e6] [005f21ea, 005f2222] [005f2226, 005f2356] [005f235a, 005f24bc] [005f24c0, 005f2614] [005f2618, 005f26cb] [005f26cf, 005f26fc] [005f2700, 005f276b] [005f276f, 005f283c] [005f2840, 005f287c] [005f2880, 005f29bb] [005f29bf, 005f29e7] [005f29eb, 005f2a2d] [005f2a31, 005f2a4d] [005f2a51, 005f2a67] [005f2a6b, 005f2a81]]


/* WARNING: Type propagation algorithm not settling */

void FUN_005f2000(int *param_1)

{
  char cVar1;
  uint *puVar2;
  bool bVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar12;
  uint uVar13;
  undefined *puVar14;
  int local_694;
  undefined4 *local_690;
  undefined4 *local_688;
  uint local_684 [4];
  undefined4 local_674;
  uint local_670;
  undefined4 *local_668;
  undefined4 *local_664;
  undefined4 local_660;
  uint local_658;
  uint local_654 [3];
  undefined4 uStack_648;
  uint local_644;
  uint local_640;
  undefined4 *******pppppppuStack_63c;
  uint local_638 [3];
  undefined4 uStack_62c;
  uint local_628;
  uint local_624;
  undefined4 *local_614;
  uint local_60c;
  undefined4 *******local_608 [4];
  undefined4 local_5f8;
  uint local_5f4;
  uint local_5ec [4];
  undefined4 local_5dc;
  uint local_5d8;
  undefined1 auStack_5d4 [4];
  uint uStack_5d0;
  undefined4 uStack_5c0;
  uint uStack_5bc;
  uint local_5b4 [4];
  undefined4 local_5a4;
  uint local_5a0;
  uint local_598;
  undefined4 local_588;
  uint local_584;
  undefined1 local_57c;
  undefined4 local_56c;
  undefined4 local_568;
  undefined **appuStack_4e8 [18];
  int local_4a0 [22];
  int iStack_448;
  undefined4 uStack_43c;
  int iStack_438;
  int local_228 [67];
  int local_11c [66];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00baea62;
  pvStack_14 = ExceptionList;
  bVar3 = false;
  local_568 = 0xf;
  local_56c = 0;
  local_57c = 0;
  local_c = 0;
  local_60c = **(uint **)(in_ECX + 0x48);
  local_5f4 = 0xf;
  local_5f8 = 0;
  local_608[0] = (undefined4 *******)((uint)local_608[0] & 0xffffff00);
  ExceptionList = &pvStack_14;
  FUN_00408ed0(*(uint **)(in_ECX + 0x48) + 1,0,0xffffffff);
  for (puVar2 = *(uint **)(in_ECX + 0x48); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[9]) {
    local_c._0_1_ = 1;
    local_658 = *puVar2;
    local_640 = 0xf;
    local_644 = 0;
    local_654[0] = local_654[0] & 0xffffff00;
    FUN_00408ed0(puVar2 + 1,0,0xffffffff);
    local_c._0_1_ = 2;
    if (((int)local_658 <= *param_1) && ((int)local_60c < (int)local_658)) {
      local_60c = local_658;
      FUN_00408ed0(local_654,0,0xffffffff);
    }
    local_c._0_1_ = 1;
    if (0xf < local_640) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_654[0]);
    }
  }
  local_668 = (undefined4 *)0x0;
  local_664 = (undefined4 *)0x0;
  local_660 = 0;
  local_c._0_1_ = 3;
  pppppppuVar4 = local_608[0];
  if (local_5f4 < 0x10) {
    pppppppuVar4 = local_608;
  }
  FUN_00992240(pppppppuVar4,&local_668,&DAT_00dfa554);
  for (local_614 = local_668;
      (puVar5 = local_614, local_668 <= local_614 && (local_614 < local_664));
      local_614 = local_614 + 7) {
    local_5d8 = 0xf;
    local_5dc = 0;
    local_5ec[0] = local_5ec[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_c._0_1_ = 4;
    FUN_00988f20(local_5ec);
    local_c._0_1_ = 5;
    FUN_00988f20(puVar5);
    if (0xf < local_584) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_598);
    }
    local_584 = 0xf;
    local_588 = 0;
    local_598 = local_598 & 0xffffff00;
    local_c._0_1_ = 8;
    if (0xf < local_5d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5ec[0]);
    }
    local_5d8 = 0xf;
    local_5dc = 0;
    local_5ec[0] = local_5ec[0] & 0xffffff00;
    local_690 = (undefined4 *)FUN_00aae9af(0x360);
    local_c._0_1_ = 9;
    if (local_690 == (undefined4 *)0x0) {
      local_690 = (undefined4 *)0x0;
    }
    else {
      local_670 = 0xf;
      local_674 = 0;
      local_684[0] = local_684[0] & 0xffffff00;
      FUN_00409350("UNNAMED_SESSION",0xf);
      local_c = CONCAT31(local_c._1_3_,10);
      bVar3 = true;
      puVar5 = (undefined4 *)FUN_00aae9af(0x114);
      local_c = 0xb;
      local_688 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        FUN_0098ffc0(local_5b4);
        *puVar5 = &PTR_FUN_00e37c3c;
      }
      *local_690 = &PTR_FUN_00e38524;
      local_690[1] = 0;
      local_690[2] = 0;
      local_690[3] = 0;
      *(undefined1 *)(local_690 + 4) = 0;
      local_c = 0xc;
      *(undefined1 *)(local_690 + 5) = 0;
      local_690[7] = puVar5;
      local_690[0xd0] = 0xf;
      local_690[0xcf] = 0;
      *(undefined1 *)(local_690 + 0xcb) = 0;
      FUN_00408ed0(local_684,0,0xffffffff);
      local_690[0xd2] = 0;
      local_690[0xd3] = 0;
      local_690[0xd4] = 0;
      *(undefined1 *)(local_690 + 0xd6) = 1;
      local_690[0xd7] = 0;
    }
    local_c = 8;
    if (bVar3) {
      bVar3 = false;
      if (0xf < local_670) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_684[0]);
      }
      local_670 = 0xf;
      local_674 = 0;
      local_684[0] = local_684[0] & 0xffffff00;
    }
    while( true ) {
      piVar11 = (int *)local_690[7];
      if ((char)piVar11[0x44] == '\0') {
        iVar6 = (**(code **)(*piVar11 + 4))();
        piVar11[2] = iVar6;
        if (iVar6 == 0) {
          piVar11[3] = 0x13;
        }
        *(undefined1 *)(piVar11 + 0x44) = 1;
      }
      piVar11 = piVar11 + 3;
      piVar12 = local_11c;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      if (local_11c[0] == 0x13) break;
      FUN_009a1440(local_690);
      local_688 = (undefined4 *)FUN_00aaf0c5(local_690 + 9);
      while( true ) {
        piVar11 = (int *)local_690[7];
        if ((char)piVar11[0x44] == '\0') {
          iVar6 = (**(code **)(*piVar11 + 4))();
          piVar11[2] = iVar6;
          if (iVar6 == 0) {
            piVar11[3] = 0x13;
          }
          *(undefined1 *)(piVar11 + 0x44) = 1;
        }
        piVar11 = piVar11 + 3;
        piVar12 = local_228;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar12 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar12 = piVar12 + 1;
        }
        if ((local_228[0] == 4) || (local_228[0] == 0x13)) break;
        FUN_009a1440(local_690);
        FUN_00954a40(local_4a0);
        local_c._0_1_ = 0xe;
        pcVar7 = (char *)(local_690 + 9);
        local_624 = 0xf;
        local_628 = 0;
        local_638[0] = local_638[0] & 0xffffff00;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(local_690 + 9,(int)pcVar7 - ((int)local_690 + 0x25));
        local_c = CONCAT31(local_c._1_3_,0xf);
        iVar6 = FUN_005c2ad0(local_638);
        if (iVar6 == 0) {
          iVar6 = FUN_0096bb70();
        }
        FUN_00955d90(iVar6);
        local_c._0_1_ = 0xe;
        if (0xf < local_624) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_638[0]);
        }
        (**(code **)(local_4a0[0] + 0xc))(local_690);
        piVar11 = *(int **)(DAT_012588e8[0x2b3] + (int)local_688 * 4);
        if (((iStack_438 != 0) && (*(int *)(iStack_438 + 0x30) != -1)) &&
           (*(int *)(iStack_438 + 0x30) < iStack_448)) {
          uStack_5bc = 0xf;
          uStack_5c0 = 0;
          uStack_5d0 = uStack_5d0 & 0xffffff00;
          FUN_00409350("history.cpp",0xb);
          local_c._0_1_ = 0x10;
          puVar5 = (undefined4 *)
                   (**(code **)(*piVar11 + 0x1c))
                             (&local_658,&DAT_00defdf4,piVar11[0x16],") size too big = ",iStack_448,
                              &DAT_00dedc68,*(undefined4 *)(iStack_438 + 0x30));
          puVar14 = &DAT_00df12c8;
          puStack_10._0_1_ = 0x11;
          FUN_0096d650(uStack_43c,&pppppppuStack_63c);
          puStack_10._0_1_ = 0x12;
          uVar8 = FUN_004015b0(auStack_5d4,0x3cc,0x10004,puVar14);
          puStack_10._0_1_ = 0x15;
          pppppppuVar4 = pppppppuStack_63c;
          if (local_628 < 0x10) {
            pppppppuVar4 = &pppppppuStack_63c;
          }
          local_690 = (undefined4 *)FUN_00418e30(uVar8,pppppppuVar4);
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x14);
          if (0xf < local_628) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(pppppppuStack_63c);
          }
          local_628 = 0xf;
          uStack_62c = 0;
          pppppppuStack_63c = (undefined4 *******)((uint)pppppppuStack_63c & 0xffffff00);
          uVar8 = FUN_00418e30(local_690);
          if (0xf < (uint)puVar5[5]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          uVar8 = FUN_00418e30(uVar8,puVar5,extraout_ECX);
          uVar8 = FUN_00418e30(uVar8);
          uVar8 = FUN_00455470(uVar8);
          uVar8 = FUN_00418e30(uVar8);
          uVar8 = FUN_00455470(uVar8);
          uVar8 = FUN_00418e30(uVar8);
          uVar8 = FUN_00455470(uVar8);
          FUN_00401280(uVar8);
          local_c._0_1_ = 0x11;
          FUN_00987ac0(appuStack_4e8);
          appuStack_4e8[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_4e8);
          if (0xf < local_644) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_658);
          }
          local_c._0_1_ = 0xe;
          local_644 = 0xf;
          uStack_648 = 0;
          local_658 = local_658 & 0xffffff00;
          if (0xf < uStack_5bc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(uStack_5d0);
          }
        }
        FUN_004b8e80(piVar11,local_4a0,1);
        local_c = CONCAT31(local_c._1_3_,8);
        FUN_00955ae0(local_4a0);
      }
      (**(code **)(*(int *)local_690[7] + 4))();
    }
    (**(code **)*local_690)(1);
    local_c._0_1_ = 3;
    if (0xf < local_5a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5b4[0]);
    }
    local_5a0 = 0xf;
    local_5a4 = 0;
    local_5b4[0] = local_5b4[0] & 0xffffff00;
  }
  local_694 = 1;
  local_688 = (undefined4 *)(**(code **)(*DAT_012588e8 + 0x18))();
  if (1 < (int)local_688) {
    do {
      if (*(char *)(*(int *)(*(int *)(DAT_012588e8[0x2b3] + local_694 * 4) + 0x5c) + 0x2a) != '\0')
      {
        iVar6 = 0;
        if (DAT_0131bb34 == 0) {
          iVar9 = FUN_00aae9af(0x188);
          local_c._0_1_ = 0x16;
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_0041a160();
          }
          iVar10 = DAT_0131bb34;
          local_c = CONCAT31(local_c._1_3_,0x17);
          if ((iVar9 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar10);
          }
          local_c._0_1_ = 3;
          DAT_0131bb34 = iVar9;
        }
        iVar9 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
        if (0 < iVar9) {
          iVar10 = 0;
          do {
            if (*(int *)(*(int *)(*(int *)(DAT_012588e8[0x2b3] + local_694 * 4) + 0x194) + 8 +
                        iVar10) != 0) goto LAB_005f29fb;
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 0x10;
          } while (iVar6 < iVar9);
        }
        local_670 = 0xf;
        local_674 = 0;
        local_684[0] = local_684[0] & 0xffffff00;
        FUN_00409350("history.cpp",0xb);
        local_c = CONCAT31(local_c._1_3_,0x18);
        puVar5 = (undefined4 *)
                 (**(code **)(**(int **)(DAT_012588e8[0x2b3] + local_694 * 4) + 0x1c))(&local_658);
        puStack_10._0_1_ = 0x19;
        uVar8 = FUN_004015b0(&local_688,1000,0x10004);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x1a);
        FUN_00987d50(uVar8,"No pops in province ",0x14,0);
        if (0xf < (uint)puVar5[5]) {
          puVar5 = (undefined4 *)*puVar5;
        }
        piVar11 = (int *)FUN_00418e30(uVar8,puVar5);
        FUN_00408be0(piVar11);
        uVar13 = 0;
        if (((*(byte *)(*(int *)(*piVar11 + 4) + 0xc + (int)piVar11) & 6) == 0) &&
           (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar11 + 4) + 0x38 + (int)piVar11) + 0x34))()
           , iVar6 == -1)) {
          uVar13 = 4;
        }
        if (uVar13 != 0) {
          uVar13 = *(uint *)((int)piVar11 + *(int *)(*piVar11 + 4) + 0xc) | uVar13;
          if (*(int *)((int)piVar11 + *(int *)(*piVar11 + 4) + 0x38) == 0) {
            uVar13 = uVar13 | 4;
          }
          FUN_00401120(uVar13,0);
        }
        local_c._0_1_ = 0x19;
        FUN_00987ac0(appuStack_4e8);
        appuStack_4e8[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_4e8);
        if (0xf < local_644) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_658);
        }
        local_c._0_1_ = 3;
        local_644 = 0xf;
        uStack_648 = 0;
        local_658 = local_658 & 0xffffff00;
        if (0xf < local_670) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_684[0]);
        }
        local_670 = 0xf;
        local_674 = 0;
        local_684[0] = local_684[0] & 0xffffff00;
      }
LAB_005f29fb:
      local_694 = local_694 + 1;
    } while (local_694 < (int)local_688);
  }
  puVar5 = local_668;
  if (local_668 == (undefined4 *)0x0) {
    if (0xf < local_5f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_608[0]);
    }
    ExceptionList = pvStack_14;
    return;
  }
  while( true ) {
    if (puVar5 == local_664) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_668);
    }
    if (0xf < (uint)puVar5[5]) break;
    puVar5[5] = 0xf;
    puVar5[4] = 0;
    *(undefined1 *)puVar5 = 0;
    puVar5 = puVar5 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar5);
}

