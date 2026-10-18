// FUN_00563100 @ 00563100 body=[[00563100, 0056319c] [005631a0, 00563224] [00563228, 00563246] [0056324a, 005632d0] [005632d4, 005632f2] [005632f6, 00563361] [00563365, 00563383] [00563387, 0056341e] [00563422, 00563440] [00563444, 0056354e] [00563552, 00563582] [00563586, 005635a4] [005635a8, 005635f9] [005635fd, 00563654] [00563658, 005636f9] [005636fd, 00563867] [0056386b, 0056389f] [005638a3, 005638be] [005638c2, 005638e0] [005638e4, 00563938] [0056393c, 005639f3] [005639f7, 00563ab5] [00563ab9, 00563b51] [00563b55, 00563b6e] [00563b72, 00563b8b] [00563b8f, 00563ba5] [00563ba9, 00563bbe]]


/* WARNING: Removing unreachable block (ram,0x00563a61) */

int FUN_00563100(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  int *in_ECX;
  undefined4 extraout_ECX;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uStack_c8;
  int iStack_c0;
  undefined4 local_b0 [5];
  uint local_9c;
  undefined4 local_94;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined1 local_6c [4];
  undefined4 *local_68;
  undefined4 *local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  int *local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined1 local_19;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b81368;
  local_10 = ExceptionList;
  local_8 = 0;
  local_94 = 0;
  iStack_c0 = param_1;
  uStack_c8 = CONCAT44(0x56313c,(int)uStack_c8);
  ExceptionList = &local_10;
  local_3c = in_ECX;
  (**(code **)(*in_ECX + 0x1c))();
  local_8 = 0;
  local_94 = 1;
  if (*(int *)(param_1 + 0x10) != 0) {
    uStack_c8 = 0x100dee2cc;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    FUN_00409350();
    uStack_c8 = 0xffffffff00000000;
    local_8 = 1;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_7c) {
      uStack_c8 = CONCAT44(local_90[0],&UNK_0056319d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
  }
  iVar4 = in_ECX[0x15];
  if (iVar4 != 0) {
    local_14 = (char *)&uStack_c8;
    uStack_c8._4_4_ = 0;
    uVar11 = __allmul(iVar4,iVar4 >> 0x1f,100000,0);
    uVar3 = __alldiv(uVar11,1000,0);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
    uVar3 = FUN_00988a50();
    uStack_c8 = CONCAT44(uVar3,local_38);
    local_8 = 2;
    FUN_0042c180();
    uStack_c8 = 0xffffffff00000000;
    local_8._0_1_ = 3;
    FUN_00448aa0();
    if (0xf < local_24) {
      uStack_c8 = CONCAT44(local_38[0],&UNK_00563225);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_44) {
      uStack_c8 = CONCAT44(local_58[0],&UNK_00563247);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_c8 = 0x100dee2cc;
    FUN_00448740();
  }
  iVar4 = in_ECX[0x16];
  if (iVar4 != 0) {
    local_14 = (char *)&uStack_c8;
    uStack_c8._4_4_ = 0;
    uVar11 = __allmul(iVar4,iVar4 >> 0x1f,100000,0);
    uVar3 = __alldiv(uVar11,1000,0);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
    uVar3 = FUN_00988a50();
    uStack_c8 = CONCAT44(uVar3,local_38);
    local_8 = 4;
    FUN_0042c180();
    uStack_c8 = 0xffffffff00000000;
    local_8._0_1_ = 5;
    FUN_00448aa0();
    if (0xf < local_24) {
      uStack_c8 = CONCAT44(local_38[0],&UNK_005632d1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_44) {
      uStack_c8 = CONCAT44(local_58[0],&UNK_005632f3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_c8 = 0x100dee2cc;
    FUN_00448740();
  }
  uStack_c8._0_4_ = 0;
  if (in_ECX[0x17] != 0) {
    local_14 = (char *)&uStack_c8;
    uStack_c8 = CONCAT44(2,in_ECX[0x17]);
    uVar3 = FUN_00988a50();
    uStack_c8 = CONCAT44(uVar3,local_38);
    local_8 = 6;
    FUN_0042c180();
    uStack_c8 = 0xffffffff00000000;
    local_8._0_1_ = 7;
    FUN_00448aa0();
    if (0xf < local_24) {
      uStack_c8 = CONCAT44(local_38[0],&UNK_00563362);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_44) {
      uStack_c8 = CONCAT44(local_58[0],&UNK_00563384);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_c8 = 0x100dee2cc;
    FUN_00448740();
    uStack_c8._0_4_ = extraout_ECX;
  }
  if (in_ECX[0x3b] != 0) {
    local_14 = (char *)&uStack_c8;
    uStack_c8._4_4_ = 3;
    FUN_00401000();
    iVar4 = FUN_00b31c00();
    uVar3 = __alldiv((longlong)iVar4 * (longlong)in_ECX[0x3b],1000,0);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
    uVar3 = FUN_00988a50();
    uStack_c8 = CONCAT44(uVar3,local_38);
    local_8 = 8;
    FUN_0042c180();
    uStack_c8 = 0xffffffff00000000;
    local_8._0_1_ = 9;
    FUN_00448aa0();
    if (0xf < local_24) {
      uStack_c8 = CONCAT44(local_38[0],&UNK_0056341f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_44) {
      uStack_c8 = CONCAT44(local_58[0],&UNK_00563441);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_c8 = 0x100dee2cc;
    FUN_00448740();
  }
  local_18 = 0;
  if (0 < (int)(in_ECX[0x20] - in_ECX[0x1f] & 0xfffffffcU)) {
    do {
      if (*(int *)(in_ECX[0x1f] + local_18 * 4) != 0) {
        uStack_c8 = 0x1100e0019c;
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        FUN_00409350();
        uStack_c8 = CONCAT44(local_38,local_6c);
        local_8 = 10;
        FUN_009a8ee0();
        local_8._0_1_ = 0xb;
        puVar5 = DAT_0125b5e0;
        if (DAT_0125b5e0 == (undefined4 *)0x0) {
          uStack_c8 = 0x180005634cc;
          local_14 = (char *)FUN_00aae9af();
          local_8._0_1_ = 0xc;
          if (local_14 == (char *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            uStack_c8 = CONCAT44(local_14,0x5634e0);
            puVar5 = (undefined4 *)FUN_00475150();
          }
          local_8._0_1_ = 0xd;
          local_14 = (undefined1 *)0x0;
          if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
            uStack_c8 = 0x100563503;
            (**(code **)*DAT_0125b5e0)();
          }
        }
        DAT_0125b5e0 = puVar5;
        local_8._0_1_ = 0xb;
        uStack_c8 = *(undefined8 *)(DAT_0125b5e0 + 0x1d);
        FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
        uStack_c8 = 0xffffffff00000000;
        local_8._0_1_ = 0xe;
        FUN_00448aa0();
        if (0xf < local_44) {
          uStack_c8 = CONCAT44(local_58[0],&UNK_0056354f);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        local_8._0_1_ = 0xf;
        uStack_c8 = CONCAT44(0x56356b,(int)uStack_c8);
        FUN_009adb70();
        if (local_68 != (undefined4 *)0x0) {
          uStack_c8 = CONCAT44(0x56357a,(int)uStack_c8);
          FUN_009e6a80();
          uStack_c8 = CONCAT44(local_68,&UNK_00563583);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_68 = (undefined4 *)0x0;
        local_64 = (undefined4 *)0x0;
        local_60 = 0;
        if (0xf < local_24) {
          uStack_c8 = CONCAT44(local_38[0],&UNK_005635a5);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (DAT_0131bb34 == 0) {
          uStack_c8 = 0x188005635bb;
          local_14 = (char *)FUN_00aae9af();
          local_8 = 0x10;
          if (local_14 == (char *)0x0) {
            iVar4 = 0;
          }
          else {
            uStack_c8 = CONCAT44(0x5635cf,(int)uStack_c8);
            iVar4 = FUN_0041a160();
          }
          iVar8 = DAT_0131bb34;
          local_8 = 0x11;
          local_14 = (undefined1 *)0x0;
          if ((iVar4 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            uStack_c8 = CONCAT44(DAT_0131bb34,0x5635f4);
            FUN_0096dd80();
            uStack_c8 = CONCAT44(iVar8,&UNK_005635fa);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = 0;
          DAT_0131bb34 = iVar4;
        }
        iVar4 = local_18;
        if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < local_18) {
          uStack_c8 = CONCAT44(0x56361c,(int)uStack_c8);
          uVar3 = FUN_0096bb70();
        }
        else {
          uVar3 = *(undefined4 *)(*(int *)(DAT_0131bb34 + 0xc) + local_18 * 4);
        }
        uStack_c8 = CONCAT44(local_58,uVar3);
        FUN_0096d650();
        local_8 = 0x12;
        uStack_c8 = 0xffffffff00000000;
        FUN_00448aa0();
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_44) {
          uStack_c8 = CONCAT44(local_58[0],&UNK_00563655);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_c8 = 0x400dfc940;
        FUN_00448740();
        pcVar9 = "+";
        if (*(int *)(local_3c[0x1f] + iVar4 * 4) < 1) {
          pcVar9 = "";
        }
        pcVar6 = pcVar9;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        uStack_c8 = CONCAT44((int)pcVar6 - (int)(pcVar9 + 1),pcVar9);
        FUN_00448740();
        uStack_c8._0_4_ = local_18 * 4;
        local_14 = (char *)&uStack_c8;
        uStack_c8._4_4_ = 0;
        uVar11 = __allmul(*(int *)(local_3c[0x1f] + (int)uStack_c8),
                          *(int *)(local_3c[0x1f] + (int)uStack_c8) >> 0x1f,100000,0);
        uVar3 = __alldiv(uVar11,1000,0);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
        FUN_00988a50();
        uStack_c8 = 0xffffffff00000000;
        local_8 = 0x13;
        FUN_00448aa0();
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_44) {
          uStack_c8 = CONCAT44(local_58[0],&UNK_005636fa);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_c8 = 0x400dfe9b4;
        FUN_00448740();
        in_ECX = local_3c;
      }
      local_18 = local_18 + 1;
    } while (local_18 < in_ECX[0x20] - in_ECX[0x1f] >> 2);
  }
  iVar8 = 1;
  iVar4 = in_ECX[0x36] - in_ECX[0x35] >> 3;
  if (1 < iVar4) {
    piVar1 = (int *)in_ECX[0x35];
    do {
      if (piVar1[2] != 0 || piVar1[3] != 0) {
        local_18 = 0;
        iVar4 = DAT_012587f0;
        if (0 < (int)(*(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) & 0xfffffffcU)) {
          do {
            piVar1 = (int *)(in_ECX[0x35] + (uint)*(byte *)(local_18 + 0x94 + (int)in_ECX) * 8);
            if (*piVar1 != 0 || piVar1[1] != 0) {
              uStack_c8 = 0x1100e0019c;
              local_24 = 0xf;
              local_28 = 0;
              local_38[0] = local_38[0] & 0xffffff00;
              FUN_00409350();
              uStack_c8 = CONCAT44(local_38,local_6c);
              local_8 = 0x14;
              FUN_009a8ee0();
              local_8._0_1_ = 0x15;
              puVar5 = DAT_0125b5e0;
              if (DAT_0125b5e0 == (undefined4 *)0x0) {
                uStack_c8 = 0x180005637e5;
                local_14 = (char *)FUN_00aae9af();
                local_8._0_1_ = 0x16;
                if (local_14 == (char *)0x0) {
                  puVar5 = (undefined4 *)0x0;
                }
                else {
                  uStack_c8 = CONCAT44(local_14,0x5637f9);
                  puVar5 = (undefined4 *)FUN_00475150();
                }
                local_8._0_1_ = 0x17;
                local_14 = (undefined1 *)0x0;
                if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
                  uStack_c8 = 0x10056381c;
                  (**(code **)*DAT_0125b5e0)();
                }
              }
              DAT_0125b5e0 = puVar5;
              local_8._0_1_ = 0x15;
              uStack_c8 = *(undefined8 *)(DAT_0125b5e0 + 0x1d);
              FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
              uStack_c8 = 0xffffffff00000000;
              local_8._0_1_ = 0x18;
              FUN_00448aa0();
              if (0xf < local_44) {
                uStack_c8 = CONCAT44(local_58[0],&UNK_00563868);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_44 = 0xf;
              local_48 = 0;
              local_58[0] = local_58[0] & 0xffffff00;
              local_8._0_1_ = 0x19;
              uStack_c8 = CONCAT44(0x563884,(int)uStack_c8);
              FUN_009adb70();
              puVar5 = local_68;
              if (local_68 != (undefined4 *)0x0) {
                while( true ) {
                  if (puVar5 == local_64) {
                    uStack_c8 = CONCAT44(local_68,&UNK_005638bf);
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                  if (0xf < (uint)puVar5[5]) break;
                  puVar5[5] = 0xf;
                  puVar5[4] = 0;
                  *(undefined1 *)puVar5 = 0;
                  puVar5 = puVar5 + 8;
                }
                uStack_c8 = CONCAT44(*puVar5,&UNK_005638a0);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_8 = (uint)local_8._1_3_ << 8;
              local_68 = (undefined4 *)0x0;
              local_64 = (undefined4 *)0x0;
              local_60 = 0;
              if (0xf < local_24) {
                uStack_c8 = CONCAT44(local_38[0],&UNK_005638e1);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_24 = 0xf;
              local_28 = 0;
              local_38[0] = local_38[0] & 0xffffff00;
              uStack_c8 = CONCAT44(local_b0,*(undefined4 *)
                                             (*(int *)(DAT_012587f0 + 0xc) + local_18 * 4));
              FUN_005659c0();
              local_8 = 0x1a;
              uStack_c8 = 0xffffffff00000000;
              FUN_00448aa0();
              local_8 = local_8 & 0xffffff00;
              if (0xf < local_9c) {
                uStack_c8 = CONCAT44(local_b0[0],&UNK_00563939);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_c8 = 0x400dfc940;
              FUN_00448740();
              piVar1 = local_3c;
              uVar7 = (uint)*(byte *)((int)local_3c + local_18 + 0x94);
              iVar4 = *(int *)(local_3c[0x35] + 4 + uVar7 * 8);
              if ((iVar4 < 0) || ((iVar4 < 1 && (*(int *)(local_3c[0x35] + uVar7 * 8) == 0)))) {
                pcVar9 = "";
              }
              else {
                pcVar9 = "+";
              }
              local_14 = pcVar9 + 1;
              pcVar6 = pcVar9;
              do {
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              uStack_c8 = CONCAT44((int)pcVar6 - (int)local_14,pcVar9);
              FUN_00448740();
              local_14 = (char *)&uStack_c8;
              uStack_c8 = *(undefined8 *)
                           (piVar1[0x35] + (uint)*(byte *)((int)piVar1 + local_18 + 0x94) * 8);
              FUN_00988bb0(local_b0,0);
              uStack_c8 = 0xffffffff00000000;
              local_8 = 0x1b;
              FUN_00448aa0();
              local_8 = local_8 & 0xffffff00;
              if (0xf < local_9c) {
                uStack_c8 = CONCAT44(local_b0[0],&UNK_005639f4);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_c8 = 0x400dfe9b4;
              FUN_00448740();
              in_ECX = local_3c;
              iVar4 = DAT_012587f0;
            }
            local_18 = local_18 + 1;
          } while (local_18 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2);
        }
        break;
      }
      iVar8 = iVar8 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar8 < iVar4);
  }
  uStack_c8 = 0xded94d;
  local_60 = 0xf;
  local_64 = (undefined4 *)0x0;
  local_74 = local_74 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x1c;
  uVar7 = in_ECX[0x41];
  puVar5 = local_64;
  if (uVar7 < local_64) {
    puVar5 = (undefined4 *)uVar7;
  }
  uStack_c8 = CONCAT44(puVar5,0x563a7d);
  iVar4 = FUN_00414bd0();
  bVar10 = false;
  if (iVar4 == 0) {
    if (uVar7 < local_64) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uint)((undefined4 *)uVar7 != local_64);
    }
    bVar10 = uVar7 == 0;
  }
  local_19 = !bVar10;
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_60) {
    uStack_c8 = CONCAT44(local_74,&UNK_00563ab6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((bool)local_19) {
    uStack_c8 = 0x100dee2cc;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350();
    local_14 = (char *)&uStack_c8;
    local_8 = 0x1d;
    uStack_c8 = CONCAT44(4,in_ECX[0x44]);
    uVar3 = FUN_00988a50();
    uStack_c8 = CONCAT44(uVar3,local_90);
    local_8._0_1_ = 0x1e;
    FUN_0042c180();
    local_8._0_1_ = 0x1f;
    uStack_c8 = CONCAT44(local_38,0x563b2f);
    FUN_00988f20();
    uStack_c8 = 0xffffffff00000000;
    local_8 = CONCAT31(local_8._1_3_,0x20);
    FUN_00448aa0();
    if (0xf < local_44) {
      uStack_c8 = CONCAT44(local_58[0],&UNK_00563b52);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_7c) {
      uStack_c8 = CONCAT44(local_90[0],&UNK_00563b6f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < local_60) {
      uStack_c8 = CONCAT44(local_74,&UNK_00563b8c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = (undefined4 *)0x0;
    local_74 = local_74 & 0xffffff00;
    if (0xf < local_24) {
      uStack_c8 = CONCAT44(local_38[0],&UNK_00563ba6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

