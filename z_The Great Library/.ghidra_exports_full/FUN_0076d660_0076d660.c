// FUN_0076d660 @ 0076d660 body=[[0076d660, 0076d87e] [0076d882, 0076d8ac] [0076d8b0, 0076d989] [0076d98d, 0076da1d] [0076da21, 0076da4c] [0076da50, 0076dae1] [0076dae5, 0076db10] [0076db14, 0076dbad] [0076dbb1, 0076dc66] [0076dc6a, 0076dc8f] [0076dc93, 0076dd0c] [0076dd10, 0076dd3c] [0076dd40, 0076ddf2] [0076ddf6, 0076de1b] [0076de1f, 0076dea0] [0076dea4, 0076decf] [0076ded3, 0076df54] [0076df58, 0076df83] [0076df87, 0076e015] [0076e019, 0076e03f] [0076e043, 0076e183] [0076e190, 0076e22b] [0076e22f, 0076e257] [0076e260, 0076e64b] [0076e64f, 0076e699] [0076e69d, 0076e6e7] [0076e6eb, 0076e735] [0076e739, 0076e7d7] [0076e7db, 0076e805] [0076e809, 0076e8cf] [0076e8d3, 0076e90c] [0076e910, 0076e9a1] [0076e9a5, 0076e9de] [0076e9e2, 0076ea00] [0076ea04, 0076ea7e] [0076ea82, 0076eb90] [0076eb94, 0076ebf5] [0076ebf9, 0076ec6e] [0076ec72, 0076ecda] [0076ecde, 0076ed51] [0076ed55, 0076ee0a] [0076ee0e, 0076ee6f] [0076ee73, 0076eee8] [0076eeec, 0076ef54] [0076ef58, 0076efcb] [0076efcf, 0076f0d2] [0076f0d6, 0076f137] [0076f13b, 0076f1b0] [0076f1b4, 0076f21c] [0076f220, 0076f293] [0076f297, 0076f2f1] [0076f2f5, 0076f316] [0076f31a, 0076f33b] [0076f33f, 0076f592] [0076f596, 0076f7d5] [0076f7d9, 0076fac9] [0076fad0, 0076fb0f] [0076fb1e, 007701aa]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0076d660(void)

{
  undefined4 ***pppuVar1;
  undefined4 ****ppppuVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint ***pppuVar10;
  char *pcVar11;
  undefined4 **ppuVar12;
  int *piVar13;
  uint *puVar14;
  undefined4 ****ppppuVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  int in_ECX;
  char *pcVar19;
  undefined4 ****ppppuVar20;
  float10 fVar21;
  undefined8 uVar22;
  undefined4 ****ppppuStack_68c;
  undefined4 ****ppppuStack_688;
  undefined4 ****ppppuStack_684;
  undefined4 ****ppppuStack_680;
  uint *puStack_67c;
  undefined ***pppuStack_678;
  undefined8 uStack_674;
  undefined8 uStack_66c;
  undefined1 local_658 [1064];
  undefined1 local_230 [20];
  undefined1 local_21c [8];
  int local_214;
  undefined1 local_1f4 [8];
  int local_1ec;
  uint local_1cc [4];
  undefined4 local_1bc;
  uint local_1b8;
  int *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  uint local_190 [2];
  undefined1 local_188 [4];
  int local_184;
  undefined4 local_180;
  uint local_17c;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_164;
  int local_15c;
  uint local_150 [4];
  undefined4 local_140;
  uint local_13c;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 ***local_108;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint ***local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  undefined4 ****local_a0;
  int local_9c;
  int *local_98;
  uint local_94 [2];
  undefined1 local_8c [4];
  int local_88;
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined **local_74;
  undefined **local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  int local_58;
  undefined4 ****local_54;
  undefined4 ***local_50;
  uint local_4c;
  undefined4 ***local_48;
  int *local_44;
  uint ***local_40 [2];
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  int local_24;
  int *local_20;
  undefined4 ****local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bba294;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff99c;
  local_4c = 0;
  ExceptionList = &local_10;
  local_9c = in_ECX;
  puVar3 = &stack0xfffff99c;
  if (*(int *)(in_ECX + 0x5c0) != 0) {
    uStack_66c = CONCAT44(0x76d6aa,(uint *)uStack_66c);
    ExceptionList = &local_10;
    fVar21 = (float10)(**(code **)(**(int **)(in_ECX + 0x5c4) + 0x14))();
    puVar3 = local_14;
    if ((float10)10.0 < fVar21 - (float10)*(double *)(in_ECX + 0x5c8)) {
      uStack_66c = 0x740076d6c5;
      local_1c = (undefined4 ****)FUN_00aae9af();
      local_8 = 0;
      if (local_1c == (undefined4 ****)0x0) {
        uStack_66c._4_4_ = (undefined ***)0x0;
      }
      else {
        uStack_66c = CONCAT44(0x76d6df,(uint *)uStack_66c);
        iVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
        uStack_66c = CONCAT44(0x76d6ee,(uint *)uStack_66c);
        iVar7 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
        uStack_66c = CONCAT44(iVar6 + 0x150,iVar7 + 0x134);
        uStack_674 = CONCAT44(0x76d703,(uint *)uStack_674);
        uStack_66c._4_4_ = (undefined ***)FUN_00a09ba0();
      }
      local_8 = 0xffffffff;
      uStack_66c._0_4_ = (uint *)0x76d71f;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x5c0) + 0x38) + 0x18))();
      uStack_66c = CONCAT44(uStack_66c._4_4_,0x76d72c);
      fVar21 = (float10)(**(code **)(**(int **)(in_ECX + 0x5c4) + 0x14))();
      *(double *)(in_ECX + 0x5c8) = (double)fVar21;
      puVar3 = local_14;
    }
  }
  local_14 = puVar3;
  if (*(int *)(DAT_012588e8 + 0xb0c) != *(int *)(in_ECX + 0x308)) {
    *(int *)(in_ECX + 0x308) = *(int *)(DAT_012588e8 + 0xb0c);
    uStack_66c = CONCAT44(in_ECX,0x76d751);
    FUN_00777760();
  }
  iVar6 = DAT_012588e8;
  if (*(char *)(in_ECX + 0x374) == '\0') {
    if (*(char *)(DAT_012588e8 + 0x60) != '\0') {
      *(undefined1 *)(DAT_012588e8 + 0x60) = 0;
      goto LAB_0076d76c;
    }
  }
  else {
LAB_0076d76c:
    *(undefined1 *)(in_ECX + 0x374) = 0;
    iVar6 = *(int *)(iVar6 + 0x18);
    while (local_110 = iVar6, iVar6 != 0) {
      local_48 = *(undefined4 ****)(iVar6 + 0x20);
      if ((*(int *)(iVar6 + 0x24) == 0) || (*(int *)(iVar6 + 0x1c) != *(int *)(in_ECX + 0x2ec))) {
        if ((*(int *)(iVar6 + 0x24) == 0) && (*(int *)(iVar6 + 0x1c) == *(int *)(in_ECX + 0x2ec))) {
          uStack_66c = CONCAT44(0x76f39e,(uint *)uStack_66c);
          FUN_009885d0();
          local_8 = 0x49;
          uStack_66c._0_4_ = (uint *)0x76f3b5;
          uStack_66c._4_4_ = (undefined ***)local_fc;
          ppppuVar15 = (undefined4 ****)(**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))();
          local_8 = 0xffffffff;
          uStack_66c._0_4_ = (uint *)0x76f3cc;
          local_1c = ppppuVar15;
          FUN_00408ad0();
          uStack_66c._0_4_ = (uint *)0x76f3d7;
          (*(code *)ppppuVar15[6][0xe])();
          uStack_66c._0_4_ = (uint *)0x76f3e4;
          FUN_009885d0();
          local_8 = 0x4a;
          uStack_66c._0_4_ = (uint *)0x76f3f8;
          FUN_009885d0();
          local_8 = CONCAT31(local_8._1_3_,0x4b);
          uStack_66c = CONCAT44(uStack_66c._4_4_,local_40);
          uStack_674 = CONCAT44(0x76f409,(uint *)uStack_674);
          (*(code *)(*local_1c)[0xf])();
          uStack_674 = 0xffffffff00000000;
          pppuStack_678 = &local_70;
          puStack_67c = (uint *)0x76f41d;
          FUN_00408ed0();
          uStack_674 = ZEXT48(&local_70);
          pppuStack_678 = (undefined ***)0x76f42d;
          FUN_00a5ecc0();
          uStack_674 = CONCAT44(0x76f435,(uint *)uStack_674);
          FUN_00408ad0();
          local_8 = 0xffffffff;
          uStack_674 = CONCAT44(0x76f444,(uint *)uStack_674);
          FUN_00408ad0();
          uStack_674 = CONCAT44(0x76f451,(uint *)uStack_674);
          FUN_009885d0();
          local_8 = 0x4c;
          uStack_674 = CONCAT44(0x76f465,(uint *)uStack_674);
          FUN_009885d0();
          local_8 = CONCAT31(local_8._1_3_,0x4d);
          uStack_674 = CONCAT44(local_40,0x76f476);
          (*(code *)(*local_1c)[0xf])();
          uStack_66c = 0xffffffff00000000;
          uStack_674 = CONCAT44(&local_70,0x76f48a);
          FUN_00408ed0();
          uStack_66c = ZEXT48(&local_70);
          uStack_674 = CONCAT44(0x76f49a,(uint *)uStack_674);
          FUN_00a5ecc0();
          uStack_66c = CONCAT44(0x76f4a2,(uint *)uStack_66c);
          FUN_00408ad0();
          local_8 = 0xffffffff;
          uStack_66c = CONCAT44(0x76f4b1,(uint *)uStack_66c);
          FUN_00408ad0();
          for (puVar16 = *(undefined4 **)(in_ECX + 0x364); puVar16 != (undefined4 *)0x0;
              puVar16 = (undefined4 *)puVar16[2]) {
            uStack_66c = CONCAT44(0x76f4ca,(uint *)uStack_66c);
            (**(code **)(*(int *)*puVar16 + 0x38))();
            uStack_66c = CONCAT44(0x76f4d3,(uint *)uStack_66c);
            (**(code **)(*(int *)*puVar16 + 0x30))();
          }
          uStack_66c = CONCAT44(0x76f4df,(uint *)uStack_66c);
          FUN_009a63f0();
          for (puVar16 = *(undefined4 **)(local_9c + 0x354); puVar16 != (undefined4 *)0x0;
              puVar16 = (undefined4 *)puVar16[2]) {
            uStack_66c = CONCAT44(0x76f4fe,(uint *)uStack_66c);
            (**(code **)(*(int *)*puVar16 + 0x38))();
            uStack_66c = CONCAT44(0x76f507,(uint *)uStack_66c);
            (**(code **)(*(int *)*puVar16 + 0x30))();
          }
          uStack_66c = CONCAT44(0x76f513,(uint *)uStack_66c);
          FUN_009a63f0();
          in_ECX = local_9c;
        }
      }
      else {
        uStack_66c = 0xd00e0b080;
        local_17c = 0xf;
        local_180 = 0;
        local_190[0] = local_190[0] & 0xffffff00;
        uStack_674 = CONCAT44(0x76d7c9,(uint *)uStack_674);
        FUN_00409350();
        local_8 = 1;
        uStack_66c = 0xc00e149fc;
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        uStack_674 = CONCAT44(0x76d7f2,(uint *)uStack_674);
        FUN_00409350();
        local_8 = CONCAT31(local_8._1_3_,2);
        uStack_66c._4_4_ = (undefined ***)local_94;
        uStack_66c._0_4_ = (uint *)0x76d80a;
        piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))();
        local_48 = *(undefined4 ****)(iVar6 + 0x20);
        uVar9 = *(undefined4 *)(iVar6 + 0x24);
        uStack_66c = CONCAT44(uStack_66c._4_4_,local_190);
        uStack_674 = CONCAT44(0x76d823,(uint *)uStack_674);
        local_1c = (undefined4 ****)(**(code **)(*piVar8 + 0x34))();
        uStack_674._0_4_ = (uint *)0x76d837;
        uStack_674._4_4_ = uVar9;
        (**(code **)(**(int **)((int)local_1c + 0xa0) + 0x14c))();
        local_1c = *(undefined4 *****)((int)local_1c + 0xa0);
        local_24 = (int)*local_1c;
        uStack_674._0_4_ = (uint *)0x76d85a;
        uVar9 = FUN_0052fc10();
        uStack_674 = CONCAT44(uStack_674._4_4_,uVar9);
        pppuStack_678 = (undefined ***)0x76d869;
        (**(code **)(local_24 + 0x150))();
        if (0xf < local_80) {
          pppuStack_678 = (undefined ***)local_94[0];
                    /* WARNING: Subroutine does not return */
          puStack_67c = (uint *)&UNK_0076d87f;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        if (0xf < local_17c) {
          pppuStack_678 = (undefined ***)local_190[0];
                    /* WARNING: Subroutine does not return */
          puStack_67c = (uint *)&UNK_0076d8ad;
          FUN_00aae91b();
        }
        local_10c = *(undefined4 *)(local_110 + 0x20);
        local_108 = *(undefined4 ****)(local_110 + 0x24);
        local_17c = 0xf;
        local_180 = 0;
        local_190[0] = local_190[0] & 0xffffff00;
        pppuStack_678 = *(undefined ****)(*(int *)(DAT_012587e4 + 4) + (int)local_108 * 4);
        puStack_67c = (uint *)0x76d8f5;
        local_48 = (undefined4 ***)local_10c;
        FUN_00520150();
        pppuStack_678 = *(undefined ****)(*(int *)(DAT_012587e4 + 4) + (int)local_108 * 4);
        puStack_67c = (uint *)0x76d90d;
        FUN_0050ea30();
        local_20 = *(int **)(*(int *)(DAT_012587e4 + 4) + (int)local_108 * 4);
        puStack_67c = (uint *)0xc;
        ppppuStack_680 = (undefined4 ****)0xe149fc;
        local_1b8 = 0xf;
        local_1bc = 0;
        local_1cc[0] = local_1cc[0] & 0xffffff00;
        ppppuStack_684 = (undefined4 ****)0x76d94a;
        FUN_00409350();
        local_8 = 6;
        puStack_67c = local_1cc;
        ppppuStack_680 = (undefined4 ****)0x76d967;
        piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))();
        local_8 = 0xffffffff;
        local_98 = piVar8;
        if (0xf < local_1b8) {
          ppppuStack_680 = (undefined4 ****)local_1cc[0];
                    /* WARNING: Subroutine does not return */
          ppppuStack_684 = (undefined4 ****)&UNK_0076d98a;
          FUN_00aae91b();
        }
        ppppuStack_680 = (undefined4 ****)0x15;
        ppppuStack_684 = (undefined4 ****)0xe14aac;
        local_1b8 = 0xf;
        local_1bc = 0;
        local_1cc[0] = local_1cc[0] & 0xffffff00;
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        ppppuStack_688 = (undefined4 ****)0x76d9bc;
        FUN_00409350();
        local_8 = 7;
        ppppuStack_680 = (undefined4 ****)0x76d9d4;
        pppuVar10 = (uint ***)FUN_0055dd40();
        local_8 = CONCAT31(local_8._1_3_,8);
        ppppuStack_680 = local_40;
        ppppuStack_684 = (undefined4 ****)0x76d9e7;
        local_1c = (undefined4 ****)(**(code **)(*piVar8 + 0x3c))();
        ppppuStack_684 = (undefined4 ****)0xffffffff;
        ppppuStack_688 = (undefined4 ****)0x0;
        ppppuStack_68c = (undefined4 ****)pppuVar10;
        FUN_00408ed0();
        ppppuStack_684 = (undefined4 ****)0x0;
        ppppuStack_68c = (undefined4 ****)0x76da09;
        ppppuStack_688 = (undefined4 ****)pppuVar10;
        FUN_00a5ecc0();
        if (0xf < local_a8) {
          ppppuStack_684 = (undefined4 ****)local_bc[0];
                    /* WARNING: Subroutine does not return */
          ppppuStack_688 = (undefined4 ****)&UNK_0076da1e;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = (uint ***)((uint)local_bc[0] & 0xffffff00);
        if (0xf < uStack_2c) {
          ppppuStack_684 = (undefined4 ****)local_40[0];
                    /* WARNING: Subroutine does not return */
          ppppuStack_688 = (undefined4 ****)&UNK_0076da4d;
          FUN_00aae91b();
        }
        ppppuStack_684 = (undefined4 ****)0xc;
        ppppuStack_688 = (undefined4 ****)0xe14ac4;
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        ppppuStack_68c = (undefined4 ****)0x76da6c;
        FUN_00409350();
        local_8 = 9;
        ppppuStack_684 = local_bc;
        ppppuStack_688 = (undefined4 ****)0x76da98;
        uVar9 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_108 * 4) +
                                       0xbd0) + 0x1c))();
        local_8 = CONCAT31(local_8._1_3_,10);
        ppppuStack_688 = local_40;
        ppppuStack_68c = (undefined4 ****)0x76daab;
        local_1c = (undefined4 ****)(**(code **)(*piVar8 + 0x3c))();
        ppppuStack_68c = (undefined4 ****)0xffffffff;
        FUN_00408ed0(uVar9,0);
        ppppuStack_68c = (undefined4 ****)0x0;
        FUN_00a5ecc0(uVar9);
        if (0xf < local_a8) {
          ppppuStack_68c = (undefined4 ****)local_bc[0];
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = (uint ***)((uint)local_bc[0] & 0xffffff00);
        if (0xf < uStack_2c) {
          ppppuStack_68c = (undefined4 ****)local_40[0];
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        ppppuStack_68c = (undefined4 ****)0xc;
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("flag_overlay");
        local_8 = 0xb;
        ppppuStack_68c = local_40;
        local_1c = (undefined4 ****)(**(code **)(*piVar8 + 0x44))();
        piVar13 = local_20;
        if (*(char *)((int)local_20 + 0x12d0) == '\0') {
          cVar5 = '\x03';
        }
        else if (*(char *)((int)local_20 + 0x31) == '\0') {
          cVar5 = (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 <
                  *(int *)((int)local_20 + 0x1404)) + '\x01';
        }
        else {
          cVar5 = '\0';
        }
        (**(code **)((int)*local_1c + 0x48))(cVar5 + '\x01');
        local_8 = 0xffffffff;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("selected_nation_totalrank",0x19);
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        local_8._0_1_ = 0xd;
        local_8._1_3_ = 0;
        pcVar11 = __itoa(*(int *)((int)piVar13 + 0x1404),(char *)&local_74,10);
        pcVar19 = pcVar11;
        do {
          cVar5 = *pcVar19;
          pcVar19 = pcVar19 + 1;
        } while (cVar5 != '\0');
        FUN_00409350(pcVar11,(int)pcVar19 - (int)(pcVar11 + 1));
        local_8 = CONCAT31(local_8._1_3_,0xe);
        (**(code **)(*piVar8 + 0x3c))(local_40);
        FUN_00408ed0(local_94,0,0xffffffff);
        FUN_00a5ecc0(local_94,0);
        if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_94[0]);
        }
        local_8 = 0xffffffff;
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("selected_countrystatus",0x16);
        local_8 = 0xf;
        uVar9 = FUN_00537a30(local_20,local_bc);
        local_8 = CONCAT31(local_8._1_3_,0x10);
        local_1c = (undefined4 ****)(**(code **)(*piVar8 + 0x3c))(local_40);
        FUN_00408ed0(uVar9,0,0xffffffff);
        FUN_00a5ecc0(uVar9,0);
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_bc[0]);
        }
        local_8 = 0xffffffff;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = (uint ***)((uint)local_bc[0] & 0xffffff00);
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("selected_prestige_rank",0x16);
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        local_8._0_1_ = 0x12;
        local_8._1_3_ = 0;
        pcVar11 = __itoa(*(int *)((int)local_20 + 0x1410),(char *)&local_74,10);
        pcVar19 = pcVar11;
        do {
          cVar5 = *pcVar19;
          pcVar19 = pcVar19 + 1;
        } while (cVar5 != '\0');
        FUN_00409350(pcVar11,(int)pcVar19 - (int)(pcVar11 + 1));
        local_8 = CONCAT31(local_8._1_3_,0x13);
        (**(code **)(*piVar8 + 0x3c))(local_40);
        FUN_00408ed0(local_94,0,0xffffffff);
        FUN_00a5ecc0(local_94,0);
        if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_94[0]);
        }
        local_8 = 0xffffffff;
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("selected_industry_rank",0x16);
        local_8 = 0x14;
        uVar9 = FUN_009888f0(local_bc);
        local_8 = CONCAT31(local_8._1_3_,0x15);
        local_1c = (undefined4 ****)(**(code **)(*piVar8 + 0x3c))(local_40);
        FUN_00408ed0(uVar9,0,0xffffffff);
        FUN_00a5ecc0(uVar9,0);
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_bc[0]);
        }
        local_8 = 0xffffffff;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = (uint ***)((uint)local_bc[0] & 0xffffff00);
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("selected_military_rank",0x16);
        local_8 = 0x16;
        uVar9 = FUN_009888f0(local_bc);
        local_8 = CONCAT31(local_8._1_3_,0x17);
        local_1c = (undefined4 ****)(**(code **)(*piVar8 + 0x3c))(local_40);
        FUN_00408ed0(uVar9,0,0xffffffff);
        FUN_00a5ecc0(uVar9,0);
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_bc[0]);
        }
        local_8 = 0xffffffff;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = (uint ***)((uint)local_bc[0] & 0xffffff00);
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        FUN_00409350("selected_population_amount",0x1a);
        local_8 = 0x18;
        uVar9 = FUN_009c9b50(local_40,&DAT_00df963c,&DAT_00dedc20);
        local_8 = CONCAT31(local_8._1_3_,0x19);
        local_1c = (undefined4 ****)(**(code **)(*piVar8 + 0x3c))(local_94);
        FUN_00408ed0(uVar9,0,0xffffffff);
        FUN_00a5ecc0(uVar9,0);
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        local_8 = 0xffffffff;
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_94[0]);
        }
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        local_24 = DAT_01258a3c;
        iVar7 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
        local_15c = iVar7;
        FUN_004be4f0(local_21c);
        iVar6 = 0;
        local_8 = 0x1a;
        if (0 < iVar7) {
          do {
            puVar16 = (undefined4 *)(local_214 + iVar6 * 8);
            iVar6 = iVar6 + 1;
            *puVar16 = 0;
            puVar16[1] = 0;
          } while (iVar6 < iVar7);
        }
        if (DAT_0131bb34 == (undefined4 ****)0x0) {
          local_44 = (int *)FUN_00aae9af(0x188);
          local_8._0_1_ = 0x1b;
          if (local_44 == (int *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_0041a160();
          }
          local_8 = CONCAT31(local_8._1_3_,0x1a);
          FUN_00423700(uVar9);
        }
        ppppuVar20 = DAT_0131bb34;
        ppppuVar15 = DAT_0131bb34 + 3;
        local_54 = ppppuVar15;
        FUN_004be4f0(local_1f4);
        iVar6 = 0;
        if (0 < (int)((int)ppppuVar20[4] - (int)*ppppuVar15 & 0xfffffffcU)) {
          do {
            puVar16 = (undefined4 *)(local_1ec + iVar6 * 8);
            *puVar16 = 0;
            puVar16[1] = 0;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)ppppuVar20[4] - (int)*ppppuVar15 >> 2);
        }
        local_174 = 0;
        local_170 = 0;
        local_16c = 0;
        local_8._0_1_ = 0x1d;
        FUN_00779700((int)ppppuVar20[4] - (int)*ppppuVar15 >> 2);
        local_1a8 = 0;
        local_1a4 = 0;
        local_1a0 = 0;
        local_8 = CONCAT31(local_8._1_3_,0x1e);
        FUN_0047b6f0(local_15c);
        local_1b0 = *(int **)((int)local_20 + 0x9d8);
        ppppuVar20 = DAT_0131bb34;
        while ((*(int **)((int)local_20 + 0x9d8) <= local_1b0 &&
               (local_1b0 < *(int **)((int)local_20 + 0x9dc)))) {
          iVar6 = *local_1b0;
          local_1b0 = local_1b0 + 1;
          local_44 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar6 * 4);
          if (ppppuVar20 == (undefined4 ****)0x0) {
            local_1c = (undefined4 ****)FUN_00aae9af(0x188);
            local_8._0_1_ = 0x1f;
            if (local_1c == (undefined4 ****)0x0) {
              local_a0 = (undefined4 ****)0x0;
            }
            else {
              local_a0 = (undefined4 ****)FUN_0041a160();
              ppppuVar15 = local_54;
            }
            local_8 = CONCAT31(local_8._1_3_,0x20);
            local_50 = (undefined4 ***)0x0;
            if ((local_a0 != DAT_0131bb34) &&
               (local_1c = DAT_0131bb34, DAT_0131bb34 != (undefined4 ****)0x0)) {
              FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_1c);
            }
            DAT_0131bb34 = local_a0;
            local_8 = CONCAT31(local_8._1_3_,0x1e);
            ppppuVar20 = local_a0;
          }
          iVar6 = (int)ppppuVar20[4] - (int)ppppuVar20[3] >> 2;
          if (0 < iVar6) {
            local_50 = (undefined4 ***)0x0;
            local_1c = (undefined4 ****)iVar6;
            do {
              ppppuVar2 = (undefined4 ****)*(int *)((int)local_50 + local_44[0x65]);
              ppppuVar20 = DAT_0131bb34;
              ppppuVar15 = local_54;
              while (DAT_0131bb34 = ppppuVar20, local_54 = ppppuVar15,
                    ppppuVar2 != (undefined4 ****)0x0) {
                local_a0 = *(undefined4 *****)((int)ppppuVar2 + 0x27c);
                uVar18 = *(uint *)((int)ppppuVar2 + 0x58);
                uVar22 = __alldiv(uVar18 << 0x1e,((int)uVar18 >> 0x1f) << 0x1e | uVar18 >> 2,
                                  0xc3500000,0);
                iVar6 = 0;
                local_164 = uVar22;
                if (0 < local_15c) {
                  do {
                    uVar22 = __allmul(*(undefined4 *)(*(int *)((int)ppppuVar2 + 0x7c) + iVar6 * 8),
                                      *(undefined4 *)
                                       (*(int *)((int)ppppuVar2 + 0x7c) + 4 + iVar6 * 8),local_164);
                    uVar22 = __alldiv((uint)uVar22 & 0xffff8000,(int)((ulonglong)uVar22 >> 0x20),
                                      0x320000,0);
                    puVar14 = (uint *)(local_214 + iVar6 * 8);
                    uVar18 = *puVar14;
                    *puVar14 = *puVar14 + (uint)uVar22;
                    piVar8 = (int *)(local_214 + iVar6 * 8 + 4);
                    *piVar8 = *piVar8 + (int)((ulonglong)uVar22 >> 0x20) +
                              (uint)CARRY4(uVar18,(uint)uVar22);
                    iVar6 = iVar6 + 1;
                    uVar22 = local_164;
                  } while (iVar6 < local_15c);
                }
                local_164._4_4_ = (int)((ulonglong)uVar22 >> 0x20);
                local_164._0_4_ = (uint)uVar22;
                iVar6 = *(int *)(*(int *)((int)ppppuVar2 + 0x68) + 0x28);
                puVar14 = (uint *)(local_1ec + iVar6 * 8);
                uVar18 = *puVar14;
                *puVar14 = *puVar14 + (uint)local_164;
                piVar8 = (int *)(local_1ec + iVar6 * 8 + 4);
                *piVar8 = *piVar8 + local_164._4_4_ + (uint)CARRY4(uVar18,(uint)local_164);
                ppppuVar2 = local_a0;
                ppppuVar20 = DAT_0131bb34;
                ppppuVar15 = local_54;
                local_164 = uVar22;
              }
              local_50 = local_50 + 4;
              local_1c = (undefined4 ****)((int)local_1c + -1);
            } while (local_1c != (undefined4 ****)0x0);
            local_1c = (undefined4 ****)0x0;
            local_a0 = (undefined4 ****)0x0;
            piVar8 = local_98;
          }
        }
        FUN_004be780(local_1f4);
        FUN_004be780(local_21c);
        local_20 = (int *)0x0;
        local_44 = (int *)(*(int *)(local_24 + 0x10) - *(int *)(local_24 + 0xc) >> 2);
        if (0 < (int)local_44) {
          do {
            cVar5 = (**(code **)(**(int **)(*(int *)(local_24 + 0xc) + (int)local_20 * 4) + 0x20))()
            ;
            if (cVar5 != '\0') {
              iVar6 = *(int *)(*(int *)(local_24 + 0xc) + (int)local_20 * 4);
              local_74 = (undefined **)
                         (*(uint *)(local_214 + *(int *)(iVar6 + 0x28) * 8) >> 0xf |
                         *(int *)(local_214 + 4 + *(int *)(iVar6 + 0x28) * 8) << 0x11);
              local_6c = 0x18d;
              local_70 = CColor::vftable;
              uStack_68 = DAT_00f092fc;
              uStack_64 = DAT_00f092fc;
              uStack_60 = DAT_00f092fc;
              uStack_5c = DAT_00f092fc;
              local_58 = CONCAT31(local_58._1_3_,1);
              ppppuVar15 = local_54;
              if (local_74 != (undefined **)0x0) {
                local_6c = *(uint *)(iVar6 + 0x30);
                uStack_68 = (uint)*(undefined8 *)(iVar6 + 0x34);
                uStack_64 = (uint)((ulonglong)*(undefined8 *)(iVar6 + 0x34) >> 0x20);
                uStack_60 = (uint)*(undefined8 *)(iVar6 + 0x3c);
                uStack_5c = (uint)((ulonglong)*(undefined8 *)(iVar6 + 0x3c) >> 0x20);
                local_58 = CONCAT31(local_58._1_3_,*(undefined1 *)(iVar6 + 0x44));
                FUN_0054a870();
                ppppuVar15 = local_54;
                piVar8 = local_98;
              }
            }
            local_20 = (int *)((int)local_20 + 1);
          } while ((int)local_20 < (int)local_44);
        }
        local_24 = 0;
        local_44 = (int *)((int)ppppuVar15[1] - (int)*ppppuVar15 >> 2);
        local_20 = (int *)0x0;
        if (0 < (int)local_44) {
          do {
            if ((int)ppppuVar15[1] - (int)*ppppuVar15 >> 2 < (int)local_20) {
              ppuVar12 = (undefined4 **)FUN_0096bb70();
            }
            else {
              ppuVar12 = (*ppppuVar15)[(int)local_20];
            }
            cVar5 = (*(code *)(*ppuVar12)[6])();
            if (cVar5 != '\0') {
              local_70 = (undefined **)0x18d;
              local_74 = CColor::vftable;
              local_6c = DAT_00f092fc;
              uStack_68 = DAT_00f092fc;
              uStack_64 = DAT_00f092fc;
              uStack_60 = DAT_00f092fc;
              uStack_5c = CONCAT31(uStack_5c._1_3_,1);
              if ((int)ppppuVar15[1] - (int)*ppppuVar15 >> 2 < (int)local_20) {
                ppuVar12 = (undefined4 **)FUN_0096bb70();
              }
              else {
                ppuVar12 = (*ppppuVar15)[(int)local_20];
              }
              local_78 = *(uint *)(local_1ec + (int)ppuVar12[10] * 8) >> 0xf |
                         *(int *)(local_1ec + 4 + (int)ppuVar12[10] * 8) << 0x11;
              if (local_78 != 0) {
                if ((int)ppppuVar15[1] - (int)*ppppuVar15 >> 2 < (int)local_20) {
                  ppuVar12 = (undefined4 **)FUN_0096bb70();
                }
                else {
                  ppuVar12 = (*ppppuVar15)[(int)local_20];
                }
                local_70 = (undefined **)ppuVar12[0x3b];
                local_6c = (uint)*(undefined8 *)(ppuVar12 + 0x3c);
                uStack_68 = (uint)((ulonglong)*(undefined8 *)(ppuVar12 + 0x3c) >> 0x20);
                local_58 = (int)local_20;
                uStack_64 = (uint)*(undefined8 *)(ppuVar12 + 0x3e);
                uStack_60 = (uint)((ulonglong)*(undefined8 *)(ppuVar12 + 0x3e) >> 0x20);
                uStack_5c = CONCAT31(uStack_5c._1_3_,*(undefined1 *)(ppuVar12 + 0x40));
                FUN_007797f0();
                local_24 = local_24 + local_78;
                ppppuVar15 = local_54;
                piVar8 = local_98;
              }
            }
            local_20 = (int *)((int)local_20 + 1);
          } while ((int)local_20 < (int)local_44);
        }
        if (0 < (int)(100U - local_24)) {
          local_38 = DAT_00f141cc;
          uStack_34 = DAT_00f1f760;
          local_30 = DAT_00f141cc;
          local_6c = DAT_00f141cc;
          uStack_68 = DAT_00f1f760;
          local_74 = CColor::vftable;
          local_70 = (undefined **)0x18d;
          uStack_64 = DAT_00f141cc;
          uStack_5c = uStack_5c & 0xffffff00;
          local_58 = 0;
          local_78 = 100U - local_24;
          uStack_60 = DAT_00f092fc;
          uStack_2c = DAT_00f092fc;
          FUN_007797f0();
          piVar8 = local_98;
        }
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("selected_population_chart",0x19);
        local_8._0_1_ = 0x21;
        (**(code **)(*piVar8 + 0x44))(local_40);
        FUN_009e1430(&local_174);
        local_8._0_1_ = 0x1e;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("wars_overlappingbox",0x13);
        local_8._0_1_ = 0x22;
        piVar13 = (int *)(**(code **)(*piVar8 + 0x9c))(local_40);
        (**(code **)(*piVar13 + 0xc0))();
        local_8._0_1_ = 0x1e;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("allies_overlappingbox",0x15);
        local_8._0_1_ = 0x23;
        piVar13 = (int *)(**(code **)(*piVar8 + 0x9c))(local_40);
        (**(code **)(*piVar13 + 0xc0))();
        local_8._0_1_ = 0x1e;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        uStack_2c = 0xf;
        local_30 = 0;
        local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
        FUN_00409350("puppets_overlappingbox",0x16);
        local_8._0_1_ = 0x24;
        piVar8 = (int *)(**(code **)(*piVar8 + 0x9c))(local_40);
        (**(code **)(*piVar8 + 0xc0))();
        local_8._0_1_ = 0x1e;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = (uint ***)((uint)local_bc[0] & 0xffffff00);
        FUN_00409350("COUNTRY_PUPPETS_LIST",0x14);
        local_8._0_1_ = 0x25;
        FUN_009a8ee0(local_188,local_bc);
        local_8._0_1_ = 0x26;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined4 *)(iVar6 + 0x74),
                     *(undefined4 *)(iVar6 + 0x78));
        local_8._0_1_ = 0x29;
        FUN_009adb70();
        if (local_184 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_184);
        }
        local_184 = 0;
        local_180 = 0;
        local_17c = 0;
        local_8._0_1_ = 0x2a;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 0x2a;
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_bc[0]);
        }
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = (uint ***)((uint)local_bc[0] & 0xffffff00);
        iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_108 * 4);
        local_48 = *(undefined4 ****)(iVar6 + 0xcf8);
        if (*(int *)(iVar6 + 0xcfc) != 0) {
          uStack_2c = 0xf;
          local_30 = 0;
          local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
          if (*(char *)(iVar6 + 0xcf4) == '\0') {
            local_8._0_1_ = uVar4;
            FUN_00409350("SATELLITE_OF_NOCOLOR",0x14);
            local_8._0_1_ = 0x2f;
            FUN_009a8ee0(local_8c,local_40);
            local_8._0_1_ = 0x30;
            iVar6 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined4 *)(iVar6 + 0x74),
                         *(undefined4 *)(iVar6 + 0x78));
            local_8._0_1_ = 0x31;
            FUN_00408ed0();
            if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_70);
            }
            uStack_5c = 0xf;
            uStack_60 = 0;
            local_70 = (undefined **)((uint)local_70 & 0xffffff00);
            local_8._0_1_ = 0x32;
            FUN_009adb70();
            if (local_88 != 0) {
              FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_88);
            }
          }
          else {
            FUN_00409350("SUBSTATE_OF_NOCOLOR",0x13);
            local_8._0_1_ = 0x2b;
            FUN_009a8ee0(local_8c,local_40);
            local_8._0_1_ = 0x2c;
            iVar6 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined4 *)(iVar6 + 0x74),
                         *(undefined4 *)(iVar6 + 0x78));
            local_8._0_1_ = 0x2d;
            FUN_00408ed0();
            if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_70);
            }
            uStack_5c = 0xf;
            uStack_60 = 0;
            local_70 = (undefined **)((uint)local_70 & 0xffffff00);
            local_8._0_1_ = 0x2e;
            FUN_009adb70();
            if (local_88 != 0) {
              FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_88);
            }
          }
          local_88 = 0;
          if (0xf < uStack_2c) {
            local_8._0_1_ = 0x2a;
            local_80 = 0;
            local_84 = 0;
            local_88 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_40[0]);
          }
        }
        local_8._0_1_ = 0x2a;
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        FUN_00409350("puppets_label",0xd);
        local_8._0_1_ = 0x33;
        (**(code **)(*local_98 + 0x3c))(local_94);
        FUN_00408ed0(local_fc,0,0xffffffff);
        FUN_00a5ecc0();
        local_8._0_1_ = 0x2a;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 0x2a;
        if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_94[0]);
        }
        local_80 = 0xf;
        local_84 = 0;
        local_94[0] = local_94[0] & 0xffffff00;
        local_24 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_108 * 4);
        iVar6 = *(int *)(local_24 + 0xbe8);
        local_20 = (int *)0x0;
        if (0 < (int)(*(int *)(local_24 + 0xbec) - iVar6 & 0xfffffffcU)) {
          do {
            iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xadc) + (int)local_20 * 4);
            local_198 = *(undefined4 *)(iVar7 + 0x1c);
            local_194 = *(undefined4 *)(iVar7 + 0x20);
            local_48 = *(undefined4 ****)(iVar7 + 0x1c);
            local_54 = *(undefined4 *****)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x20) * 4);
            if (*(int *)(*(int *)(iVar6 + (int)local_20 * 4) + 0x34) != 0) {
              local_44 = (int *)FUN_00aae9af(0x28);
              local_8._0_1_ = 0x34;
              if (local_44 == (int *)0x0) {
                local_1c = (undefined4 ****)0x0;
              }
              else {
                uStack_2c = 0xf;
                local_30 = 0;
                local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
                FUN_00409350();
                local_8 = CONCAT31(local_8._1_3_,0x35);
                local_4c = local_4c | 1;
                (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))(local_40);
                local_1c = (undefined4 ****)FUN_009b1df0();
              }
              local_8 = 0x2a;
              if ((local_4c & 1) != 0) {
                local_4c = local_4c & 0xfffffffe;
                if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_40[0]);
                }
                uStack_2c = 0xf;
                local_30 = 0;
                local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
              }
              pppuVar1 = local_1c[8];
              local_13c = 0xf;
              local_140 = 0;
              local_150[0] = local_150[0] & 0xffffff00;
              FUN_00409350();
              local_8._0_1_ = 0x37;
              local_50 = pppuVar1 + 6;
              (*(code *)pppuVar1[6][0x1e])(local_150);
              local_8._0_1_ = 0x2a;
              if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_13c = 0xf;
              local_140 = 0;
              local_150[0] = local_150[0] & 0xffffff00;
              FUN_00409350("waralliesflag",0xd);
              local_8._0_1_ = 0x38;
              piVar8 = (int *)(*(code *)(*pppuVar1)[0x11])();
              local_44 = (int *)(**(code **)(*piVar8 + 0xec))();
              iVar6 = *local_44;
              uVar9 = FUN_0052fc10();
              (**(code **)(iVar6 + 0x150))(uVar9);
              local_8._0_1_ = 0x2a;
              if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_150[0]);
              }
              local_13c = 0xf;
              local_140 = 0;
              local_150[0] = local_150[0] & 0xffffff00;
              FUN_00409350("waralliesflag",0xd);
              local_8._0_1_ = 0x39;
              piVar8 = (int *)(*(code *)(*pppuVar1)[0x11])(local_150);
              (**(code **)(*piVar8 + 0xd4))(local_194);
              local_8._0_1_ = 0x2a;
              if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_150[0]);
              }
              (*(code *)(*local_50)[0xd])();
              local_13c = 0xf;
              local_140 = 0;
              local_150[0] = local_150[0] & 0xffffff00;
              FUN_00409350("wars_overlappingbox",0x13);
              local_8._0_1_ = 0x3a;
              piVar8 = (int *)(**(code **)(*local_98 + 0x9c))(local_150);
              (**(code **)(*piVar8 + 0xb4))(local_1c,1);
              local_8._0_1_ = 0x2a;
              if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_150[0]);
              }
              local_13c = 0xf;
              local_140 = 0;
              local_150[0] = local_150[0] & 0xffffff00;
            }
            if (*(int *)(*(int *)(*(int *)(local_24 + 0xbe8) + (int)local_20 * 4) + 0x20) != 0) {
              local_44 = (int *)FUN_00aae9af(0x28);
              local_8._0_1_ = 0x3b;
              if (local_44 == (int *)0x0) {
                local_1c = (undefined4 ****)0x0;
              }
              else {
                uStack_2c = 0xf;
                local_30 = 0;
                local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
                FUN_00409350();
                local_8 = CONCAT31(local_8._1_3_,0x3c);
                local_4c = local_4c | 2;
                (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))(local_40);
                local_1c = (undefined4 ****)FUN_009b1df0();
              }
              local_8 = 0x2a;
              if ((local_4c & 2) != 0) {
                local_4c = local_4c & 0xfffffffd;
                if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_40[0]);
                }
                uStack_2c = 0xf;
                local_30 = 0;
                local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
              }
              pppuVar1 = local_1c[8];
              local_118 = 0xf;
              local_11c = 0;
              local_12c[0] = local_12c[0] & 0xffffff00;
              FUN_00409350();
              local_8._0_1_ = 0x3e;
              local_50 = pppuVar1 + 6;
              (*(code *)pppuVar1[6][0x1e])(local_12c);
              local_8._0_1_ = 0x2a;
              if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_118 = 0xf;
              local_11c = 0;
              local_12c[0] = local_12c[0] & 0xffffff00;
              FUN_00409350("waralliesflag",0xd);
              local_8._0_1_ = 0x3f;
              piVar8 = (int *)(*(code *)(*pppuVar1)[0x11])();
              local_44 = (int *)(**(code **)(*piVar8 + 0xec))();
              iVar6 = *local_44;
              uVar9 = FUN_0052fc10();
              (**(code **)(iVar6 + 0x150))(uVar9);
              local_8._0_1_ = 0x2a;
              if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_12c[0]);
              }
              local_118 = 0xf;
              local_11c = 0;
              local_12c[0] = local_12c[0] & 0xffffff00;
              FUN_00409350("waralliesflag",0xd);
              local_8._0_1_ = 0x40;
              piVar8 = (int *)(*(code *)(*pppuVar1)[0x11])(local_12c);
              (**(code **)(*piVar8 + 0xd4))(local_194);
              local_8._0_1_ = 0x2a;
              if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_12c[0]);
              }
              (*(code *)(*local_50)[0xd])();
              local_118 = 0xf;
              local_11c = 0;
              local_12c[0] = local_12c[0] & 0xffffff00;
              FUN_00409350("allies_overlappingbox",0x15);
              local_8._0_1_ = 0x41;
              piVar8 = (int *)(**(code **)(*local_98 + 0x9c))(local_12c);
              (**(code **)(*piVar8 + 0xb4))(local_1c,1);
              local_8._0_1_ = 0x2a;
              if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_12c[0]);
              }
              local_118 = 0xf;
              local_11c = 0;
              local_12c[0] = local_12c[0] & 0xffffff00;
            }
            if (((*(char *)((int)local_54 + 0xcf5) == '\0') && (*(char *)(local_54 + 0x33d) == '\0')
                ) || (local_48 = local_54[0x33e], local_54[0x33f] != local_108)) {
              if (0 < (int)((int)local_54[0x34f] - (int)local_54[0x34e] & 0xfffffff8U)) {
                puVar14 = (uint *)FUN_0042c350(&local_10c);
                if ((*(uint *)puVar14[1] <= *puVar14) && (*puVar14 < ((uint *)puVar14[1])[1]))
                goto LAB_0076f049;
              }
            }
            else {
LAB_0076f049:
              local_44 = (int *)FUN_00aae9af(0x28);
              local_8._0_1_ = 0x42;
              if (local_44 == (int *)0x0) {
                local_1c = (undefined4 ****)0x0;
              }
              else {
                uStack_2c = 0xf;
                local_30 = 0;
                local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
                FUN_00409350();
                local_8 = CONCAT31(local_8._1_3_,0x43);
                local_4c = local_4c | 4;
                (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))(local_40);
                local_1c = (undefined4 ****)FUN_009b1df0();
              }
              local_8 = 0x2a;
              if ((local_4c & 4) != 0) {
                local_4c = local_4c & 0xfffffffb;
                if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_40[0]);
                }
                uStack_2c = 0xf;
                local_30 = 0;
                local_40[0] = (uint ***)((uint)local_40[0] & 0xffffff00);
              }
              pppuVar1 = local_1c[8];
              local_c4 = 0xf;
              local_c8 = 0;
              local_d8[0] = local_d8[0] & 0xffffff00;
              FUN_00409350();
              local_8._0_1_ = 0x45;
              local_50 = pppuVar1 + 6;
              (*(code *)pppuVar1[6][0x1e])(local_d8);
              local_8._0_1_ = 0x2a;
              if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_c4 = 0xf;
              local_c8 = 0;
              local_d8[0] = local_d8[0] & 0xffffff00;
              FUN_00409350("waralliesflag",0xd);
              local_8._0_1_ = 0x46;
              piVar8 = (int *)(*(code *)(*pppuVar1)[0x11])();
              local_44 = (int *)(**(code **)(*piVar8 + 0xec))();
              iVar6 = *local_44;
              uVar9 = FUN_0052fc10();
              (**(code **)(iVar6 + 0x150))(uVar9);
              local_8._0_1_ = 0x2a;
              if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_d8[0]);
              }
              local_c4 = 0xf;
              local_c8 = 0;
              local_d8[0] = local_d8[0] & 0xffffff00;
              FUN_00409350("waralliesflag",0xd);
              local_8._0_1_ = 0x47;
              piVar8 = (int *)(*(code *)(*pppuVar1)[0x11])(local_d8);
              (**(code **)(*piVar8 + 0xd4))(local_194);
              local_8._0_1_ = 0x2a;
              if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_d8[0]);
              }
              (*(code *)(*local_50)[0xd])();
              local_c4 = 0xf;
              local_c8 = 0;
              local_d8[0] = local_d8[0] & 0xffffff00;
              FUN_00409350("puppets_overlappingbox",0x16);
              local_8._0_1_ = 0x48;
              piVar8 = (int *)(**(code **)(*local_98 + 0x9c))(local_d8);
              (**(code **)(*piVar8 + 0xb4))(local_1c,1);
              local_8._0_1_ = 0x2a;
              if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_d8[0]);
              }
              local_c4 = 0xf;
              local_c8 = 0;
              local_d8[0] = local_d8[0] & 0xffffff00;
            }
            iVar6 = *(int *)(local_24 + 0xbe8);
            local_20 = (int *)((int)local_20 + 1);
            uVar4 = (undefined1)local_8;
          } while ((int)local_20 < *(int *)(local_24 + 0xbec) - iVar6 >> 2);
        }
        local_8._0_1_ = uVar4;
        (**(code **)(local_98[6] + 0x34))();
        if (0xf < local_e8) {
          uStack_66c = CONCAT44(local_fc[0],&UNK_0076f2f2);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_e8 = 0xf;
        local_ec = 0;
        local_fc[0] = local_fc[0] & 0xffffff00;
        if (local_1a8 != 0) {
          uStack_66c = CONCAT44(local_1a8,&UNK_0076f317);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1a8 = 0;
        local_1a4 = 0;
        local_1a0 = 0;
        if (local_174 != 0) {
          uStack_66c = CONCAT44(local_174,&UNK_0076f33c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_174 = 0;
        local_170 = 0;
        local_16c = 0;
        uStack_66c = CONCAT44(0x76f35c,(uint *)uStack_66c);
        FUN_004ba3f0();
        local_8 = 0xffffffff;
        uStack_66c = CONCAT44(0x76f36e,(uint *)uStack_66c);
        FUN_004ba3f0();
        in_ECX = local_9c;
      }
      iVar6 = *(int *)(local_110 + 0x3c);
    }
    uStack_66c = 0x900e100cc;
    local_e8 = 0xf;
    local_ec = 0;
    local_fc[0] = local_fc[0] & 0xffffff00;
    uStack_674 = CONCAT44(0x76f558,(uint *)uStack_674);
    FUN_00409350();
    local_8 = 0x4e;
    uStack_66c = CONCAT44(local_fc,0x76f577);
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x278) + 0x18) + 0x78))();
    local_8 = 0xffffffff;
    if (0xf < local_e8) {
      uStack_66c = CONCAT44(local_fc[0],&UNK_0076f593);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(char *)(in_ECX + 0x5bc) == '\0') goto LAB_00770337;
  uStack_66c = CONCAT44(0x76f5ac,(uint *)uStack_66c);
  iVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  if (*(char *)(iVar6 + 0x34) == '\0') {
    if ((*(char *)(in_ECX + 0x5bc) == '\0') || (*(int **)(in_ECX + 0x5d0) == (int *)0x0)) {
LAB_00770337:
      if (*(int **)(in_ECX + 0x5d0) != (int *)0x0) {
        uStack_66c = CONCAT44(0x77034c,(uint *)uStack_66c);
        (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
        iVar6 = *(int *)(in_ECX + 0x5d0);
        if ((*(char *)(iVar6 + 0xb4) == '\0') &&
           (cVar5 = *(char *)(iVar6 + 0xd8), *(undefined1 *)(iVar6 + 0xd8) = 1, cVar5 == '\0')) {
          if (*(int *)(*(int *)(in_ECX + 0x5d0) + 0xd4) == 0x29a) {
            uStack_66c = CONCAT44(*(int *)(in_ECX + 0x5d0) + 0xb8,local_8c);
            uStack_674 = CONCAT44(0x77039b,(uint *)uStack_674);
            local_44 = (int *)FUN_009a8ee0();
            local_8 = 0x83;
            uStack_66c = CONCAT44(0x7703aa,(uint *)uStack_66c);
            iVar6 = FUN_00475500();
            uStack_674 = *(undefined8 *)(iVar6 + 0x6c);
            uStack_66c = *(undefined8 *)(iVar6 + 0x74);
            pppuStack_678 = (undefined ***)0x7703cd;
            FUN_009a9880();
            local_8._0_1_ = 0x84;
            uStack_66c = CONCAT44(0x7703dc,(uint *)uStack_66c);
            uVar9 = FUN_009f23c0();
            local_8 = CONCAT31(local_8._1_3_,0x85);
            uStack_66c = CONCAT44(uVar9,0x7703e8);
            FUN_00771510();
            uStack_66c = CONCAT44(0x7703ed,(uint *)uStack_66c);
            FUN_0076bf20();
            uStack_66c = CONCAT44(0x7703f5,(uint *)uStack_66c);
            FUN_00408ad0();
            local_8 = 0xffffffff;
            uStack_66c = CONCAT44(local_8c,0x770408);
            FUN_009a9740();
          }
          else {
            uStack_66c = CONCAT44(0x770417,(uint *)uStack_66c);
            uVar9 = FUN_009f23c0();
            local_8 = 0x86;
            uStack_66c = CONCAT44(uVar9,0x770426);
            FUN_00771510();
            local_8 = 0xffffffff;
            uStack_66c = CONCAT44(0x770432,(uint *)uStack_66c);
            FUN_0076bf20();
          }
        }
      }
    }
    else {
      uStack_66c = CONCAT44(0x76fb50,(uint *)uStack_66c);
      cVar5 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x2c))();
      if (cVar5 == '\0') goto LAB_00770337;
      uStack_66c = CONCAT44(0x76fb63,(uint *)uStack_66c);
      uVar9 = (**(code **)(*(int *)(in_ECX + 0x3c) + 0x28))();
      uStack_66c = CONCAT44(uVar9,0x76fb69);
      FUN_009af9f0();
      uStack_66c = CONCAT44(0x76fb76,(uint *)uStack_66c);
      (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
      iVar6 = *(int *)(in_ECX + 0x5d0);
      if ((*(char *)(iVar6 + 0xb4) == '\0') &&
         (cVar5 = *(char *)(iVar6 + 0xd8), *(undefined1 *)(iVar6 + 0xd8) = 1, cVar5 == '\0')) {
        if (*(int *)(*(int *)(in_ECX + 0x5d0) + 0xd4) == 0x29a) {
          uStack_66c = CONCAT44(*(int *)(in_ECX + 0x5d0) + 0xb8,local_8c);
          uStack_674 = CONCAT44(0x76fbc5,(uint *)uStack_674);
          local_44 = (int *)FUN_009a8ee0();
          local_8 = 99;
          uStack_66c = CONCAT44(0x76fbd4,(uint *)uStack_66c);
          FUN_00475500();
          uStack_66c = CONCAT44(0x76fbe1,(uint *)uStack_66c);
          puVar17 = (undefined8 *)FUN_0040b440();
          uStack_674 = *puVar17;
          uStack_66c = puVar17[1];
          pppuStack_678 = (undefined ***)0x76fc03;
          FUN_009a9880();
          local_8._0_1_ = 100;
          uStack_66c = CONCAT44(0x76fc12,(uint *)uStack_66c);
          uVar9 = FUN_009f23c0();
          local_8 = CONCAT31(local_8._1_3_,0x65);
          uStack_66c = CONCAT44(uVar9,0x76fc1e);
          FUN_00771510();
          uStack_66c = CONCAT44(0x76fc23,(uint *)uStack_66c);
          FUN_0076bf20();
          uStack_66c = CONCAT44(0x76fc2b,(uint *)uStack_66c);
          FUN_00408ad0();
          local_8 = 0xffffffff;
          uStack_66c = CONCAT44(local_8c,0x76fc3e);
          FUN_009a9740();
        }
        else {
          uStack_66c = CONCAT44(0x76fc4d,(uint *)uStack_66c);
          uVar9 = FUN_009f23c0();
          local_8 = 0x66;
          uStack_66c = CONCAT44(uVar9,0x76fc5c);
          FUN_00771510();
          local_8 = 0xffffffff;
          uStack_66c = CONCAT44(0x76fc68,(uint *)uStack_66c);
          FUN_0076bf20();
        }
      }
      uStack_66c = CONCAT44(0x76fc75,(uint *)uStack_66c);
      iVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
      uStack_66c._4_4_ = (undefined ***)0x1;
      uStack_66c._0_4_ = (uint *)0x76fc84;
      (**(code **)(**(int **)(iVar6 + 0xe4) + 0x10))();
      local_24 = in_ECX + 0x590;
      uStack_66c._0_4_ = (uint *)0x76fc9e;
      cVar5 = FUN_00416db0();
      if ((cVar5 == '\0') || (*(int *)(*(int *)(in_ECX + 0x5d0) + 0xb0) != *(int *)(in_ECX + 0x5ac))
         ) {
        uStack_66c._0_4_ = (uint *)0x76fe88;
        uVar9 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x30))();
        *(undefined4 *)(in_ECX + 0x5b0) = uVar9;
        uStack_66c._0_4_ = (uint *)0x76fe9b;
        FUN_009885d0();
        uStack_66c._0_4_ = (uint *)0x301;
        uStack_674 = CONCAT44(0x4e4,&local_70);
        local_8 = 0x6d;
        pppuStack_678 = (undefined ***)0x76feba;
        FUN_004015b0();
        local_8._0_1_ = 0x6e;
        uStack_66c = CONCAT44(uStack_66c._4_4_,
                              (*(int **)(in_ECX + 0x5b0))[1] - **(int **)(in_ECX + 0x5b0));
        uStack_674 = CONCAT44(0x76fed9,(uint *)uStack_674);
        uStack_674._4_4_ = FUN_00987d20();
        uStack_674._0_4_ = (uint *)0x76fedf;
        uStack_674._0_4_ = (uint *)FUN_00455470();
        pppuStack_678 = (undefined ***)0x76fee5;
        FUN_00401280();
        local_8 = CONCAT31(local_8._1_3_,0x6d);
        uStack_674._0_4_ = (uint *)0x76fef7;
        FUN_00401650();
        local_8 = 0xffffffff;
        uStack_674._0_4_ = (uint *)0x76ff06;
        FUN_00408ad0();
        uStack_674._0_4_ = (uint *)0x3c;
        pppuStack_678 = (undefined ***)0x76ff0d;
        iVar6 = FUN_00aae9af();
        if (iVar6 == 0) {
          local_20 = (int *)0x0;
        }
        else {
          uStack_674._0_4_ = (uint *)0x76ff19;
          local_20 = (int *)FUN_009d6e00();
        }
        uStack_674._0_4_ = (uint *)local_20;
        pppuStack_678 = (undefined ***)0x76ff30;
        FUN_00a16d40();
        uStack_674._0_4_ = (uint *)0x76ff43;
        FUN_009885d0();
        uStack_674._0_4_ = (uint *)0x114;
        local_8 = 0x6f;
        pppuStack_678 = (undefined ***)0x76ff54;
        iVar6 = FUN_00aae9af();
        local_8._0_1_ = 0x70;
        local_44 = (int *)iVar6;
        if (iVar6 == 0) {
          pppuStack_678 = (undefined ***)0x0;
        }
        else {
          uStack_674._0_4_ = (uint *)0x3c;
          pppuStack_678 = (undefined ***)0x76ff6b;
          local_1c = (undefined4 ****)FUN_00aae9af();
          local_8._0_1_ = 0x71;
          uStack_674._0_4_ = (uint *)iVar6;
          if (local_1c == (undefined4 ****)0x0) {
            local_8._0_1_ = 0x70;
            pppuStack_678 = (undefined ***)0x76ffa3;
            pppuStack_678 = (undefined ***)FUN_00990900();
          }
          else {
            uStack_674 = (ulonglong)uStack_674._4_4_ << 0x20;
            pppuStack_678 = (undefined ***)0x1;
            puStack_67c = (uint *)0x0;
            ppppuStack_680 = (undefined4 ****)local_20;
            ppppuStack_688 = (undefined4 ****)0x76ff87;
            ppppuStack_684 = local_1c;
            FUN_009d5450();
            local_8._0_1_ = 0x70;
            pppuStack_678 = (undefined ***)0x76ff93;
            pppuStack_678 = (undefined ***)FUN_00990900();
          }
        }
        uStack_674._0_4_ = (uint *)0x1;
        puStack_67c = (uint *)local_658;
        local_8._0_1_ = 0x6f;
        ppppuStack_680 = (undefined4 ****)0x76ffc0;
        FUN_009a0bf0();
        local_8._0_1_ = 0x73;
        uStack_674._0_4_ = (uint *)0x76ffcf;
        FUN_00408ad0();
        uStack_674._0_4_ = (uint *)local_658;
        pppuStack_678 = (undefined ***)DAT_012588e8;
        DAT_01258a66 = 0;
        puStack_67c = (uint *)0x76ffe8;
        FUN_0067f5b0();
        DAT_01258a66 = 1;
        *(undefined1 *)(in_ECX + 0x5bd) = 1;
        uStack_674._0_4_ = (uint *)0x770001;
        FUN_00688050();
        uStack_674._0_4_ = (uint *)0x770014;
        iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
        uStack_674._0_4_ = (uint *)(iVar6 + 0x20bc);
        pppuStack_678 = (undefined ***)0x77001f;
        FUN_007fcbd0();
        uStack_674._0_4_ = (uint *)0x770031;
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
        uStack_674._0_4_ = (uint *)0x770044;
        FUN_00819830();
        uStack_674._0_4_ = (uint *)0x770049;
        iVar6 = FUN_00475500();
        *(undefined4 *)(iVar6 + 0xec) = 0xff9a;
        uStack_674._0_4_ = (uint *)0x770058;
        iVar7 = FUN_00475500();
        iVar6 = local_24;
        uStack_674._0_4_ = (uint *)local_24;
        *(undefined4 *)(iVar7 + 0xf0) = 2;
        local_8._0_1_ = 0x74;
        pppuStack_678 = (undefined ***)0x770077;
        FUN_00988fa0();
        local_8._0_1_ = 0x75;
        uStack_674._0_4_ = (uint *)0x770083;
        uStack_674._0_4_ = (uint *)FUN_00475500();
        pppuStack_678 = (undefined ***)0x77008f;
        iVar7 = FUN_0040b410();
        local_15 = *(int *)(iVar7 + 0x10) != 0;
        uStack_674._0_4_ = (uint *)0x77009d;
        FUN_00408ad0();
        if (local_15 != '\0') {
          uStack_674._0_4_ = (uint *)0x7700b6;
          FUN_009885d0();
          local_8._0_1_ = 0x76;
          uStack_674._0_4_ = (uint *)0x7700bf;
          uStack_674._0_4_ = (uint *)FUN_00475500();
          pppuStack_678 = (undefined ***)0x7700cb;
          uStack_674._0_4_ = (uint *)FUN_0040b410();
          local_8._0_1_ = 0x77;
          pppuStack_678 = (undefined ***)0x7700dd;
          FUN_00988fa0();
          uStack_674._0_4_ = local_d8;
          local_8._0_1_ = 0x78;
          pppuStack_678 = (undefined ***)0x7700f8;
          FUN_00988f20();
          uStack_674._0_4_ = (uint *)iVar6;
          local_8._0_1_ = 0x79;
          pppuStack_678 = (undefined ***)0x77010a;
          puStack_67c = (uint *)FUN_00988f20();
          uStack_674._0_4_ = (uint *)0xffffffff;
          pppuStack_678 = (undefined ***)0x0;
          local_8._0_1_ = 0x7a;
          ppppuStack_680 = (undefined4 ****)0x77011a;
          FUN_00408ed0();
          uStack_674._0_4_ = (uint *)0x770121;
          FUN_00408ad0();
          uStack_674._0_4_ = (uint *)0x77012c;
          FUN_00408ad0();
          uStack_674._0_4_ = (uint *)0x770134;
          FUN_00408ad0();
          uStack_674._0_4_ = (uint *)0x77013f;
          FUN_00408ad0();
          local_8._0_1_ = 0x75;
          uStack_674._0_4_ = (uint *)0x77014e;
          FUN_00408ad0();
        }
        local_44 = (int *)&ppppuStack_68c;
        FUN_009885d0();
        FUN_00992740(local_230,&local_70,1);
        local_8 = CONCAT31(local_8._1_3_,0x7b);
        pppuStack_678 = (undefined ***)*local_20;
        uStack_674._0_4_ = (uint *)(local_20[1] - (int)pppuStack_678);
        puStack_67c = (uint *)0x77018f;
        FUN_00993720();
        uStack_674._0_4_ = (uint *)0x77019a;
        FUN_00992d60();
        uStack_674 = CONCAT44(uStack_674._4_4_,0x7701a2);
        FUN_00408ad0();
        local_8 = 0x73;
        FUN_00770216();
        return;
      }
      uStack_66c._0_4_ = (uint *)local_24;
      uStack_674 = CONCAT44(0x76fccf,(uint *)uStack_674);
      FUN_00988fa0();
      local_8 = 0x67;
      uStack_66c._0_4_ = (uint *)0x76fcde;
      uStack_66c._0_4_ = (uint *)FUN_00475500();
      uStack_674 = CONCAT44(0x76fcea,(uint *)uStack_674);
      iVar6 = FUN_0040b410();
      local_15 = *(int *)(iVar6 + 0x10) != 0;
      uStack_66c._0_4_ = (uint *)0x76fcf8;
      FUN_00408ad0();
      if (local_15 != '\0') {
        uStack_66c._0_4_ = (uint *)0x76fd11;
        FUN_009885d0();
        local_8._0_1_ = 0x68;
        uStack_66c._0_4_ = (uint *)0x76fd1a;
        uStack_66c._0_4_ = (uint *)FUN_00475500();
        uStack_674 = CONCAT44(0x76fd23,(uint *)uStack_674);
        uStack_66c._0_4_ = (uint *)FUN_0040b410();
        local_8._0_1_ = 0x69;
        uStack_674 = CONCAT44(0x76fd38,(uint *)uStack_674);
        FUN_00988fa0();
        uStack_66c._0_4_ = local_fc;
        local_8._0_1_ = 0x6a;
        uStack_674 = CONCAT44(0x76fd53,(uint *)uStack_674);
        FUN_00988f20();
        uStack_66c._0_4_ = (uint *)local_24;
        local_8._0_1_ = 0x6b;
        uStack_674 = CONCAT44(0x76fd68,(uint *)uStack_674);
        uVar18 = FUN_00988f20();
        uStack_66c._0_4_ = (uint *)0xffffffff;
        uStack_674 = (ulonglong)uVar18;
        local_8._0_1_ = 0x6c;
        pppuStack_678 = (undefined ***)0x76fd78;
        FUN_00408ed0();
        uStack_66c._0_4_ = (uint *)0x76fd7f;
        FUN_00408ad0();
        uStack_66c._0_4_ = (uint *)0x76fd8a;
        FUN_00408ad0();
        uStack_66c._0_4_ = (uint *)0x76fd95;
        FUN_00408ad0();
        uStack_66c._0_4_ = (uint *)0x76fd9d;
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x67);
        uStack_66c._0_4_ = (uint *)0x76fdac;
        FUN_00408ad0();
      }
      uStack_66c._0_4_ = (uint *)0x76fdb1;
      piVar8 = (int *)FUN_009a71d0();
      uStack_66c = CONCAT44(uStack_66c._4_4_,&local_70);
      uStack_674 = CONCAT44(0x76fdbe,(uint *)uStack_674);
      (**(code **)(*piVar8 + 0x30))();
      uStack_674 = CONCAT44(&local_70,DAT_012588e8);
      DAT_01258a66 = 0;
      pppuStack_678 = (undefined ***)0x76fdd4;
      cVar5 = FUN_0067f1d0();
      DAT_01258a66 = 1;
      if (cVar5 == '\0') {
        *(undefined2 *)(in_ECX + 0x5bc) = 0;
        local_8 = 0xffffffff;
        uStack_674 = CONCAT44(0x76fdf5,(uint *)uStack_674);
        FUN_00408ad0();
      }
      else {
        *(undefined1 *)(in_ECX + 0x5bd) = 1;
        uStack_674 = CONCAT44(0x76fe0c,(uint *)uStack_674);
        FUN_00688050();
        uStack_674 = CONCAT44(0x76fe1f,(uint *)uStack_674);
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
        uStack_674 = CONCAT44(0x76fe24,(uint *)uStack_674);
        FUN_00645d90();
        uStack_674 = CONCAT44(0x76fe36,(uint *)uStack_674);
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
        uStack_674 = CONCAT44(0x76fe3d,(uint *)uStack_674);
        FUN_00645d70();
        uStack_674 = CONCAT44(0x76fe42,(uint *)uStack_674);
        iVar6 = FUN_00475500();
        *(undefined4 *)(iVar6 + 0xec) = 0xff9a;
        uStack_674 = CONCAT44(0x76fe51,(uint *)uStack_674);
        iVar6 = FUN_00475500();
        *(undefined4 *)(iVar6 + 0xf0) = 2;
        *(undefined1 *)(in_ECX + 0x5bc) = 0;
        uStack_674 = CONCAT44(in_ECX,0x76fe67);
        FUN_0076d340();
        local_8 = 0xffffffff;
        uStack_674 = CONCAT44(0x76fe76,(uint *)uStack_674);
        FUN_00408ad0();
      }
      if (*(undefined4 **)(in_ECX + 0x5d0) != (undefined4 *)0x0) {
        uStack_674 = 0x10077030b;
        (**(code **)**(undefined4 **)(in_ECX + 0x5d0))();
      }
      *(undefined4 *)(in_ECX + 0x5d0) = 0;
      *(undefined4 *)(in_ECX + 0x5b0) = 0;
      uStack_674 = CONCAT44(0x770324,(uint *)uStack_674);
      iVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
      uStack_674 = 0x770332;
      (**(code **)(**(int **)(iVar6 + 0xe4) + 0x10))();
    }
  }
  else {
    uStack_66c = CONCAT44(0x76f5c5,(uint *)uStack_66c);
    FUN_009885d0();
    local_8 = 0x4f;
    uStack_66c = CONCAT44(0x76f5d9,(uint *)uStack_66c);
    FUN_009885d0();
    local_8 = CONCAT31(local_8._1_3_,0x50);
    uStack_66c._0_4_ = (uint *)0x76f5ed;
    uStack_66c._4_4_ = &local_70;
    piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))();
    uStack_66c = CONCAT44(uStack_66c._4_4_,local_fc);
    uStack_674 = CONCAT44(0x76f5fd,(uint *)uStack_674);
    piVar8 = (int *)(**(code **)(*piVar8 + 0x7c))();
    uStack_674 = CONCAT44(0x76f607,(uint *)uStack_674);
    FUN_00408ad0();
    local_8 = 0xffffffff;
    uStack_674 = CONCAT44(0x76f619,(uint *)uStack_674);
    FUN_00408ad0();
    local_15 = '\x01';
    local_24 = 0;
    uStack_674 = CONCAT44(0x76f629,(uint *)uStack_674);
    puVar16 = (undefined4 *)(**(code **)(*piVar8 + 0x2c))();
    local_50 = (undefined4 ***)*puVar16;
    if (local_50 == (undefined4 ***)0x0) {
LAB_0076f774:
      if (*(char *)(in_ECX + 0x5bd) == '\0') {
        uStack_66c = CONCAT44(0x76f78b,(uint *)uStack_66c);
        uVar9 = (**(code **)(*(int *)(in_ECX + 0x3c) + 0x28))();
        uStack_66c = CONCAT44(uVar9,0x76f791);
        FUN_009af9f0();
        uStack_66c = CONCAT44(in_ECX + 0x590,0x76f7a8);
        FUN_00988fa0();
        local_8 = 0x55;
        uStack_66c = CONCAT44(0x76f7b7,(uint *)uStack_66c);
        uVar9 = FUN_00475500();
        uStack_66c = CONCAT44(uVar9,0x76f7c0);
        iVar6 = FUN_0040b410();
        local_15 = *(int *)(iVar6 + 0x10) != 0;
        if (0xf < uStack_5c) {
          uStack_66c = CONCAT44(local_70,&UNK_0076f7d6);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if ((bool)local_15) {
          uStack_66c = CONCAT44(0x76f7ef,(uint *)uStack_66c);
          FUN_009885d0();
          local_8._0_1_ = 0x56;
          uStack_66c = CONCAT44(0x76f7f8,(uint *)uStack_66c);
          uVar9 = FUN_00475500();
          uStack_66c = CONCAT44(uVar9,0x76f801);
          uVar9 = FUN_0040b410();
          local_8._0_1_ = 0x57;
          uStack_66c = CONCAT44(uVar9,0x76f816);
          FUN_00988fa0();
          local_8._0_1_ = 0x58;
          uStack_66c = CONCAT44(&local_70,0x76f82e);
          FUN_00988f20();
          local_8._0_1_ = 0x59;
          uStack_66c = CONCAT44(in_ECX + 0x590,0x76f846);
          uVar9 = FUN_00988f20();
          uStack_66c = 0xffffffff00000000;
          local_8._0_1_ = 0x5a;
          uStack_674 = CONCAT44(uVar9,0x76f859);
          FUN_00408ed0();
          uStack_66c = CONCAT44(0x76f860,(uint *)uStack_66c);
          FUN_00408ad0();
          uStack_66c = CONCAT44(0x76f86b,(uint *)uStack_66c);
          FUN_00408ad0();
          uStack_66c = CONCAT44(0x76f876,(uint *)uStack_66c);
          FUN_00408ad0();
          uStack_66c = CONCAT44(0x76f87e,(uint *)uStack_66c);
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x55);
          uStack_66c = CONCAT44(0x76f88a,(uint *)uStack_66c);
          FUN_00408ad0();
        }
        uStack_66c = CONCAT44(0x76f88f,(uint *)uStack_66c);
        piVar8 = (int *)FUN_009a71d0();
        uStack_66c._4_4_ = (undefined ***)local_fc;
        uStack_66c._0_4_ = (uint *)0x76f89f;
        (**(code **)(*piVar8 + 0x30))();
        uStack_66c._0_4_ = local_fc;
        DAT_01258a66 = 0;
        uStack_674 = CONCAT44(DAT_012588e8,0x76f8b8);
        local_15 = FUN_0067f1d0();
        DAT_01258a66 = 1;
        uStack_66c._0_4_ = (uint *)0x76f8cf;
        iVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
        uStack_66c = ZEXT48(uStack_66c._4_4_) << 0x20;
        uStack_674 = CONCAT44(0x76f8dd,(uint *)uStack_674);
        (**(code **)(**(int **)(iVar6 + 0xe4) + 0x10))();
        if (local_15 == '\0') {
          uStack_674 = CONCAT44(&local_70,0x76f8f0);
          FUN_00475d50();
          local_8._0_1_ = 0x5b;
          uStack_674 = CONCAT44(0x76f902,(uint *)uStack_674);
          uVar9 = FUN_009f23c0();
          local_8 = CONCAT31(local_8._1_3_,0x5c);
          uStack_674 = CONCAT44(uVar9,0x76f90e);
          FUN_00771510();
          uStack_674 = CONCAT44(0x76f913,(uint *)uStack_674);
          FUN_0076bf20();
          uStack_674 = CONCAT44(0x76f91b,(uint *)uStack_674);
          FUN_00408ad0();
          *(undefined2 *)(in_ECX + 0x5bc) = 0;
          uStack_674 = CONCAT44(0x76f92d,(uint *)uStack_674);
          FUN_00408ad0();
          ExceptionList = local_10;
          return;
        }
        uStack_674 = CONCAT44(&local_70,0x76f94c);
        FUN_00475d50();
        local_8._0_1_ = 0x5d;
        uStack_674 = CONCAT44(0x76f95e,(uint *)uStack_674);
        uVar9 = FUN_009f23c0();
        local_8._0_1_ = 0x5e;
        uStack_674 = CONCAT44(uVar9,0x76f96a);
        FUN_00771510();
        uStack_674 = CONCAT44(0x76f96f,(uint *)uStack_674);
        FUN_0076bf20();
        local_8._0_1_ = 0x55;
        uStack_674 = CONCAT44(0x76f97b,(uint *)uStack_674);
        FUN_00408ad0();
        uStack_674 = CONCAT44(local_d8,0x76f98c);
        FUN_00475d50();
        local_8._0_1_ = 0x5f;
        uStack_674 = CONCAT44(0x76f99b,(uint *)uStack_674);
        uVar9 = FUN_009f23c0();
        local_8._0_1_ = 0x60;
        uStack_674 = CONCAT44(uVar9,0x76f9a7);
        FUN_00771510();
        uStack_674 = CONCAT44(0x76f9ac,(uint *)uStack_674);
        FUN_0076bf20();
        local_8._0_1_ = 0x55;
        uStack_674 = CONCAT44(0x76f9bb,(uint *)uStack_674);
        FUN_00408ad0();
        *(undefined2 *)(in_ECX + 0x5bc) = 0x100;
        uStack_674 = CONCAT44(0x76f9cf,(uint *)uStack_674);
        FUN_00688050();
        uStack_674 = CONCAT44(0x76f9e2,(uint *)uStack_674);
        iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
        uStack_674 = CONCAT44(iVar6 + 0x20bc,0x76f9ed);
        FUN_007fcbd0();
        uStack_674 = CONCAT44(0x76fa00,(uint *)uStack_674);
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
        uStack_66c = CONCAT44(0x76fa13,(uint *)uStack_66c);
        FUN_00819830();
        uStack_66c = CONCAT44(0x76fa18,(uint *)uStack_66c);
        iVar6 = FUN_00475500();
        *(undefined4 *)(iVar6 + 0xec) = 0xff9a;
        uStack_66c = CONCAT44(0x76fa27,(uint *)uStack_66c);
        iVar6 = FUN_00475500();
        *(undefined4 *)(iVar6 + 0xf0) = 2;
        if (DAT_012589ac == 0) {
          uStack_66c = CONCAT44(0x76fa4d,(uint *)uStack_66c);
          FUN_009885d0();
          local_8._0_1_ = 0x61;
          uStack_66c = CONCAT44(0x76fa5e,(uint *)uStack_66c);
          FUN_009885d0();
          local_8._0_1_ = 0x62;
          uStack_66c._0_4_ = (uint *)0x76fa72;
          uStack_66c._4_4_ = &local_70;
          piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))();
          uStack_66c = CONCAT44(uStack_66c._4_4_,local_d8);
          uStack_674 = CONCAT44(0x76fa82,(uint *)uStack_674);
          piVar8 = (int *)(**(code **)(*piVar8 + 0x7c))();
          uStack_674 = CONCAT44(0x76fa8b,(uint *)uStack_674);
          puVar16 = (undefined4 *)(**(code **)(*piVar8 + 0x2c))();
          puVar16 = (undefined4 *)*puVar16;
          uStack_66c = CONCAT44(0x76fa95,(uint *)uStack_66c);
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x55);
          uStack_66c = CONCAT44(0x76faa4,(uint *)uStack_66c);
          FUN_00408ad0();
          local_24 = 0;
          uStack_66c = CONCAT44(0x76faac,(uint *)uStack_66c);
          iVar6 = FUN_00754640();
          if (0 < *(int *)(iVar6 + 8)) {
            do {
              puVar16 = (undefined4 *)puVar16[2];
              local_24 = local_24 + 1;
              uStack_66c = CONCAT44(0x76fabc,(uint *)uStack_66c);
              iVar6 = FUN_00754640();
            } while (local_24 < *(int *)(iVar6 + 8));
          }
          for (; puVar16 != (undefined4 *)0x0; puVar16 = (undefined4 *)puVar16[2]) {
            uStack_66c = CONCAT44(0x76fae0,(uint *)uStack_66c);
            cVar5 = FUN_00416db0();
            if (cVar5 != '\0') {
              uStack_66c = CONCAT44(0x76faed,(uint *)uStack_66c);
              (**(code **)(*(int *)*puVar16 + 0x10))();
            }
          }
        }
        local_8 = 0xffffffff;
        if (0xf < local_e8) {
          uStack_66c = CONCAT44(local_fc[0],&UNK_0076fb10);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        *(undefined1 *)(in_ECX + 0x5bc) = 0;
      }
    }
    else {
      do {
        ppuVar12 = *local_50;
        if (local_24 != 0) {
          uStack_66c = CONCAT44(0x76f64e,(uint *)uStack_66c);
          cVar5 = (**(code **)(*ppuVar12[0x18] + 0x2c))();
          if (cVar5 == '\0') {
            uStack_66c = CONCAT44(0x76f661,(uint *)uStack_66c);
            iVar6 = (**(code **)(*(int *)(in_ECX + 0x3c) + 0x28))();
            if (*(char *)(iVar6 + 0x34) != '\0') {
              uStack_66c = CONCAT44(0x76f674,(uint *)uStack_66c);
              (**(code **)(*ppuVar12[0x18] + 0x34))();
              puVar16 = ppuVar12[0x18];
              if ((*(char *)(puVar16 + 0x2d) == '\0') &&
                 (cVar5 = *(char *)(puVar16 + 0x36), *(undefined1 *)(puVar16 + 0x36) = 1,
                 cVar5 == '\0')) {
                if (ppuVar12[0x18][0x35] == 0x29a) {
                  uStack_66c = CONCAT44(ppuVar12[0x18] + 0x2e,local_8c);
                  uStack_674 = CONCAT44(0x76f6bd,(uint *)uStack_674);
                  local_44 = (int *)FUN_009a8ee0();
                  local_8 = 0x51;
                  uStack_66c = CONCAT44(0x76f6cc,(uint *)uStack_66c);
                  iVar6 = FUN_00475500();
                  uStack_674 = *(undefined8 *)(iVar6 + 0x6c);
                  uStack_66c = *(undefined8 *)(iVar6 + 0x74);
                  pppuStack_678 = (undefined ***)0x76f6ef;
                  FUN_009a9880();
                  local_8._0_1_ = 0x52;
                  uStack_66c = CONCAT44(0x76f6fe,(uint *)uStack_66c);
                  uVar9 = FUN_009f23c0();
                  local_8 = CONCAT31(local_8._1_3_,0x53);
                  uStack_66c = CONCAT44(uVar9,0x76f70a);
                  FUN_00771510();
                  uStack_66c = CONCAT44(0x76f70f,(uint *)uStack_66c);
                  FUN_0076bf20();
                  uStack_66c = CONCAT44(0x76f717,(uint *)uStack_66c);
                  FUN_00408ad0();
                  local_8 = 0xffffffff;
                  uStack_66c = CONCAT44(local_8c,0x76f72a);
                  FUN_009a9740();
                }
                else {
                  uStack_66c = CONCAT44(0x76f739,(uint *)uStack_66c);
                  uVar9 = FUN_009f23c0();
                  local_8 = 0x54;
                  uStack_66c = CONCAT44(uVar9,0x76f748);
                  FUN_00771510();
                  local_8 = 0xffffffff;
                  uStack_66c = CONCAT44(0x76f754,(uint *)uStack_66c);
                  FUN_0076bf20();
                }
              }
            }
            local_15 = '\0';
          }
        }
        local_50 = (undefined4 ***)local_50[2];
        local_24 = local_24 + 1;
      } while (local_50 != (undefined4 ***)0x0);
      local_50 = (undefined4 ***)0x0;
      if (local_15 != '\0') goto LAB_0076f774;
    }
    uStack_66c = CONCAT44(in_ECX,0x76fb2a);
    FUN_0076d340();
  }
  uStack_66c = CONCAT44(0x770439,(uint *)uStack_66c);
  cVar5 = FUN_00772020();
  if (cVar5 != '\0') {
    uStack_66c = CONCAT44(0x77044b,(uint *)uStack_66c);
    iVar6 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    if (*(char *)(iVar6 + 0x34) != '\0') {
      uStack_66c = CONCAT44(0x770460,(uint *)uStack_66c);
      FUN_009885d0();
      local_8 = 0x88;
      uStack_66c._0_4_ = (uint *)0x770477;
      uStack_66c._4_4_ = (undefined ***)local_d8;
      piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x34))();
      uStack_66c._0_4_ = (uint *)0x770483;
      (**(code **)(*piVar8 + 0xb8))();
      local_8 = 0xffffffff;
      if (0xf < local_c4) {
        uStack_66c = CONCAT44(uStack_66c._4_4_,local_d8[0]);
        uStack_674 = CONCAT44(&UNK_0077049f,(uint *)uStack_674);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
      goto LAB_00770528;
    }
  }
  uStack_66c = 0xb00e14980;
  local_e8 = 0xf;
  local_ec = 0;
  local_fc[0] = local_fc[0] & 0xffffff00;
  uStack_674 = CONCAT44(0x7704e2,(uint *)uStack_674);
  FUN_00409350();
  local_8 = 0x87;
  uStack_66c._4_4_ = (undefined ***)local_fc;
  uStack_66c._0_4_ = (uint *)0x7704fd;
  piVar8 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x34))();
  uStack_66c._0_4_ = (uint *)0x770509;
  (**(code **)(*piVar8 + 0xbc))();
  local_8 = 0xffffffff;
  if (0xf < local_e8) {
    uStack_66c = CONCAT44(uStack_66c._4_4_,local_fc[0]);
    uStack_674 = CONCAT44(&UNK_00770525,(uint *)uStack_674);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_00770528:
  local_8 = 0xffffffff;
  if (*(char *)(*(int *)(in_ECX + 4) + 0x760) != '\0') {
    uStack_66c._0_4_ = (uint *)0x77053a;
    cVar5 = FUN_00772020();
    if (cVar5 != '\0') {
      uStack_66c = CONCAT44(uStack_66c._4_4_,0x770549);
      FUN_007725b0();
    }
  }
  ExceptionList = local_10;
  return;
}

