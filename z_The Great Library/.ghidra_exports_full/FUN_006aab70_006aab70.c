// FUN_006aab70 @ 006aab70 body=[[006aab70, 006aadb7] [006aadbb, 006aadee] [006aadf2, 006aae1a] [006aae1e, 006aae3d] [006aae41, 006aae66] [006aae6a, 006aae9c] [006aaea0, 006aaf7c] [006aaf80, 006aafa4] [006aafa8, 006aafcd] [006aafd1, 006ab003] [006ab007, 006ab0c2] [006ab0c6, 006ab0ea] [006ab0ee, 006ab113] [006ab117, 006ab149] [006ab14d, 006ab1ee] [006ab1f2, 006ab216] [006ab21a, 006ab23f] [006ab243, 006ab275] [006ab279, 006ab2fd] [006ab301, 006ab321] [006ab325, 006adc2c] [006adc30, 006ae4a1]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined1 * FUN_006aab70(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  int in_ECX;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int extraout_ECX_07;
  int *extraout_ECX_08;
  char *pcVar14;
  bool bVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  uint *puStack_1c0;
  int *piStack_1bc;
  uint local_1ac [23];
  undefined4 local_150;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  undefined1 local_130 [28];
  uint local_114 [4];
  int local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  int *local_dc;
  int *local_d8;
  int local_d4;
  int local_d0;
  int *local_cc;
  int local_c8;
  uint local_c4 [2];
  undefined1 local_bc [8];
  undefined4 local_b4;
  uint local_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 local_94 [28];
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  char local_59;
  undefined4 local_58;
  int *local_54;
  undefined1 local_50 [31];
  char local_31;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  piVar9 = param_2;
  puStack_c = &LAB_00b7eda2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_58 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_98 = DAT_012588e8;
  iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  iVar6 = *(int *)(in_ECX + 0x70);
  local_150 = 1;
  local_d0 = in_ECX;
  if (((iVar6 != 0) && (*(char *)(*(int *)(iVar6 + 0x60) + 0x67) != '\0')) &&
     (*(char *)(iVar6 + 0x5c) == '\0')) {
    piStack_1bc = param_2;
    puStack_1c0 = (uint *)0x6aac2a;
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x70) + 0xc))();
    if (cVar3 != '\0') {
      piStack_1bc = piVar9;
      puStack_1c0 = local_1ac;
      uStack_1c8 = CONCAT44(0x6aac48,(int)uStack_1c8);
      (**(code **)(**(int **)(local_d0 + 0x70) + 0x10))();
      local_8 = 1;
      goto LAB_006aac4f;
    }
  }
  piStack_1bc = piVar9;
  puStack_1c0 = (uint *)0x6aac80;
  cVar3 = (**(code **)(*(int *)(*(int *)(local_d0 + 0x68) + 0x18) + 0x94))();
  if (cVar3 != '\0') {
    puStack_1c0 = (uint *)0x1;
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    uStack_1c8 = 0xdedc68006aacb6;
    FUN_00409350();
    local_8 = 2;
    puStack_1c0 = (uint *)0xe;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    uStack_1c8 = 0xdf9698006aace6;
    FUN_00409350();
    local_8._0_1_ = 3;
    puStack_1c0 = (uint *)0x2;
    local_98 = (undefined1 *)((int)&uStack_1c8 + 4);
    uStack_1c8 = CONCAT44(*(undefined4 *)(*(int *)(iVar8 + 0xa60) + 0x28),local_30);
    uStack_1d0 = CONCAT44(0x6aad09,(undefined4)uStack_1d0);
    local_98 = (undefined1 *)FUN_00988a50();
    puStack_1c0 = (uint *)0x2;
    local_54 = (int *)((int)&uStack_1c8 + 4);
    local_8._0_1_ = 4;
    uStack_1c8 = CONCAT44(*(undefined4 *)(iVar8 + 0x680),local_78);
    uStack_1d0 = CONCAT44(0x6aad2c,(undefined4)uStack_1d0);
    FUN_00988a50();
    puStack_1c0 = local_114;
    local_8._0_1_ = 5;
    uStack_1c8 = CONCAT44(0x6aad44,(int)uStack_1c8);
    FUN_00988f20();
    local_8._0_1_ = 6;
    puStack_1c0 = (uint *)local_98;
    uStack_1c8 = CONCAT44(0x6aad5c,(int)uStack_1c8);
    uVar4 = FUN_00988f20();
    local_8._0_1_ = 7;
    puStack_1c0 = local_c4;
    uStack_1c8 = CONCAT44(0x6aad79,(int)uStack_1c8);
    local_98 = (undefined1 *)(**(code **)(**(int **)(local_d0 + 0x68) + 0x3c))();
    uStack_1c8 = 0xffffffff00000000;
    uStack_1d0 = CONCAT44(uVar4,0x6aad8f);
    FUN_00408ed0();
    uStack_1c8 = (ulonglong)uVar4;
    uStack_1d0 = CONCAT44(0x6aada3,(undefined4)uStack_1d0);
    FUN_00a5ecc0();
    if (0xf < local_138) {
      uStack_1c8 = CONCAT44(local_14c,&UNK_006aadb8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_138 = 0xf;
    local_13c = 0;
    local_14c = local_14c & 0xffffff00;
    if (0xf < local_e4) {
      uStack_1c8 = CONCAT44(local_f8[0],&UNK_006aadef);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    if (0xf < local_64) {
      uStack_1c8 = CONCAT44(local_78[0],&UNK_006aae1b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_1c) {
      uStack_1c8 = CONCAT44(local_30[0],&UNK_006aae3e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_b0) {
      uStack_1c8 = CONCAT44(local_c4[0],&UNK_006aae67);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_100) {
      uStack_1c8 = CONCAT44(local_114[0],&UNK_006aae9d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1c8 = CONCAT44(0x6aaeaa,(int)uStack_1c8);
    pbVar5 = (byte *)(**(code **)(*param_2 + 0x44))();
    piVar9 = param_2;
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    pcVar14 = "war_exhaustion";
    do {
      bVar1 = *pbVar5;
      bVar15 = bVar1 < (byte)*pcVar14;
      if (bVar1 != *pcVar14) {
LAB_006aaed6:
        iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_006aaedb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar15 = bVar1 < (byte)pcVar14[1];
      if (bVar1 != pcVar14[1]) goto LAB_006aaed6;
      pbVar5 = pbVar5 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_006aaedb:
    if (iVar6 == 0) {
      uStack_1c8 = 0x100dee2cc;
      local_100 = 0xf;
      local_114[0] = local_114[0] & 0xffffff00;
      uStack_1d0 = CONCAT44(0x6aaf0b,(undefined4)uStack_1d0);
      local_104 = iVar6;
      FUN_00409350();
      param_2 = (int *)&uStack_1c8;
      local_8 = 8;
      uStack_1c8 = CONCAT44(2,*(undefined4 *)(iVar8 + 0x680));
      uStack_1d0 = CONCAT44(local_f8,0x6aaf2e);
      uVar7 = FUN_00988a50();
      uStack_1c8 = CONCAT44(uVar7,local_78);
      local_8._0_1_ = 9;
      uStack_1d0 = CONCAT44(0x6aaf46,(undefined4)uStack_1d0);
      FUN_0042c180();
      local_8._0_1_ = 10;
      uStack_1c8 = CONCAT44(local_114,0x6aaf5e);
      uVar7 = FUN_00988f20();
      uStack_1c8 = 0xffffffff00000000;
      local_8._0_1_ = 0xb;
      uStack_1d0 = CONCAT44(uVar7,0x6aaf6e);
      FUN_00408ed0();
      if (0xf < local_1c) {
        uStack_1c8 = CONCAT44(local_30[0],&UNK_006aaf7d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_64) {
        uStack_1c8 = CONCAT44(local_78[0],&UNK_006aafa5);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      if (0xf < local_e4) {
        uStack_1c8 = CONCAT44(local_f8[0],&UNK_006aafce);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      if (0xf < local_100) {
        uStack_1c8 = CONCAT44(local_114[0],&UNK_006ab004);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1c8 = 0x100dee2cc;
      local_100 = 0xf;
      local_104 = 0;
      local_114[0] = local_114[0] & 0xffffff00;
      uStack_1d0 = CONCAT44(0x6ab035,(undefined4)uStack_1d0);
      FUN_00409350();
      local_8 = 0xc;
      uStack_1c8 = 0xded94d;
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4[0] = local_c4[0] & 0xffffff00;
      uStack_1d0 = CONCAT44(0x6ab065,(undefined4)uStack_1d0);
      FUN_00409350();
      param_2 = (int *)&uStack_1c8;
      local_8._0_1_ = 0xd;
      uStack_1c8 = CONCAT44(local_c4,1000);
      uStack_1d0 = CONCAT44(4,local_78);
      uStack_1d8 = CONCAT44(0x6ab08f,(uint *)uStack_1d8);
      (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
      local_8._0_1_ = 0xe;
      uStack_1d8 = CONCAT44(local_114,0x6ab0a4);
      FUN_00988f20();
      uStack_1d8 = 0xffffffff00000000;
      local_8._0_1_ = 0xf;
      FUN_00448aa0();
      if (0xf < local_1c) {
        uStack_1d8 = CONCAT44(local_30[0],&UNK_006ab0c3);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_64) {
        uStack_1d8 = CONCAT44(local_78[0],&UNK_006ab0eb);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      if (0xf < local_b0) {
        uStack_1d8 = CONCAT44(local_c4[0],&UNK_006ab114);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4[0] = local_c4[0] & 0xffffff00;
      if (local_100 < 0x10) {
        uStack_1d8 = 0x100dee2cc;
        local_100 = 0xf;
        local_104 = 0;
        local_114[0] = local_114[0] & 0xffffff00;
        FUN_00409350();
        local_8 = 0x10;
        param_2 = (int *)&uStack_1d8;
        uStack_1d8 = CONCAT44(2,*(undefined4 *)(*(int *)(iVar8 + 0xa60) + 0x28));
        uVar7 = FUN_00988a50();
        uStack_1d8 = CONCAT44(uVar7,local_78);
        local_8._0_1_ = 0x11;
        FUN_0042c180();
        local_8._0_1_ = 0x12;
        uStack_1d8 = CONCAT44(local_114,0x6ab1d0);
        FUN_00988f20();
        uStack_1d8 = 0xffffffff00000000;
        local_8._0_1_ = 0x13;
        FUN_00448aa0();
        if (0xf < local_1c) {
          uStack_1d8 = CONCAT44(local_30[0],&UNK_006ab1ef);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_64) {
          uStack_1d8 = CONCAT44(local_78[0],&UNK_006ab217);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_64 = 0xf;
        local_68 = 0;
        local_78[0] = local_78[0] & 0xffffff00;
        if (0xf < local_e4) {
          uStack_1d8 = CONCAT44(local_f8[0],&UNK_006ab240);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        if (local_100 < 0x10) {
          uStack_1d8 = CONCAT44(0x6ab289,(uint *)uStack_1d8);
          FUN_009885d0();
          local_8 = 0x14;
          uStack_1d8 = CONCAT44(0x6ab2a0,(uint *)uStack_1d8);
          FUN_009885d0();
          param_2 = (int *)&uStack_1d8;
          local_8._0_1_ = 0x15;
          uStack_1d8 = CONCAT44(local_f8,1000);
          (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))(local_78,5);
          local_8._0_1_ = 0x16;
          FUN_00988f20();
          local_8._0_1_ = 0x17;
          FUN_00448aa0();
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (local_64 < 0x10) {
            local_64 = 0xf;
            local_68 = 0;
            local_78[0] = local_78[0] & 0xffffff00;
            FUN_00408ad0();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00408ad0();
            FUN_009885d0();
            local_8 = 0x18;
            FUN_009885d0();
            local_8._0_1_ = 0x19;
            param_2 = (int *)FUN_009a8ee0(local_a8,local_30);
            local_8._0_1_ = 0x1a;
            iVar8 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c),*(undefined8 *)(iVar8 + 0x74));
            local_8._0_1_ = 0x1b;
            FUN_00988f20();
            local_8._0_1_ = 0x1c;
            FUN_00408ed0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8._0_1_ = 0x19;
            FUN_009a9740();
            FUN_00408ad0();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00408ad0();
            piVar9 = (int *)FUN_006a8820();
            local_8 = 0x1d;
            uVar7 = (**(code **)(*piVar9 + 0x1c))();
            local_8 = CONCAT31(local_8._1_3_,0x1e);
            FUN_00448aa0(uVar7,0,0xffffffff);
            FUN_00408ad0();
            FUN_0044cb60();
            ExceptionList = local_10;
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1d8 = CONCAT44(local_114[0],&UNK_006ab276);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1d8 = CONCAT44(local_114[0],&UNK_006ab14a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1c8 = CONCAT44(0x6ab465,(int)uStack_1c8);
    (**(code **)(*param_2 + 0x44))();
    uStack_1c8 = CONCAT44(0x6ab46f,(int)uStack_1c8);
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      uStack_1c8 = CONCAT44(0x6ab596,(int)uStack_1c8);
      (**(code **)(*piVar9 + 0x44))();
      uStack_1c8 = CONCAT44(0x6ab5a0,(int)uStack_1c8);
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        uStack_1c8 = CONCAT44(0x6ab84f,(int)uStack_1c8);
        (**(code **)(*piVar9 + 0x44))();
        uStack_1c8 = CONCAT44(0x6ab859,(int)uStack_1c8);
        cVar3 = FUN_0040b360();
        if (cVar3 == '\0') {
          uStack_1c8 = CONCAT44(0x6ab975,(int)uStack_1c8);
          (**(code **)(*piVar9 + 0x44))();
          uStack_1c8 = CONCAT44(0x6ab97f,(int)uStack_1c8);
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            uStack_1c8 = CONCAT44(0x6abaa1,(int)uStack_1c8);
            (**(code **)(*piVar9 + 0x44))();
            uStack_1c8 = CONCAT44(0x6abaab,(int)uStack_1c8);
            cVar3 = FUN_0040b360();
            if (cVar3 != '\0') {
              uStack_1c8 = CONCAT44(0x6abac0,(int)uStack_1c8);
              FUN_009885d0();
              local_8 = 0x44;
              uStack_1c8 = CONCAT44(0x6abad4,(int)uStack_1c8);
              FUN_009885d0();
              uStack_1c8 = CONCAT44(local_30,local_bc);
              local_8._0_1_ = 0x45;
              uStack_1d0 = CONCAT44(0x6abae7,(undefined4)uStack_1d0);
              param_2 = (int *)FUN_009a8ee0();
              local_8._0_1_ = 0x46;
              uStack_1c8 = CONCAT44(0x6abaf3,(int)uStack_1c8);
              iVar6 = FUN_00475500();
              uStack_1d0 = *(undefined8 *)(iVar6 + 0x6c);
              uStack_1c8 = *(undefined8 *)(iVar6 + 0x74);
              uStack_1d8 = CONCAT44(0x6abb19,(uint *)uStack_1d8);
              FUN_009a9880();
              local_8._0_1_ = 0x47;
              uStack_1c8 = CONCAT44(local_78,0x6abb2b);
              FUN_00988f20();
              local_8._0_1_ = 0x48;
              uStack_1c8 = CONCAT44(0x6abb36,(int)uStack_1c8);
              FUN_00989020();
              uStack_1c8 = CONCAT44(0x6abb3e,(int)uStack_1c8);
              FUN_00408ad0();
              uStack_1c8 = CONCAT44(0x6abb49,(int)uStack_1c8);
              FUN_00408ad0();
              local_8._0_1_ = 0x45;
              uStack_1c8 = CONCAT44(local_bc,0x6abb59);
              FUN_009a9740();
              uStack_1c8 = CONCAT44(0x6abb61,(int)uStack_1c8);
              FUN_00408ad0();
              local_8 = (uint)local_8._1_3_ << 8;
              uStack_1c8 = CONCAT44(0x6abb6d,(int)uStack_1c8);
              FUN_00408ad0();
              if (0 < *(int *)(*(int *)(iVar8 + 0xbcc) + 0x48)) {
                uStack_1c8 = CONCAT44(0x6abb8a,(int)uStack_1c8);
                FUN_009885d0();
                local_8 = 0x49;
                uStack_1c8 = CONCAT44(0x6abb9e,(int)uStack_1c8);
                FUN_009885d0();
                local_8._0_1_ = 0x4a;
                uStack_1c8 = CONCAT44(local_114,0x6abbc8);
                local_54 = (int *)FUN_009888f0();
                local_8._0_1_ = 0x4b;
                uStack_1c8 = CONCAT44(0x6abbdf,(int)uStack_1c8);
                local_98 = (undefined1 *)FUN_009885d0();
                uStack_1c8 = CONCAT44(local_30,local_bc);
                local_8._0_1_ = 0x4c;
                uStack_1d0 = CONCAT44(0x6abbf9,(undefined4)uStack_1d0);
                param_2 = (int *)FUN_009a8ee0();
                local_8._0_1_ = 0x4d;
                uStack_1c8 = CONCAT44(0x6abc05,(int)uStack_1c8);
                iVar6 = FUN_00475500();
                uStack_1d0 = *(undefined8 *)(iVar6 + 0x6c);
                uStack_1c8 = *(undefined8 *)(iVar6 + 0x74);
                uStack_1d8 = CONCAT44(0x6abc2b,(uint *)uStack_1d8);
                FUN_009a9880();
                local_8._0_1_ = 0x4e;
                uStack_1c8 = CONCAT44(local_98,0x6abc43);
                FUN_00988f20();
                local_8._0_1_ = 0x4f;
                uStack_1c8 = CONCAT44(local_54,0x6abc58);
                FUN_00988f20();
                local_8._0_1_ = 0x50;
                uStack_1c8 = CONCAT44(local_78,0x6abc6a);
                FUN_00988f20();
                local_8._0_1_ = 0x51;
                uStack_1c8 = CONCAT44(0x6abc75,(int)uStack_1c8);
                FUN_00989020();
                uStack_1c8 = CONCAT44(0x6abc7d,(int)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x6abc88,(int)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x6abc93,(int)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x6abc9e,(int)uStack_1c8);
                FUN_00408ad0();
                local_8._0_1_ = 0x4c;
                uStack_1c8 = CONCAT44(local_bc,0x6abcae);
                FUN_009a9740();
                uStack_1c8 = CONCAT44(0x6abcb9,(int)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x6abcc4,(int)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x6abccc,(int)uStack_1c8);
                FUN_00408ad0();
                local_8 = (uint)local_8._1_3_ << 8;
                uStack_1c8 = CONCAT44(0x6abcd8,(int)uStack_1c8);
                FUN_00408ad0();
              }
              if (*(int *)(*(int *)(iVar8 + 0xa60) + 0x388) != 0) {
                uStack_1c8 = CONCAT44(0x6abcf9,(int)uStack_1c8);
                FUN_009885d0();
                local_8 = 0x52;
                uStack_1c8 = CONCAT44(0x6abd0d,(int)uStack_1c8);
                FUN_009885d0();
                param_2 = (int *)&uStack_1c8;
                local_8._0_1_ = 0x53;
                uStack_1c8 = CONCAT44(local_30,1000);
                uStack_1d0 = CONCAT44(0x71,local_94);
                uStack_1d8 = CONCAT44(0x6abd36,(uint *)uStack_1d8);
                (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
                local_8._0_1_ = 0x54;
                uStack_1c8 = CONCAT44(local_78,0x6abd48);
                FUN_00988f20();
                local_8._0_1_ = 0x55;
                uStack_1c8 = CONCAT44(0x6abd53,(int)uStack_1c8);
                FUN_00989020();
                uStack_1c8 = CONCAT44(0x6abd5b,(int)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x6abd66,(int)uStack_1c8);
                FUN_00408ad0();
                uStack_1c8 = CONCAT44(0x6abd6e,(int)uStack_1c8);
                FUN_00408ad0();
                local_8 = (uint)local_8._1_3_ << 8;
                uStack_1c8 = CONCAT44(0x6abd7a,(int)uStack_1c8);
                FUN_00408ad0();
              }
              if (*(int *)(*(int *)(iVar8 + 0xa60) + 0x390) == 0) {
                ExceptionList = local_10;
                return param_1;
              }
              uStack_1c8 = CONCAT44(0x6abd9a,(int)uStack_1c8);
              FUN_009885d0();
              local_8 = 0x56;
              uStack_1c8 = CONCAT44(0x6abdae,(int)uStack_1c8);
              FUN_009885d0();
              param_2 = (int *)&uStack_1c8;
              local_8._0_1_ = 0x57;
              uStack_1c8 = CONCAT44(local_30,1000);
              uStack_1d0 = CONCAT44(0x72,local_94);
              uStack_1d8 = CONCAT44(0x6abdd7,(uint *)uStack_1d8);
              (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
              local_8._0_1_ = 0x58;
              uStack_1d8 = CONCAT44(local_78,0x6abde9);
              FUN_00988f20();
              local_8 = CONCAT31(local_8._1_3_,0x59);
              uStack_1d8 = CONCAT44(0x6abdf4,(uint *)uStack_1d8);
              FUN_00989020();
              uStack_1d8 = CONCAT44(0x6abdfc,(uint *)uStack_1d8);
              FUN_00408ad0();
              uStack_1d8 = CONCAT44(0x6abe07,(uint *)uStack_1d8);
              FUN_00408ad0();
              uStack_1d8 = CONCAT44(0x6abe0f,(uint *)uStack_1d8);
              FUN_00408ad0();
              goto LAB_006ae482;
            }
            uStack_1c8 = CONCAT44(0x6abe20,(int)uStack_1c8);
            (**(code **)(*piVar9 + 0x44))();
            uStack_1c8 = CONCAT44(0x6abe2a,(int)uStack_1c8);
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              uStack_1c8 = CONCAT44(0x6abf37,(int)uStack_1c8);
              (**(code **)(*piVar9 + 0x44))();
              uStack_1d8 = CONCAT44(0x6abf41,(uint *)uStack_1d8);
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') {
                ExceptionList = local_10;
                return param_1;
              }
              uStack_1d8 = CONCAT44(0x6abf56,(uint *)uStack_1d8);
              FUN_009885d0();
              local_8 = 0x61;
              param_2 = (int *)((int)&uStack_1d8 + 4);
              uStack_1d8 = CONCAT44(*(undefined4 *)(*(int *)(DAT_012586dc + 0x20) + 0xc),local_130);
              uVar7 = FUN_00988970();
              uStack_1d8 = CONCAT44(uVar7,local_94);
              local_8._0_1_ = 0x62;
              FUN_0042c180();
              local_8._0_1_ = 99;
              uStack_1d8 = CONCAT44(local_30,0x6abfab);
              FUN_00988f20();
              local_8._0_1_ = 100;
              uStack_1d8 = CONCAT44(0x6abfb6,(uint *)uStack_1d8);
              FUN_00989020();
              uStack_1d8 = CONCAT44(0x6abfbe,(uint *)uStack_1d8);
              FUN_00408ad0();
              uStack_1d8 = CONCAT44(0x6abfc9,(uint *)uStack_1d8);
              FUN_00408ad0();
              uStack_1d8 = CONCAT44(0x6abfd4,(uint *)uStack_1d8);
              FUN_00408ad0();
              local_8 = (uint)local_8._1_3_ << 8;
              uStack_1d8 = CONCAT44(0x6abfe0,(uint *)uStack_1d8);
              FUN_00408ad0();
              if (*(int *)(*(int *)(iVar8 + 0xbcc) + 0x38) == 0) {
                ExceptionList = local_10;
                return param_1;
              }
              uStack_1d8 = CONCAT44(0x6abffd,(uint *)uStack_1d8);
              FUN_009885d0();
              local_8 = 0x65;
              uStack_1d8 = CONCAT44(local_f8,0x6ac02a);
              uVar7 = FUN_009888f0();
              local_8._0_1_ = 0x66;
              uStack_1d8 = CONCAT44(0x6ac03d,(uint *)uStack_1d8);
              local_98 = (undefined1 *)FUN_009885d0();
              uStack_1d8 = CONCAT44(local_30,local_bc);
              local_8._0_1_ = 0x67;
              param_2 = (int *)FUN_009a8ee0();
              local_8._0_1_ = 0x68;
              uStack_1d8 = CONCAT44(0x6ac063,(uint *)uStack_1d8);
              iVar8 = FUN_00475500();
              uStack_1d8 = *(undefined8 *)(iVar8 + 0x74);
              FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
              local_8._0_1_ = 0x69;
              uStack_1d8 = CONCAT44(local_98,0x6ac0a1);
              FUN_00988f20();
              local_8._0_1_ = 0x6a;
              uStack_1d8 = CONCAT44(uVar7,0x6ac0b0);
              FUN_00988f20();
              local_8._0_1_ = 0x6b;
              uStack_1d8 = CONCAT44(0x6ac0bb,(uint *)uStack_1d8);
              FUN_00989020();
              uStack_1d8 = CONCAT44(0x6ac0c3,(uint *)uStack_1d8);
              FUN_00408ad0();
              uStack_1d8 = CONCAT44(0x6ac0ce,(uint *)uStack_1d8);
              FUN_00408ad0();
              uStack_1d8 = CONCAT44(0x6ac0d9,(uint *)uStack_1d8);
              FUN_00408ad0();
              local_8 = CONCAT31(local_8._1_3_,0x67);
              uStack_1d8 = CONCAT44(local_bc,0x6ac0e9);
              FUN_009a9740();
              uStack_1d8 = CONCAT44(0x6ac0f1,(uint *)uStack_1d8);
              FUN_00408ad0();
              uStack_1d8 = CONCAT44(0x6ac0fc,(uint *)uStack_1d8);
              FUN_00408ad0();
              goto LAB_006ae482;
            }
            uStack_1c8 = CONCAT44(0x6abe3f,(int)uStack_1c8);
            FUN_009885d0();
            local_8 = 0x5a;
            uStack_1c8 = CONCAT44(0x6abe53,(int)uStack_1c8);
            FUN_009885d0();
            uStack_1c8 = CONCAT44(local_30,local_bc);
            local_8._0_1_ = 0x5b;
            uStack_1d0 = CONCAT44(0x6abe66,(undefined4)uStack_1d0);
            param_2 = (int *)FUN_009a8ee0();
            local_8._0_1_ = 0x5c;
            uStack_1c8 = CONCAT44(0x6abe72,(int)uStack_1c8);
            iVar6 = FUN_00475500();
            uStack_1d0 = *(undefined8 *)(iVar6 + 0x6c);
            uStack_1c8 = *(undefined8 *)(iVar6 + 0x74);
            uStack_1d8 = CONCAT44(0x6abe98,(uint *)uStack_1d8);
            FUN_009a9880();
            local_8._0_1_ = 0x5d;
            uStack_1c8 = CONCAT44(local_78,0x6abeaa);
            FUN_00988f20();
            local_8._0_1_ = 0x5e;
            uStack_1c8 = CONCAT44(0x6abeb5,(int)uStack_1c8);
            FUN_00989020();
            uStack_1c8 = CONCAT44(0x6abebd,(int)uStack_1c8);
            FUN_00408ad0();
            uStack_1c8 = CONCAT44(0x6abec8,(int)uStack_1c8);
            FUN_00408ad0();
            local_8._0_1_ = 0x5b;
            uStack_1c8 = CONCAT44(local_bc,0x6abed8);
            FUN_009a9740();
            uStack_1c8 = CONCAT44(0x6abee0,(int)uStack_1c8);
            FUN_00408ad0();
            local_8 = (uint)local_8._1_3_ << 8;
            uStack_1c8 = CONCAT44(0x6abeec,(int)uStack_1c8);
            FUN_00408ad0();
            uStack_1c8 = CONCAT44(0x6abefc,(int)uStack_1c8);
            FUN_009885d0();
            param_2 = (int *)&uStack_1c8;
            local_8 = 0x5f;
            uStack_1c8 = CONCAT44(local_f8,1000);
            uStack_1d0 = CONCAT44(10,local_50);
            uStack_1d8 = CONCAT44(0x6abf25,(uint *)uStack_1d8);
            (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
            local_8 = CONCAT31(local_8._1_3_,0x60);
          }
          else {
            uStack_1c8 = CONCAT44(0x6ab994,(int)uStack_1c8);
            FUN_009885d0();
            local_8 = 0x3d;
            uStack_1c8 = CONCAT44(0x6ab9a8,(int)uStack_1c8);
            FUN_009885d0();
            uStack_1c8 = CONCAT44(local_30,local_bc);
            local_8._0_1_ = 0x3e;
            uStack_1d0 = CONCAT44(0x6ab9bb,(undefined4)uStack_1d0);
            param_2 = (int *)FUN_009a8ee0();
            local_8._0_1_ = 0x3f;
            uStack_1c8 = CONCAT44(0x6ab9c7,(int)uStack_1c8);
            iVar6 = FUN_00475500();
            uStack_1d0 = *(undefined8 *)(iVar6 + 0x6c);
            uStack_1c8 = *(undefined8 *)(iVar6 + 0x74);
            uStack_1d8 = CONCAT44(0x6ab9ed,(uint *)uStack_1d8);
            FUN_009a9880();
            local_8._0_1_ = 0x40;
            uStack_1c8 = CONCAT44(local_78,0x6ab9ff);
            FUN_00988f20();
            local_8._0_1_ = 0x41;
            uStack_1c8 = CONCAT44(0x6aba0a,(int)uStack_1c8);
            FUN_00989020();
            uStack_1c8 = CONCAT44(0x6aba12,(int)uStack_1c8);
            FUN_00408ad0();
            uStack_1c8 = CONCAT44(0x6aba1d,(int)uStack_1c8);
            FUN_00408ad0();
            local_8._0_1_ = 0x3e;
            uStack_1c8 = CONCAT44(local_bc,0x6aba2d);
            FUN_009a9740();
            uStack_1c8 = CONCAT44(0x6aba35,(int)uStack_1c8);
            FUN_00408ad0();
            local_8 = (uint)local_8._1_3_ << 8;
            uStack_1c8 = CONCAT44(0x6aba41,(int)uStack_1c8);
            FUN_00408ad0();
            uStack_1c8 = CONCAT44(0x6aba51,(int)uStack_1c8);
            FUN_009885d0();
            param_2 = (int *)&uStack_1c8;
            local_8 = 0x42;
            uStack_1c8 = CONCAT44(local_f8,1000);
            uStack_1d0 = CONCAT44(0xe,local_50);
            uStack_1d8 = CONCAT44(0x6aba7a,(uint *)uStack_1d8);
            (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
            local_8 = CONCAT31(local_8._1_3_,0x43);
          }
          uStack_1d8 = CONCAT44(0x6aba85,(uint *)uStack_1d8);
          FUN_00989020();
          uStack_1d8 = CONCAT44(0x6aba8d,(uint *)uStack_1d8);
          FUN_00408ad0();
        }
        else {
          uStack_1c8 = CONCAT44(0x6ab86e,(int)uStack_1c8);
          FUN_009885d0();
          local_8 = 0x36;
          uStack_1c8 = CONCAT44(0x6ab882,(int)uStack_1c8);
          FUN_009885d0();
          uStack_1c8 = CONCAT44(local_30,local_bc);
          local_8._0_1_ = 0x37;
          uStack_1d0 = CONCAT44(0x6ab895,(undefined4)uStack_1d0);
          param_2 = (int *)FUN_009a8ee0();
          local_8._0_1_ = 0x38;
          uStack_1c8 = CONCAT44(0x6ab8a1,(int)uStack_1c8);
          iVar6 = FUN_00475500();
          uStack_1d0 = *(undefined8 *)(iVar6 + 0x6c);
          uStack_1c8 = *(undefined8 *)(iVar6 + 0x74);
          uStack_1d8 = CONCAT44(0x6ab8c7,(uint *)uStack_1d8);
          FUN_009a9880();
          local_8._0_1_ = 0x39;
          uStack_1c8 = CONCAT44(local_78,0x6ab8d9);
          FUN_00988f20();
          local_8._0_1_ = 0x3a;
          uStack_1c8 = CONCAT44(0x6ab8e4,(int)uStack_1c8);
          FUN_00989020();
          uStack_1c8 = CONCAT44(0x6ab8ec,(int)uStack_1c8);
          FUN_00408ad0();
          uStack_1c8 = CONCAT44(0x6ab8f7,(int)uStack_1c8);
          FUN_00408ad0();
          local_8._0_1_ = 0x37;
          uStack_1c8 = CONCAT44(local_bc,0x6ab907);
          FUN_009a9740();
          uStack_1c8 = CONCAT44(0x6ab90f,(int)uStack_1c8);
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_1c8 = CONCAT44(0x6ab91b,(int)uStack_1c8);
          FUN_00408ad0();
          uStack_1c8 = CONCAT44(0x6ab928,(int)uStack_1c8);
          FUN_009885d0();
          param_2 = (int *)&uStack_1c8;
          local_8 = 0x3b;
          uStack_1c8 = CONCAT44(local_30,1000);
          uStack_1d0 = CONCAT44(0xd,local_50);
          uStack_1d8 = CONCAT44(0x6ab951,(uint *)uStack_1d8);
          (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
          local_8 = CONCAT31(local_8._1_3_,0x3c);
          uStack_1d8 = CONCAT44(0x6ab95c,(uint *)uStack_1d8);
          FUN_00989020();
          uStack_1d8 = CONCAT44(0x6ab964,(uint *)uStack_1d8);
          FUN_00408ad0();
        }
      }
      else {
        uStack_1c8 = CONCAT44(0x6ab5b5,(int)uStack_1c8);
        FUN_009885d0();
        local_8 = 0x26;
        uStack_1c8 = CONCAT44(0x6ab5c9,(int)uStack_1c8);
        FUN_009885d0();
        uStack_1c8 = CONCAT44(local_30,local_a8);
        local_8._0_1_ = 0x27;
        uStack_1d0 = CONCAT44(0x6ab5dc,(undefined4)uStack_1d0);
        param_2 = (int *)FUN_009a8ee0();
        local_8._0_1_ = 0x28;
        uStack_1c8 = CONCAT44(0x6ab5e8,(int)uStack_1c8);
        iVar6 = FUN_00475500();
        uStack_1d0 = *(undefined8 *)(iVar6 + 0x6c);
        uStack_1c8 = *(undefined8 *)(iVar6 + 0x74);
        uStack_1d8 = CONCAT44(0x6ab60e,(uint *)uStack_1d8);
        FUN_009a9880();
        local_8._0_1_ = 0x29;
        uStack_1c8 = CONCAT44(local_78,0x6ab623);
        uVar7 = FUN_00988f20();
        uStack_1c8 = 0xffffffff00000000;
        local_8._0_1_ = 0x2a;
        uStack_1d0 = CONCAT44(uVar7,0x6ab633);
        FUN_00448aa0();
        uStack_1c8 = CONCAT44(0x6ab63a,(int)uStack_1c8);
        FUN_00408ad0();
        uStack_1c8 = CONCAT44(0x6ab645,(int)uStack_1c8);
        FUN_00408ad0();
        local_8._0_1_ = 0x27;
        uStack_1c8 = CONCAT44(local_a8,0x6ab655);
        FUN_009a9740();
        uStack_1c8 = CONCAT44(0x6ab65d,(int)uStack_1c8);
        FUN_00408ad0();
        local_8 = (uint)local_8._1_3_ << 8;
        uStack_1c8 = CONCAT44(0x6ab669,(int)uStack_1c8);
        FUN_00408ad0();
        if (0 < *(int *)(*(int *)(iVar8 + 0xbcc) + 0x3c)) {
          uStack_1c8 = CONCAT44(0x6ab687,(int)uStack_1c8);
          FUN_009885d0();
          local_8 = 0x2b;
          uStack_1c8 = CONCAT44(0x6ab69b,(int)uStack_1c8);
          FUN_009885d0();
          param_2 = (int *)&uStack_1c8;
          uStack_1c8._4_4_ = (undefined1 *)0x2;
          local_8._0_1_ = 0x2c;
          uStack_1d0 = 100000;
          uStack_1d8 = (ulonglong)*(int *)(*(int *)(iVar8 + 0xbcc) + 0x3c);
          uStack_1d8 = __allmul();
          uStack_1d0 = 1000;
          uVar7 = __alldiv();
          uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar7);
          uStack_1d0 = CONCAT44(local_50,0x6ab6de);
          local_54 = (int *)FUN_00988a50();
          local_8._0_1_ = 0x2d;
          uStack_1c8 = CONCAT44(0x6ab6f5,(int)uStack_1c8);
          local_98 = (undefined1 *)FUN_009885d0();
          uStack_1c8 = CONCAT44(local_30,local_bc);
          local_8._0_1_ = 0x2e;
          uStack_1d0 = CONCAT44(0x6ab70f,(undefined4)uStack_1d0);
          param_2 = (int *)FUN_009a8ee0();
          local_8._0_1_ = 0x2f;
          uStack_1c8 = CONCAT44(0x6ab71b,(int)uStack_1c8);
          iVar6 = FUN_00475500();
          uStack_1d0 = *(undefined8 *)(iVar6 + 0x6c);
          uStack_1c8 = *(undefined8 *)(iVar6 + 0x74);
          uStack_1d8 = CONCAT44(0x6ab741,(uint *)uStack_1d8);
          FUN_009a9880();
          local_8._0_1_ = 0x30;
          uStack_1c8 = CONCAT44(local_98,0x6ab759);
          FUN_00988f20();
          local_8._0_1_ = 0x31;
          uStack_1c8 = CONCAT44(local_54,0x6ab76e);
          FUN_00988f20();
          local_8._0_1_ = 0x32;
          uStack_1c8 = CONCAT44(local_78,0x6ab783);
          FUN_00988f20();
          local_8._0_1_ = 0x33;
          uStack_1c8 = CONCAT44(0x6ab78e,(int)uStack_1c8);
          FUN_00989020();
          uStack_1c8 = CONCAT44(0x6ab799,(int)uStack_1c8);
          FUN_00408ad0();
          uStack_1c8 = CONCAT44(0x6ab7a4,(int)uStack_1c8);
          FUN_00408ad0();
          uStack_1c8 = CONCAT44(0x6ab7af,(int)uStack_1c8);
          FUN_00408ad0();
          uStack_1c8 = CONCAT44(0x6ab7ba,(int)uStack_1c8);
          FUN_00408ad0();
          local_8._0_1_ = 0x2e;
          uStack_1c8 = CONCAT44(local_bc,0x6ab7ca);
          FUN_009a9740();
          uStack_1c8 = CONCAT44(0x6ab7d5,(int)uStack_1c8);
          FUN_00408ad0();
          uStack_1c8 = CONCAT44(0x6ab7dd,(int)uStack_1c8);
          FUN_00408ad0();
          uStack_1c8 = CONCAT44(0x6ab7e5,(int)uStack_1c8);
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_1c8 = CONCAT44(0x6ab7f1,(int)uStack_1c8);
          FUN_00408ad0();
        }
        uStack_1c8 = CONCAT44(0x6ab7fe,(int)uStack_1c8);
        FUN_009885d0();
        param_2 = (int *)&uStack_1c8;
        local_8 = 0x34;
        uStack_1c8 = CONCAT44(local_30,1000);
        uStack_1d0 = CONCAT44(0xb,local_50);
        uStack_1d8 = CONCAT44(0x6ab827,(uint *)uStack_1d8);
        (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
        uStack_1d8 = 0xffffffff00000000;
        local_8 = CONCAT31(local_8._1_3_,0x35);
        FUN_00448aa0();
        uStack_1d8 = CONCAT44(0x6ab83f,(uint *)uStack_1d8);
        FUN_00408ad0();
      }
    }
    else {
      uStack_1c8 = CONCAT44(0x6ab484,(int)uStack_1c8);
      FUN_009885d0();
      local_8 = 0x1f;
      uStack_1c8 = CONCAT44(0x6ab498,(int)uStack_1c8);
      FUN_009885d0();
      uStack_1c8 = CONCAT44(local_30,local_a8);
      local_8._0_1_ = 0x20;
      uStack_1d0 = CONCAT44(0x6ab4ab,(undefined4)uStack_1d0);
      param_2 = (int *)FUN_009a8ee0();
      local_8._0_1_ = 0x21;
      uStack_1c8 = CONCAT44(0x6ab4b7,(int)uStack_1c8);
      iVar6 = FUN_00475500();
      uStack_1d0 = *(undefined8 *)(iVar6 + 0x6c);
      uStack_1c8 = *(undefined8 *)(iVar6 + 0x74);
      uStack_1d8 = CONCAT44(0x6ab4dd,(uint *)uStack_1d8);
      FUN_009a9880();
      local_8._0_1_ = 0x22;
      uStack_1c8 = CONCAT44(local_78,0x6ab4f2);
      uVar7 = FUN_00988f20();
      uStack_1c8 = 0xffffffff00000000;
      local_8._0_1_ = 0x23;
      uStack_1d0 = CONCAT44(uVar7,0x6ab502);
      FUN_00448aa0();
      uStack_1c8 = CONCAT44(0x6ab509,(int)uStack_1c8);
      FUN_00408ad0();
      uStack_1c8 = CONCAT44(0x6ab514,(int)uStack_1c8);
      FUN_00408ad0();
      local_8._0_1_ = 0x20;
      uStack_1c8 = CONCAT44(local_a8,0x6ab524);
      FUN_009a9740();
      uStack_1c8 = CONCAT44(0x6ab52c,(int)uStack_1c8);
      FUN_00408ad0();
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_1c8 = CONCAT44(0x6ab538,(int)uStack_1c8);
      FUN_00408ad0();
      uStack_1c8 = CONCAT44(0x6ab545,(int)uStack_1c8);
      FUN_009885d0();
      param_2 = (int *)&uStack_1c8;
      local_8 = 0x24;
      uStack_1c8 = CONCAT44(local_30,1000);
      uStack_1d0 = CONCAT44(9,local_78);
      uStack_1d8 = CONCAT44(0x6ab56e,(uint *)uStack_1d8);
      (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
      uStack_1d8 = 0xffffffff00000000;
      local_8 = CONCAT31(local_8._1_3_,0x25);
      FUN_00448aa0();
      uStack_1d8 = CONCAT44(0x6ab586,(uint *)uStack_1d8);
      FUN_00408ad0();
    }
    goto LAB_006ae482;
  }
  puStack_1c0 = (uint *)0x6ac10d;
  (**(code **)(*piVar9 + 0x44))();
  puStack_1c0 = (uint *)0x6ac117;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    param_2 = (int *)((int)&uStack_1c8 + 4);
    uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
    uStack_1d0 = CONCAT44(0x320000,*(undefined4 *)(iVar8 + 0x14dc));
    uStack_1d8 = CONCAT44(*(undefined4 *)(iVar8 + 0x14d8),0x6ac141);
    lVar16 = __allmul();
    uStack_1c8 = CONCAT44((int)(lVar16 >> 0xf),2);
    puStack_1c0 = (uint *)((ulonglong)(lVar16 >> 0xf) >> 0x20);
    uStack_1d0 = CONCAT44(local_94,0x6ac15b);
    puStack_1c0 = (uint *)FUN_00988bb0();
    local_8 = 0x6c;
    uStack_1c8 = CONCAT44(local_50,0x6ac176);
    uVar4 = FUN_0042c180();
    puStack_1c0 = (uint *)0xffffffff;
    uStack_1c8 = (ulonglong)uVar4;
    local_8._0_1_ = 0x6d;
    uStack_1d0 = CONCAT44(0x6ac189,(undefined4)uStack_1d0);
    FUN_00408ed0();
    puStack_1c0 = (uint *)0x6ac191;
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    puStack_1c0 = (uint *)0x6ac1a0;
    FUN_00408ad0();
    param_2 = *(int **)(*(int *)(iVar8 + 0xbcc) + 0x4c);
    if (param_2 != (int *)0x0) {
      puStack_1c0 = (uint *)0x6ac1c1;
      local_98 = (undefined1 *)FUN_009885d0();
      puStack_1c0 = (uint *)0x1;
      local_54 = (int *)((int)&uStack_1c8 + 4);
      local_8 = 0x6e;
      uStack_1c8 = (ulonglong)extraout_ECX << 0x20;
      uStack_1d0 = CONCAT44(100000,(int)param_2 >> 0x1f);
      uStack_1d8 = CONCAT44(param_2,0x6ac1e8);
      uVar17 = __allmul();
      uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
      uStack_1d0 = CONCAT44(1000,(int)((ulonglong)uVar17 >> 0x20));
      uStack_1d8 = CONCAT44((int)uVar17,0x6ac1f6);
      uVar7 = __alldiv();
      uStack_1c8 = CONCAT44(uVar7,local_30);
      uStack_1d0 = CONCAT44(0x6ac207,(undefined4)uStack_1d0);
      FUN_00988a50();
      local_8._0_1_ = 0x6f;
      puStack_1c0 = (uint *)local_98;
      uStack_1c8 = CONCAT44(0x6ac21f,(int)uStack_1c8);
      puStack_1c0 = (uint *)FUN_00988f20();
      uStack_1c8._4_4_ = local_94;
      local_8._0_1_ = 0x70;
      uStack_1c8._0_4_ = 0x6ac23a;
      uVar7 = FUN_0042c180();
      uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar7);
      local_8._0_1_ = 0x71;
      uStack_1d0 = CONCAT44(0x6ac24c,(undefined4)uStack_1d0);
      uVar4 = FUN_00988fa0();
      puStack_1c0 = (uint *)0xffffffff;
      uStack_1c8 = (ulonglong)uVar4;
      local_8._0_1_ = 0x72;
      uStack_1d0 = CONCAT44(0x6ac25f,(undefined4)uStack_1d0);
      FUN_00448aa0();
      puStack_1c0 = (uint *)0x6ac267;
      FUN_00408ad0();
      puStack_1c0 = (uint *)0x6ac272;
      FUN_00408ad0();
      puStack_1c0 = (uint *)0x6ac279;
      FUN_00408ad0();
      puStack_1c0 = (uint *)0x6ac281;
      FUN_00408ad0();
      local_8 = (uint)local_8._1_3_ << 8;
      puStack_1c0 = (uint *)0x6ac28d;
      FUN_00408ad0();
    }
    puStack_1c0 = (uint *)0x6ac29a;
    FUN_009885d0();
    param_2 = (int *)((int)&uStack_1c8 + 4);
    local_8 = 0x73;
    uStack_1c8 = 0x3e800000063;
    uStack_1d0 = CONCAT44(local_94,0x6ac2c6);
    puStack_1c0 = local_30;
    uVar7 = (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
    local_8._0_1_ = 0x74;
    uStack_1d8 = CONCAT44(uVar7,0x6ac2d8);
    FUN_00988fa0();
    uStack_1d8 = 0xffffffff00000000;
    local_8._0_1_ = 0x75;
    FUN_00448aa0();
    uStack_1d8 = CONCAT44(0x6ac2f3,(uint *)uStack_1d8);
    FUN_00408ad0();
    uStack_1d8 = CONCAT44(0x6ac2fe,(uint *)uStack_1d8);
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_1d8 = CONCAT44(0x6ac309,(uint *)uStack_1d8);
    FUN_00408ad0();
    if (*(char *)(iVar8 + 0x120) != '\0') {
      ExceptionList = local_10;
      return param_1;
    }
    uStack_1d8 = CONCAT44(local_94,0x6ac324);
    uVar7 = FUN_00514960();
    local_8 = 0x76;
    uStack_1d8 = CONCAT44(uVar7,0x6ac339);
    FUN_00988fa0();
    uStack_1d8 = 0xffffffff00000000;
    local_8 = CONCAT31(local_8._1_3_,0x77);
    FUN_00448aa0();
    uStack_1d8 = CONCAT44(0x6ac354,(uint *)uStack_1d8);
    FUN_00408ad0();
    goto LAB_006ae482;
  }
  puStack_1c0 = (uint *)0x6ac368;
  (**(code **)(*piVar9 + 0x44))();
  puStack_1c0 = (uint *)0x6ac372;
  cVar3 = FUN_0040b360();
  if (cVar3 == '\0') {
    puStack_1c0 = (uint *)0x6ac599;
    (**(code **)(*piVar9 + 0x44))();
    uStack_1d8 = CONCAT44(0x6ac5a3,(uint *)uStack_1d8);
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      uStack_1d8 = CONCAT44(0x6ac5b4,(uint *)uStack_1d8);
      (**(code **)(*piVar9 + 0x44))();
      uStack_1d8 = CONCAT44(0x6ac5be,(uint *)uStack_1d8);
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        uStack_1d8 = CONCAT44(0x6ac5cf,(uint *)uStack_1d8);
        (**(code **)(*piVar9 + 0x44))();
        uStack_1d8 = CONCAT44(0x6ac5d9,(uint *)uStack_1d8);
        cVar3 = FUN_0040b360();
        if (cVar3 == '\0') {
          uStack_1d8 = CONCAT44(0x6aca6c,(uint *)uStack_1d8);
          (**(code **)(*piVar9 + 0x44))();
          uStack_1d8 = CONCAT44(0x6aca76,(uint *)uStack_1d8);
          cVar3 = FUN_0040b360();
          if (cVar3 != '\0') {
            uStack_1d8 = CONCAT44(0x6aca8b,(uint *)uStack_1d8);
            FUN_009885d0();
            uStack_1d8 = CONCAT44(local_30,local_bc);
            local_8 = 0xa1;
            FUN_009a8ee0();
            local_8._0_1_ = 0xa2;
            uStack_1d8 = CONCAT44(0x6acaac,(uint *)uStack_1d8);
            iVar8 = FUN_00475500();
            uStack_1d8 = *(undefined8 *)(iVar8 + 0x74);
            FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
            local_8._0_1_ = 0xa3;
            uStack_1d8 = CONCAT44(0x6acad9,(uint *)uStack_1d8);
            FUN_00989020();
            uStack_1d8 = CONCAT44(0x6acae1,(uint *)uStack_1d8);
            FUN_00408ad0();
            local_8._0_1_ = 0xa1;
            uStack_1d8 = CONCAT44(local_bc,0x6acaf1);
            FUN_009a9740();
            local_8 = (uint)local_8._1_3_ << 8;
            uStack_1d8 = CONCAT44(0x6acafd,(uint *)uStack_1d8);
            FUN_00408ad0();
            uStack_1d8 = CONCAT44(0x6acb0a,(uint *)uStack_1d8);
            FUN_009885d0();
            uStack_1d8 = CONCAT44(local_78,local_bc);
            local_8 = 0xa4;
            FUN_009a8ee0();
            local_8._0_1_ = 0xa5;
            uStack_1d8 = CONCAT44(0x6acb2b,(uint *)uStack_1d8);
            iVar8 = FUN_00475500();
            uStack_1d8 = *(undefined8 *)(iVar8 + 0x74);
            FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
            local_8._0_1_ = 0xa6;
            uStack_1d8 = CONCAT44(0x6acb59,(uint *)uStack_1d8);
            FUN_00989020();
            uStack_1d8 = CONCAT44(0x6acb61,(uint *)uStack_1d8);
            FUN_00408ad0();
            local_8 = CONCAT31(local_8._1_3_,0xa4);
            uStack_1d8 = CONCAT44(local_bc,0x6acb71);
            FUN_009a9740();
            goto LAB_006ae482;
          }
          uStack_1d8 = CONCAT44(0x6acb82,(uint *)uStack_1d8);
          (**(code **)(*piVar9 + 0x44))();
          uStack_1d8 = CONCAT44(0x6acb8c,(uint *)uStack_1d8);
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            uStack_1d8 = CONCAT44(0x6acb9d,(uint *)uStack_1d8);
            (**(code **)(*piVar9 + 0x44))();
            uStack_1d8 = CONCAT44(0x6acba7,(uint *)uStack_1d8);
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              uStack_1d8._4_4_ = piVar9;
              uStack_1d8._0_4_ = (uint *)0x6acbc7;
              local_11 = (**(code **)(*(int *)(*(int *)(local_d0 + 0x5c) + 0x18) + 0x94))();
              uStack_1d8 = CONCAT44(uStack_1d8._4_4_,piVar9);
              local_31 = (**(code **)(*(int *)(*(int *)(local_d0 + 0x60) + 0x18) + 0x94))();
              if (local_11 == '\0') {
                if (local_31 == '\0') {
                  param_2 = (int *)FUN_006aea10(local_d0,piVar9);
                  if (param_2 == (int *)0x0) {
                    (**(code **)(*piVar9 + 0x44))();
                    uStack_1d8 = CONCAT44(0x6acde6,(uint *)uStack_1d8);
                    cVar3 = FUN_0040b360();
                    if (cVar3 == '\0') {
                      uStack_1d8 = CONCAT44(0x6acef2,(uint *)uStack_1d8);
                      (**(code **)(*piVar9 + 0x44))();
                      uStack_1d8 = CONCAT44(0x6acefc,(uint *)uStack_1d8);
                      cVar3 = FUN_0040b360();
                      if (cVar3 == '\0') {
                        uStack_1d8 = CONCAT44(0x6ad008,(uint *)uStack_1d8);
                        (**(code **)(*piVar9 + 0x44))();
                        uStack_1d8 = CONCAT44(0x6ad012,(uint *)uStack_1d8);
                        cVar3 = FUN_0040b360();
                        if (cVar3 == '\0') {
                          uStack_1d8 = CONCAT44(0x6ad0ae,(uint *)uStack_1d8);
                          (**(code **)(*piVar9 + 0x44))();
                          uStack_1d8 = CONCAT44(0x6ad0b8,(uint *)uStack_1d8);
                          cVar3 = FUN_0040b360();
                          if (cVar3 == '\0') {
                            uStack_1d8 = CONCAT44(0x6ad154,(uint *)uStack_1d8);
                            (**(code **)(*piVar9 + 0x44))();
                            uStack_1d8 = CONCAT44(0x6ad15e,(uint *)uStack_1d8);
                            cVar3 = FUN_0040b360();
                            if (cVar3 == '\0') {
                              uStack_1d8 = CONCAT44(0x6ad1fa,(uint *)uStack_1d8);
                              (**(code **)(*piVar9 + 0x44))();
                              uStack_1d8 = CONCAT44(0x6ad204,(uint *)uStack_1d8);
                              cVar3 = FUN_0040b360();
                              if (cVar3 == '\0') {
                                uStack_1d8 = CONCAT44(0x6ad2a0,(uint *)uStack_1d8);
                                (**(code **)(*piVar9 + 0x44))();
                                uStack_1d8 = CONCAT44(0x6ad2aa,(uint *)uStack_1d8);
                                cVar3 = FUN_0040b360();
                                if (cVar3 == '\0') {
                                  uStack_1d8 = CONCAT44(0x6ad346,(uint *)uStack_1d8);
                                  (**(code **)(*piVar9 + 0x44))();
                                  uStack_1d8 = CONCAT44(0x6ad350,(uint *)uStack_1d8);
                                  cVar3 = FUN_0040b360();
                                  if (cVar3 == '\0') {
                                    ExceptionList = local_10;
                                    return param_1;
                                  }
                                  uStack_1d8 = CONCAT44(0x6ad365,(uint *)uStack_1d8);
                                  FUN_009885d0();
                                  uStack_1d8 = CONCAT44(local_30,local_bc);
                                  local_8 = 0xf7;
                                  FUN_009a8ee0();
                                  local_8._0_1_ = 0xf8;
                                  uStack_1d8 = CONCAT44(0x6ad386,(uint *)uStack_1d8);
                                  FUN_00475500();
                                  uStack_1d8 = CONCAT44(0x6ad393,(uint *)uStack_1d8);
                                  puVar10 = (undefined8 *)FUN_0040b440();
                                  uStack_1d8 = puVar10[1];
                                  FUN_009a9880(*puVar10);
                                  uStack_1d8 = 0xffffffff00000000;
                                  local_8._0_1_ = 0xf9;
                                  FUN_00408ed0();
                                  uStack_1d8 = CONCAT44(0x6ad3cb,(uint *)uStack_1d8);
                                  FUN_00408ad0();
                                  local_8 = CONCAT31(local_8._1_3_,0xf7);
                                  uStack_1d8 = CONCAT44(local_bc,0x6ad3db);
                                  FUN_009a9740();
                                }
                                else {
                                  uStack_1d8 = CONCAT44(0x6ad2bf,(uint *)uStack_1d8);
                                  FUN_009885d0();
                                  uStack_1d8 = CONCAT44(local_30,local_bc);
                                  local_8 = 0xf4;
                                  FUN_009a8ee0();
                                  local_8._0_1_ = 0xf5;
                                  uStack_1d8 = CONCAT44(0x6ad2e0,(uint *)uStack_1d8);
                                  FUN_00475500();
                                  uStack_1d8 = CONCAT44(0x6ad2ed,(uint *)uStack_1d8);
                                  puVar10 = (undefined8 *)FUN_0040b440();
                                  uStack_1d8 = puVar10[1];
                                  FUN_009a9880(*puVar10);
                                  uStack_1d8 = 0xffffffff00000000;
                                  local_8._0_1_ = 0xf6;
                                  FUN_00408ed0();
                                  uStack_1d8 = CONCAT44(0x6ad325,(uint *)uStack_1d8);
                                  FUN_00408ad0();
                                  local_8 = CONCAT31(local_8._1_3_,0xf4);
                                  uStack_1d8 = CONCAT44(local_bc,0x6ad335);
                                  FUN_009a9740();
                                }
                              }
                              else {
                                uStack_1d8 = CONCAT44(0x6ad219,(uint *)uStack_1d8);
                                FUN_009885d0();
                                uStack_1d8 = CONCAT44(local_30,local_bc);
                                local_8 = 0xf1;
                                FUN_009a8ee0();
                                local_8._0_1_ = 0xf2;
                                uStack_1d8 = CONCAT44(0x6ad23a,(uint *)uStack_1d8);
                                FUN_00475500();
                                uStack_1d8 = CONCAT44(0x6ad247,(uint *)uStack_1d8);
                                puVar10 = (undefined8 *)FUN_0040b440();
                                uStack_1d8 = puVar10[1];
                                FUN_009a9880(*puVar10);
                                uStack_1d8 = 0xffffffff00000000;
                                local_8._0_1_ = 0xf3;
                                FUN_00408ed0();
                                uStack_1d8 = CONCAT44(0x6ad27f,(uint *)uStack_1d8);
                                FUN_00408ad0();
                                local_8 = CONCAT31(local_8._1_3_,0xf1);
                                uStack_1d8 = CONCAT44(local_bc,0x6ad28f);
                                FUN_009a9740();
                              }
                            }
                            else {
                              uStack_1d8 = CONCAT44(0x6ad173,(uint *)uStack_1d8);
                              FUN_009885d0();
                              uStack_1d8 = CONCAT44(local_30,local_bc);
                              local_8 = 0xee;
                              FUN_009a8ee0();
                              local_8._0_1_ = 0xef;
                              uStack_1d8 = CONCAT44(0x6ad194,(uint *)uStack_1d8);
                              FUN_00475500();
                              uStack_1d8 = CONCAT44(0x6ad1a1,(uint *)uStack_1d8);
                              puVar10 = (undefined8 *)FUN_0040b440();
                              uStack_1d8 = puVar10[1];
                              FUN_009a9880(*puVar10);
                              uStack_1d8 = 0xffffffff00000000;
                              local_8._0_1_ = 0xf0;
                              FUN_00408ed0();
                              uStack_1d8 = CONCAT44(0x6ad1d9,(uint *)uStack_1d8);
                              FUN_00408ad0();
                              local_8 = CONCAT31(local_8._1_3_,0xee);
                              uStack_1d8 = CONCAT44(local_bc,0x6ad1e9);
                              FUN_009a9740();
                            }
                          }
                          else {
                            uStack_1d8 = CONCAT44(0x6ad0cd,(uint *)uStack_1d8);
                            FUN_009885d0();
                            uStack_1d8 = CONCAT44(local_30,local_bc);
                            local_8 = 0xeb;
                            FUN_009a8ee0();
                            local_8._0_1_ = 0xec;
                            uStack_1d8 = CONCAT44(0x6ad0ee,(uint *)uStack_1d8);
                            FUN_00475500();
                            uStack_1d8 = CONCAT44(0x6ad0fb,(uint *)uStack_1d8);
                            puVar10 = (undefined8 *)FUN_0040b440();
                            uStack_1d8 = puVar10[1];
                            FUN_009a9880(*puVar10);
                            uStack_1d8 = 0xffffffff00000000;
                            local_8._0_1_ = 0xed;
                            FUN_00408ed0();
                            uStack_1d8 = CONCAT44(0x6ad133,(uint *)uStack_1d8);
                            FUN_00408ad0();
                            local_8 = CONCAT31(local_8._1_3_,0xeb);
                            uStack_1d8 = CONCAT44(local_bc,0x6ad143);
                            FUN_009a9740();
                          }
                        }
                        else {
                          uStack_1d8 = CONCAT44(0x6ad027,(uint *)uStack_1d8);
                          FUN_009885d0();
                          uStack_1d8 = CONCAT44(local_30,local_bc);
                          local_8 = 0xe8;
                          FUN_009a8ee0();
                          local_8._0_1_ = 0xe9;
                          uStack_1d8 = CONCAT44(0x6ad048,(uint *)uStack_1d8);
                          FUN_00475500();
                          uStack_1d8 = CONCAT44(0x6ad055,(uint *)uStack_1d8);
                          puVar10 = (undefined8 *)FUN_0040b440();
                          uStack_1d8 = puVar10[1];
                          FUN_009a9880(*puVar10);
                          uStack_1d8 = 0xffffffff00000000;
                          local_8._0_1_ = 0xea;
                          FUN_00408ed0();
                          uStack_1d8 = CONCAT44(0x6ad08d,(uint *)uStack_1d8);
                          FUN_00408ad0();
                          local_8 = CONCAT31(local_8._1_3_,0xe8);
                          uStack_1d8 = CONCAT44(local_bc,0x6ad09d);
                          FUN_009a9740();
                        }
                      }
                      else {
                        param_2 = (int *)((int)&uStack_1d8 + 4);
                        uStack_1d8 = CONCAT44(*(undefined4 *)(*(int *)(DAT_012586dc + 0x20) + 0x28),
                                              0x6acf20);
                        FUN_0043a5b0();
                        local_9c = *(undefined4 *)(iVar8 + 2000);
                        local_98 = *(undefined1 **)(iVar8 + 0x7d4);
                        uStack_1d8 = CONCAT44(0x6acf43,(uint *)uStack_1d8);
                        cVar3 = FUN_0043a5e0();
                        param_2 = (int *)&uStack_1d8;
                        uStack_1d8 = (ulonglong)extraout_ECX_04;
                        if (cVar3 == '\0') {
                          FUN_0050e8a0();
                          uVar7 = FUN_00988a50();
                          uStack_1d8 = CONCAT44(uVar7,local_50);
                          local_8 = 0xe6;
                          FUN_0042c180();
                          uStack_1d8 = 0xffffffff00000000;
                          local_8 = CONCAT31(local_8._1_3_,0xe7);
                          FUN_00408ed0();
                          uStack_1d8 = CONCAT44(0x6acff4,(uint *)uStack_1d8);
                          FUN_00408ad0();
                        }
                        else {
                          uStack_1d8 = (ulonglong)*(uint *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
                          param_2 = (int *)&uStack_1d8;
                          uVar7 = FUN_00988a50();
                          uStack_1d8 = CONCAT44(uVar7,local_50);
                          local_8 = 0xe4;
                          FUN_0042c180();
                          uStack_1d8 = 0xffffffff00000000;
                          local_8 = CONCAT31(local_8._1_3_,0xe5);
                          FUN_00408ed0();
                          uStack_1d8 = CONCAT44(0x6acf9e,(uint *)uStack_1d8);
                          FUN_00408ad0();
                        }
                      }
                    }
                    else {
                      param_2 = (int *)((int)&uStack_1d8 + 4);
                      uStack_1d8 = CONCAT44(*(undefined4 *)(*(int *)(DAT_012586dc + 0x20) + 0x28),
                                            0x6ace0a);
                      FUN_0043a5b0();
                      local_9c = *(undefined4 *)(iVar8 + 2000);
                      local_98 = *(undefined1 **)(iVar8 + 0x7d4);
                      uStack_1d8 = CONCAT44(0x6ace2d,(uint *)uStack_1d8);
                      cVar3 = FUN_0043a5e0();
                      param_2 = (int *)&uStack_1d8;
                      uStack_1d8 = (ulonglong)extraout_ECX_03;
                      if (cVar3 == '\0') {
                        FUN_0050e8a0();
                        uVar7 = FUN_00988a50();
                        uStack_1d8 = CONCAT44(uVar7,local_50);
                        local_8 = 0xe2;
                        FUN_0042c180();
                        uStack_1d8 = 0xffffffff00000000;
                        local_8 = CONCAT31(local_8._1_3_,0xe3);
                        FUN_00408ed0();
                        uStack_1d8 = CONCAT44(0x6acede,(uint *)uStack_1d8);
                        FUN_00408ad0();
                      }
                      else {
                        uStack_1d8 = (ulonglong)*(uint *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
                        param_2 = (int *)&uStack_1d8;
                        uVar7 = FUN_00988a50();
                        uStack_1d8 = CONCAT44(uVar7,local_50);
                        local_8 = 0xe0;
                        FUN_0042c180();
                        uStack_1d8 = 0xffffffff00000000;
                        local_8 = CONCAT31(local_8._1_3_,0xe1);
                        FUN_00408ed0();
                        uStack_1d8 = CONCAT44(0x6ace88,(uint *)uStack_1d8);
                        FUN_00408ad0();
                      }
                    }
                    goto LAB_006ae482;
                  }
                  (**(code **)(*piVar9 + 0x44))();
                  cVar3 = FUN_0040b360();
                  if (cVar3 == '\0') {
                    (**(code **)(*piVar9 + 0x44))();
                    cVar3 = FUN_0040b360();
                    if (cVar3 == '\0') {
                      (**(code **)(*piVar9 + 0x44))();
                      uStack_1d8 = CONCAT44(0x6acc58,(uint *)uStack_1d8);
                      cVar3 = FUN_0040b360();
                      if (cVar3 != '\0') {
                        if ((char)param_2[0x35] == '\0') {
                          ExceptionList = local_10;
                          return param_1;
                        }
                        uStack_1d8 = CONCAT44(0x6acc7d,(uint *)uStack_1d8);
                        FUN_009885d0();
                        uStack_1d8 = CONCAT44(local_30,local_bc);
                        local_8 = 0xdb;
                        FUN_009a8ee0();
                        local_8._0_1_ = 0xdc;
                        uStack_1d8 = CONCAT44(0x6acc9e,(uint *)uStack_1d8);
                        FUN_00475500();
                        uStack_1d8 = CONCAT44(0x6accab,(uint *)uStack_1d8);
                        puVar10 = (undefined8 *)FUN_0040b440();
                        uStack_1d8 = puVar10[1];
                        FUN_009a9880(*puVar10);
                        uStack_1d8 = 0xffffffff00000000;
                        local_8._0_1_ = 0xdd;
                        FUN_00408ed0();
                        uStack_1d8 = CONCAT44(0x6acce3,(uint *)uStack_1d8);
                        FUN_00408ad0();
                        local_8 = CONCAT31(local_8._1_3_,0xdb);
                        uStack_1d8 = CONCAT44(local_bc,0x6accf3);
                        FUN_009a9740();
                        goto LAB_006ae482;
                      }
                      uStack_1d8 = CONCAT44(0x6acd04,(uint *)uStack_1d8);
                      (**(code **)(*piVar9 + 0x44))();
                      uStack_1d8 = CONCAT44(0x6acd0e,(uint *)uStack_1d8);
                      cVar3 = FUN_0040b360();
                      if (cVar3 != '\0') {
                        uStack_1d8 = CONCAT44(local_50,param_2);
                        FUN_005b70c0();
                        uStack_1d8 = 0xffffffff00000000;
                        local_8 = 0xde;
                        FUN_00408ed0();
                        goto LAB_006ae482;
                      }
                      uStack_1d8 = CONCAT44(local_1ac,0x6acd48);
                      (**(code **)(*param_2 + 0x24))();
                      local_8 = 0xdf;
                      goto LAB_006aac4f;
                    }
                  }
                  if (param_2[0x22] == 0) {
                    ExceptionList = local_10;
                    return param_1;
                  }
                  piVar9 = (int *)param_2[0x22];
                  (**(code **)(*(int *)piVar9[0x37] + 0x1c))();
                  local_8 = 0xd9;
                  (**(code **)(*piVar9 + 0x20))();
                  FUN_0043e9a0();
                  uStack_1d8 = 0xffffffff00000000;
                  local_8 = CONCAT31(local_8._1_3_,0xda);
                  FUN_00408ed0();
                  uStack_1d8 = CONCAT44(0x6acdcf,(uint *)uStack_1d8);
                  FUN_00408ad0();
                  goto LAB_006ae482;
                }
                FUN_009885d0();
                local_8 = 0xac;
                local_54 = (int *)(**(code **)(**(int **)(local_d0 + 0x60) + 0x7c))();
              }
              else {
                FUN_009885d0();
                local_8 = 0xab;
                local_54 = (int *)(**(code **)(**(int **)(local_d0 + 0x5c) + 0x7c))();
              }
              local_8 = local_8 & 0xffffff00;
              FUN_00408ad0();
              piVar9 = param_2;
              cVar3 = (**(code **)(local_54[1] + 0x94))(param_2);
              if (cVar3 == '\0') {
                (**(code **)(*piVar9 + 0x44))();
                uStack_1d8 = CONCAT44(0x6addb7,(uint *)uStack_1d8);
                cVar3 = FUN_0040b360();
                if (cVar3 == '\0') {
                  uStack_1d8 = CONCAT44(0x6ade53,(uint *)uStack_1d8);
                  (**(code **)(*piVar9 + 0x44))();
                  uStack_1d8 = CONCAT44(0x6ade5d,(uint *)uStack_1d8);
                  cVar3 = FUN_0040b360();
                  if (cVar3 == '\0') {
                    uStack_1d8 = CONCAT44(0x6ae045,(uint *)uStack_1d8);
                    (**(code **)(*piVar9 + 0x44))();
                    uStack_1d8 = CONCAT44(0x6ae04f,(uint *)uStack_1d8);
                    cVar3 = FUN_0040b360();
                    if (cVar3 == '\0') {
                      uStack_1d8 = CONCAT44(0x6ae0eb,(uint *)uStack_1d8);
                      (**(code **)(*piVar9 + 0x44))();
                      uStack_1d8 = CONCAT44(0x6ae0f5,(uint *)uStack_1d8);
                      cVar3 = FUN_0040b360();
                      if (cVar3 == '\0') {
                        uStack_1d8 = CONCAT44(0x6ae191,(uint *)uStack_1d8);
                        (**(code **)(*piVar9 + 0x44))();
                        uStack_1d8 = CONCAT44(0x6ae19b,(uint *)uStack_1d8);
                        cVar3 = FUN_0040b360();
                        if (cVar3 == '\0') {
                          ExceptionList = local_10;
                          return param_1;
                        }
                        local_cc = *(int **)(iVar8 + 0x9d8);
                        local_c8 = iVar8 + 0x9d8;
                        param_2 = (int *)0x0;
                        local_54 = (int *)0x0;
                        uStack_1d8 = CONCAT44(0x6ae1ce,(uint *)uStack_1d8);
                        cVar3 = FUN_0043a860();
                        while (cVar3 != '\0') {
                          iVar8 = *local_cc;
                          local_cc = local_cc + 1;
                          piVar9 = *(int **)(*(int *)(*(int *)(local_98 + 0xacc) + iVar8 * 4) + 0xd8
                                            );
                          while (piVar9 != (int *)0x0) {
                            piVar12 = (int *)*piVar9;
                            piVar9 = (int *)piVar9[2];
                            uStack_1d8 = CONCAT44(0x6ae20e,(uint *)uStack_1d8);
                            cVar3 = (**(code **)(*piVar12 + 0x34))();
                            if (cVar3 != '\0') {
                              if (*(char *)(piVar12[0x22] + 0x39) == '\0') {
                                local_54 = (int *)((int)local_54 + 1);
                              }
                              else {
                                param_2 = (int *)((int)param_2 + 1);
                              }
                            }
                          }
                          uStack_1d8 = CONCAT44(0x6ae235,(uint *)uStack_1d8);
                          cVar3 = FUN_0043a860();
                        }
                        if (local_11 == '\0') {
                          uStack_1d8 = CONCAT44(local_94,0x6ae29e);
                          uVar7 = FUN_009888f0();
                          uStack_1d8 = CONCAT44(uVar7,local_50);
                          local_8 = 0xd7;
                          FUN_0042c180();
                          uStack_1d8 = 0xffffffff00000000;
                          local_8 = CONCAT31(local_8._1_3_,0xd8);
                          FUN_00408ed0();
                          uStack_1d8 = CONCAT44(0x6ae2d4,(uint *)uStack_1d8);
                          FUN_00408ad0();
                        }
                        else {
                          uStack_1d8 = CONCAT44(local_94,0x6ae24e);
                          uVar7 = FUN_009888f0();
                          uStack_1d8 = CONCAT44(uVar7,local_50);
                          local_8 = 0xd5;
                          FUN_0042c180();
                          uStack_1d8 = 0xffffffff00000000;
                          local_8 = CONCAT31(local_8._1_3_,0xd6);
                          FUN_00408ed0();
                          uStack_1d8 = CONCAT44(0x6ae284,(uint *)uStack_1d8);
                          FUN_00408ad0();
                        }
                      }
                      else {
                        uStack_1d8 = CONCAT44(0x6ae10a,(uint *)uStack_1d8);
                        FUN_009885d0();
                        uStack_1d8 = CONCAT44(local_30,local_bc);
                        local_8 = 0xd2;
                        FUN_009a8ee0();
                        local_8._0_1_ = 0xd3;
                        uStack_1d8 = CONCAT44(0x6ae12b,(uint *)uStack_1d8);
                        FUN_00475500();
                        uStack_1d8 = CONCAT44(0x6ae138,(uint *)uStack_1d8);
                        puVar10 = (undefined8 *)FUN_0040b440();
                        uStack_1d8 = puVar10[1];
                        FUN_009a9880(*puVar10);
                        uStack_1d8 = 0xffffffff00000000;
                        local_8._0_1_ = 0xd4;
                        FUN_00408ed0();
                        uStack_1d8 = CONCAT44(0x6ae170,(uint *)uStack_1d8);
                        FUN_00408ad0();
                        local_8 = CONCAT31(local_8._1_3_,0xd2);
                        uStack_1d8 = CONCAT44(local_bc,0x6ae180);
                        FUN_009a9740();
                      }
                    }
                    else {
                      uStack_1d8 = CONCAT44(0x6ae064,(uint *)uStack_1d8);
                      FUN_009885d0();
                      uStack_1d8 = CONCAT44(local_30,local_bc);
                      local_8 = 0xcf;
                      FUN_009a8ee0();
                      local_8._0_1_ = 0xd0;
                      uStack_1d8 = CONCAT44(0x6ae085,(uint *)uStack_1d8);
                      FUN_00475500();
                      uStack_1d8 = CONCAT44(0x6ae092,(uint *)uStack_1d8);
                      puVar10 = (undefined8 *)FUN_0040b440();
                      uStack_1d8 = puVar10[1];
                      FUN_009a9880(*puVar10);
                      uStack_1d8 = 0xffffffff00000000;
                      local_8._0_1_ = 0xd1;
                      FUN_00408ed0();
                      uStack_1d8 = CONCAT44(0x6ae0ca,(uint *)uStack_1d8);
                      FUN_00408ad0();
                      local_8 = CONCAT31(local_8._1_3_,0xcf);
                      uStack_1d8 = CONCAT44(local_bc,0x6ae0da);
                      FUN_009a9740();
                    }
                  }
                  else {
                    local_9c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                          *(int *)(DAT_012588e8 + 0xb60) * 4) + 3000) == '\0') {
                      if (local_11 == '\0') {
                        uStack_1d8 = CONCAT44(0x6adfbd,(uint *)uStack_1d8);
                        FUN_009885d0();
                        uStack_1d8 = CONCAT44(local_30,local_bc);
                        local_8 = 0xcc;
                        FUN_009a8ee0();
                        local_8._0_1_ = 0xcd;
                        uStack_1d8 = CONCAT44(0x6adfdf,(uint *)uStack_1d8);
                        FUN_00475500();
                        uStack_1d8 = CONCAT44(0x6adfec,(uint *)uStack_1d8);
                        puVar10 = (undefined8 *)FUN_0040b440();
                        uStack_1d8 = puVar10[1];
                        FUN_009a9880(*puVar10);
                        uStack_1d8 = 0xffffffff00000000;
                        local_8._0_1_ = 0xce;
                        FUN_00408ed0();
                        uStack_1d8 = CONCAT44(0x6ae024,(uint *)uStack_1d8);
                        FUN_00408ad0();
                        local_8 = CONCAT31(local_8._1_3_,0xcc);
                        uStack_1d8 = CONCAT44(local_bc,0x6ae034);
                        FUN_009a9740();
                      }
                      else {
                        uStack_1d8 = CONCAT44(0x6adf34,(uint *)uStack_1d8);
                        FUN_009885d0();
                        uStack_1d8 = CONCAT44(local_30,local_bc);
                        local_8 = 0xc9;
                        FUN_009a8ee0();
                        local_8._0_1_ = 0xca;
                        uStack_1d8 = CONCAT44(0x6adf56,(uint *)uStack_1d8);
                        FUN_00475500();
                        uStack_1d8 = CONCAT44(0x6adf63,(uint *)uStack_1d8);
                        puVar10 = (undefined8 *)FUN_0040b440();
                        uStack_1d8 = puVar10[1];
                        FUN_009a9880(*puVar10);
                        uStack_1d8 = 0xffffffff00000000;
                        local_8._0_1_ = 0xcb;
                        FUN_00408ed0();
                        uStack_1d8 = CONCAT44(0x6adf9b,(uint *)uStack_1d8);
                        FUN_00408ad0();
                        local_8 = CONCAT31(local_8._1_3_,0xc9);
                        uStack_1d8 = CONCAT44(local_bc,0x6adfab);
                        FUN_009a9740();
                      }
                    }
                    else {
                      uStack_1d8 = CONCAT44(0x6adea2,(uint *)uStack_1d8);
                      FUN_009885d0();
                      uStack_1d8 = CONCAT44(local_30,local_bc);
                      local_8 = 0xc6;
                      FUN_009a8ee0();
                      local_8._0_1_ = 199;
                      uStack_1d8 = CONCAT44(0x6adec3,(uint *)uStack_1d8);
                      FUN_00475500();
                      uStack_1d8 = CONCAT44(0x6aded0,(uint *)uStack_1d8);
                      puVar10 = (undefined8 *)FUN_0040b440();
                      uStack_1d8 = puVar10[1];
                      FUN_009a9880(*puVar10);
                      uStack_1d8 = 0xffffffff00000000;
                      local_8._0_1_ = 200;
                      FUN_00408ed0();
                      uStack_1d8 = CONCAT44(0x6adf08,(uint *)uStack_1d8);
                      FUN_00408ad0();
                      local_8 = CONCAT31(local_8._1_3_,0xc6);
                      uStack_1d8 = CONCAT44(local_bc,0x6adf18);
                      FUN_009a9740();
                    }
                  }
                }
                else {
                  uStack_1d8 = CONCAT44(0x6addcc,(uint *)uStack_1d8);
                  FUN_009885d0();
                  uStack_1d8 = CONCAT44(local_30,local_bc);
                  local_8 = 0xc3;
                  FUN_009a8ee0();
                  local_8._0_1_ = 0xc4;
                  uStack_1d8 = CONCAT44(0x6added,(uint *)uStack_1d8);
                  FUN_00475500();
                  uStack_1d8 = CONCAT44(0x6addfa,(uint *)uStack_1d8);
                  puVar10 = (undefined8 *)FUN_0040b440();
                  uStack_1d8 = puVar10[1];
                  FUN_009a9880(*puVar10);
                  uStack_1d8 = 0xffffffff00000000;
                  local_8._0_1_ = 0xc5;
                  FUN_00408ed0();
                  uStack_1d8 = CONCAT44(0x6ade32,(uint *)uStack_1d8);
                  FUN_00408ad0();
                  local_8 = CONCAT31(local_8._1_3_,0xc3);
                  uStack_1d8 = CONCAT44(local_bc,0x6ade42);
                  FUN_009a9740();
                }
                goto LAB_006ae482;
              }
              local_98 = (undefined1 *)&piStack_1bc;
              puVar11 = *(undefined4 **)(iVar8 + 0x7b4);
              local_c8 = 0;
joined_r0x006ad487:
              if (puVar11 != (undefined4 *)0x0) {
                local_d8 = (int *)*puVar11;
                puVar11 = (undefined4 *)puVar11[2];
                if (local_11 == '\0') goto LAB_006ad4ae;
                puStack_1c0 = (uint *)0x6ad4aa;
                cVar3 = (**(code **)(*local_d8 + 0x38))();
                if (cVar3 == '\0') goto LAB_006ad4ae;
                goto LAB_006ad4c5;
              }
              puStack_1c0 = (uint *)0x6ad4ef;
              puVar11 = (undefined4 *)(**(code **)(*local_54 + 0x2c))();
              piVar9 = (int *)*puVar11;
              local_d8 = (int *)0x0;
              while (piVar9 != (int *)0x0) {
                iVar6 = *piVar9;
                piVar9 = (int *)piVar9[2];
                uStack_1c8 = CONCAT44(0x6ad51a,(int)uStack_1c8);
                puStack_1c0 = (uint *)param_2;
                cVar3 = (**(code **)(*(int *)(*(int *)(iVar6 + 0x20) + 0x18) + 0x94))();
                if (cVar3 != '\0') break;
                local_d8 = (int *)((int)local_d8 + 1);
              }
              puVar2 = local_98;
              if (local_c8 <= (int)local_d8) {
                local_c8 = (int)local_d8 - local_c8;
                local_dc = *(int **)(iVar8 + 0x9d8);
                local_98 = DAT_012588e8;
                local_d8 = (int *)(iVar8 + 0x9d8);
                local_54 = (int *)0x0;
                puStack_1c0 = (uint *)0x6adc03;
                (**(code **)(*param_2 + 0x44))();
                puStack_1c0 = (uint *)0x6adc0d;
                local_59 = FUN_0040b360();
                if (local_59 != '\0') {
                  ExceptionList = local_10;
                  return param_1;
                }
                puStack_1c0 = (uint *)0x6adc23;
                cVar3 = FUN_0043a860();
                do {
                  if (cVar3 == '\0') {
                    ExceptionList = local_10;
                    return param_1;
                  }
                  if (local_59 != '\0') {
                    ExceptionList = local_10;
                    return param_1;
                  }
                  iVar8 = *local_dc;
                  local_dc = local_dc + 1;
                  piVar9 = *(int **)(*(int *)(*(int *)(local_98 + 0xacc) + iVar8 * 4) + 0xd8);
                  local_59 = '\0';
                  while (piVar9 != (int *)0x0) {
                    piVar12 = (int *)*piVar9;
                    piVar9 = (int *)piVar9[2];
                    puStack_1c0 = (uint *)0x6adc76;
                    cVar3 = (**(code **)(*piVar12 + 0x34))();
                    if (((cVar3 != '\0') &&
                        ((local_31 == '\0' || (*(char *)(piVar12[0x22] + 0x3a) != '\0')))) &&
                       ((local_11 == '\0' || (*(char *)(piVar12[0x22] + 0x39) != '\0')))) {
                      if ((int *)local_c8 == local_54) {
                        puStack_1c0 = (uint *)0x6adcbf;
                        (**(code **)(*param_2 + 0x44))();
                        puStack_1c0 = (uint *)0x6adcc9;
                        cVar3 = FUN_0040b360();
                        if (cVar3 == '\0') {
                          if (piVar12[0x15] != 0) {
                            puStack_1c0 = (uint *)0x6add63;
                            FUN_00989030();
                            puStack_1c0 = (uint *)local_50;
                            uStack_1c8 = CONCAT44(piVar12[0x15],0x6add70);
                            FUN_008606c0();
                            local_8 = 0xc2;
                            puStack_1c0 = (uint *)0x6add7c;
                            FUN_00989020();
                            local_8 = local_8 & 0xffffff00;
                            puStack_1c0 = (uint *)0x6add88;
                            FUN_00408ad0();
                            local_59 = '\x01';
                          }
                        }
                        else {
                          piVar9 = (int *)piVar12[0x22];
                          puStack_1c0 = (uint *)local_130;
                          uStack_1c8 = CONCAT44(0x6adce8,(int)uStack_1c8);
                          uVar7 = (**(code **)(*(int *)piVar12[0x12] + 0x1c))();
                          local_8 = 0xbf;
                          uStack_1c8 = CONCAT44(local_94,0x6add01);
                          uVar13 = (**(code **)(*piVar9 + 0x18))();
                          uStack_1c8 = CONCAT44(&DAT_00df8310,uVar13);
                          uStack_1d0 = CONCAT44(&DAT_00dfbf14,local_50);
                          local_8._0_1_ = 0xc0;
                          uStack_1d8 = CONCAT44(0x6add1f,(uint *)uStack_1d8);
                          puStack_1c0 = (uint *)uVar7;
                          FUN_0043ec10();
                          local_8._0_1_ = 0xc1;
                          puStack_1c0 = (uint *)0x6add2d;
                          FUN_00989020();
                          puStack_1c0 = (uint *)0x6add35;
                          FUN_00408ad0();
                          puStack_1c0 = (uint *)0x6add40;
                          FUN_00408ad0();
                          local_8 = (uint)local_8._1_3_ << 8;
                          puStack_1c0 = (uint *)0x6add4f;
                          FUN_00408ad0();
                        }
                        break;
                      }
                      local_54 = (int *)((int)local_54 + 1);
                    }
                  }
                  puStack_1c0 = (uint *)0x6add97;
                  cVar3 = FUN_0043a860();
                } while( true );
              }
              if (local_11 == '\0') {
                puStack_1c0 = *(uint **)(local_d0 + 0x26c);
              }
              else {
                puStack_1c0 = *(uint **)(local_d0 + 0x268);
              }
              uStack_1c8 = CONCAT44(0x6ad573,(int)uStack_1c8);
              FUN_006b53a0();
              if (((local_11 != '\0') && (*(char *)(local_d0 + 0x270) == '\0')) ||
                 ((local_31 != '\0' && (*(char *)(local_d0 + 0x271) == '\0')))) {
                puStack_1c0 = (uint *)0x6ad5a9;
                FUN_006b53c0();
              }
              piVar12 = param_2;
              piVar9 = *(int **)(puVar2 + (int)local_d8 * 4);
              puStack_1c0 = (uint *)0x6ad5be;
              (**(code **)(*param_2 + 0x44))();
              puStack_1c0 = (uint *)0x6ad5c8;
              cVar3 = FUN_0040b360();
              if (cVar3 != '\0') {
                if ((int *)piVar9[0x36] == (int *)0x0) {
                  ExceptionList = local_10;
                  return param_1;
                }
                puStack_1c0 = (uint *)0x6ad5e1;
                cVar3 = (**(code **)(*(int *)piVar9[0x36] + 0x20))();
                if (cVar3 == '\0') {
                  ExceptionList = local_10;
                  return param_1;
                }
                puStack_1c0 = local_1ac;
                uStack_1c8 = CONCAT44(0x6ad5fd,(int)uStack_1c8);
                (**(code **)(*(int *)piVar9[0x36] + 0x24))();
                local_8 = 0xad;
LAB_006aac4f:
                uStack_1c8 = CONCAT44(0x6aac58,(int)uStack_1c8);
                FUN_004115d0();
                uStack_1c8 = CONCAT44(0x6aac63,(int)uStack_1c8);
                FUN_00459820();
                ExceptionList = local_10;
                return param_1;
              }
              puStack_1c0 = (uint *)0x6ad612;
              (**(code **)(*piVar12 + 0x44))();
              uStack_1d0._0_4_ = 0x6ad61c;
              cVar3 = FUN_0040b360();
              if (cVar3 != '\0') {
                uStack_1d0 = CONCAT44(uStack_1d0._4_4_,&param_2);
                uStack_1d8 = CONCAT44(0x6ad631,(uint *)uStack_1d8);
                piVar9 = (int *)(**(code **)(*piVar9 + 0x58))();
                iVar8 = *piVar9;
                uStack_1d8 = 0x47c35040006ad646;
                FUN_00401000();
                uStack_1d8 = CONCAT44(0x6ad64e,(uint *)uStack_1d8);
                iVar6 = FUN_00b31c00();
                uStack_1d8 = 1000;
                uVar4 = __alldiv((longlong)iVar6 * (longlong)iVar8);
                param_2 = (int *)&uStack_1d8;
                uStack_1d8 = (ulonglong)uVar4;
                uVar7 = FUN_00988a50();
                uStack_1d8 = CONCAT44(uVar7,local_50);
                local_8 = 0xae;
                FUN_0042c180();
                uStack_1d8 = 0xffffffff00000000;
                local_8 = CONCAT31(local_8._1_3_,0xaf);
                FUN_00408ed0();
                uStack_1d8 = CONCAT44(0x6ad6aa,(uint *)uStack_1d8);
                FUN_00408ad0();
                goto LAB_006ae482;
              }
              uStack_1d0._0_4_ = 0x6ad6be;
              (**(code **)(*piVar12 + 0x44))();
              uStack_1d0._0_4_ = 0x6ad6c8;
              cVar3 = FUN_0040b360();
              uVar7 = extraout_ECX_05;
              if (cVar3 == '\0') {
                uStack_1d0._0_4_ = 0x6ad6d9;
                (**(code **)(*piVar12 + 0x44))();
                uStack_1d0._0_4_ = 0x6ad6e3;
                cVar3 = FUN_0040b360();
                uVar7 = extraout_ECX_06;
                if (cVar3 == '\0') {
                  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x6ad6f4);
                  (**(code **)(*piVar12 + 0x44))();
                  uStack_1d8 = CONCAT44(0x6ad6fe,(uint *)uStack_1d8);
                  cVar3 = FUN_0040b360();
                  if (cVar3 != '\0') {
                    uStack_1d8 = CONCAT44(0x6ad709,(uint *)uStack_1d8);
                    iVar8 = FUN_005cb1b0();
                    param_2 = *(int **)(iVar8 + 8);
                    uStack_1d8 = CONCAT44(&param_2,local_50);
                    if (local_11 == '\0') {
                      FUN_0054a540();
                      uStack_1d8 = 0xffffffff00000000;
                      local_8 = 0xb7;
                      FUN_00408ed0();
                    }
                    else {
                      FUN_0054a540();
                      uStack_1d8 = 0xffffffff00000000;
                      local_8 = 0xb6;
                      FUN_00408ed0();
                    }
                    goto LAB_006ae482;
                  }
                  uStack_1d8 = CONCAT44(0x6ad775,(uint *)uStack_1d8);
                  (**(code **)(*piVar12 + 0x44))();
                  uStack_1d8 = CONCAT44(0x6ad77f,(uint *)uStack_1d8);
                  cVar3 = FUN_0040b360();
                  if ((cVar3 != '\0') && (0 < piVar9[0x3b])) {
                    if (*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar9[0x39] * 4) != 0) {
                      if (piVar9[0x3b] < 1) {
                        piVar9 = (int *)0x0;
                      }
                      else {
                        piVar9 = *(int **)(*(int *)(DAT_0125870c + 0x2238) +
                                          *(int *)piVar9[0x39] * 4);
                      }
                      uStack_1d8._4_4_ = (int *)local_130;
                      uStack_1d8._0_4_ = (uint *)&param_2;
                      uVar7 = FUN_005d24a0();
                      uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar7);
                      uVar7 = FUN_0043acd0();
                      local_8 = 0xb8;
                      uStack_1d8 = CONCAT44(local_94,0x6ad7f4);
                      (**(code **)(*piVar9 + 0x1c))();
                      uStack_1d8 = CONCAT44(uVar7,&DAT_00dfa9f8);
                      local_8._0_1_ = 0xb9;
                      FUN_0043ec10();
                      uStack_1d8 = 0xffffffff00000000;
                      local_8 = CONCAT31(local_8._1_3_,0xba);
                      FUN_00408ed0();
                      goto LAB_006aca45;
                    }
                  }
                  uStack_1d8 = CONCAT44(0x6ad833,(uint *)uStack_1d8);
                  (**(code **)(*piVar12 + 0x44))();
                  uStack_1d8 = CONCAT44(0x6ad83d,(uint *)uStack_1d8);
                  cVar3 = FUN_0040b360();
                  if (cVar3 == '\0') {
                    uStack_1d8 = CONCAT44(0x6ad8a7,(uint *)uStack_1d8);
                    (**(code **)(*piVar12 + 0x44))();
                    uStack_1d8 = CONCAT44(0x6ad8b1,(uint *)uStack_1d8);
                    cVar3 = FUN_0040b360();
                    if (cVar3 != '\0') {
                      ExceptionList = local_10;
                      return param_1;
                    }
                    uStack_1d8 = CONCAT44(0x6ad8c2,(uint *)uStack_1d8);
                    (**(code **)(*piVar12 + 0x44))();
                    uStack_1d8 = CONCAT44(0x6ad8cc,(uint *)uStack_1d8);
                    cVar3 = FUN_0040b360();
                    if (cVar3 == '\0') {
                      ExceptionList = local_10;
                      return param_1;
                    }
                    uStack_1d8 = CONCAT44(local_94,0x6ad8ea);
                    uVar7 = (**(code **)(*(int *)piVar9[0x37] + 0x1c))();
                    uStack_1d8 = CONCAT44(uVar7,local_50);
                    local_8 = 0xbd;
                    FUN_0042c180();
                    uStack_1d8 = 0xffffffff00000000;
                    local_8 = CONCAT31(local_8._1_3_,0xbe);
                    FUN_00408ed0();
                    uStack_1d8 = CONCAT44(0x6ad920,(uint *)uStack_1d8);
                    FUN_00408ad0();
                  }
                  else {
                    param_2 = (int *)&uStack_1d8;
                    uStack_1d8 = (ulonglong)(uint)piVar9[0x61];
                    uVar7 = FUN_00988a50();
                    uStack_1d8 = CONCAT44(uVar7,local_50);
                    local_8 = 0xbb;
                    FUN_0042c180();
                    uStack_1d8 = 0xffffffff00000000;
                    local_8 = CONCAT31(local_8._1_3_,0xbc);
                    FUN_00408ed0();
                    uStack_1d8 = CONCAT44(0x6ad893,(uint *)uStack_1d8);
                    FUN_00408ad0();
                  }
                  goto LAB_006ae482;
                }
              }
              if (local_11 == '\0') {
                uStack_1d0 = CONCAT44(uStack_1d0._4_4_,&local_98);
                uStack_1d8 = CONCAT44(0x6adabf,(uint *)uStack_1d8);
                param_2 = (int *)(**(code **)(*piVar9 + 0x50))();
                uStack_1d8 = CONCAT44(piVar9,0x6adacb);
                piVar12 = (int *)FUN_005cd690();
                piVar9 = (int *)*param_2;
                if (piVar9 == (int *)0x0) {
                  iVar8 = -1;
                }
                else {
                  iVar8 = *piVar12;
                  if ((iVar8 < -0x189373) || (0x20c49a < iVar8)) {
                    uStack_1d8 = 1000;
                    local_c8 = (int)piVar9 >> 0x1f;
                    local_cc = piVar9;
                    uVar17 = __allmul(iVar8,iVar8 >> 0x1f);
                    uStack_1d8 = CONCAT44(local_c8,local_cc);
                    iVar8 = __alldiv(uVar17);
                    local_c8 = iVar8 >> 0x1f;
                    piVar9 = extraout_ECX_08;
                  }
                  else {
                    iVar8 = (iVar8 * 1000) / (int)piVar9;
                  }
                }
                param_2 = (int *)&uStack_1d8;
                uStack_1d8._4_4_ = (int *)0x0;
                uStack_1d8._0_4_ = (uint *)piVar9;
                FUN_00401000();
                iVar6 = FUN_00b31c00();
                uVar7 = __alldiv((longlong)iVar6 * (longlong)iVar8,1000,0);
                uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar7);
                uVar7 = FUN_00988a50();
                uStack_1d8 = CONCAT44(uVar7,local_50);
                local_8 = 0xb4;
                FUN_0042c180();
                uStack_1d8 = 0xffffffff00000000;
                local_8 = CONCAT31(local_8._1_3_,0xb5);
                FUN_00408ed0();
                uStack_1d8 = CONCAT44(0x6adbb1,(uint *)uStack_1d8);
                FUN_00408ad0();
              }
              else {
                param_2 = (int *)&uStack_1d0;
                uStack_1d8._4_4_ = (int *)&uStack_1d0;
                uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar7);
                uStack_1d8._0_4_ = (uint *)0x6ad945;
                (**(code **)(*piVar9 + 0x50))();
                uStack_1d8._0_4_ = local_30;
                local_98 = (undefined1 *)FUN_005c0800();
                local_8 = 0xb0;
                param_2 = (int *)((int)&uStack_1d8 + 4);
                uStack_1d8._0_4_ = (uint *)piVar9;
                FUN_005cd690();
                uStack_1d8 = CONCAT44(uStack_1d8._4_4_,local_130);
                local_54 = (int *)FUN_005c0800();
                local_8 = CONCAT31(local_8._1_3_,0xb1);
                uStack_1d8 = CONCAT44(&local_c8,0x6ad98f);
                param_2 = (int *)(**(code **)(*piVar9 + 0x50))();
                uStack_1d8 = CONCAT44(piVar9,0x6ad99e);
                piVar9 = (int *)FUN_005cd690();
                iVar8 = *param_2;
                if (iVar8 == 0) {
                  iVar6 = -1;
                }
                else {
                  iVar6 = *piVar9;
                  if ((iVar6 < -0x189373) || (0x20c49a < iVar6)) {
                    uStack_1d8 = 1000;
                    local_d0 = iVar8 >> 0x1f;
                    local_d4 = iVar8;
                    uVar17 = __allmul(iVar6,iVar6 >> 0x1f);
                    uStack_1d8 = CONCAT44(local_d0,local_d4);
                    iVar6 = __alldiv(uVar17);
                    local_d0 = iVar6 >> 0x1f;
                    iVar8 = extraout_ECX_07;
                  }
                  else {
                    iVar6 = (iVar6 * 1000) / iVar8;
                  }
                }
                param_2 = (int *)&uStack_1d8;
                uStack_1d8._4_4_ = (int *)0x0;
                uStack_1d8._0_4_ = (uint *)iVar8;
                FUN_00401000();
                iVar8 = FUN_00b31c00();
                uVar7 = __alldiv((longlong)iVar8 * (longlong)iVar6,1000,0);
                uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar7);
                FUN_00988a50();
                local_8._0_1_ = 0xb2;
                uStack_1d8 = CONCAT44(local_98,&DAT_00dfad2c);
                FUN_0043e9a0();
                uStack_1d8 = 0xffffffff00000000;
                local_8 = CONCAT31(local_8._1_3_,0xb3);
                FUN_00408ed0();
                uStack_1d8 = CONCAT44(0x6ada96,(uint *)uStack_1d8);
                FUN_00408ad0();
                uStack_1d8 = CONCAT44(0x6adaa1,(uint *)uStack_1d8);
                FUN_00408ad0();
                uStack_1d8 = CONCAT44(0x6adaac,(uint *)uStack_1d8);
                FUN_00408ad0();
              }
              goto LAB_006ae482;
            }
          }
          puVar11 = *(undefined4 **)(iVar8 + 0x7b4);
          param_2 = (int *)0x0;
          local_54 = (int *)0x0;
          while (puVar11 != (undefined4 *)0x0) {
            piVar12 = (int *)*puVar11;
            puVar11 = (undefined4 *)puVar11[2];
            uStack_1d8 = CONCAT44(0x6ae2fd,(uint *)uStack_1d8);
            cVar3 = (**(code **)(*piVar12 + 0x38))();
            if (cVar3 == '\0') {
              local_54 = (int *)((int)local_54 + 1);
            }
            else {
              param_2 = (int *)((int)param_2 + 1);
            }
          }
          uStack_1d8 = CONCAT44(0x6ae316,(uint *)uStack_1d8);
          (**(code **)(*piVar9 + 0x44))();
          uStack_1d8 = CONCAT44(0x6ae320,(uint *)uStack_1d8);
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            uStack_1d8 = CONCAT44(local_94,0x6ae383);
            uVar7 = FUN_009888f0();
            uStack_1d8 = CONCAT44(uVar7,local_50);
            local_8 = 0xa9;
            FUN_0042c180();
            uStack_1d8 = 0xffffffff00000000;
            local_8 = CONCAT31(local_8._1_3_,0xaa);
            FUN_00408ed0();
            uStack_1d8 = CONCAT44(0x6ae3b9,(uint *)uStack_1d8);
            FUN_00408ad0();
          }
          else {
            uStack_1d8 = CONCAT44(local_94,0x6ae333);
            uVar7 = FUN_009888f0();
            uStack_1d8 = CONCAT44(uVar7,local_50);
            local_8 = 0xa7;
            FUN_0042c180();
            uStack_1d8 = 0xffffffff00000000;
            local_8 = CONCAT31(local_8._1_3_,0xa8);
            FUN_00408ed0();
            uStack_1d8 = CONCAT44(0x6ae369,(uint *)uStack_1d8);
            FUN_00408ad0();
          }
        }
        else {
          uStack_1d8 = CONCAT44(0x6ac5ee,(uint *)uStack_1d8);
          FUN_009885d0();
          uStack_1d8 = CONCAT44(local_30,local_bc);
          local_8 = 0x89;
          param_2 = (int *)FUN_009a8ee0();
          local_8._0_1_ = 0x8a;
          uStack_1d8 = CONCAT44(0x6ac610,(uint *)uStack_1d8);
          iVar6 = FUN_00475500();
          uStack_1d8 = *(undefined8 *)(iVar6 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
          local_8._0_1_ = 0x8b;
          uStack_1d8 = CONCAT44(0x6ac63e,(uint *)uStack_1d8);
          FUN_00989020();
          uStack_1d8 = CONCAT44(0x6ac646,(uint *)uStack_1d8);
          FUN_00408ad0();
          local_8._0_1_ = 0x89;
          uStack_1d8 = CONCAT44(local_bc,0x6ac656);
          FUN_009a9740();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_1d8 = CONCAT44(0x6ac662,(uint *)uStack_1d8);
          FUN_00408ad0();
          local_58 = *(undefined4 *)(iVar8 + 0x14d8);
          local_54 = *(int **)(iVar8 + 0x14dc);
          param_2 = (int *)&uStack_1d8;
          local_9c = 0x320000;
          local_98 = (undefined1 *)0x0;
          FUN_0043a6a0();
          uVar7 = FUN_00988bb0(local_130,2);
          uStack_1d8 = CONCAT44(uVar7,local_94);
          local_8 = 0x8c;
          FUN_0042c180();
          local_8._0_1_ = 0x8d;
          FUN_00988fa0();
          local_8._0_1_ = 0x8e;
          uStack_1d8 = CONCAT44(0x6ac6ea,(uint *)uStack_1d8);
          FUN_00989020();
          uStack_1d8 = CONCAT44(0x6ac6f2,(uint *)uStack_1d8);
          FUN_00408ad0();
          uStack_1d8 = CONCAT44(0x6ac6fd,(uint *)uStack_1d8);
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_1d8 = CONCAT44(0x6ac70c,(uint *)uStack_1d8);
          FUN_00408ad0();
          if (*(int *)(*(int *)(iVar8 + 0xbcc) + 0x4c) != 0) {
            param_2 = (int *)((int)&uStack_1d8 + 4);
            uStack_1d8 = (ulonglong)extraout_ECX_02 << 0x20;
            __allmul();
            uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
            uVar7 = __alldiv();
            uStack_1d8 = CONCAT44(uVar7,local_130);
            uVar7 = FUN_00988970();
            uStack_1d8 = CONCAT44(uVar7,local_94);
            local_8 = 0x8f;
            FUN_0042c180();
            local_8._0_1_ = 0x90;
            FUN_00988fa0();
            local_8._0_1_ = 0x91;
            uStack_1d8 = CONCAT44(0x6ac792,(uint *)uStack_1d8);
            FUN_00989020();
            uStack_1d8 = CONCAT44(0x6ac79a,(uint *)uStack_1d8);
            FUN_00408ad0();
            uStack_1d8 = CONCAT44(0x6ac7a5,(uint *)uStack_1d8);
            FUN_00408ad0();
            local_8 = (uint)local_8._1_3_ << 8;
            uStack_1d8 = CONCAT44(0x6ac7b4,(uint *)uStack_1d8);
            FUN_00408ad0();
          }
          uStack_1d8 = CONCAT44(0x6ac7c1,(uint *)uStack_1d8);
          FUN_009885d0();
          param_2 = (int *)&uStack_1d8;
          local_8 = 0x92;
          uStack_1d8 = CONCAT44(local_30,1000);
          uVar7 = (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))(local_94,99);
          local_8._0_1_ = 0x93;
          uStack_1d8 = CONCAT44(uVar7,0x6ac7ff);
          FUN_00988fa0();
          local_8._0_1_ = 0x94;
          uStack_1d8 = CONCAT44(0x6ac80d,(uint *)uStack_1d8);
          FUN_00989020();
          uStack_1d8 = CONCAT44(0x6ac815,(uint *)uStack_1d8);
          FUN_00408ad0();
          uStack_1d8 = CONCAT44(0x6ac820,(uint *)uStack_1d8);
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_1d8 = CONCAT44(0x6ac82c,(uint *)uStack_1d8);
          FUN_00408ad0();
          if (*(int *)(iVar8 + 0x14e0) == 0) {
            uStack_1d8 = CONCAT44(0x6ac846,(uint *)uStack_1d8);
            FUN_009885d0();
            uStack_1d8 = CONCAT44(local_30,local_bc);
            local_8 = 0x95;
            param_2 = (int *)FUN_009a8ee0();
            local_8._0_1_ = 0x96;
            uStack_1d8 = CONCAT44(0x6ac868,(uint *)uStack_1d8);
            iVar8 = FUN_00475500();
            uStack_1d8 = *(undefined8 *)(iVar8 + 0x74);
            uVar7 = FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
            local_8._0_1_ = 0x97;
            uStack_1d8 = CONCAT44(uVar7,0x6ac8a0);
            FUN_00988fa0();
            local_8._0_1_ = 0x98;
            uStack_1d8 = CONCAT44(0x6ac8ae,(uint *)uStack_1d8);
            FUN_00989020();
            uStack_1d8 = CONCAT44(0x6ac8b6,(uint *)uStack_1d8);
            FUN_00408ad0();
            uStack_1d8 = CONCAT44(0x6ac8c1,(uint *)uStack_1d8);
            FUN_00408ad0();
            local_8._0_1_ = 0x95;
            uStack_1d8 = CONCAT44(local_bc,0x6ac8d1);
            FUN_009a9740();
            local_8 = (uint)local_8._1_3_ << 8;
            uStack_1d8 = CONCAT44(0x6ac8dd,(uint *)uStack_1d8);
            FUN_00408ad0();
          }
          uStack_1d8 = CONCAT44(local_94,0x6ac8eb);
          uVar7 = FUN_00514960();
          local_8 = 0x99;
          uStack_1d8 = CONCAT44(uVar7,0x6ac900);
          FUN_00988fa0();
          local_8._0_1_ = 0x9a;
          uStack_1d8 = CONCAT44(0x6ac90e,(uint *)uStack_1d8);
          FUN_00989020();
          uStack_1d8 = CONCAT44(0x6ac916,(uint *)uStack_1d8);
          FUN_00408ad0();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_1d8 = CONCAT44(0x6ac925,(uint *)uStack_1d8);
          FUN_00408ad0();
          uStack_1d8 = CONCAT44(0x6ac932,(uint *)uStack_1d8);
          FUN_009885d0();
          uStack_1d8 = CONCAT44(local_30,local_bc);
          local_8 = 0x9b;
          FUN_009a8ee0();
          local_8._0_1_ = 0x9c;
          uStack_1d8 = CONCAT44(0x6ac953,(uint *)uStack_1d8);
          iVar8 = FUN_00475500();
          uStack_1d8 = *(undefined8 *)(iVar8 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c));
          local_8._0_1_ = 0x9d;
          uStack_1d8 = CONCAT44(0x6ac981,(uint *)uStack_1d8);
          FUN_00989020();
          uStack_1d8 = CONCAT44(0x6ac989,(uint *)uStack_1d8);
          FUN_00408ad0();
          local_8._0_1_ = 0x9b;
          uStack_1d8 = CONCAT44(local_bc,0x6ac999);
          FUN_009a9740();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_1d8 = CONCAT44(0x6ac9a5,(uint *)uStack_1d8);
          FUN_00408ad0();
          if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) == 0) {
            ExceptionList = local_10;
            return param_1;
          }
          uStack_1d8 = CONCAT44(0x6ac9c7,(uint *)uStack_1d8);
          cVar3 = FUN_0042b220();
          if (cVar3 == '\0') {
            ExceptionList = local_10;
            return param_1;
          }
          uStack_1d8 = CONCAT44(0x6ac9d9,(uint *)uStack_1d8);
          cVar3 = FUN_0042bb00();
          if (cVar3 != '\0') {
            ExceptionList = local_10;
            return param_1;
          }
          param_2 = (int *)&uStack_1d8;
          uStack_1d8 = CONCAT44(1,*(undefined4 *)(*(int *)(DAT_012586dc + 0x30) + 0x4dc));
          uVar7 = FUN_00988a50();
          uStack_1d8 = CONCAT44(uVar7,local_94);
          local_8 = 0x9e;
          FUN_0042c180();
          local_8._0_1_ = 0x9f;
          FUN_00988fa0();
          local_8 = CONCAT31(local_8._1_3_,0xa0);
          uStack_1d8 = CONCAT44(0x6aca45,(uint *)uStack_1d8);
          FUN_00989020();
LAB_006aca45:
          uStack_1d8 = CONCAT44(0x6aca4d,(uint *)uStack_1d8);
          FUN_00408ad0();
          uStack_1d8 = CONCAT44(0x6aca58,(uint *)uStack_1d8);
          FUN_00408ad0();
        }
        goto LAB_006ae482;
      }
    }
    if (*(char *)(iVar8 + 0x120) == '\0') {
      uStack_1d8 = CONCAT44(local_50,0x6ae46e);
      FUN_00475d50();
      local_8 = 0x88;
      uStack_1d8 = CONCAT44(0x6ae47f,(uint *)uStack_1d8);
      FUN_00989020();
    }
    else {
      param_2 = (int *)&uStack_1d8;
      uStack_1d8._4_4_ = (int *)0x2;
      piVar9 = (int *)FUN_005152f0(iVar8,&local_98);
      iVar8 = *piVar9;
      FUN_00401000();
      iVar6 = FUN_00b31c00();
      uVar7 = __alldiv((longlong)iVar6 * (longlong)iVar8,1000,0);
      uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar7);
      uVar7 = FUN_00988a50();
      uStack_1d8 = CONCAT44(uVar7,local_50);
      local_8 = 0x86;
      FUN_0042c180();
      local_8 = CONCAT31(local_8._1_3_,0x87);
      uStack_1d8 = CONCAT44(0x6ae450,(uint *)uStack_1d8);
      FUN_00989020();
      uStack_1d8 = CONCAT44(0x6ae458,(uint *)uStack_1d8);
      FUN_00408ad0();
    }
    goto LAB_006ae482;
  }
  param_2 = *(int **)(*(int *)(iVar8 + 0xbcc) + 0x50);
  if ((int)param_2 < 0) {
    puStack_1c0 = (uint *)0x6ac39b;
    FUN_009885d0();
    local_8 = 0x78;
    puStack_1c0 = (uint *)0x6ac3af;
    FUN_009885d0();
    puStack_1c0 = (uint *)0x2;
    local_8._0_1_ = 0x79;
    uStack_1c8 = (ulonglong)extraout_ECX_00 << 0x20;
    uStack_1d0 = CONCAT44(100000,-(int)param_2 >> 0x1f);
    uStack_1d8 = CONCAT44(-(int)param_2,0x6ac3cf);
    param_2 = (int *)((int)&uStack_1c8 + 4);
    uVar17 = __allmul();
    uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
    uStack_1d0 = CONCAT44(1000,(int)((ulonglong)uVar17 >> 0x20));
    uStack_1d8 = CONCAT44((int)uVar17,0x6ac3dd);
    uVar7 = __alldiv();
    uStack_1c8 = CONCAT44(uVar7,local_f8);
    uStack_1d0 = CONCAT44(0x6ac3f1,(undefined4)uStack_1d0);
    FUN_00988a50();
    puStack_1c0 = local_30;
    local_8._0_1_ = 0x7a;
    uStack_1c8 = CONCAT44(0x6ac406,(int)uStack_1c8);
    puStack_1c0 = (uint *)FUN_00988f20();
    local_8._0_1_ = 0x7b;
    uStack_1c8 = CONCAT44(local_94,0x6ac421);
    FUN_0042c180();
    puStack_1c0 = local_78;
    local_8._0_1_ = 0x7c;
    uStack_1c8 = CONCAT44(0x6ac436,(int)uStack_1c8);
    uVar4 = FUN_00988f20();
    local_8._0_1_ = 0x7d;
LAB_006ac4f2:
    puStack_1c0 = (uint *)0xffffffff;
    uStack_1c8 = (ulonglong)uVar4;
    uStack_1d0 = CONCAT44(0x6ac4fe,(undefined4)uStack_1d0);
    FUN_00408ed0();
    puStack_1c0 = (uint *)0x6ac506;
    FUN_00408ad0();
    puStack_1c0 = (uint *)0x6ac511;
    FUN_00408ad0();
    puStack_1c0 = (uint *)0x6ac51c;
    FUN_00408ad0();
    puStack_1c0 = (uint *)0x6ac527;
    FUN_00408ad0();
    puStack_1c0 = (uint *)0x6ac52f;
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    puStack_1c0 = (uint *)0x6ac53b;
    FUN_00408ad0();
  }
  else if (0 < (int)param_2) {
    puStack_1c0 = (uint *)0x6ac452;
    FUN_009885d0();
    local_8 = 0x7e;
    puStack_1c0 = (uint *)0x6ac466;
    FUN_009885d0();
    puStack_1c0 = (uint *)0x2;
    local_98 = (undefined1 *)((int)&uStack_1c8 + 4);
    local_8._0_1_ = 0x7f;
    uStack_1c8 = (ulonglong)extraout_ECX_01 << 0x20;
    uStack_1d0 = CONCAT44(100000,(int)param_2 >> 0x1f);
    uStack_1d8 = CONCAT44(param_2,0x6ac487);
    uVar17 = __allmul();
    uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
    uStack_1d0 = CONCAT44(1000,(int)((ulonglong)uVar17 >> 0x20));
    uStack_1d8 = CONCAT44((int)uVar17,0x6ac495);
    uVar7 = __alldiv();
    uStack_1c8 = CONCAT44(uVar7,local_f8);
    uStack_1d0 = CONCAT44(0x6ac4a9,(undefined4)uStack_1d0);
    FUN_00988a50();
    puStack_1c0 = local_30;
    local_8._0_1_ = 0x80;
    uStack_1c8 = CONCAT44(0x6ac4be,(int)uStack_1c8);
    puStack_1c0 = (uint *)FUN_00988f20();
    local_8._0_1_ = 0x81;
    uStack_1c8 = CONCAT44(local_94,0x6ac4d9);
    FUN_0042c180();
    puStack_1c0 = local_78;
    local_8._0_1_ = 0x82;
    uStack_1c8 = CONCAT44(0x6ac4ee,(int)uStack_1c8);
    uVar4 = FUN_00988f20();
    local_8._0_1_ = 0x83;
    goto LAB_006ac4f2;
  }
  puStack_1c0 = (uint *)0x6ac548;
  FUN_009885d0();
  param_2 = (int *)((int)&uStack_1c8 + 4);
  local_8 = 0x84;
  uStack_1c8 = 0x3e800000064;
  uStack_1d0 = CONCAT44(local_50,0x6ac571);
  puStack_1c0 = local_30;
  (**(code **)(*(int *)(iVar8 + 0xa48) + 0x24))();
  uStack_1d8 = 0xffffffff00000000;
  local_8 = CONCAT31(local_8._1_3_,0x85);
  FUN_00448aa0();
  uStack_1d8 = CONCAT44(0x6ac589,(uint *)uStack_1d8);
  FUN_00408ad0();
LAB_006ae482:
  uStack_1d8 = CONCAT44(0x6ae487,(uint *)uStack_1d8);
  FUN_00408ad0();
  ExceptionList = local_10;
  return param_1;
LAB_006ad4ae:
  if (local_31 != '\0') {
    puStack_1c0 = (uint *)0x6ad4c1;
    cVar3 = (**(code **)(*local_d8 + 0x3c))();
    if (cVar3 != '\0') {
LAB_006ad4c5:
      *(int **)(local_98 + local_c8 * 4) = local_d8;
      local_c8 = local_c8 + 1;
    }
  }
  goto joined_r0x006ad487;
}

