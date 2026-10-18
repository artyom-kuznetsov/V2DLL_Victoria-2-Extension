// FUN_007aa890 @ 007aa890 body=[[007aa890, 007aaa5d] [007aaa61, 007aab12] [007aab16, 007aab36] [007aab3a, 007aaede] [007aaee2, 007aaf3d] [007aaf41, 007ab625] [007ab629, 007ab645] [007ab649, 007ab663] [007ab667, 007ab6fd] [007ab701, 007ab71b] [007ab71f, 007ab742] [007ab746, 007ab878] [007ab87c, 007ab8b8] [007ab8bc, 007ab8df] [007ab8e3, 007aba6c] [007aba70, 007aba8d] [007aba91, 007abad7] [007abadb, 007abb0e] [007abb12, 007abb8e] [007abb92, 007abbaf] [007abbb3, 007abc4f] [007abc53, 007abc6d] [007abc71, 007abc8e] [007abc92, 007abcbc]]


undefined1 * FUN_007aa890(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *in_ECX;
  char *pcVar12;
  int iVar13;
  bool bVar14;
  uint *puStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 local_188 [28];
  undefined1 local_16c [28];
  undefined1 local_150 [8];
  undefined4 local_148;
  undefined4 local_144;
  uint local_108 [7];
  uint local_ec [2];
  undefined1 local_e4 [4];
  int local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined1 local_d0 [16];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b4 [16];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined4 local_58;
  undefined4 *local_54;
  uint local_50 [5];
  uint local_3c;
  int local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00ba0e74;
  local_10 = ExceptionList;
  local_54 = (undefined4 *)0x0;
  local_bc = 0xf;
  local_a0 = 0xf;
  local_84 = 0xf;
  local_c0 = 0;
  local_d0[0] = 0;
  local_a4 = 0;
  local_b4[0] = 0;
  local_88 = 0;
  local_98[0] = 0;
  local_7c = 0;
  local_78 = 1;
  local_8 = 0;
  local_58 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_34 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  uStack_1b8 = CONCAT44(0x7aa92c,(uint *)uStack_1b8);
  ExceptionList = &local_10;
  local_14 = in_ECX;
  pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar12 = "start";
  do {
    bVar1 = *pbVar3;
    bVar14 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_007aa960:
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_007aa965;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar14 = bVar1 < (byte)pcVar12[1];
    if (bVar1 != pcVar12[1]) goto LAB_007aa960;
    pbVar3 = pbVar3 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_007aa965:
  if (iVar4 == 0) {
    iVar4 = *(int *)(local_34 + 0x4c4);
    if (iVar4 != 0) {
      do {
        piVar6 = (int *)(iVar4 + 0x24);
        iVar4 = *(int *)(iVar4 + 0x2c);
        if ((int *)*piVar6 == (int *)in_ECX[0x17]) {
          uStack_1b8 = CONCAT44(local_50,0x7aaa1d);
          uVar5 = (**(code **)(*(int *)in_ECX[0x17] + 0x18))();
          uStack_1b8 = CONCAT44(uVar5,local_74);
          local_8._0_1_ = 1;
          uStack_1c0 = CONCAT44(0x7aaa35,(undefined4)uStack_1c0);
          uVar5 = FUN_0042c180();
          uStack_1b8 = 0xffffffff00000000;
          local_8 = CONCAT31(local_8._1_3_,2);
          uStack_1c0 = CONCAT44(uVar5,0x7aaa4b);
          FUN_00408ed0();
          if (0xf < local_60) {
            uStack_1b8 = CONCAT44(local_74[0],&UNK_007aaa5e);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_60 = 0xf;
          local_64 = 0;
          local_74[0] = local_74[0] & 0xffffff00;
          goto LAB_007aaa6e;
        }
      } while (iVar4 != 0);
    }
    iVar4 = in_ECX[0x17];
    if ((iVar4 == 0) ||
       (*(int *)(*(int *)(*(int *)(local_34 + 0xbcc) + 0x2b8) + *(int *)(iVar4 + 0x2e4) * 4) == 0))
    {
      if (*(char *)(local_34 + 0x12d0) == '\0') {
        uStack_1b8 = CONCAT44(0x7aaa9c,(uint *)uStack_1b8);
        FUN_009885d0();
        uStack_1b8 = CONCAT44(local_50,local_e4);
        local_8._0_1_ = 5;
        uStack_1c0 = CONCAT44(0x7aaaaf,(undefined4)uStack_1c0);
        FUN_009a8ee0();
        local_8._0_1_ = 6;
        uStack_1b8 = CONCAT44(0x7aaaba,(uint *)uStack_1b8);
        iVar4 = FUN_00475500();
        uStack_1c0 = *(undefined8 *)(iVar4 + 0x6c);
        uStack_1b8 = *(undefined8 *)(iVar4 + 0x74);
        puStack_1c4 = (uint *)0x7aaadc;
        uVar5 = FUN_009a9880();
        local_8._0_1_ = 7;
        uStack_1b8 = CONCAT44(uVar5,0x7aaaee);
        uVar5 = FUN_00988fa0();
        uStack_1b8 = 0xffffffff00000000;
        local_8._0_1_ = 8;
        uStack_1c0 = CONCAT44(uVar5,0x7aab04);
        FUN_00448aa0();
        if (0xf < local_60) {
          uStack_1b8 = CONCAT44(local_74[0],&UNK_007aab13);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_60 = 0xf;
        local_64 = 0;
        local_74[0] = local_74[0] & 0xffffff00;
        if (0xf < local_1c) {
          uStack_1b8 = CONCAT44(local_30[0],&UNK_007aab37);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        local_8._0_1_ = 5;
        uStack_1b8 = CONCAT44(local_e4,0x7aab53);
        FUN_009a9740();
        goto LAB_007abb04;
      }
      if (iVar4 == 0) {
LAB_007aac1a:
        piVar6 = local_14;
        if (local_14[0x17] == 0) goto LAB_007aad67;
        uStack_1b8 = CONCAT44(local_30,0x7aac36);
        uVar5 = (**(code **)(*(int *)local_14[0x17] + 0x18))();
        uStack_1b8 = CONCAT44(uVar5,local_50);
        local_8._0_1_ = 0xc;
        uStack_1c0 = CONCAT44(0x7aac4e,(undefined4)uStack_1c0);
        uVar5 = FUN_0042c180();
        uStack_1b8 = 0xffffffff00000000;
        local_8._0_1_ = 0xd;
        uStack_1c0 = CONCAT44(uVar5,0x7aac64);
        FUN_00408ed0();
        uStack_1b8 = CONCAT44(0x7aac6c,(uint *)uStack_1b8);
        FUN_00408ad0();
        local_8._0_1_ = 0;
        uStack_1b8 = CONCAT44(0x7aac77,(uint *)uStack_1b8);
        FUN_00408ad0();
        uStack_1b8 = 0x100dee2cc;
        uStack_1c0 = CONCAT44(0x7aac89,(undefined4)uStack_1c0);
        FUN_00448740();
        uStack_1b8 = CONCAT44(piVar6[0x17],local_50);
        uStack_1c0 = CONCAT44(*(undefined4 *)(local_34 + 0xbcc),0x7aaca0);
        uVar5 = FUN_005699b0();
        local_8._0_1_ = 0xe;
      }
      else {
        uStack_1b8 = CONCAT44(0x7aab74,(uint *)uStack_1b8);
        cVar2 = FUN_00569920();
        piVar6 = local_14;
        if (cVar2 == '\0') goto LAB_007aac1a;
        uStack_1b8 = CONCAT44(local_30,0x7aab8d);
        uVar5 = (**(code **)(*(int *)local_14[0x17] + 0x18))();
        uStack_1b8 = CONCAT44(uVar5,local_50);
        local_8._0_1_ = 9;
        uStack_1c0 = CONCAT44(0x7aaba5,(undefined4)uStack_1c0);
        uVar5 = FUN_0042c180();
        uStack_1b8 = 0xffffffff00000000;
        local_8._0_1_ = 10;
        uStack_1c0 = CONCAT44(uVar5,0x7aabbb);
        FUN_00408ed0();
        uStack_1b8 = CONCAT44(0x7aabc3,(uint *)uStack_1b8);
        FUN_00408ad0();
        local_8._0_1_ = 0;
        uStack_1b8 = CONCAT44(0x7aabce,(uint *)uStack_1b8);
        FUN_00408ad0();
        uStack_1b8 = 0x100dee2cc;
        uStack_1c0 = CONCAT44(0x7aabe0,(undefined4)uStack_1c0);
        FUN_00448740();
        uStack_1b8 = CONCAT44(piVar6[0x17],local_50);
        uStack_1c0 = CONCAT44(*(undefined4 *)(local_34 + 0xbcc),0x7aabf7);
        uVar5 = FUN_005699b0();
        local_8._0_1_ = 0xb;
      }
      uStack_1b8 = 0xffffffff00000000;
      uStack_1c0 = CONCAT44(uVar5,0x7aac0a);
      FUN_00448aa0();
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_1b8 = CONCAT44(0x7aac15,(uint *)uStack_1b8);
      FUN_00408ad0();
    }
    else {
      uStack_1b8 = CONCAT44(local_30,0x7aa9ca);
      uVar5 = (**(code **)(*(int *)local_14[0x17] + 0x18))();
      uStack_1b8 = CONCAT44(uVar5,local_50);
      local_8._0_1_ = 3;
      uStack_1c0 = CONCAT44(0x7aa9e2,(undefined4)uStack_1c0);
      uVar5 = FUN_0042c180();
      uStack_1b8 = 0xffffffff00000000;
      local_8._0_1_ = 4;
      uStack_1c0 = CONCAT44(uVar5,0x7aa9f8);
      FUN_00408ed0();
      uStack_1b8 = CONCAT44(0x7aaa00,(uint *)uStack_1b8);
      FUN_00408ad0();
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_1b8 = CONCAT44(0x7aaa0b,(uint *)uStack_1b8);
      FUN_00408ad0();
    }
  }
  else {
    uStack_1b8 = CONCAT44(0x7aacb5,(uint *)uStack_1b8);
    pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pcVar12 = "invention_icon";
    do {
      bVar1 = *pbVar3;
      bVar14 = bVar1 < (byte)*pcVar12;
      if (bVar1 != *pcVar12) {
LAB_007aace2:
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_007aace7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar14 = bVar1 < (byte)pcVar12[1];
      if (bVar1 != pcVar12[1]) goto LAB_007aace2;
      pbVar3 = pbVar3 + 2;
      pcVar12 = pcVar12 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_007aace7:
    if (iVar4 != 0) {
      uStack_1b8 = CONCAT44(0x7aacf8,(uint *)uStack_1b8);
      (**(code **)(*param_2 + 0x44))();
      uStack_1b8 = CONCAT44(0x7aad02,(uint *)uStack_1b8);
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        uStack_1b8 = CONCAT44(0x7aad13,(uint *)uStack_1b8);
        (**(code **)(*param_2 + 0x44))();
        uStack_1b8 = CONCAT44(0x7aad1d,(uint *)uStack_1b8);
        cVar2 = FUN_0040b360();
        if ((cVar2 != '\0') && (local_14[0x17] != 0)) {
          uStack_1b8 = *(undefined8 *)(DAT_012588e8 + 0xb5c);
          uStack_1c0 = CONCAT44(local_50,local_14[0x17]);
          puStack_1c4 = (uint *)0x7aad49;
          uVar5 = FUN_0057a690();
          uStack_1b8 = 0xffffffff00000000;
          local_8._0_1_ = 0x1a;
          uStack_1c0 = CONCAT44(uVar5,0x7aad5c);
          FUN_00408ed0();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_1b8 = CONCAT44(0x7aad67,(uint *)uStack_1b8);
          FUN_00408ad0();
        }
LAB_007aad67:
        iVar4 = (local_14[0x3b] - local_14[0x3a]) / 0x24;
        iVar13 = 0;
        if (0 < iVar4) {
          local_54 = (undefined4 *)0x0;
          do {
            uStack_1b8 = CONCAT44(param_2,0x7aadb1);
            cVar2 = (**(code **)(*(int *)(*(int *)((int)local_54 + local_14[0x3a]) + 0x18) + 0x94))
                              ();
            if (cVar2 != '\0') {
              uStack_1b8 = CONCAT44(param_2,param_1);
              uStack_1c0 = CONCAT44(local_14[0x3a] + iVar13 * 0x24,0x7aae6c);
              FUN_007a9950();
              uStack_1b8 = CONCAT44(0x7aae77,(uint *)uStack_1b8);
              FUN_00459820();
              ExceptionList = local_10;
              return param_1;
            }
            local_54 = local_54 + 9;
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar4);
        }
        iVar13 = 0;
        iVar4 = local_14[0x3f] - local_14[0x3e] >> 2;
        if (0 < iVar4) {
LAB_007aade0:
          uStack_1b8 = CONCAT44(param_2,0x7aadfe);
          cVar2 = (**(code **)(*(int *)(*(int *)(local_14[0x3e] + iVar13 * 4) + 0x18) + 0x94))();
          if (cVar2 == '\0') goto code_r0x007aae06;
          if (DAT_0125eadc == 0) {
            uStack_1b8 = 0x9c007aae9f;
            iVar4 = FUN_00aae9af();
            local_8._0_1_ = 0x1b;
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              uStack_1b8 = CONCAT44(iVar4,0x7aaeb3);
              iVar4 = FUN_00576fe0();
            }
            iVar8 = DAT_0125eadc;
            local_8 = CONCAT31(local_8._1_3_,0x1c);
            local_54 = (undefined4 *)0x0;
            if ((iVar4 != DAT_0125eadc) && (DAT_0125eadc != 0)) {
              uStack_1b8 = CONCAT44(DAT_0125eadc,0x7aaed6);
              FUN_00576d10();
              uStack_1b8 = CONCAT44(iVar8,&UNK_007aaedf);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_8 = (uint)local_8._1_3_ << 8;
            DAT_0125eadc = iVar4;
          }
          uStack_1b8 = CONCAT44(local_50,0x7aaefd);
          uVar5 = (**(code **)**(undefined4 **)(*(int *)(DAT_0125eadc + 0x38) + 4 + iVar13 * 4))();
          uStack_1b8 = CONCAT44(uVar5,local_30);
          local_8._0_1_ = 0x1d;
          uStack_1c0 = CONCAT44(0x7aaf15,(undefined4)uStack_1c0);
          uVar5 = FUN_0042c180();
          uStack_1b8 = 0xffffffff00000000;
          local_8 = CONCAT31(local_8._1_3_,0x1e);
          uStack_1c0 = CONCAT44(uVar5,0x7aaf2b);
          FUN_00408ed0();
          if (0xf < local_1c) {
            uStack_1b8 = CONCAT44(local_30[0],&UNK_007aaf3e);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
LAB_007aaa6e:
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_3c) {
            uStack_1b8._4_4_ = (uint *)local_50[0];
            goto LAB_007abb0a;
          }
          goto LAB_007abb12;
        }
LAB_007aae0b:
        uStack_1b8 = CONCAT44(0x7aae17,(uint *)uStack_1b8);
        pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar3 = *(byte **)pbVar3;
        }
        pcVar12 = "research_progress";
        do {
          bVar1 = *pbVar3;
          bVar14 = bVar1 < (byte)*pcVar12;
          if (bVar1 != *pcVar12) {
LAB_007aaf53:
            iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_007aaf58;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar14 = bVar1 < (byte)pcVar12[1];
          if (bVar1 != pcVar12[1]) goto LAB_007aaf53;
          pbVar3 = pbVar3 + 2;
          pcVar12 = pcVar12 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_007aaf58:
        if (iVar4 != 0) {
          uStack_1b8 = CONCAT44(0x7aaf69,(uint *)uStack_1b8);
          pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
          if (0xf < *(uint *)(pbVar3 + 0x14)) {
            pbVar3 = *(byte **)pbVar3;
          }
          pcVar12 = "research_progress_name";
          do {
            bVar1 = *pbVar3;
            bVar14 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_007aaf96:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_007aaf9b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar14 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_007aaf96;
            pbVar3 = pbVar3 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_007aaf9b:
          if (iVar4 != 0) {
            uStack_1b8 = CONCAT44(0x7aafac,(uint *)uStack_1b8);
            pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
            if (0xf < *(uint *)(pbVar3 + 0x14)) {
              pbVar3 = *(byte **)pbVar3;
            }
            pcVar12 = "research_progress_category";
            do {
              bVar1 = *pbVar3;
              bVar14 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_007aafe0:
                iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_007aafe5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar14 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_007aafe0;
              pbVar3 = pbVar3 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_007aafe5:
            if (iVar4 != 0) {
              uStack_1b8 = CONCAT44(0x7aaff6,(uint *)uStack_1b8);
              uVar5 = (**(code **)(*param_2 + 0x44))();
              uStack_1b8 = 0x700e17d50;
              uStack_1c0 = CONCAT44(uVar5,0x7ab005);
              iVar4 = FUN_005484e0();
              if (iVar4 == -1) {
LAB_007ab1f4:
                piVar6 = param_2 + 5;
                uStack_1b8 = 0x1200e17a98;
                uStack_1c0 = CONCAT44(piVar6,0x7ab209);
                local_14 = piVar6;
                iVar4 = FUN_005484e0();
                if (iVar4 != -1) {
                  uStack_1b8 = CONCAT44(0x7ab225,(uint *)uStack_1b8);
                  FUN_009885d0();
                  local_8._0_1_ = 0x37;
                  uStack_1b8 = CONCAT44(0x7ab22e,(uint *)uStack_1b8);
                  FUN_00576f80();
                  uStack_1b8 = CONCAT44(local_30,0x7ab239);
                  piVar6 = (int *)FUN_005661b0();
                  uStack_1b8 = 0x7ab247;
                  FUN_008a8650();
                  local_148 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                  local_144 = *(undefined4 *)(DAT_012588e8 + 0xb60);
                  uStack_1b8 = CONCAT44(0x7ab26e,(uint *)uStack_1b8);
                  (**(code **)(*param_2 + 0x44))();
                  uStack_1b8 = CONCAT44(0x7ab278,(uint *)uStack_1b8);
                  cVar2 = FUN_0040b360();
                  if (cVar2 != '\0') {
                    uStack_1b8 = CONCAT44(local_50,0x7ab292);
                    uVar5 = (**(code **)**(undefined4 **)(piVar6[0x10c] + 0x310))();
                    uStack_1b8 = 0xffffffff00000000;
                    local_8._0_1_ = 0x38;
                    uStack_1c0 = CONCAT44(uVar5,0x7ab2a5);
                    FUN_00408ed0();
                    local_8 = CONCAT31(local_8._1_3_,0x37);
                    uStack_1b8 = CONCAT44(0x7ab2b1,(uint *)uStack_1b8);
                    FUN_00408ad0();
                    uStack_1b8 = CONCAT44(param_1,0x7ab2c0);
                    FUN_0040c830();
                    uStack_1b8 = CONCAT44(0x7ab2c7,(uint *)uStack_1b8);
                    FUN_00408ad0();
                    goto LAB_007abb21;
                  }
                  uStack_1b8 = CONCAT44(0x7ab2d6,(uint *)uStack_1b8);
                  (**(code **)(*param_2 + 0x44))();
                  uStack_1b8 = CONCAT44(0x7ab2e0,(uint *)uStack_1b8);
                  cVar2 = FUN_0040b360();
                  if (cVar2 == '\0') {
                    uStack_1b8 = CONCAT44(0x7ab489,(uint *)uStack_1b8);
                    uVar5 = FUN_00562540();
                    uStack_1b8 = 0xffffffff00000000;
                    local_8._0_1_ = 0x42;
                    uStack_1c0 = CONCAT44(uVar5,0x7ab49c);
                    FUN_00408ed0();
                    local_8 = CONCAT31(local_8._1_3_,0x37);
                    uStack_1b8 = CONCAT44(0x7ab4a7,(uint *)uStack_1b8);
                    FUN_00408ad0();
                    uStack_1b8 = CONCAT44(param_1,0x7ab4b6);
                    FUN_0040c830();
                    uStack_1b8 = CONCAT44(0x7ab4be,(uint *)uStack_1b8);
                    FUN_00408ad0();
                    goto LAB_007abb21;
                  }
                  uStack_1b8 = CONCAT44(0x7ab2f8,(uint *)uStack_1b8);
                  local_54 = (undefined4 *)FUN_009885d0();
                  local_8._0_1_ = 0x39;
                  uStack_1b8._4_4_ = (uint *)local_188;
                  uStack_1b8._0_4_ = (uint *)0x7ab30f;
                  uVar5 = (**(code **)(*piVar6 + 0x18))();
                  local_8._0_1_ = 0x3a;
                  uStack_1b8._0_4_ = (uint *)0x7ab326;
                  FUN_009885d0();
                  local_8._0_1_ = 0x3b;
                  uStack_1c0 = CONCAT44(0x7ab33b,(undefined4)uStack_1c0);
                  uStack_1b8._0_4_ = (uint *)uVar5;
                  FUN_00988f20();
                  local_8._0_1_ = 0x3c;
                  uStack_1b8._0_4_ = local_54;
                  uStack_1c0 = CONCAT44(0x7ab34d,(undefined4)uStack_1c0);
                  uVar7 = FUN_00988f20();
                  uStack_1b8._0_4_ = (uint *)0xffffffff;
                  uStack_1c0 = (ulonglong)uVar7;
                  local_8._0_1_ = 0x3d;
                  puStack_1c4 = (uint *)0x7ab360;
                  FUN_00448aa0();
                  uStack_1b8._0_4_ = (uint *)0x7ab367;
                  FUN_00408ad0();
                  uStack_1b8._0_4_ = (uint *)0x7ab372;
                  FUN_00408ad0();
                  uStack_1b8._0_4_ = (uint *)0x7ab37d;
                  FUN_00408ad0();
                  uStack_1b8._0_4_ = (uint *)0x7ab388;
                  FUN_00408ad0();
                  local_8._0_1_ = 0x37;
                  uStack_1b8._0_4_ = (uint *)0x7ab397;
                  FUN_00408ad0();
                  uStack_1b8._0_4_ = (uint *)0x7ab3a7;
                  FUN_00989030();
                  uStack_1b8 = CONCAT44(uStack_1b8._4_4_,local_108);
                  uStack_1c0 = CONCAT44(0x7ab3b7,(undefined4)uStack_1c0);
                  uVar5 = (**(code **)(*piVar6 + 0x1c))();
                  uStack_1b8 = 0xffffffff00000000;
                  local_8._0_1_ = 0x3e;
                  uStack_1c0 = CONCAT44(uVar5,0x7ab3c6);
                  FUN_00448aa0();
                  local_8._0_1_ = 0x37;
                  uStack_1b8 = CONCAT44(0x7ab3d5,(uint *)uStack_1b8);
                  FUN_00408ad0();
                  uStack_1b8 = CONCAT44(0x7ab3df,(uint *)uStack_1b8);
                  FUN_00989030();
                  uStack_1b8 = CONCAT44(0x7ab3ec,(uint *)uStack_1b8);
                  FUN_009885d0();
                  uStack_1b8 = ZEXT48(&local_148);
                  local_8._0_1_ = 0x3f;
                  uStack_1c0 = CONCAT44(local_16c,piVar6);
                  puStack_1c4 = (uint *)0x7ab405;
                  FUN_00562570();
                  local_8._0_1_ = 0x40;
                  uStack_1b8 = CONCAT44(local_50,0x7ab419);
                  uVar5 = FUN_00988f20();
                  uStack_1b8 = 0xffffffff00000000;
                  local_8._0_1_ = 0x41;
                  uStack_1c0 = CONCAT44(uVar5,0x7ab42c);
                  FUN_00448aa0();
                  uStack_1b8 = CONCAT44(0x7ab433,(uint *)uStack_1b8);
                  FUN_00408ad0();
                  uStack_1b8 = CONCAT44(0x7ab43e,(uint *)uStack_1b8);
                  FUN_00408ad0();
                  uStack_1b8 = CONCAT44(0x7ab446,(uint *)uStack_1b8);
                  FUN_00408ad0();
                  local_8 = (uint)local_8._1_3_ << 8;
                  uStack_1b8 = CONCAT44(0x7ab451,(uint *)uStack_1b8);
                  FUN_00408ad0();
                  piVar6 = local_14;
                }
                uStack_1b8 = 0xf00e17aac;
                uStack_1c0 = CONCAT44(piVar6,0x7ab463);
                iVar4 = FUN_005484e0();
                if (iVar4 != -1) {
                  if (0xf < (uint)piVar6[5]) {
                    piVar6 = (int *)*piVar6;
                  }
                  uStack_1b8 = CONCAT44((int)piVar6 + 0xf,0x7ab4ce);
                  iVar13 = FUN_00aaf0c5();
                  iVar4 = *(int *)(local_34 + 0xe40);
                  uStack_1b8 = CONCAT44(0x7ab4e1,(uint *)uStack_1b8);
                  iVar8 = FUN_00576f80();
                  iVar4 = *(int *)(*(int *)(iVar8 + 0x80) + iVar4 * 4);
                  uStack_1b8 = CONCAT44(0x7ab4f2,(uint *)uStack_1b8);
                  iVar8 = FUN_00576f80();
                  iVar13 = *(int *)(*(int *)(*(int *)(iVar8 + 0x38) + iVar13 * 4) + 0x44);
                  uStack_1b8 = CONCAT44(local_108,*(undefined4 *)(DAT_0125a5b4 + iVar13 * 4));
                  uStack_1c0 = CONCAT44(0x7ab511,(undefined4)uStack_1c0);
                  uVar5 = FUN_0044bb00();
                  uStack_1b8 = 0xffffffff00000000;
                  local_8._0_1_ = 0x43;
                  uStack_1c0 = CONCAT44(uVar5,0x7ab524);
                  FUN_00408ed0();
                  local_8._0_1_ = 0;
                  uStack_1b8 = CONCAT44(0x7ab532,(uint *)uStack_1b8);
                  FUN_00408ad0();
                  uStack_1b8 = 0x200df9638;
                  uStack_1c0 = CONCAT44(0x7ab544,(undefined4)uStack_1c0);
                  FUN_00448740();
                  uStack_1b8 = 0x100000000;
                  local_54 = &puStack_1c4;
                  puStack_1c4 = *(uint **)(*(int *)(iVar4 + 0x18) + iVar13 * 8);
                  FUN_0043a5b0();
                  puStack_1c4 = local_108;
                  uVar5 = FUN_009c7de0();
                  uStack_1b8 = 0xffffffff00000000;
                  local_8._0_1_ = 0x44;
                  uStack_1c0 = CONCAT44(uVar5,0x7ab589);
                  FUN_00448aa0();
                  local_8 = (uint)local_8._1_3_ << 8;
                  uStack_1b8 = CONCAT44(0x7ab597,(uint *)uStack_1b8);
                  FUN_00408ad0();
                }
              }
              else {
                uStack_1b8 = CONCAT44(0x7ab017,(uint *)uStack_1b8);
                (**(code **)(*param_2 + 0x44))();
                uStack_1b8 = CONCAT44(0x7ab021,(uint *)uStack_1b8);
                cVar2 = FUN_0040b360();
                if (cVar2 == '\0') {
                  uStack_1b8 = CONCAT44(0x7ab0b9,(uint *)uStack_1b8);
                  (**(code **)(*param_2 + 0x44))();
                  uStack_1b8 = CONCAT44(0x7ab0c3,(uint *)uStack_1b8);
                  cVar2 = FUN_0040b360();
                  if (cVar2 == '\0') {
                    uStack_1b8 = CONCAT44(0x7ab15b,(uint *)uStack_1b8);
                    (**(code **)(*param_2 + 0x44))();
                    uStack_1b8 = CONCAT44(0x7ab165,(uint *)uStack_1b8);
                    cVar2 = FUN_0040b360();
                    if (cVar2 == '\0') goto LAB_007ab1f4;
                    uStack_1b8 = CONCAT44(0x7ab17a,(uint *)uStack_1b8);
                    FUN_009885d0();
                    uStack_1b8 = CONCAT44(local_50,local_e4);
                    local_8._0_1_ = 0x34;
                    uStack_1c0 = CONCAT44(0x7ab18d,(undefined4)uStack_1c0);
                    FUN_009a8ee0();
                    local_8._0_1_ = 0x35;
                    uStack_1b8 = CONCAT44(0x7ab198,(uint *)uStack_1b8);
                    iVar4 = FUN_00475500();
                    uStack_1c0 = *(undefined8 *)(iVar4 + 0x6c);
                    uStack_1b8 = *(undefined8 *)(iVar4 + 0x74);
                    puStack_1c4 = (uint *)0x7ab1ba;
                    uVar5 = FUN_009a9880();
                    uStack_1b8 = 0xffffffff00000000;
                    local_8._0_1_ = 0x36;
                    uStack_1c0 = CONCAT44(uVar5,0x7ab1cd);
                    FUN_00408ed0();
                    uStack_1b8 = CONCAT44(0x7ab1d4,(uint *)uStack_1b8);
                    FUN_00408ad0();
                    local_8._0_1_ = 0x34;
                    uStack_1b8 = CONCAT44(local_e4,0x7ab1e4);
                    FUN_009a9740();
                    local_8 = (uint)local_8._1_3_ << 8;
                    uStack_1b8 = CONCAT44(0x7ab1ef,(uint *)uStack_1b8);
                    FUN_00408ad0();
                  }
                  else {
                    uStack_1b8 = CONCAT44(0x7ab0d8,(uint *)uStack_1b8);
                    FUN_009885d0();
                    uStack_1b8 = CONCAT44(local_50,local_e4);
                    local_8._0_1_ = 0x31;
                    uStack_1c0 = CONCAT44(0x7ab0eb,(undefined4)uStack_1c0);
                    FUN_009a8ee0();
                    local_8._0_1_ = 0x32;
                    uStack_1b8 = CONCAT44(0x7ab0f6,(uint *)uStack_1b8);
                    iVar4 = FUN_00475500();
                    uStack_1c0 = *(undefined8 *)(iVar4 + 0x6c);
                    uStack_1b8 = *(undefined8 *)(iVar4 + 0x74);
                    puStack_1c4 = (uint *)0x7ab118;
                    uVar5 = FUN_009a9880();
                    uStack_1b8 = 0xffffffff00000000;
                    local_8._0_1_ = 0x33;
                    uStack_1c0 = CONCAT44(uVar5,0x7ab12b);
                    FUN_00408ed0();
                    uStack_1b8 = CONCAT44(0x7ab132,(uint *)uStack_1b8);
                    FUN_00408ad0();
                    local_8._0_1_ = 0x31;
                    uStack_1b8 = CONCAT44(local_e4,0x7ab142);
                    FUN_009a9740();
                    local_8 = (uint)local_8._1_3_ << 8;
                    uStack_1b8 = CONCAT44(0x7ab14d,(uint *)uStack_1b8);
                    FUN_00408ad0();
                  }
                }
                else {
                  uStack_1b8 = CONCAT44(0x7ab036,(uint *)uStack_1b8);
                  FUN_009885d0();
                  uStack_1b8 = CONCAT44(local_50,local_e4);
                  local_8._0_1_ = 0x2e;
                  uStack_1c0 = CONCAT44(0x7ab049,(undefined4)uStack_1c0);
                  FUN_009a8ee0();
                  local_8._0_1_ = 0x2f;
                  uStack_1b8 = CONCAT44(0x7ab054,(uint *)uStack_1b8);
                  iVar4 = FUN_00475500();
                  uStack_1c0 = *(undefined8 *)(iVar4 + 0x6c);
                  uStack_1b8 = *(undefined8 *)(iVar4 + 0x74);
                  puStack_1c4 = (uint *)0x7ab076;
                  uVar5 = FUN_009a9880();
                  uStack_1b8 = 0xffffffff00000000;
                  local_8._0_1_ = 0x30;
                  uStack_1c0 = CONCAT44(uVar5,0x7ab089);
                  FUN_00408ed0();
                  uStack_1b8 = CONCAT44(0x7ab090,(uint *)uStack_1b8);
                  FUN_00408ad0();
                  local_8._0_1_ = 0x2e;
                  uStack_1b8 = CONCAT44(local_e4,0x7ab0a0);
                  FUN_009a9740();
                  local_8 = (uint)local_8._1_3_ << 8;
                  uStack_1b8 = CONCAT44(0x7ab0ab,(uint *)uStack_1b8);
                  FUN_00408ad0();
                }
              }
              goto LAB_007abb12;
            }
          }
        }
        iVar4 = local_34;
        if (*(int *)(local_34 + 0x4cc) == 0) {
          uStack_1b8 = 0x2200e10f90;
          local_60 = 0xf;
          local_64 = 0;
          local_74[0] = local_74[0] & 0xffffff00;
          uStack_1c0 = CONCAT44(0x7ab7c6,(undefined4)uStack_1c0);
          FUN_00409350();
          uStack_1b8 = CONCAT44(local_74,local_e4);
          local_8._0_1_ = 0x26;
          uStack_1c0 = CONCAT44(0x7ab7da,(undefined4)uStack_1c0);
          FUN_009a8ee0();
          local_8._0_1_ = 0x27;
          puVar10 = DAT_0125b5e0;
          if (DAT_0125b5e0 == (undefined4 *)0x0) {
            uStack_1b8 = 0x180007ab7f3;
            iVar4 = FUN_00aae9af();
            local_8._0_1_ = 0x28;
            if (iVar4 == 0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              uStack_1b8 = CONCAT44(iVar4,0x7ab807);
              puVar10 = (undefined4 *)FUN_00475150();
            }
            local_8._0_1_ = 0x29;
            if ((puVar10 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
              uStack_1b8 = 0x1007ab82a;
              (**(code **)*DAT_0125b5e0)();
            }
          }
          DAT_0125b5e0 = puVar10;
          local_8._0_1_ = 0x27;
          uStack_1c0 = *(ulonglong *)(DAT_0125b5e0 + 0x1b);
          uStack_1b8 = *(ulonglong *)(DAT_0125b5e0 + 0x1d);
          puStack_1c4 = (uint *)0x7ab857;
          uVar5 = FUN_009a9880();
          uStack_1b8 = 0xffffffff00000000;
          local_8._0_1_ = 0x2a;
          uStack_1c0 = CONCAT44(uVar5,0x7ab86a);
          FUN_00408ed0();
          if (0xf < local_1c) {
            uStack_1b8 = CONCAT44(local_30[0],&UNK_007ab879);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          local_8._0_1_ = 0x2b;
          uStack_1b8 = CONCAT44(0x7ab898,(uint *)uStack_1b8);
          FUN_009adb70();
          if (local_e0 != 0) {
            uStack_1b8 = CONCAT44(0x7ab8ad,(uint *)uStack_1b8);
            FUN_009e6a80();
            uStack_1b8 = CONCAT44(local_e0,&UNK_007ab8b9);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_e0 = 0;
          local_dc = 0;
          local_d8 = 0;
          if (local_60 < 0x10) goto LAB_007ab8e3;
          uStack_1b8._4_4_ = (uint *)local_74[0];
        }
        else {
          piVar6 = *(int **)(*(int *)(local_34 + 0x4c4) + 0x24);
          uStack_1b8._0_4_ = local_50;
          uStack_1c0 = CONCAT44(&local_54,*(int *)(local_34 + 0x4c4));
          puStack_1c4 = (uint *)0x7ab5c3;
          uStack_1b8._4_4_ = (uint *)uStack_1b8;
          uVar5 = FUN_0057a230();
          uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar5);
          uStack_1c0 = CONCAT44(0x7ab5cc,(undefined4)uStack_1c0);
          uVar5 = FUN_0043acd0();
          local_8._0_1_ = 0x1f;
          uStack_1b8 = CONCAT44(local_74,0x7ab5e0);
          uVar9 = (**(code **)(*piVar6 + 0x18))();
          local_8._0_1_ = 0x20;
          uStack_1b8 = CONCAT44(uVar5,&DAT_00dfa9f8);
          puStack_1c4 = local_30;
          uStack_1c0 = CONCAT44(uVar9,&DAT_00dfd13c);
          uVar5 = FUN_0043ec10();
          uStack_1b8 = 0xffffffff00000000;
          local_8._0_1_ = 0x21;
          uStack_1c0 = CONCAT44(uVar5,0x7ab617);
          FUN_00408ed0();
          if (0xf < local_1c) {
            uStack_1b8 = CONCAT44(local_30[0],&UNK_007ab626);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (0xf < local_60) {
            uStack_1b8 = CONCAT44(local_74[0],&UNK_007ab646);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0;
          local_60 = 0xf;
          local_64 = 0;
          local_74[0] = local_74[0] & 0xffffff00;
          if (0xf < local_3c) {
            uStack_1b8 = CONCAT44(local_50[0],&UNK_007ab664);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_1b8 = 0x100dee2cc;
          uStack_1c0 = CONCAT44(0x7ab679,(undefined4)uStack_1c0);
          FUN_00448740();
          uStack_1b8 = CONCAT44(*(undefined4 *)(*(int *)(iVar4 + 0x4c4) + 0xc),local_ec);
          uStack_1c0 = CONCAT44(0x7ab696,(undefined4)uStack_1c0);
          uVar5 = FUN_00988970();
          local_8._0_1_ = 0x22;
          uStack_1b8 = (ulonglong)*(uint *)(*(int *)(iVar4 + 0x4c4) + 8);
          uStack_1c0 = CONCAT44(local_74,0x7ab6b7);
          uVar9 = FUN_00988a50();
          uStack_1b8 = CONCAT44(uVar5,&DAT_00dfeb48);
          puStack_1c4 = local_30;
          uStack_1c0 = CONCAT44(uVar9,"INVESTED");
          local_8._0_1_ = 0x23;
          uVar5 = FUN_0043ec10();
          uStack_1b8 = 0xffffffff00000000;
          local_8._0_1_ = 0x24;
          uStack_1c0 = CONCAT44(uVar5,0x7ab6eb);
          FUN_00448aa0();
          if (0xf < local_1c) {
            uStack_1b8 = CONCAT44(local_30[0],&UNK_007ab6fe);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (0xf < local_60) {
            uStack_1b8 = CONCAT44(local_74[0],&UNK_007ab71c);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0;
          local_60 = 0xf;
          local_64 = 0;
          local_74[0] = local_74[0] & 0xffffff00;
          if (0xf < local_d8) {
            uStack_1b8 = CONCAT44(local_ec[0],&UNK_007ab743);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_d8 = 0xf;
          local_dc = 0;
          local_ec[0] = local_ec[0] & 0xffffff00;
          uStack_1b8 = *(undefined8 *)(DAT_012588e8 + 0xb5c);
          uStack_1c0 = CONCAT44(local_50,*(undefined4 *)(*(int *)(iVar4 + 0x4c4) + 0x24));
          puStack_1c4 = (uint *)0x7ab782;
          uVar5 = FUN_0056aef0();
          uStack_1b8 = 0xffffffff00000000;
          local_8._0_1_ = 0x25;
          uStack_1c0 = CONCAT44(uVar5,0x7ab795);
          FUN_00408ed0();
          if (local_3c < 0x10) {
LAB_007ab8e3:
            local_8._0_1_ = 0;
            uStack_1b8 = 0xffffffff00000000;
            *(undefined4 *)(param_1 + 0x14) = 0xf;
            *(undefined4 *)(param_1 + 0x10) = 0;
            *param_1 = 0;
            uStack_1c0 = CONCAT44(local_d0,0x7ab904);
            FUN_00408ed0();
            local_8._0_1_ = 0x2c;
            uStack_1b8 = 0xffffffff00000000;
            *(undefined4 *)(param_1 + 0x30) = 0xf;
            *(undefined4 *)(param_1 + 0x2c) = 0;
            param_1[0x1c] = 0;
            uStack_1c0 = CONCAT44(local_b4,0x7ab922);
            FUN_00408ed0();
            local_8 = CONCAT31(local_8._1_3_,0x2d);
            uStack_1b8 = 0xffffffff00000000;
            *(undefined4 *)(param_1 + 0x4c) = 0xf;
            *(undefined4 *)(param_1 + 0x48) = 0;
            param_1[0x38] = 0;
            uStack_1c0 = CONCAT44(local_98,0x7ab940);
            FUN_00408ed0();
            *(undefined4 *)(param_1 + 0x54) = local_7c;
            param_1[0x58] = local_78;
            uStack_1b8 = CONCAT44(0x7ab957,(uint *)uStack_1b8);
            FUN_00459820();
            ExceptionList = local_10;
            return param_1;
          }
          uStack_1b8._4_4_ = (uint *)local_50[0];
        }
        local_8._0_1_ = 0;
        uStack_1b8 = CONCAT44(uStack_1b8._4_4_,&UNK_007ab8e0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_54 = (undefined4 *)(DAT_012588e8 + 0xb5c);
    if (DAT_0125eadc == 0) {
      uStack_1b8 = 0x9c007ab98b;
      local_14 = (int *)FUN_00aae9af();
      local_8._0_1_ = 0xf;
      if (local_14 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uStack_1b8 = CONCAT44(local_14,0x7ab99f);
        uVar5 = FUN_00576fe0();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_1b8 = CONCAT44(uVar5,0x7ab9ac);
      FUN_0057ab10();
    }
    uStack_1b8 = CONCAT44(param_2 + 5,0x7ab9c0);
    piVar11 = (int *)FUN_005661b0();
    uStack_1b8 = 0x7ab9ce;
    FUN_008a8650();
    local_148 = *local_54;
    local_144 = local_54[1];
    for (piVar6 = *(int **)(local_34 + 0x4f8); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
      if ((int *)*piVar6 == piVar11) {
        uStack_1b8 = CONCAT44(local_50,0x7abb4e);
        uVar5 = (**(code **)(*piVar11 + 0x18))();
        uStack_1b8 = CONCAT44(uVar5,local_30);
        local_8._0_1_ = 0x10;
        uStack_1c0 = CONCAT44(0x7abb66,(undefined4)uStack_1c0);
        uVar5 = FUN_0042c180();
        uStack_1b8 = 0xffffffff00000000;
        local_8._0_1_ = 0x11;
        uStack_1c0 = CONCAT44(uVar5,0x7abb7c);
        FUN_00408ed0();
        if (0xf < local_1c) {
          uStack_1b8 = CONCAT44(local_30[0],&UNK_007abb8f);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_3c) {
          uStack_1b8 = CONCAT44(local_50[0],&UNK_007abbb0);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1b8 = 0x100dee2cc;
        uStack_1c0 = CONCAT44(0x7abbc5,(undefined4)uStack_1c0);
        FUN_00448740();
        goto LAB_007abadb;
      }
    }
    for (piVar6 = *(int **)(local_34 + 0x508); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
      if ((int *)*piVar6 == piVar11) {
        uStack_1b8._4_4_ = local_50;
        uStack_1b8._0_4_ = (uint *)0x7abbd7;
        uVar5 = (**(code **)(*piVar11 + 0x18))();
        local_8._0_1_ = 0x12;
        uStack_1c0 = CONCAT44(local_150,&uStack_1b8);
        puStack_1c4 = (uint *)0x7abc00;
        (**(code **)(piVar11[0x100] + 0x18))();
        uStack_1b8 = CONCAT44(uStack_1b8._4_4_,local_74);
        uStack_1c0 = CONCAT44(0x7abc09,(undefined4)uStack_1c0);
        uVar9 = FUN_00988970();
        uStack_1b8 = CONCAT44(uVar5,"INVENTION");
        puStack_1c4 = local_30;
        uStack_1c0 = CONCAT44(uVar9,"PERCENT");
        local_8._0_1_ = 0x13;
        uVar5 = FUN_0043ec10();
        uStack_1b8 = 0xffffffff00000000;
        local_8._0_1_ = 0x14;
        uStack_1c0 = CONCAT44(uVar5,0x7abc3d);
        FUN_00408ed0();
        if (0xf < local_1c) {
          uStack_1b8 = CONCAT44(local_30[0],&UNK_007abc50);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_60) {
          uStack_1b8 = CONCAT44(local_74[0],&UNK_007abc6e);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0;
        local_60 = 0xf;
        local_64 = 0;
        local_74[0] = local_74[0] & 0xffffff00;
        if (0xf < local_3c) {
          uStack_1b8 = CONCAT44(local_50[0],&UNK_007abc8f);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1b8 = 0x100dee2cc;
        uStack_1c0 = CONCAT44(0x7abca4,(undefined4)uStack_1c0);
        FUN_00448740();
        uStack_1b8 = CONCAT44(0x7abcb4,(uint *)uStack_1b8);
        uVar5 = FUN_00562540();
        local_8._0_1_ = 0x15;
        goto LAB_007abab7;
      }
    }
    uStack_1b8 = CONCAT44(local_50,0x7aba2c);
    uVar5 = (**(code **)(*piVar11 + 0x18))();
    uStack_1b8 = CONCAT44(uVar5,local_30);
    local_8._0_1_ = 0x16;
    uStack_1c0 = CONCAT44(0x7aba44,(undefined4)uStack_1c0);
    uVar5 = FUN_0042c180();
    uStack_1b8 = 0xffffffff00000000;
    local_8._0_1_ = 0x17;
    uStack_1c0 = CONCAT44(uVar5,0x7aba5a);
    FUN_00408ed0();
    if (0xf < local_1c) {
      uStack_1b8 = CONCAT44(local_30[0],&UNK_007aba6d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_3c) {
      uStack_1b8 = CONCAT44(local_50[0],&UNK_007aba8e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1b8 = 0x100dee2cc;
    uStack_1c0 = CONCAT44(0x7abaa3,(undefined4)uStack_1c0);
    FUN_00448740();
    uStack_1b8 = CONCAT44(0x7abab3,(uint *)uStack_1b8);
    uVar5 = FUN_00562540();
    local_8._0_1_ = 0x18;
LAB_007abab7:
    uStack_1b8 = 0xffffffff00000000;
    uStack_1c0 = CONCAT44(uVar5,0x7abac6);
    FUN_00408ed0();
    local_8._0_1_ = 0;
    if (0xf < local_3c) {
      uStack_1b8 = CONCAT44(local_50[0],&UNK_007abad8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
LAB_007abadb:
    uStack_1b8 = ZEXT48(local_54);
    uStack_1c0 = CONCAT44(local_50,piVar11);
    puStack_1c4 = (uint *)0x7abaea;
    uVar5 = FUN_00562570();
    uStack_1b8 = 0xffffffff00000000;
    local_8._0_1_ = 0x19;
    uStack_1c0 = CONCAT44(uVar5,0x7abafd);
    FUN_00448aa0();
LAB_007abb04:
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_3c) {
      uStack_1b8._4_4_ = (uint *)local_50[0];
LAB_007abb0a:
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,&UNK_007abb0f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_007abb12:
  uStack_1b8 = CONCAT44(param_1,0x7abb21);
  FUN_0040c830();
LAB_007abb21:
  uStack_1b8 = CONCAT44(0x7abb2c,(uint *)uStack_1b8);
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
code_r0x007aae06:
  iVar13 = iVar13 + 1;
  if (iVar4 <= iVar13) goto LAB_007aae0b;
  goto LAB_007aade0;
}

