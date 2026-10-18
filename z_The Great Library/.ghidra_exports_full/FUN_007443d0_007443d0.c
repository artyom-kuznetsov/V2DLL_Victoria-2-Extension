// FUN_007443d0 @ 007443d0 body=[[007443d0, 0074454b] [0074454f, 007445bc] [007445c0, 00744630] [00744634, 007446ed] [007446f1, 0074475c] [00744760, 007447bc] [007447c0, 007449ce] [007449d2, 00744a5c] [00744a60, 0074770c] [00747710, 0074773b] [0074773f, 00747762] [00747766, 00747899] [007478a0, 0074845e]]


undefined4 FUN_007443d0(uint *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar12;
  uint *puVar13;
  char *pcVar14;
  byte *pbVar15;
  int iVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uStack_22c;
  uint *puStack_224;
  uint *puStack_220;
  uint *puStack_21c;
  uint *puStack_218;
  uint *puStack_214;
  uint *puStack_210;
  uint *puStack_20c;
  undefined1 local_1fc [92];
  undefined1 local_1a0 [4];
  int *local_19c;
  undefined1 local_194 [28];
  undefined1 local_178 [28];
  uint local_15c [4];
  undefined4 local_14c;
  uint local_148;
  undefined1 local_140 [16];
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_124;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined1 local_e8;
  int *local_e0;
  undefined1 local_dc [28];
  uint local_c0 [2];
  undefined1 local_b8 [8];
  undefined4 local_b0;
  uint local_ac;
  byte *local_a4;
  int local_a0;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined4 local_60;
  int *local_5c;
  char local_55;
  int *local_54;
  undefined1 local_50 [28];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  uVar8 = param_2;
  puStack_c = &LAB_00bb0d18;
  local_10 = ExceptionList;
  local_18 = 0;
  local_12c = 0xf;
  local_110 = 0xf;
  local_f4 = 0xf;
  local_130 = 0;
  local_140[0] = 0;
  local_114 = 0;
  local_124 = 0;
  local_f8 = 0;
  local_108 = 0;
  local_ec = 0;
  local_e8 = 1;
  local_8 = 0;
  if (*(char *)(*(int *)param_1[10] + 0x67) != '\0') {
    puStack_20c = (uint *)param_2;
    puStack_210 = (uint *)0x74445c;
    ExceptionList = &local_10;
    FUN_00749750();
    puStack_20c = (uint *)0x744467;
    FUN_00459820();
    ExceptionList = local_10;
    return uVar8;
  }
  iVar16 = *(int *)(param_1[9] + 0x58);
  ExceptionList = &local_10;
  if (DAT_01258728 == (int *)0x0) {
    puStack_20c = (uint *)0x14;
    puStack_210 = (uint *)0x744492;
    ExceptionList = &local_10;
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
  puVar13 = param_1;
  iVar16 = iVar16 * 0xb0 + *DAT_01258728;
  local_a0 = *(int *)(iVar16 + 8);
  local_54 = (int *)(param_1[9] + 0x1a8);
  local_70 = CONCAT44(DAT_012588e8[0x2d7],(undefined4)local_70);
  local_e0 = *(int **)(*(int *)(DAT_012587e4 + 4) + DAT_012588e8[0x2d8] * 4);
  puStack_20c = (uint *)0x14;
  puStack_210 = (uint *)0xe12c78;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  puStack_214 = (uint *)0x74451a;
  FUN_00409350();
  local_8._0_1_ = 1;
  puStack_20c = local_c0;
  puStack_210 = (uint *)0x74452f;
  piVar5 = (int *)(**(code **)(*(int *)puVar13[8] + 0x6c))();
  local_8._0_1_ = 0;
  local_5c = piVar5;
  if (0xf < local_ac) {
    puStack_210 = (uint *)local_c0[0];
                    /* WARNING: Subroutine does not return */
    puStack_214 = (uint *)&UNK_0074454c;
    FUN_00aae91b();
  }
  puStack_210 = (uint *)0x13;
  puStack_214 = (uint *)0xe12cf8;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  local_148 = 0xf;
  local_14c = 0;
  local_15c[0] = local_15c[0] & 0xffffff00;
  puStack_218 = (uint *)0x74458a;
  FUN_00409350();
  local_8._0_1_ = 2;
  puStack_210 = local_15c;
  puStack_214 = (uint *)0x7445a2;
  local_68[0] = (undefined1 *)(**(code **)(*(int *)param_1[8] + 0x6c))();
  local_8._0_1_ = 0;
  if (0xf < local_148) {
    puStack_214 = (uint *)local_15c[0];
                    /* WARNING: Subroutine does not return */
    puStack_218 = (uint *)&UNK_007445bd;
    FUN_00aae91b();
  }
  puStack_214 = (uint *)0x12;
  puStack_218 = (uint *)0xe12ca0;
  local_148 = 0xf;
  local_14c = 0;
  local_15c[0] = local_15c[0] & 0xffffff00;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  puStack_21c = (uint *)0x7445fb;
  FUN_00409350();
  local_8._0_1_ = 3;
  puStack_214 = local_9c;
  puStack_218 = (uint *)0x744613;
  local_19c = (int *)(**(code **)(*(int *)param_1[8] + 0x6c))();
  local_8._0_1_ = 0;
  if (0xf < local_88) {
    puStack_218 = (uint *)local_9c[0];
                    /* WARNING: Subroutine does not return */
    puStack_21c = (uint *)&UNK_00744631;
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  puStack_218 = (uint *)0x744654;
  local_a4 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(local_a4 + 0x14)) {
    local_a4 = *(byte **)local_a4;
  }
  puStack_218 = param_3;
  puStack_21c = (uint *)0x74467c;
  cVar4 = (**(code **)(piVar5[6] + 0x94))();
  puVar13 = param_3;
  if (cVar4 != '\0') {
    puStack_21c = (uint *)0xf;
    puStack_220 = (uint *)0xe12e4c;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    puStack_224 = (uint *)0x7446ac;
    FUN_00409350();
    local_8._0_1_ = 4;
    puStack_21c = local_9c;
    puStack_220 = (uint *)0x7446c3;
    piVar6 = (int *)(**(code **)(*piVar5 + 0x9c))();
    puVar13 = param_3;
    puStack_220 = param_3;
    puStack_224 = (uint *)0x7446d3;
    local_55 = (**(code **)(*piVar6 + 0x94))();
    local_8._0_1_ = 0;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_88) {
      puStack_224 = (uint *)local_9c[0];
      uStack_22c = CONCAT44(&UNK_007446ee,(uint *)uStack_22c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    if (local_55 == '\0') {
      puStack_224 = (uint *)0x12;
      uStack_22c = 0xe12e1800744990;
      local_8._0_1_ = uVar3;
      FUN_00409350();
      local_8._0_1_ = 0x13;
      puStack_224 = local_9c;
      uStack_22c = CONCAT44(0x7449a7,(uint *)uStack_22c);
      piVar5 = (int *)(**(code **)(*piVar5 + 0x9c))();
      uStack_22c = CONCAT44(puVar13,0x7449b4);
      local_55 = (**(code **)(*piVar5 + 0x94))();
      pbVar11 = local_a4;
      local_8._0_1_ = 0;
      if (0xf < local_88) {
        uStack_22c = CONCAT44(local_9c[0],&UNK_007449cf);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (local_55 == '\0') {
        uStack_22c = CONCAT44("controller_flag",local_a4);
        iVar16 = FUN_00aafe90();
        if (iVar16 != 0) {
          uStack_22c = CONCAT44(0x744c20,(uint *)uStack_22c);
          FUN_009885d0();
          uStack_22c = CONCAT44(local_34,local_78);
          local_8._0_1_ = 0x20;
          FUN_009a8ee0();
          local_8._0_1_ = 0x21;
          uStack_22c = CONCAT44(0x744c3b,(uint *)uStack_22c);
          iVar16 = FUN_00475500();
          uStack_22c = *(undefined8 *)(iVar16 + 0x74);
          FUN_009a9880();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0x22;
          FUN_00408ed0();
          uStack_22c = CONCAT44(0x744c7a,(uint *)uStack_22c);
          FUN_00408ad0();
          local_8._0_1_ = 0x20;
          uStack_22c = CONCAT44(local_78,0x744c87);
          FUN_009a9740();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x744c92,(uint *)uStack_22c);
          FUN_00408ad0();
          uStack_22c = CONCAT44(0x744c9f,(uint *)uStack_22c);
          FUN_009885d0();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0x23;
          FUN_00448aa0();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x744cbc,(uint *)uStack_22c);
          FUN_00408ad0();
          uVar1 = param_1[9];
          uStack_22c = CONCAT44(0x744ccf,(uint *)uStack_22c);
          cVar4 = FUN_00416e40();
          if (cVar4 == '\0') {
            uStack_22c = CONCAT44(0x744cdd,(uint *)uStack_22c);
            FUN_0055dd40();
            uStack_22c = 0xffffffff00000000;
            local_8._0_1_ = 0x24;
            FUN_00448aa0();
            local_8._0_1_ = 0;
            uStack_22c = CONCAT44(0x744cfb,(uint *)uStack_22c);
            FUN_00408ad0();
          }
          else {
            uStack_22c = CONCAT44(uVar1,0x744d0b);
            iVar16 = FUN_0068bb30();
            if (iVar16 == 0) {
              uStack_22c = CONCAT44(0x744d4b,(uint *)uStack_22c);
              FUN_0055dd40();
              uStack_22c = 0xffffffff00000000;
              local_8._0_1_ = 0x26;
              FUN_00448aa0();
              local_8._0_1_ = 0;
              uStack_22c = CONCAT44(0x744d69,(uint *)uStack_22c);
              FUN_00408ad0();
            }
            else {
              uStack_22c = CONCAT44(iVar16,0x744d18);
              FUN_0041a080();
              uStack_22c = 0xffffffff00000000;
              local_8._0_1_ = 0x25;
              FUN_00448aa0();
              local_8._0_1_ = 0;
              uStack_22c = CONCAT44(0x744d36,(uint *)uStack_22c);
              FUN_00408ad0();
            }
          }
          goto LAB_00748434;
        }
        uStack_22c = CONCAT44("flashpoint_indicator",pbVar11);
        iVar16 = FUN_00aafe90();
        puVar2 = param_1;
        if (iVar16 != 0) {
          puVar13 = param_1 + 9;
          if (*(int *)(*puVar13 + 0x188) != 0) {
            param_1 = (uint *)&uStack_22c;
            uStack_22c = CONCAT44(1,*(undefined4 *)(*(int *)(*puVar13 + 0x188) + 0x280));
            uVar8 = FUN_00988a50();
            uStack_22c = CONCAT44(uVar8,local_34);
            local_8._0_1_ = 0x27;
            FUN_0042c180();
            uStack_22c = 0xffffffff00000000;
            local_8._0_1_ = 0x28;
            FUN_00448aa0();
            uStack_22c = CONCAT44(0x744dee,(uint *)uStack_22c);
            FUN_00408ad0();
            local_8._0_1_ = 0;
            uStack_22c = CONCAT44(0x744dfc,(uint *)uStack_22c);
            FUN_00408ad0();
            uStack_22c = CONCAT44(local_34,*(undefined4 *)(puVar2[9] + 0x188));
            FUN_004d4210();
            uStack_22c = 0xffffffff00000000;
            local_8._0_1_ = 0x29;
            FUN_00448aa0();
            local_8._0_1_ = 0;
            uStack_22c = CONCAT44(0x744e2d,(uint *)uStack_22c);
            FUN_00408ad0();
          }
          goto LAB_00748434;
        }
        uStack_22c = CONCAT44("occupation_flag",pbVar11);
        iVar16 = FUN_00aafe90();
        if (iVar16 != 0) {
          uStack_22c = CONCAT44(0x744e56,(uint *)uStack_22c);
          (**(code **)(*puVar13 + 0x80))();
          uStack_22c = CONCAT44(0x744e67,(uint *)uStack_22c);
          FUN_004f97a0();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0x2a;
          FUN_00448aa0();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x744e85,(uint *)uStack_22c);
          FUN_00408ad0();
          goto LAB_00748434;
        }
        uStack_22c = CONCAT44("occupation_icon",pbVar11);
        iVar16 = FUN_00aafe90();
        if (iVar16 == 0) {
          uStack_22c = CONCAT44("occupation_progress",pbVar11);
          iVar16 = FUN_00aafe90();
          if (iVar16 == 0) {
            uStack_22c = CONCAT44("owner",pbVar11);
            iVar16 = FUN_00aafe90();
            if (iVar16 != 0) {
              uVar1 = *(uint *)(*(int *)(param_1[9] + 0x188) + 200);
              iVar16 = *(int *)(local_a0 + 0xf0);
              param_1 = *(uint **)(*(int *)(*(int *)(param_1[9] + 0x188) + 0x118) +
                                  *(int *)(iVar16 + 0x28) * 4);
              local_70 = 0;
              if (uVar1 != 0) {
                uStack_22c = CONCAT44(((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11,uVar1 << 0xf);
                local_70 = __alldiv();
              }
              uStack_22c = CONCAT44(local_15c,iVar16);
              uVar8 = FUN_0096d650();
              param_1 = (uint *)&uStack_22c;
              local_8._0_1_ = 0x31;
              local_60 = 0x320000;
              local_5c = (int *)0x0;
              FUN_0043a6a0();
              FUN_00988bb0();
              uStack_22c = CONCAT44(uVar8,&DAT_00df7e80);
              local_8._0_1_ = 0x32;
              FUN_0043ec10();
              uStack_22c = 0xffffffff00000000;
              local_8._0_1_ = 0x33;
              FUN_00408ed0();
              uStack_22c = CONCAT44(0x744fad,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x744fb8,(uint *)uStack_22c);
              FUN_00408ad0();
              local_8._0_1_ = 0;
              uStack_22c = CONCAT44(0x744fc6,(uint *)uStack_22c);
              FUN_00408ad0();
              goto LAB_00748434;
            }
            uStack_22c = CONCAT44("admin",pbVar11);
            iVar16 = FUN_00aafe90();
            puVar13 = param_1;
            if (iVar16 != 0) {
              local_60 = *(undefined4 *)(*(int *)(param_1[9] + 0x188) + 0xc0);
              local_5c = *(int **)(*(int *)(param_1[9] + 0x188) + 0xc4);
              param_1 = (uint *)&uStack_22c;
              local_70 = 0x320000;
              FUN_0043a6a0();
              uVar8 = FUN_00988bb0();
              uStack_22c = CONCAT44(uVar8,local_15c);
              local_8._0_1_ = 0x34;
              FUN_0042c180();
              uStack_22c = 0xffffffff00000000;
              local_8._0_1_ = 0x35;
              FUN_00408ed0();
              uStack_22c = CONCAT44(0x745066,(uint *)uStack_22c);
              FUN_00408ad0();
              local_8._0_1_ = 0;
              uStack_22c = CONCAT44(0x745074,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x745081,(uint *)uStack_22c);
              FUN_009885d0();
              local_8._0_1_ = 0x36;
              iVar16 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x10);
              param_1 = (uint *)&uStack_22c;
              uStack_22c._4_4_ = (uint *)0x1;
              uVar18 = __allmul(iVar16,iVar16 >> 0x1f);
              uVar8 = __alldiv(uVar18);
              uStack_22c = CONCAT44(uStack_22c._4_4_,uVar8);
              uVar8 = FUN_00988a50();
              uStack_22c = CONCAT44(uVar8,local_c0);
              local_8._0_1_ = 0x37;
              FUN_0042c180();
              local_8._0_1_ = 0x38;
              uStack_22c = CONCAT44(local_34,0x7450f2);
              FUN_00988f20();
              uStack_22c = 0xffffffff00000000;
              local_8._0_1_ = 0x39;
              FUN_00448aa0();
              uStack_22c = CONCAT44(0x74510c,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x745117,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x74511f,(uint *)uStack_22c);
              FUN_00408ad0();
              local_8._0_1_ = 0;
              uStack_22c = CONCAT44(0x74512a,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x74513a,(uint *)uStack_22c);
              FUN_009885d0();
              local_8._0_1_ = 0x3a;
              local_70 = CONCAT44(*(undefined4 *)(puVar13[9] + 0x128),0x320000);
              uStack_22c._0_4_ = *(uint **)(DAT_012587e4 + 4);
              param_3 = *(uint **)(*(int *)(*(int *)((int)(uint *)uStack_22c +
                                                    *(int *)(puVar13[9] + 300) * 4) + 0xbcc) + 0x60)
              ;
              param_1 = (uint *)(float)((float10)0x320000 * (float10)3.0517578125e-05);
              local_68[0] = (undefined1 *)&uStack_22c;
              uStack_22c._4_4_ = (uint *)0x1;
              FUN_00401000();
              iVar16 = FUN_00b31c00();
              uVar8 = __alldiv((longlong)(int)param_3 * (longlong)iVar16);
              uStack_22c = CONCAT44(uStack_22c._4_4_,uVar8);
              uVar8 = FUN_00988a50();
              uStack_22c = CONCAT44(uVar8,local_194);
              local_8._0_1_ = 0x3b;
              FUN_0042c180();
              local_8._0_1_ = 0x3c;
              uStack_22c = CONCAT44(local_9c,0x745215);
              FUN_00988f20();
              uStack_22c = 0xffffffff00000000;
              local_8._0_1_ = 0x3d;
              FUN_00448aa0();
              uStack_22c = CONCAT44(0x74522f,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x74523a,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x745245,(uint *)uStack_22c);
              FUN_00408ad0();
              local_8._0_1_ = 0;
              uStack_22c = CONCAT44(0x745253,(uint *)uStack_22c);
              FUN_00408ad0();
              local_70 = CONCAT44(*(undefined4 *)(puVar13[9] + 0x128),(undefined4)local_70);
              if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(puVar13[9] + 300) * 4) + 0xa60) + 0x380) != 0)
              {
                uStack_22c = CONCAT44(0x745295,(uint *)uStack_22c);
                FUN_009885d0();
                local_8._0_1_ = 0x3e;
                uStack_22c = CONCAT44(0x7452a6,(uint *)uStack_22c);
                FUN_009885d0();
                local_8._0_1_ = 0x3f;
                local_70 = CONCAT44(*(undefined4 *)(puVar13[9] + 0x128),(undefined4)local_70);
                param_1 = (uint *)&uStack_22c;
                uStack_22c = CONCAT44(local_34,1000);
                (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                              *(int *)(puVar13[9] + 300) * 4) + 0xa48) + 0x24))();
                local_8._0_1_ = 0x40;
                uStack_22c = CONCAT44(local_15c,0x745302);
                FUN_00988f20();
                uStack_22c = 0xffffffff00000000;
                local_8._0_1_ = 0x41;
                FUN_00448aa0();
                uStack_22c = CONCAT44(0x74531c,(uint *)uStack_22c);
                FUN_00408ad0();
                uStack_22c = CONCAT44(0x745324,(uint *)uStack_22c);
                FUN_00408ad0();
                uStack_22c = CONCAT44(0x74532c,(uint *)uStack_22c);
                FUN_00408ad0();
                local_8._0_1_ = 0;
                uStack_22c = CONCAT44(0x74533a,(uint *)uStack_22c);
                FUN_00408ad0();
              }
              local_70 = *(undefined8 *)(*(int *)(puVar13[9] + 0x188) + 0xb8);
              uStack_22c = CONCAT44(local_1a0,
                                    *(undefined4 *)
                                     (*(int *)(DAT_012587e4 + 4) + *(int *)(puVar13[9] + 300) * 4));
              FUN_00532ea0();
              uStack_22c = CONCAT44(0x745388,(uint *)uStack_22c);
              FUN_0043a6d0();
              uStack_22c = CONCAT44(0x745395,(uint *)uStack_22c);
              FUN_009885d0();
              param_1 = (uint *)&uStack_22c;
              local_8._0_1_ = 0x42;
              local_70 = 0x320000;
              FUN_0043a6a0();
              uVar8 = FUN_00988bb0();
              uStack_22c = CONCAT44(uVar8,local_dc);
              local_8._0_1_ = 0x43;
              FUN_0042c180();
              local_8._0_1_ = 0x44;
              uStack_22c = CONCAT44(local_34,0x7453f4);
              FUN_00988f20();
              uStack_22c = 0xffffffff00000000;
              local_8._0_1_ = 0x45;
              FUN_00448aa0();
              uStack_22c = CONCAT44(0x74540e,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x745419,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x745424,(uint *)uStack_22c);
              FUN_00408ad0();
              local_8 = (uint)local_8._1_3_ << 8;
              uStack_22c = CONCAT44(0x74542f,(uint *)uStack_22c);
              FUN_00408ad0();
              iVar16 = *(int *)(*(int *)(puVar13[9] + 0x188) + 0x48);
              local_68[0] = (undefined1 *)(*(int *)(puVar13[9] + 0x188) + 0x48);
              param_1 = (uint *)0x0;
              local_70 = CONCAT44(iVar16,(undefined4)local_70);
              uStack_22c = CONCAT44(0x74544f,(uint *)uStack_22c);
              cVar4 = FUN_0043a860();
              if (cVar4 != '\0') {
                param_3 = (uint *)DAT_012588e8[0x2b3];
                local_5c = (int *)(puVar13[9] + 0x128);
                do {
                  iVar16 = iVar16 + 4;
                  local_70 = CONCAT44(iVar16,(undefined4)local_70);
                  uStack_22c = CONCAT44(0x745486,(uint *)uStack_22c);
                  cVar4 = FUN_004b64e0();
                  if (cVar4 == '\0') {
                    param_1 = (uint *)((int)param_1 + 1);
                  }
                  uStack_22c = CONCAT44(0x745495,(uint *)uStack_22c);
                  cVar4 = FUN_0043a860();
                } while (cVar4 != '\0');
                if (param_1 != (uint *)0x0) {
                  uStack_22c = CONCAT44(0x7454af,(uint *)uStack_22c);
                  FUN_009885d0();
                  local_8._0_1_ = 0x46;
                  uStack_22c = 1000;
                  iVar16 = __alldiv();
                  param_1 = (uint *)&uStack_22c;
                  uStack_22c._4_4_ = (uint *)0x1;
                  uVar18 = __allmul(iVar16,iVar16 >> 0x1f);
                  uVar8 = __alldiv(uVar18);
                  uStack_22c = CONCAT44(uStack_22c._4_4_,uVar8);
                  uVar8 = FUN_00988a50();
                  uStack_22c = CONCAT44(uVar8,local_dc);
                  local_8._0_1_ = 0x47;
                  FUN_0042c180();
                  local_8._0_1_ = 0x48;
                  uStack_22c = CONCAT44(local_34,0x745537);
                  FUN_00988f20();
                  uStack_22c = 0xffffffff00000000;
                  local_8._0_1_ = 0x49;
                  FUN_00448aa0();
                  uStack_22c = CONCAT44(0x745551,(uint *)uStack_22c);
                  FUN_00408ad0();
                  uStack_22c = CONCAT44(0x74555c,(uint *)uStack_22c);
                  FUN_00408ad0();
                  uStack_22c = CONCAT44(0x745567,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8 = (uint)local_8._1_3_ << 8;
                  uStack_22c = CONCAT44(0x745572,(uint *)uStack_22c);
                  FUN_00408ad0();
                }
              }
              uStack_22c = CONCAT44(0x745582,(uint *)uStack_22c);
              FUN_009885d0();
              local_8._0_1_ = 0x4a;
              uStack_22c = CONCAT44(0x745593,(uint *)uStack_22c);
              FUN_009885d0();
              local_8._0_1_ = 0x4b;
              local_70 = CONCAT44(*(undefined4 *)(puVar13[9] + 0x128),(undefined4)local_70);
              param_1 = (uint *)&uStack_22c;
              uStack_22c = CONCAT44(local_34,1000);
              (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(puVar13[9] + 300) * 4) + 0xa48) + 0x24))();
              local_8._0_1_ = 0x4c;
              uStack_22c = CONCAT44(local_9c,0x7455ee);
              FUN_00988f20();
              uStack_22c = 0xffffffff00000000;
              local_8._0_1_ = 0x4d;
              FUN_00448aa0();
              uStack_22c = CONCAT44(0x745608,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x745613,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c = CONCAT44(0x74561b,(uint *)uStack_22c);
              FUN_00408ad0();
              local_8._0_1_ = 0;
              uStack_22c = CONCAT44(0x745629,(uint *)uStack_22c);
              FUN_00408ad0();
              goto LAB_00748434;
            }
            uStack_22c = CONCAT44("national_focus",pbVar11);
            iVar16 = FUN_00aafe90();
            puVar13 = param_1;
            if (iVar16 == 0) {
              uStack_22c = CONCAT44("slave_state_icon",pbVar11);
              iVar16 = FUN_00aafe90();
              if (iVar16 == 0) {
                uStack_22c = CONCAT44("colony_button",pbVar11);
                iVar16 = FUN_00aafe90();
                pbVar11 = local_a4;
                puVar13 = param_1;
                if (iVar16 == 0) {
                  pcVar14 = "prov_terrain";
                  pbVar9 = local_a4;
                  do {
                    bVar12 = *pbVar9;
                    bVar17 = bVar12 < (byte)*pcVar14;
                    if (bVar12 != *pcVar14) {
LAB_00746100:
                      iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_00746105;
                    }
                    if (bVar12 == 0) break;
                    bVar12 = pbVar9[1];
                    bVar17 = bVar12 < (byte)pcVar14[1];
                    if (bVar12 != pcVar14[1]) goto LAB_00746100;
                    pbVar9 = pbVar9 + 2;
                    pcVar14 = pcVar14 + 2;
                  } while (bVar12 != 0);
                  iVar16 = 0;
LAB_00746105:
                  if (iVar16 == 0) {
                    uStack_22c = CONCAT44(local_dc,0x746127);
                    uVar8 = (**(code **)(**(int **)(*(int *)(param_1[9] + 0x5c) + 0x14) + 0x18))();
                    uStack_22c = CONCAT44(uVar8,local_50);
                    local_8._0_1_ = 0x7e;
                    FUN_0042c180();
                    uStack_22c = 0xffffffff00000000;
                    local_8._0_1_ = 0x7f;
                    FUN_00408ed0();
                    uStack_22c = CONCAT44(0x74615d,(uint *)uStack_22c);
                    FUN_00408ad0();
                    local_8._0_1_ = 0;
                    uStack_22c = CONCAT44(0x74616b,(uint *)uStack_22c);
                    FUN_00408ad0();
                    uStack_22c = CONCAT44(local_178,
                                          *(undefined4 *)(*(int *)(puVar13[9] + 0x5c) + 0x14));
                    FUN_004d7740();
                    uStack_22c = 0xffffffff00000000;
                    local_8._0_1_ = 0x80;
                    FUN_00408ed0();
                    local_8._0_1_ = 0;
                    uStack_22c = CONCAT44(0x7461a2,(uint *)uStack_22c);
                    FUN_00408ad0();
                    goto LAB_00748434;
                  }
                  uStack_22c = CONCAT44("liferating",local_a4);
                  iVar16 = FUN_00aafe90();
                  if (iVar16 == 0) {
                    uStack_22c = CONCAT44("liferating_overlay",pbVar11);
                    iVar16 = FUN_00aafe90();
                    if (iVar16 == 0) goto LAB_00748434;
                  }
                  uStack_22c = CONCAT44(local_dc,0x7461e7);
                  uVar8 = FUN_009888f0();
                  uStack_22c = CONCAT44(uVar8,local_50);
                  local_8._0_1_ = 0x81;
                  FUN_0042c180();
                  uStack_22c = 0xffffffff00000000;
                  local_8._0_1_ = 0x82;
                  FUN_00408ed0();
                  uStack_22c = CONCAT44(0x74621d,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0;
                  uStack_22c = CONCAT44(0x74622b,(uint *)uStack_22c);
                  FUN_00408ad0();
                  uStack_22c = CONCAT44(0x746238,(uint *)uStack_22c);
                  FUN_009885d0();
                  uStack_22c = CONCAT44(local_34,local_50);
                  local_8._0_1_ = 0x83;
                  FUN_005467e0();
                  uStack_22c = 0xffffffff00000000;
                  local_8 = CONCAT31(local_8._1_3_,0x84);
                  FUN_00408ed0();
LAB_00746265:
                  uStack_22c = CONCAT44(0x74626a,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0;
                  uStack_22c = CONCAT44(0x746275,(uint *)uStack_22c);
                  FUN_00408ad0();
                  goto LAB_00748434;
                }
                if (*(int *)(param_1[9] + 400) == 2) {
                  uStack_22c = CONCAT44(0x745bd3,(uint *)uStack_22c);
                  FUN_009885d0();
                  local_8 = CONCAT31(local_8._1_3_,0x6b);
                  uStack_22c = CONCAT44(local_9c,local_b8);
                  local_18 = 2;
                  FUN_009a8ee0();
                  local_8 = 0x6c;
                  local_18 = 6;
                  uStack_22c = CONCAT44(0x745c02,(uint *)uStack_22c);
                  iVar16 = FUN_00475500();
                  uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                  FUN_009a9880();
                  local_8 = 0x6d;
                  local_18 = 0xe;
                }
                else {
                  uStack_22c = CONCAT44(0x745c44,(uint *)uStack_22c);
                  FUN_009885d0();
                  local_8 = 0x6e;
                  uStack_22c = CONCAT44(local_34,local_78);
                  local_18 = 0x10;
                  FUN_009a8ee0();
                  local_8 = 0x6f;
                  local_18 = 0x30;
                  uStack_22c = CONCAT44(0x745c73,(uint *)uStack_22c);
                  iVar16 = FUN_00475500();
                  uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                  FUN_009a9880();
                  local_8 = 0x70;
                  local_18 = 0x70;
                }
                uStack_22c = 0xffffffff00000000;
                FUN_00408ed0();
                if ((local_18 & 0x40) != 0) {
                  local_18 = local_18 & 0xffffffbf;
                  uStack_22c = CONCAT44(0x745cc1,(uint *)uStack_22c);
                  FUN_00408ad0();
                }
                local_8 = 0x6e;
                if ((local_18 & 0x20) != 0) {
                  local_18 = local_18 & 0xffffffdf;
                  uStack_22c = CONCAT44(local_78,0x745cdb);
                  FUN_009a9740();
                }
                if ((local_18 & 0x10) != 0) {
                  local_18 = local_18 & 0xffffffef;
                  uStack_22c = CONCAT44(0x745ced,(uint *)uStack_22c);
                  FUN_00408ad0();
                }
                if ((local_18 & 8) != 0) {
                  local_18 = local_18 & 0xfffffff7;
                  uStack_22c = CONCAT44(0x745d02,(uint *)uStack_22c);
                  FUN_00408ad0();
                }
                local_8 = 0x6b;
                if ((local_18 & 4) != 0) {
                  local_18 = local_18 & 0xfffffffb;
                  uStack_22c = CONCAT44(local_b8,0x745d1f);
                  FUN_009a9740();
                }
                local_8._0_1_ = 0;
                local_8._1_3_ = 0;
                if ((local_18 & 2) != 0) {
                  uStack_22c = CONCAT44(0x745d33,(uint *)uStack_22c);
                  FUN_00408ad0();
                }
                uVar1 = param_1[9];
                iVar16 = *(int *)(uVar1 + 0x188);
                uStack_22c = CONCAT44(iVar16,0x745d45);
                cVar4 = FUN_004d1ed0();
                if (cVar4 != '\0') {
                  uStack_22c = CONCAT44(0x745d54,(uint *)uStack_22c);
                  param_3 = (uint *)FUN_004d5e90();
                  local_70 = CONCAT44(*(undefined4 *)(param_1[9] + 0x128),(undefined4)local_70);
                  iVar16 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1[9] + 300) * 4);
                  if (*(int *)(iVar16 + 0x15c4) - *(int *)(iVar16 + 0x15c0) < (int)param_3) {
                    uStack_22c = CONCAT44(&param_3,local_50);
                    FUN_0054a540();
                    uStack_22c = 0xffffffff00000000;
                    local_8._0_1_ = 0x72;
                    FUN_00408ed0();
                    local_8._0_1_ = 0;
                    uStack_22c = CONCAT44(0x745dfd,(uint *)uStack_22c);
                    FUN_00408ad0();
                  }
                  else {
                    uStack_22c = CONCAT44(&param_3,local_50);
                    FUN_0054a540();
                    uStack_22c = 0xffffffff00000000;
                    local_8._0_1_ = 0x71;
                    FUN_00408ed0();
                    local_8._0_1_ = 0;
                    uStack_22c = CONCAT44(0x745dc0,(uint *)uStack_22c);
                    FUN_00408ad0();
                  }
                  goto LAB_00748434;
                }
                uStack_22c = CONCAT44(0x745e07,(uint *)uStack_22c);
                cVar4 = FUN_004d1e40();
                if (cVar4 != '\0') {
                  uStack_22c = CONCAT44(0x745e16,(uint *)uStack_22c);
                  param_3 = (uint *)FUN_004d5d10();
                  local_70 = CONCAT44(*(undefined4 *)(param_1[9] + 0x128),(undefined4)local_70);
                  iVar16 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1[9] + 300) * 4);
                  if (*(int *)(iVar16 + 0x15c4) - *(int *)(iVar16 + 0x15c0) < (int)param_3) {
                    uStack_22c = CONCAT44(&param_3,local_50);
                    FUN_0054a540();
                    uStack_22c = 0xffffffff00000000;
                    local_8._0_1_ = 0x74;
                    FUN_00408ed0();
                    local_8._0_1_ = 0;
                    uStack_22c = CONCAT44(0x745ebf,(uint *)uStack_22c);
                    FUN_00408ad0();
                  }
                  else {
                    uStack_22c = CONCAT44(&param_3,local_50);
                    FUN_0054a540();
                    uStack_22c = 0xffffffff00000000;
                    local_8._0_1_ = 0x73;
                    FUN_00408ed0();
                    local_8._0_1_ = 0;
                    uStack_22c = CONCAT44(0x745e82,(uint *)uStack_22c);
                    FUN_00408ad0();
                  }
                  goto LAB_00748434;
                }
                if (*(int *)(uVar1 + 400) != 2) goto LAB_00748434;
                local_60 = *(undefined4 *)(iVar16 + 0xb8);
                local_5c = *(int **)(iVar16 + 0xbc);
                param_3 = (uint *)&uStack_22c;
                local_70 = 0x320000;
                FUN_0043a6a0();
                uVar8 = FUN_00988bb0();
                local_8._0_1_ = 0x75;
                local_60 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x118);
                local_5c = *(int **)(*(int *)(DAT_012586dc + 0x50) + 0x11c);
                local_70 = 0x320000;
                param_3 = (uint *)&uStack_22c;
                FUN_0043a6a0();
                FUN_00988bb0();
                uStack_22c = CONCAT44(uVar8,&DAT_00dfd18c);
                local_8._0_1_ = 0x76;
                FUN_0043ec10();
                uStack_22c = 0xffffffff00000000;
                local_8._0_1_ = 0x77;
                FUN_00408ed0();
                uStack_22c = CONCAT44(0x745f98,(uint *)uStack_22c);
                FUN_00408ad0();
                uStack_22c = CONCAT44(0x745fa3,(uint *)uStack_22c);
                FUN_00408ad0();
                local_8._0_1_ = 0;
                uStack_22c = CONCAT44(0x745fb1,(uint *)uStack_22c);
                FUN_00408ad0();
                uStack_22c = CONCAT44(0x745fc2,(uint *)uStack_22c);
                param_1 = (uint *)FUN_004d5e90();
                uStack_22c = CONCAT44(&param_1,local_194);
                FUN_0054a540();
                local_8._0_1_ = 0x78;
                FUN_00988fa0();
                local_8._0_1_ = 0x79;
                uStack_22c = CONCAT44(0x746003,(uint *)uStack_22c);
                FUN_00989020();
                uStack_22c = CONCAT44(0x74600b,(uint *)uStack_22c);
                FUN_00408ad0();
                local_8._0_1_ = 0;
                uStack_22c = CONCAT44(0x746019,(uint *)uStack_22c);
                FUN_00408ad0();
                if ((char)local_e0[0x19f] == '\0') goto LAB_00748434;
                uStack_22c = CONCAT44(0x746038,(uint *)uStack_22c);
                FUN_009885d0();
                uStack_22c = CONCAT44(local_34,local_b8);
                local_8._0_1_ = 0x7a;
                FUN_009a8ee0();
                local_8._0_1_ = 0x7b;
                uStack_22c = CONCAT44(0x746056,(uint *)uStack_22c);
                iVar16 = FUN_00475500();
                uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                uVar8 = FUN_009a9880();
                local_8._0_1_ = 0x7c;
                uStack_22c = CONCAT44(uVar8,0x74608d);
                FUN_00988fa0();
                local_8._0_1_ = 0x7d;
                uStack_22c = CONCAT44(0x74609f,(uint *)uStack_22c);
                FUN_00989020();
                uStack_22c = CONCAT44(0x7460a7,(uint *)uStack_22c);
                FUN_00408ad0();
                uStack_22c = CONCAT44(0x7460b2,(uint *)uStack_22c);
                FUN_00408ad0();
                uStack_22c._4_4_ = (uint *)local_b8;
                local_8._0_1_ = 0x7a;
              }
              else {
                uStack_22c = CONCAT44(0x745b3a,(uint *)uStack_22c);
                FUN_009885d0();
                uStack_22c = CONCAT44(local_34,local_78);
                local_8._0_1_ = 0x68;
                FUN_009a8ee0();
                local_8._0_1_ = 0x69;
                uStack_22c = CONCAT44(0x745b55,(uint *)uStack_22c);
                iVar16 = FUN_00475500();
                uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                FUN_009a9880();
                uStack_22c = 0xffffffff00000000;
                local_8._0_1_ = 0x6a;
                FUN_00408ed0();
                uStack_22c = CONCAT44(0x745b91,(uint *)uStack_22c);
                FUN_00408ad0();
                uStack_22c._4_4_ = (uint *)local_78;
                local_8._0_1_ = 0x68;
              }
            }
            else {
              iVar16 = *(int *)(param_1[9] + 300);
              if ((iVar16 == 0) || (iVar16 == DAT_012588e8[0x2d8])) {
LAB_0074576e:
                uStack_22c = CONCAT44(0x745776,(uint *)uStack_22c);
                iVar16 = FUN_004b8a80();
                uStack_22c = CONCAT44(*(undefined4 *)(iVar16 + 0x6c),0x745785);
                piVar5 = (int *)FUN_0068dbf0();
                uStack_22c = CONCAT44(0x74578e,(uint *)uStack_22c);
                cVar4 = (**(code **)(*piVar5 + 0x34))();
                if (cVar4 == '\0') {
                  if (((*(char *)(*(int *)(puVar13[0x90] + 0x130) + 0x67) != '\0') &&
                      (uVar1 = puVar13[9], uVar1 != 0)) && (*(int *)(uVar1 + 300) != 0)) {
                    uStack_22c = CONCAT44(uVar1,puVar13[0x8f]);
                    cVar4 = FUN_00563fb0();
                    if (cVar4 == '\0') {
                      uStack_22c = CONCAT44(0x745934,(uint *)uStack_22c);
                      cVar4 = FUN_007489e0();
                      if (cVar4 == '\0') {
                        uStack_22c = CONCAT44(0x7459af,(uint *)uStack_22c);
                        FUN_009885d0();
                        uStack_22c = CONCAT44(local_34,local_78);
                        local_8._0_1_ = 0x5f;
                        FUN_009a8ee0();
                        local_8._0_1_ = 0x60;
                        uStack_22c = CONCAT44(0x7459cb,(uint *)uStack_22c);
                        iVar16 = FUN_00475500();
                        uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                        FUN_009a9880();
                        uStack_22c = 0xffffffff00000000;
                        local_8._0_1_ = 0x61;
                        FUN_00408ed0();
                        uStack_22c = CONCAT44(0x745a07,(uint *)uStack_22c);
                        FUN_00408ad0();
                        local_8 = CONCAT31(local_8._1_3_,0x5f);
                      }
                      else {
                        uStack_22c = CONCAT44(0x745945,(uint *)uStack_22c);
                        FUN_009885d0();
                        uStack_22c = CONCAT44(local_34,local_78);
                        local_8._0_1_ = 0x5c;
                        FUN_009a8ee0();
                        local_8._0_1_ = 0x5d;
                        uStack_22c = CONCAT44(0x745960,(uint *)uStack_22c);
                        iVar16 = FUN_00475500();
                        uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                        FUN_009a9880();
                        uStack_22c = 0xffffffff00000000;
                        local_8._0_1_ = 0x5e;
                        FUN_00408ed0();
                        uStack_22c = CONCAT44(0x74599c,(uint *)uStack_22c);
                        FUN_00408ad0();
                        local_8 = CONCAT31(local_8._1_3_,0x5c);
                      }
                      goto LAB_00745a75;
                    }
                  }
                  uStack_22c = CONCAT44(0x745a1a,(uint *)uStack_22c);
                  FUN_009885d0();
                  uStack_22c = CONCAT44(local_34,local_78);
                  local_8._0_1_ = 0x62;
                  FUN_009a8ee0();
                  local_8._0_1_ = 99;
                  uStack_22c = CONCAT44(0x745a35,(uint *)uStack_22c);
                  iVar16 = FUN_00475500();
                  uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                  FUN_009a9880();
                  uStack_22c = 0xffffffff00000000;
                  local_8._0_1_ = 100;
                  FUN_00408ed0();
                  uStack_22c = CONCAT44(0x745a71,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8 = CONCAT31(local_8._1_3_,0x62);
                  goto LAB_00745a75;
                }
                uStack_22c = CONCAT44(0x7457a3,(uint *)uStack_22c);
                FUN_009885d0();
                uStack_22c = CONCAT44(local_34,local_78);
                local_8._0_1_ = 0x54;
                FUN_009a8ee0();
                local_8._0_1_ = 0x55;
                uStack_22c = CONCAT44(0x7457be,(uint *)uStack_22c);
                iVar16 = FUN_00475500();
                uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                FUN_009a9880();
                uStack_22c = 0xffffffff00000000;
                local_8._0_1_ = 0x56;
                FUN_00408ed0();
                uStack_22c = CONCAT44(0x7457fa,(uint *)uStack_22c);
                FUN_00408ad0();
                local_8._0_1_ = 0x54;
                uStack_22c = CONCAT44(local_78,0x745807);
                FUN_009a9740();
                local_8._0_1_ = 0;
                uStack_22c = CONCAT44(0x745812,(uint *)uStack_22c);
                FUN_00408ad0();
                uStack_22c = CONCAT44(0x74581d,(uint *)uStack_22c);
                iVar16 = FUN_004b8a80();
                uStack_22c = CONCAT44(*(undefined4 *)(iVar16 + 0x6c),0x745832);
                piVar5 = (int *)FUN_0068dbf0();
                uStack_22c = CONCAT44(0x745844,(uint *)uStack_22c);
                FUN_009885d0();
                local_8._0_1_ = 0x57;
                uStack_22c._4_4_ = (uint *)local_178;
                uStack_22c._0_4_ = (uint *)0x745858;
                uStack_22c._0_4_ = (uint *)(**(code **)(*piVar5 + 0x18))();
                local_8._0_1_ = 0x58;
                FUN_00988fa0();
                local_8._0_1_ = 0x59;
                uStack_22c._0_4_ = local_9c;
                FUN_00988f20();
                local_8._0_1_ = 0x5a;
                uStack_22c._0_4_ = (uint *)0x745890;
                FUN_00989020();
                uStack_22c._0_4_ = (uint *)0x745898;
                FUN_00408ad0();
                uStack_22c._0_4_ = (uint *)0x7458a3;
                FUN_00408ad0();
                uStack_22c._0_4_ = (uint *)0x7458ae;
                FUN_00408ad0();
                local_8._0_1_ = 0;
                uStack_22c._0_4_ = (uint *)0x7458bc;
                FUN_00408ad0();
                uStack_22c = CONCAT44(uStack_22c._4_4_,local_194);
                (**(code **)(*piVar5 + 0x30))();
                local_8 = CONCAT31(local_8._1_3_,0x5b);
                uStack_22c = CONCAT44(0x7458d5,(uint *)uStack_22c);
                FUN_00989020();
              }
              else {
                uStack_22c = CONCAT44(param_1[9],param_1[0x8f]);
                cVar4 = FUN_00563fb0();
                if (cVar4 != '\0') goto LAB_0074576e;
                uStack_22c = CONCAT44(0x74568c,(uint *)uStack_22c);
                cVar4 = FUN_007489e0();
                if (cVar4 == '\0') {
                  uStack_22c = CONCAT44(0x745707,(uint *)uStack_22c);
                  FUN_009885d0();
                  uStack_22c = CONCAT44(local_34,local_78);
                  local_8._0_1_ = 0x51;
                  FUN_009a8ee0();
                  local_8._0_1_ = 0x52;
                  uStack_22c = CONCAT44(0x745723,(uint *)uStack_22c);
                  iVar16 = FUN_00475500();
                  uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                  FUN_009a9880();
                  uStack_22c = 0xffffffff00000000;
                  local_8._0_1_ = 0x53;
                  FUN_00408ed0();
                  uStack_22c = CONCAT44(0x74575f,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8 = CONCAT31(local_8._1_3_,0x51);
                }
                else {
                  uStack_22c = CONCAT44(0x74569d,(uint *)uStack_22c);
                  FUN_009885d0();
                  uStack_22c = CONCAT44(local_34,local_78);
                  local_8._0_1_ = 0x4e;
                  FUN_009a8ee0();
                  local_8._0_1_ = 0x4f;
                  uStack_22c = CONCAT44(0x7456b8,(uint *)uStack_22c);
                  iVar16 = FUN_00475500();
                  uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                  FUN_009a9880();
                  uStack_22c = 0xffffffff00000000;
                  local_8._0_1_ = 0x50;
                  FUN_00408ed0();
                  uStack_22c = CONCAT44(0x7456f4,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8 = CONCAT31(local_8._1_3_,0x4e);
                }
LAB_00745a75:
                uStack_22c = CONCAT44(local_78,0x745a7e);
                FUN_009a9740();
              }
              local_8._0_1_ = 0;
              uStack_22c = CONCAT44(0x745a89,(uint *)uStack_22c);
              FUN_00408ad0();
              if (param_1[0x8f] == 0) goto LAB_00748434;
              uStack_22c = CONCAT44(0x745aa5,(uint *)uStack_22c);
              cVar4 = (**(code **)(*(int *)param_1[0x8f] + 0x34))();
              if (cVar4 == '\0') goto LAB_00748434;
              uStack_22c = CONCAT44(0x745aba,(uint *)uStack_22c);
              FUN_009885d0();
              uStack_22c = CONCAT44(local_34,local_78);
              local_8._0_1_ = 0x65;
              FUN_009a8ee0();
              local_8._0_1_ = 0x66;
              uStack_22c = CONCAT44(0x745ad5,(uint *)uStack_22c);
              iVar16 = FUN_00475500();
              uStack_22c = *(undefined8 *)(iVar16 + 0x74);
              FUN_009a9880();
              local_8._0_1_ = 0x67;
              uStack_22c = CONCAT44(0x745b06,(uint *)uStack_22c);
              FUN_00989020();
              uStack_22c = CONCAT44(0x745b0e,(uint *)uStack_22c);
              FUN_00408ad0();
              uStack_22c._4_4_ = (uint *)local_78;
              local_8._0_1_ = 0x65;
            }
            uStack_22c = CONCAT44(uStack_22c._4_4_,0x7460c2);
            FUN_009a9740();
            local_8._0_1_ = 0;
            uStack_22c = CONCAT44(0x7460cd,(uint *)uStack_22c);
            FUN_00408ad0();
            goto LAB_00748434;
          }
        }
        piVar5 = *(int **)(param_1[9] + 0x110);
        if (piVar5 != (int *)0x0) {
          uStack_22c = CONCAT44(0x74629b,(uint *)uStack_22c);
          FUN_009885d0();
          uStack_22c = CONCAT44(local_34,local_b8);
          local_8._0_1_ = 0x2b;
          param_1 = (uint *)FUN_009a8ee0();
          local_8._0_1_ = 0x2c;
          uStack_22c = CONCAT44(0x7462ba,(uint *)uStack_22c);
          iVar16 = FUN_00475500();
          uStack_22c = *(undefined8 *)(iVar16 + 0x74);
          FUN_009a9880();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0x2d;
          FUN_00408ed0();
          uStack_22c = CONCAT44(0x7462f7,(uint *)uStack_22c);
          FUN_00408ad0();
          local_8._0_1_ = 0x2b;
          uStack_22c = CONCAT44(local_b8,0x746307);
          FUN_009a9740();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x746312,(uint *)uStack_22c);
          FUN_00408ad0();
          uStack_22c = CONCAT44(0x74631f,(uint *)uStack_22c);
          FUN_009885d0();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0x2e;
          FUN_00448aa0();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x74633c,(uint *)uStack_22c);
          FUN_00408ad0();
          uStack_22c = CONCAT44(&param_1,0x746349);
          (**(code **)(*piVar5 + 0x1c))();
          uStack_22c = 100000;
          __allmul();
          uStack_22c = 1000;
          __alldiv();
          uStack_22c = CONCAT44(local_50,0x746382);
          FUN_009888f0();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0x2f;
          FUN_00448aa0();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x7463a0,(uint *)uStack_22c);
          FUN_00408ad0();
          uStack_22c = CONCAT44(0x7463ad,(uint *)uStack_22c);
          FUN_009885d0();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0x30;
          FUN_00448aa0();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x7463ca,(uint *)uStack_22c);
          FUN_00408ad0();
        }
        goto LAB_00748434;
      }
      uStack_22c = CONCAT44(0x7449e8,(uint *)uStack_22c);
      FUN_009885d0();
      local_8._0_1_ = 0x14;
      uStack_22c._0_4_ = (uint *)0x7449fc;
      uStack_22c._4_4_ = local_34;
      iVar16 = (**(code **)(*local_5c + 0x9c))();
      uStack_22c = CONCAT44(uStack_22c._4_4_,0x744a06);
      puVar7 = (undefined4 *)(**(code **)(*(int *)(iVar16 + 0x74) + 0x2c))();
      piVar5 = (int *)*puVar7;
      local_8._0_1_ = 0;
      uStack_22c = CONCAT44(0x744a13,(uint *)uStack_22c);
      FUN_00408ad0();
      iVar16 = 0;
      while (piVar5 != (int *)0x0) {
        iVar10 = *piVar5;
        piVar5 = (int *)piVar5[2];
        uStack_22c = CONCAT44(param_3,0x744a34);
        cVar4 = (**(code **)(*(int *)(iVar10 + 0x1c) + 0x58))();
        if (cVar4 != '\0') break;
        iVar16 = iVar16 + 1;
      }
      if (*(int *)(param_1[9] + 0xd0) <= iVar16) goto LAB_00748434;
      piVar5 = *(int **)(param_1[9] + 200);
      for (; iVar16 != 0; iVar16 = iVar16 + -1) {
        piVar5 = (int *)piVar5[2];
      }
      iVar16 = *piVar5;
      uStack_22c = CONCAT44(0x744a75,(uint *)uStack_22c);
      FUN_009885d0();
      local_8._0_1_ = 0x15;
      uStack_22c._4_4_ = local_c0;
      uStack_22c._0_4_ = (uint *)0x744a8a;
      uStack_22c._0_4_ = (uint *)(**(code **)(**(int **)(iVar16 + 8) + 0x18))();
      local_8._0_1_ = 0x16;
      FUN_00988fa0();
      local_8._0_1_ = 0x17;
      uStack_22c._0_4_ = local_34;
      FUN_00988f20();
      uStack_22c._0_4_ = (uint *)0xffffffff;
      local_8._0_1_ = 0x18;
      FUN_00408ed0();
      uStack_22c._0_4_ = (uint *)0x744ad0;
      FUN_00408ad0();
      uStack_22c._0_4_ = (uint *)0x744adb;
      FUN_00408ad0();
      uStack_22c._0_4_ = (uint *)0x744ae6;
      FUN_00408ad0();
      local_8._0_1_ = 0;
      uStack_22c._0_4_ = (uint *)0x744af1;
      FUN_00408ad0();
      uStack_22c = CONCAT44(uStack_22c._4_4_,local_34);
      (**(code **)(**(int **)(iVar16 + 8) + 0x1c))();
      uStack_22c = 0xffffffff00000000;
      local_8._0_1_ = 0x19;
      FUN_00448aa0();
      local_8._0_1_ = 0;
      uStack_22c = CONCAT44(0x744b1d,(uint *)uStack_22c);
      FUN_00408ad0();
      if (*(int *)(iVar16 + 0xc) <= DAT_012588e8[0x2c3]) goto LAB_00748434;
      uStack_22c = CONCAT44(0x744b42,(uint *)uStack_22c);
      FUN_009885d0();
      uStack_22c = CONCAT44(local_34,local_78);
      local_8._0_1_ = 0x1a;
      FUN_009a8ee0();
      local_8._0_1_ = 0x1c;
      uStack_22c = CONCAT44(0x744b5d,(uint *)uStack_22c);
      FUN_00408ad0();
      uStack_22c = CONCAT44(0x744b6d,(uint *)uStack_22c);
      FUN_009885d0();
      uStack_22c = CONCAT44(local_15c,iVar16 + 0xc);
      local_8._0_1_ = 0x1d;
      uVar8 = FUN_0043b700();
      local_8._0_1_ = 0x1e;
      uStack_22c = CONCAT44(uVar8,0x744b8b);
      FUN_009a9980();
      uStack_22c = CONCAT44(0x744b96,(uint *)uStack_22c);
      FUN_00408ad0();
      local_8._0_1_ = 0x1c;
      uStack_22c = CONCAT44(0x744ba1,(uint *)uStack_22c);
      FUN_00408ad0();
      uStack_22c = CONCAT44(0x744ba6,(uint *)uStack_22c);
      iVar16 = FUN_00475500();
      uStack_22c = *(undefined8 *)(iVar16 + 0x74);
      FUN_009a9880();
      uStack_22c = 0xffffffff00000000;
      local_8 = CONCAT31(local_8._1_3_,0x1f);
      FUN_00448aa0();
    }
    else {
      puStack_224 = (uint *)0xf;
      uStack_22c = 0xe12e4c00744722;
      FUN_00409350();
      local_8._0_1_ = 5;
      puStack_224 = local_9c;
      uStack_22c = CONCAT44(0x744739,(uint *)uStack_22c);
      iVar16 = (**(code **)(*piVar5 + 0x9c))();
      uStack_22c = CONCAT44(0x744743,(uint *)uStack_22c);
      puVar7 = (undefined4 *)(**(code **)(*(int *)(iVar16 + 0x74) + 0x2c))();
      piVar5 = (int *)*puVar7;
      local_8._0_1_ = 0;
      if (0xf < local_88) {
        uStack_22c = CONCAT44(local_9c[0],&UNK_0074475d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      param_3 = (uint *)0x0;
      while (piVar5 != (int *)0x0) {
        iVar16 = *piVar5;
        piVar5 = (int *)piVar5[2];
        uStack_22c = CONCAT44(puVar13,0x744791);
        cVar4 = (**(code **)(*(int *)(iVar16 + 0x1c) + 0x58))();
        if (cVar4 != '\0') break;
        param_3 = (uint *)((int)param_3 + 1);
      }
      if (*(int *)(*(int *)(param_1[9] + 0x188) + 0x40) <= (int)param_3) goto LAB_00748434;
      piVar5 = *(int **)(*(int *)(param_1[9] + 0x188) + 0x38);
      for (puVar13 = param_3; puVar13 != (uint *)0x0; puVar13 = (uint *)((int)puVar13 + -1)) {
        piVar5 = (int *)piVar5[2];
      }
      iVar16 = *piVar5;
      uStack_22c = CONCAT44(0x7447d5,(uint *)uStack_22c);
      FUN_009885d0();
      local_8._0_1_ = 6;
      uStack_22c._4_4_ = local_c0;
      uStack_22c._0_4_ = (uint *)0x7447ea;
      uStack_22c._0_4_ = (uint *)(**(code **)(**(int **)(iVar16 + 8) + 0x18))();
      local_8._0_1_ = 7;
      FUN_00988fa0();
      local_8._0_1_ = 8;
      uStack_22c._0_4_ = local_34;
      FUN_00988f20();
      uStack_22c._0_4_ = (uint *)0xffffffff;
      local_8._0_1_ = 9;
      FUN_00408ed0();
      uStack_22c._0_4_ = (uint *)0x744830;
      FUN_00408ad0();
      uStack_22c._0_4_ = (uint *)0x74483b;
      FUN_00408ad0();
      uStack_22c._0_4_ = (uint *)0x744846;
      FUN_00408ad0();
      local_8._0_1_ = 0;
      uStack_22c._0_4_ = (uint *)0x744851;
      FUN_00408ad0();
      uStack_22c = CONCAT44(uStack_22c._4_4_,local_34);
      (**(code **)(**(int **)(iVar16 + 8) + 0x1c))();
      uStack_22c = 0xffffffff00000000;
      local_8._0_1_ = 10;
      FUN_00448aa0();
      local_8._0_1_ = 0;
      uStack_22c = CONCAT44(0x74487d,(uint *)uStack_22c);
      FUN_00408ad0();
      if (*(int *)(iVar16 + 0xc) <= DAT_012588e8[0x2c3]) goto LAB_00748434;
      uStack_22c = CONCAT44(0x7448a2,(uint *)uStack_22c);
      FUN_009885d0();
      uStack_22c = CONCAT44(local_34,local_78);
      local_8._0_1_ = 0xb;
      FUN_009a8ee0();
      local_8._0_1_ = 0xd;
      uStack_22c = CONCAT44(0x7448bd,(uint *)uStack_22c);
      FUN_00408ad0();
      uStack_22c = CONCAT44(0x7448cd,(uint *)uStack_22c);
      FUN_009885d0();
      uStack_22c = CONCAT44(local_15c,iVar16 + 0xc);
      local_8._0_1_ = 0xe;
      uVar8 = FUN_0043b700();
      local_8._0_1_ = 0xf;
      uStack_22c = CONCAT44(uVar8,0x7448eb);
      FUN_009a9980();
      uStack_22c = CONCAT44(0x7448f6,(uint *)uStack_22c);
      FUN_00408ad0();
      local_8._0_1_ = 0xd;
      uStack_22c = CONCAT44(0x744901,(uint *)uStack_22c);
      FUN_00408ad0();
      uStack_22c = CONCAT44(0x744906,(uint *)uStack_22c);
      iVar16 = FUN_00475500();
      uStack_22c = *(undefined8 *)(iVar16 + 0x74);
      uVar8 = FUN_009a9880();
      local_8._0_1_ = 0x10;
      uStack_22c = CONCAT44(0x744942,(uint *)uStack_22c);
      FUN_009885d0();
      local_8._0_1_ = 0x11;
      uStack_22c = CONCAT44(uVar8,0x744954);
      FUN_00988f20();
      uStack_22c = 0xffffffff00000000;
      local_8 = CONCAT31(local_8._1_3_,0x12);
      FUN_00448aa0();
      uStack_22c = CONCAT44(0x74496e,(uint *)uStack_22c);
      FUN_00408ad0();
      uStack_22c = CONCAT44(0x744979,(uint *)uStack_22c);
      FUN_00408ad0();
    }
    uStack_22c = CONCAT44(0x744be6,(uint *)uStack_22c);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_22c = CONCAT44(local_78,0x744bf2);
    FUN_009a9740();
    goto LAB_00748434;
  }
  puStack_21c = param_3;
  puStack_220 = (uint *)0x7463e4;
  cVar4 = (**(code **)(*(int *)(local_68[0] + 0x18) + 0x94))();
  pbVar11 = local_a4;
  if (cVar4 == '\0') {
    uStack_22c = CONCAT44(puVar13,0x747686);
    cVar4 = (**(code **)(local_19c[6] + 0x94))();
    puVar2 = param_1;
    if (cVar4 == '\0') {
      if ((param_1[0x90] != 0) &&
         (iVar16 = *(int *)(param_1[0x90] + 0x130), *(char *)(iVar16 + 0x67) != '\0')) {
        uStack_22c = CONCAT44(puVar13,0x74836f);
        cVar4 = (**(code **)(*(int *)(iVar16 + 0x18) + 0x94))();
        if (cVar4 != '\0') {
          uStack_22c = CONCAT44(local_1fc,puVar2[0x90]);
          FUN_0074e2e0();
          local_8._0_1_ = 0xe6;
          goto LAB_00748419;
        }
      }
      if ((puVar2[0x91] != 0) &&
         (iVar16 = *(int *)(puVar2[0x91] + 0xd8), *(char *)(iVar16 + 0x67) != '\0')) {
        uStack_22c = CONCAT44(puVar13,0x7483b7);
        cVar4 = (**(code **)(*(int *)(iVar16 + 0x18) + 0x94))();
        if (cVar4 != '\0') {
          uStack_22c = CONCAT44(puVar13,local_1fc);
          FUN_00751720();
          local_8._0_1_ = 0xe7;
          goto LAB_00748419;
        }
      }
      if (((puVar2[0xb] == 0) || (iVar16 = *(int *)(puVar2[0xb] + 0x60), iVar16 == 0)) ||
         (*(char *)(iVar16 + 0x67) == '\0')) goto LAB_00748434;
      uStack_22c = CONCAT44(puVar13,0x7483fb);
      cVar4 = (**(code **)(*(int *)(iVar16 + 0x18) + 0x94))();
      if (cVar4 == '\0') goto LAB_00748434;
      uStack_22c = CONCAT44(puVar13,local_1fc);
      (**(code **)(*(int *)puVar2[0xb] + 0x10))();
      local_8._0_1_ = 0xe8;
    }
    else {
      uStack_22c = CONCAT44(0x747693,(uint *)uStack_22c);
      local_54 = (int *)FUN_004dad40();
      local_68[0] = (undefined1 *)(local_54[8] - local_54[7] >> 2);
      local_18 = 0;
      if (0 < (int)local_68[0]) {
        do {
          uStack_22c = CONCAT44(local_34,0x7476bc);
          uVar8 = FUN_009888f0();
          local_8._0_1_ = 0xbd;
          uStack_22c = CONCAT44(0x7476d2,(uint *)uStack_22c);
          FUN_009885d0();
          local_8._0_1_ = 0xbe;
          uStack_22c = CONCAT44(uVar8,0x7476e4);
          uStack_22c._4_4_ = (uint *)FUN_00988f20();
          local_8._0_1_ = 0xbf;
          uStack_22c._0_4_ = (uint *)0x7476f6;
          iVar16 = (**(code **)(*local_19c + 0x6c))();
          if (0xf < local_148) {
            uStack_22c = CONCAT44(uStack_22c._4_4_,local_15c[0]);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_148 = 0xf;
          local_14c = 0;
          local_15c[0] = local_15c[0] & 0xffffff00;
          if (0xf < local_ac) {
            uStack_22c = CONCAT44(uStack_22c._4_4_,local_c0[0]);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0;
          local_ac = 0xf;
          local_b0 = 0;
          local_c0[0] = local_c0[0] & 0xffffff00;
          if (0xf < local_20) {
            uStack_22c = CONCAT44(uStack_22c._4_4_,local_34[0]);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          uStack_22c = CONCAT44(uStack_22c._4_4_,param_3);
          cVar4 = (**(code **)(*(int *)(iVar16 + 0x18) + 0x94))();
          if (cVar4 != '\0') {
            pcVar14 = "expand";
            pbVar11 = local_a4;
            do {
              bVar12 = *pbVar11;
              bVar17 = bVar12 < (byte)*pcVar14;
              if (bVar12 != *pcVar14) {
LAB_007477b5:
                iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                goto LAB_007477ba;
              }
              if (bVar12 == 0) break;
              bVar12 = pbVar11[1];
              bVar17 = bVar12 < (byte)pcVar14[1];
              if (bVar12 != pcVar14[1]) goto LAB_007477b5;
              pbVar11 = pbVar11 + 2;
              pcVar14 = pcVar14 + 2;
            } while (bVar12 != 0);
            iVar16 = 0;
LAB_007477ba:
            if (iVar16 == 0) {
              iVar16 = local_18 * 4;
              local_70 = CONCAT44(*(undefined4 *)(param_1[9] + 0x128),(undefined4)local_70);
              uStack_22c = CONCAT44(param_1[9],*(undefined4 *)(local_54[7] + iVar16));
              FUN_00512230();
              uStack_22c = 0xffffffff00000000;
              local_8._0_1_ = 0xc0;
              FUN_00408ed0();
              local_8._0_1_ = 0;
              uStack_22c = CONCAT44(0x747926,(uint *)uStack_22c);
              FUN_00408ad0();
              if (*(char *)(*(int *)(iVar16 + local_54[7]) + 0xbe) == '\0') {
                uStack_22c = CONCAT44(0x747948,(uint *)uStack_22c);
                FUN_009885d0();
                uStack_22c = CONCAT44(local_34,local_b8);
                local_8._0_1_ = 0xc1;
                FUN_009a8ee0();
                local_8._0_1_ = 0xc2;
                uStack_22c = CONCAT44(0x747966,(uint *)uStack_22c);
                iVar16 = FUN_00475500();
                uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                FUN_009a9880();
                uStack_22c = 0xffffffff00000000;
                local_8._0_1_ = 0xc3;
                FUN_00408ed0();
                uStack_22c = CONCAT44(0x7479a2,(uint *)uStack_22c);
                FUN_00408ad0();
                local_8._0_1_ = 0xc1;
                uStack_22c = CONCAT44(local_b8,0x7479b2);
                FUN_009a9740();
                local_8._0_1_ = 0;
                uStack_22c = CONCAT44(0x7479bd,(uint *)uStack_22c);
                FUN_00408ad0();
              }
              goto LAB_00748434;
            }
            pcVar14 = "building_progress";
            pbVar11 = local_a4;
            do {
              bVar12 = *pbVar11;
              bVar17 = bVar12 < (byte)*pcVar14;
              if (bVar12 != *pcVar14) {
LAB_007477f0:
                iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                goto LAB_007477f5;
              }
              if (bVar12 == 0) break;
              bVar12 = pbVar11[1];
              bVar17 = bVar12 < (byte)pcVar14[1];
              if (bVar12 != pcVar14[1]) goto LAB_007477f0;
              pbVar11 = pbVar11 + 2;
              pcVar14 = pcVar14 + 2;
            } while (bVar12 != 0);
            iVar16 = 0;
LAB_007477f5:
            if (iVar16 != 0) {
              pcVar14 = "expand_text";
              pbVar11 = local_a4;
              do {
                bVar12 = *pbVar11;
                bVar17 = bVar12 < (byte)*pcVar14;
                if (bVar12 != *pcVar14) {
LAB_00747824:
                  iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                  goto LAB_00747829;
                }
                if (bVar12 == 0) break;
                bVar12 = pbVar11[1];
                bVar17 = bVar12 < (byte)pcVar14[1];
                if (bVar12 != pcVar14[1]) goto LAB_00747824;
                pbVar11 = pbVar11 + 2;
                pcVar14 = pcVar14 + 2;
              } while (bVar12 != 0);
              iVar16 = 0;
LAB_00747829:
              if (iVar16 != 0) {
                pcVar14 = "underconstruction_icon";
                pbVar11 = local_a4;
                do {
                  bVar12 = *pbVar11;
                  bVar17 = bVar12 < (byte)*pcVar14;
                  if (bVar12 != *pcVar14) {
LAB_00747858:
                    iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                    goto LAB_0074785d;
                  }
                  if (bVar12 == 0) break;
                  bVar12 = pbVar11[1];
                  bVar17 = bVar12 < (byte)pcVar14[1];
                  if (bVar12 != pcVar14[1]) goto LAB_00747858;
                  pbVar11 = pbVar11 + 2;
                  pcVar14 = pcVar14 + 2;
                } while (bVar12 != 0);
                iVar16 = 0;
LAB_0074785d:
                if (iVar16 != 0) {
                  uStack_22c = CONCAT44("build_icon",local_a4);
                  iVar16 = FUN_00aafe90();
                  if (iVar16 == 0) goto LAB_0074787b;
                  uStack_22c = CONCAT44(local_140,0x7479d3);
                  FUN_004012f0();
                  iVar16 = local_18 * 4;
                  if (*(int *)(*(int *)(iVar16 + local_54[7]) + 0x10) == 3) {
                    uStack_22c = CONCAT44(0x7479f8,(uint *)uStack_22c);
                    cVar4 = FUN_004b7530();
                    if (cVar4 != '\0') {
                      uStack_22c = CONCAT44(0x747a09,(uint *)uStack_22c);
                      FUN_009885d0();
                      local_8._0_1_ = 0xc5;
                      local_70 = CONCAT44(*(undefined4 *)(param_1[9] + 0x128),(undefined4)local_70);
                      uStack_22c = CONCAT44(param_1[9],local_dc);
                      FUN_0051f0e0();
                      local_8._0_1_ = 0xc6;
                      uStack_22c = CONCAT44(local_34,0x747a4d);
                      FUN_00988f20();
                      local_8._0_1_ = 199;
                      uStack_22c = CONCAT44(0x747a5c,(uint *)uStack_22c);
                      FUN_00989020();
                      uStack_22c = CONCAT44(0x747a64,(uint *)uStack_22c);
                      FUN_00408ad0();
                      uStack_22c = CONCAT44(0x747a6f,(uint *)uStack_22c);
                      FUN_00408ad0();
                      local_8._0_1_ = 0;
                      uStack_22c = CONCAT44(0x747a7a,(uint *)uStack_22c);
                      FUN_00408ad0();
                    }
                  }
                  uStack_22c = CONCAT44(0x747a87,(uint *)uStack_22c);
                  FUN_009885d0();
                  local_8._0_1_ = 200;
                  uStack_22c = CONCAT44(local_178,0x747aa2);
                  uVar8 = (**(code **)(**(int **)(iVar16 + local_54[7]) + 0x18))();
                  local_8._0_1_ = 0xc9;
                  uStack_22c = CONCAT44(uVar8,0x747ab7);
                  FUN_00988fa0();
                  local_8._0_1_ = 0xca;
                  uStack_22c = CONCAT44(local_34,0x747acb);
                  FUN_00988f20();
                  local_8._0_1_ = 0xcb;
                  uStack_22c = CONCAT44(0x747ada,(uint *)uStack_22c);
                  FUN_00989020();
                  uStack_22c = CONCAT44(0x747ae2,(uint *)uStack_22c);
                  FUN_00408ad0();
                  uStack_22c = CONCAT44(0x747aed,(uint *)uStack_22c);
                  FUN_00408ad0();
                  uStack_22c = CONCAT44(0x747af8,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0;
                  uStack_22c = CONCAT44(0x747b03,(uint *)uStack_22c);
                  FUN_00408ad0();
                  uStack_22c._4_4_ = (uint *)local_194;
                  uStack_22c._0_4_ = (uint *)0x747b1e;
                  uVar8 = FUN_004b6180();
                  uStack_22c = CONCAT44(uStack_22c._4_4_,uVar8);
                  FUN_004dbb50();
                  local_8._0_1_ = 0xcc;
                  uStack_22c = CONCAT44(0x747b2d,(uint *)uStack_22c);
                  FUN_00989020();
                  local_8 = (uint)local_8._1_3_ << 8;
                  uStack_22c = CONCAT44(0x747b3b,(uint *)uStack_22c);
                  FUN_00408ad0();
                  uStack_22c._4_4_ = (uint *)param_2;
                  goto LAB_00746c78;
                }
              }
            }
            piVar5 = *(int **)(param_1[9] + 0xd8);
            goto joined_r0x00747b52;
          }
LAB_0074787b:
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)local_68[0]);
      }
      pcVar14 = "build_army";
      pbVar11 = local_a4;
      do {
        bVar12 = *pbVar11;
        bVar17 = bVar12 < (byte)*pcVar14;
        if (bVar12 != *pcVar14) {
LAB_00747ba6:
          iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00747bab;
        }
        if (bVar12 == 0) break;
        bVar12 = pbVar11[1];
        bVar17 = bVar12 < (byte)pcVar14[1];
        if (bVar12 != pcVar14[1]) goto LAB_00747ba6;
        pbVar11 = pbVar11 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar12 != 0);
      iVar16 = 0;
LAB_00747bab:
      if (iVar16 == 0) {
        local_70 = CONCAT44(DAT_012588e8[0x2d7],(undefined4)local_70);
        if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + DAT_012588e8[0x2d8] * 4) + 3000) == '\0'
           ) {
          uStack_22c = CONCAT44(local_50,0x747c74);
          FUN_00753540();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0xd0;
          FUN_00408ed0();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x747c95,(uint *)uStack_22c);
          FUN_00408ad0();
        }
        else {
          uStack_22c = CONCAT44(0x747bec,(uint *)uStack_22c);
          FUN_009885d0();
          uStack_22c = CONCAT44(local_34,local_b8);
          local_8._0_1_ = 0xcd;
          FUN_009a8ee0();
          local_8._0_1_ = 0xce;
          uStack_22c = CONCAT44(0x747c0a,(uint *)uStack_22c);
          iVar16 = FUN_00475500();
          uStack_22c = *(undefined8 *)(iVar16 + 0x74);
          FUN_009a9880();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0xcf;
          FUN_00408ed0();
          uStack_22c = CONCAT44(0x747c46,(uint *)uStack_22c);
          FUN_00408ad0();
          local_8._0_1_ = 0xcd;
          uStack_22c = CONCAT44(local_b8,0x747c56);
          FUN_009a9740();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x747c61,(uint *)uStack_22c);
          FUN_00408ad0();
        }
        goto LAB_00748434;
      }
      pcVar14 = "build_navy";
      pbVar11 = local_a4;
      do {
        bVar12 = *pbVar11;
        bVar17 = bVar12 < (byte)*pcVar14;
        if (bVar12 != *pcVar14) {
LAB_00747cc1:
          iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00747cc6;
        }
        if (bVar12 == 0) break;
        bVar12 = pbVar11[1];
        bVar17 = bVar12 < (byte)pcVar14[1];
        if (bVar12 != pcVar14[1]) goto LAB_00747cc1;
        pbVar11 = pbVar11 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar12 != 0);
      iVar16 = 0;
LAB_00747cc6:
      if (iVar16 == 0) {
        local_70 = CONCAT44(DAT_012588e8[0x2d7],(undefined4)local_70);
        if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + DAT_012588e8[0x2d8] * 4) + 3000) == '\0'
           ) {
          uStack_22c = CONCAT44(local_50,0x747d8f);
          FUN_00753540();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0xd4;
          FUN_00408ed0();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x747db0,(uint *)uStack_22c);
          FUN_00408ad0();
        }
        else {
          uStack_22c = CONCAT44(0x747d07,(uint *)uStack_22c);
          FUN_009885d0();
          uStack_22c = CONCAT44(local_34,local_b8);
          local_8._0_1_ = 0xd1;
          FUN_009a8ee0();
          local_8._0_1_ = 0xd2;
          uStack_22c = CONCAT44(0x747d25,(uint *)uStack_22c);
          iVar16 = FUN_00475500();
          uStack_22c = *(undefined8 *)(iVar16 + 0x74);
          FUN_009a9880();
          uStack_22c = 0xffffffff00000000;
          local_8._0_1_ = 0xd3;
          FUN_00408ed0();
          uStack_22c = CONCAT44(0x747d61,(uint *)uStack_22c);
          FUN_00408ad0();
          local_8._0_1_ = 0xd1;
          uStack_22c = CONCAT44(local_b8,0x747d71);
          FUN_009a9740();
          local_8._0_1_ = 0;
          uStack_22c = CONCAT44(0x747d7c,(uint *)uStack_22c);
          FUN_00408ad0();
        }
        goto LAB_00748434;
      }
      pcVar14 = "army_progress";
      pbVar11 = local_a4;
      do {
        bVar12 = *pbVar11;
        bVar17 = bVar12 < (byte)*pcVar14;
        if (bVar12 != *pcVar14) {
LAB_00747de0:
          iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00747de5;
        }
        if (bVar12 == 0) break;
        bVar12 = pbVar11[1];
        bVar17 = bVar12 < (byte)pcVar14[1];
        if (bVar12 != pcVar14[1]) goto LAB_00747de0;
        pbVar11 = pbVar11 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar12 != 0);
      iVar16 = 0;
LAB_00747de5:
      if (iVar16 != 0) {
        pcVar14 = "army_text";
        pbVar11 = local_a4;
        do {
          bVar12 = *pbVar11;
          bVar17 = bVar12 < (byte)*pcVar14;
          if (bVar12 != *pcVar14) {
LAB_00747e14:
            iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_00747e19;
          }
          if (bVar12 == 0) break;
          bVar12 = pbVar11[1];
          bVar17 = bVar12 < (byte)pcVar14[1];
          if (bVar12 != pcVar14[1]) goto LAB_00747e14;
          pbVar11 = pbVar11 + 2;
          pcVar14 = pcVar14 + 2;
        } while (bVar12 != 0);
        iVar16 = 0;
LAB_00747e19:
        if (iVar16 != 0) {
          pcVar14 = "navy_progress";
          pbVar11 = local_a4;
          do {
            bVar12 = *pbVar11;
            bVar17 = bVar12 < (byte)*pcVar14;
            if (bVar12 != *pcVar14) {
LAB_00747e48:
              iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_00747e4d;
            }
            if (bVar12 == 0) break;
            bVar12 = pbVar11[1];
            bVar17 = bVar12 < (byte)pcVar14[1];
            if (bVar12 != pcVar14[1]) goto LAB_00747e48;
            pbVar11 = pbVar11 + 2;
            pcVar14 = pcVar14 + 2;
          } while (bVar12 != 0);
          iVar16 = 0;
LAB_00747e4d:
          if (iVar16 != 0) {
            pcVar14 = "navy_text";
            pbVar11 = local_a4;
            do {
              bVar12 = *pbVar11;
              bVar17 = bVar12 < (byte)*pcVar14;
              if (bVar12 != *pcVar14) {
LAB_00747e80:
                iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                goto LAB_00747e85;
              }
              if (bVar12 == 0) break;
              bVar12 = pbVar11[1];
              bVar17 = bVar12 < (byte)pcVar14[1];
              if (bVar12 != pcVar14[1]) goto LAB_00747e80;
              pbVar11 = pbVar11 + 2;
              pcVar14 = pcVar14 + 2;
            } while (bVar12 != 0);
            iVar16 = 0;
LAB_00747e85:
            if (iVar16 != 0) {
              pcVar14 = "army_size";
              pbVar11 = local_a4;
              do {
                bVar12 = *pbVar11;
                bVar17 = bVar12 < (byte)*pcVar14;
                if (bVar12 != *pcVar14) {
LAB_00747eb4:
                  iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                  goto LAB_00747eb9;
                }
                if (bVar12 == 0) break;
                bVar12 = pbVar11[1];
                bVar17 = bVar12 < (byte)pcVar14[1];
                if (bVar12 != pcVar14[1]) goto LAB_00747eb4;
                pbVar11 = pbVar11 + 2;
                pcVar14 = pcVar14 + 2;
              } while (bVar12 != 0);
              iVar16 = 0;
LAB_00747eb9:
              if (iVar16 == 0) {
                uStack_22c = CONCAT44(local_178,0x747ed6);
                uVar8 = FUN_009888f0();
                local_8._0_1_ = 0xd7;
                uStack_22c = CONCAT44(local_dc,0x747eee);
                FUN_009888f0();
                uStack_22c = CONCAT44(uVar8,"ALLOWED");
                local_8._0_1_ = 0xd8;
                FUN_0043ec10();
                uStack_22c = 0xffffffff00000000;
                local_8._0_1_ = 0xd9;
                FUN_00408ed0();
                uStack_22c = CONCAT44(0x747f2a,(uint *)uStack_22c);
                FUN_00408ad0();
                uStack_22c = CONCAT44(0x747f35,(uint *)uStack_22c);
                FUN_00408ad0();
                local_8._0_1_ = 0;
                uStack_22c = CONCAT44(0x747f43,(uint *)uStack_22c);
                FUN_00408ad0();
              }
              else {
                pcVar14 = "rallypoint_icon";
                pbVar11 = local_a4;
                do {
                  bVar12 = *pbVar11;
                  bVar17 = bVar12 < (byte)*pcVar14;
                  if (bVar12 != *pcVar14) {
LAB_00747f70:
                    iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                    goto LAB_00747f75;
                  }
                  if (bVar12 == 0) break;
                  bVar12 = pbVar11[1];
                  bVar17 = bVar12 < (byte)pcVar14[1];
                  if (bVar12 != pcVar14[1]) goto LAB_00747f70;
                  pbVar11 = pbVar11 + 2;
                  pcVar14 = pcVar14 + 2;
                } while (bVar12 != 0);
                iVar16 = 0;
LAB_00747f75:
                if (iVar16 == 0) {
                  uStack_22c = CONCAT44(0x747f8a,(uint *)uStack_22c);
                  FUN_009885d0();
                  uStack_22c = CONCAT44(local_34,local_b8);
                  local_8._0_1_ = 0xda;
                  FUN_009a8ee0();
                  local_8._0_1_ = 0xdb;
                  uStack_22c = CONCAT44(0x747fa8,(uint *)uStack_22c);
                  FUN_00475500();
                  uStack_22c = CONCAT44(0x747fb2,(uint *)uStack_22c);
                  iVar16 = FUN_0040b440();
                  uStack_22c = *(undefined8 *)(iVar16 + 8);
                  FUN_009a9880();
                  uStack_22c = 0xffffffff00000000;
                  local_8._0_1_ = 0xdc;
                  FUN_00408ed0();
                  uStack_22c = CONCAT44(0x747fed,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0xda;
                  uStack_22c = CONCAT44(local_b8,0x747ffd);
                  FUN_009a9740();
                  local_8._0_1_ = 0;
                  uStack_22c = CONCAT44(0x748008,(uint *)uStack_22c);
                  FUN_00408ad0();
                }
                else {
                  pcVar14 = "rallypoint_checkbox";
                  pbVar11 = local_a4;
                  do {
                    bVar12 = *pbVar11;
                    bVar17 = bVar12 < (byte)*pcVar14;
                    if (bVar12 != *pcVar14) {
LAB_00748034:
                      iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_00748039;
                    }
                    if (bVar12 == 0) break;
                    bVar12 = pbVar11[1];
                    bVar17 = bVar12 < (byte)pcVar14[1];
                    if (bVar12 != pcVar14[1]) goto LAB_00748034;
                    pbVar11 = pbVar11 + 2;
                    pcVar14 = pcVar14 + 2;
                  } while (bVar12 != 0);
                  iVar16 = 0;
LAB_00748039:
                  if (iVar16 != 0) {
                    pcVar14 = "rallypoint_checkbox_naval";
                    pbVar11 = local_a4;
                    do {
                      bVar12 = *pbVar11;
                      bVar17 = bVar12 < (byte)*pcVar14;
                      if (bVar12 != *pcVar14) {
LAB_00748068:
                        iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                        goto LAB_0074806d;
                      }
                      if (bVar12 == 0) break;
                      bVar12 = pbVar11[1];
                      bVar17 = bVar12 < (byte)pcVar14[1];
                      if (bVar12 != pcVar14[1]) goto LAB_00748068;
                      pbVar11 = pbVar11 + 2;
                      pcVar14 = pcVar14 + 2;
                    } while (bVar12 != 0);
                    iVar16 = 0;
LAB_0074806d:
                    if (iVar16 != 0) {
                      pcVar14 = "rallypoint_merge_checkbox";
                      pbVar11 = local_a4;
                      do {
                        bVar12 = *pbVar11;
                        bVar17 = bVar12 < (byte)*pcVar14;
                        if (bVar12 != *pcVar14) {
LAB_007480a0:
                          iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                          goto LAB_007480a5;
                        }
                        if (bVar12 == 0) break;
                        bVar12 = pbVar11[1];
                        bVar17 = bVar12 < (byte)pcVar14[1];
                        if (bVar12 != pcVar14[1]) goto LAB_007480a0;
                        pbVar11 = pbVar11 + 2;
                        pcVar14 = pcVar14 + 2;
                      } while (bVar12 != 0);
                      iVar16 = 0;
LAB_007480a5:
                      if (iVar16 == 0) {
                        uStack_22c = CONCAT44(0x7480ba,(uint *)uStack_22c);
                        FUN_009885d0();
                        uStack_22c = CONCAT44(local_34,local_b8);
                        local_8._0_1_ = 0xe0;
                        FUN_009a8ee0();
                        local_8._0_1_ = 0xe1;
                        uStack_22c = CONCAT44(0x7480d8,(uint *)uStack_22c);
                        FUN_00475500();
                        uStack_22c = CONCAT44(0x7480e2,(uint *)uStack_22c);
                        iVar16 = FUN_0040b440();
                        uStack_22c = *(undefined8 *)(iVar16 + 8);
                        FUN_009a9880();
                        uStack_22c = 0xffffffff00000000;
                        local_8._0_1_ = 0xe2;
                        FUN_00408ed0();
                        uStack_22c = CONCAT44(0x74811d,(uint *)uStack_22c);
                        FUN_00408ad0();
                        local_8._0_1_ = 0xe0;
                        uStack_22c = CONCAT44(local_b8,0x74812d);
                        FUN_009a9740();
                        local_8._0_1_ = 0;
                        uStack_22c = CONCAT44(0x748138,(uint *)uStack_22c);
                        FUN_00408ad0();
                      }
                      else {
                        pcVar14 = "rallypoint_merge_checkbox_naval";
                        pbVar11 = local_a4;
                        do {
                          bVar12 = *pbVar11;
                          bVar17 = bVar12 < (byte)*pcVar14;
                          if (bVar12 != *pcVar14) {
LAB_00748162:
                            iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                            goto LAB_00748167;
                          }
                          if (bVar12 == 0) break;
                          bVar12 = pbVar11[1];
                          bVar17 = bVar12 < (byte)pcVar14[1];
                          if (bVar12 != pcVar14[1]) goto LAB_00748162;
                          pbVar11 = pbVar11 + 2;
                          pcVar14 = pcVar14 + 2;
                        } while (bVar12 != 0);
                        iVar16 = 0;
LAB_00748167:
                        if (iVar16 == 0) {
                          uStack_22c = CONCAT44(0x74817c,(uint *)uStack_22c);
                          FUN_009885d0();
                          uStack_22c = CONCAT44(local_34,local_b8);
                          local_8._0_1_ = 0xe3;
                          FUN_009a8ee0();
                          local_8._0_1_ = 0xe4;
                          uStack_22c = CONCAT44(0x74819a,(uint *)uStack_22c);
                          FUN_00475500();
                          uStack_22c = CONCAT44(0x7481a4,(uint *)uStack_22c);
                          iVar16 = FUN_0040b440();
                          uStack_22c = *(undefined8 *)(iVar16 + 8);
                          FUN_009a9880();
                          uStack_22c = 0xffffffff00000000;
                          local_8._0_1_ = 0xe5;
                          FUN_00408ed0();
                          uStack_22c = CONCAT44(0x7481df,(uint *)uStack_22c);
                          FUN_00408ad0();
                          local_8._0_1_ = 0xe3;
                          uStack_22c = CONCAT44(local_b8,0x7481ef);
                          FUN_009a9740();
                          local_8._0_1_ = 0;
                          uStack_22c = CONCAT44(0x7481fa,(uint *)uStack_22c);
                          FUN_00408ad0();
                        }
                      }
                      goto LAB_00748434;
                    }
                  }
                  uStack_22c = CONCAT44(0x74820c,(uint *)uStack_22c);
                  FUN_009885d0();
                  uStack_22c = CONCAT44(local_34,local_b8);
                  local_8._0_1_ = 0xdd;
                  FUN_009a8ee0();
                  local_8._0_1_ = 0xde;
                  uStack_22c = CONCAT44(0x74822a,(uint *)uStack_22c);
                  FUN_00475500();
                  uStack_22c = CONCAT44(0x748234,(uint *)uStack_22c);
                  iVar16 = FUN_0040b440();
                  uStack_22c = *(undefined8 *)(iVar16 + 8);
                  FUN_009a9880();
                  uStack_22c = 0xffffffff00000000;
                  local_8._0_1_ = 0xdf;
                  FUN_00408ed0();
                  uStack_22c = CONCAT44(0x74826f,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0xdd;
                  uStack_22c = CONCAT44(local_b8,0x74827f);
                  FUN_009a9740();
                  local_8._0_1_ = 0;
                  uStack_22c = CONCAT44(0x74828a,(uint *)uStack_22c);
                  FUN_00408ad0();
                }
              }
              goto LAB_00748434;
            }
          }
          piVar5 = *(int **)(param_1[9] + 0xd8);
          do {
            if (piVar5 == (int *)0x0) goto LAB_00748434;
            piVar6 = (int *)*piVar5;
            piVar5 = (int *)piVar5[2];
            uStack_22c = CONCAT44(0x7482b1,(uint *)uStack_22c);
            cVar4 = (**(code **)(*piVar6 + 0x34))();
          } while ((cVar4 == '\0') || (*(char *)(piVar6[0x22] + 0x3a) == '\0'));
          uStack_22c = CONCAT44(param_1[9],local_1fc);
          (**(code **)(piVar6[0xc] + 0xc))();
          local_8._0_1_ = 0xd6;
          goto LAB_00748419;
        }
      }
      piVar5 = *(int **)(param_1[9] + 0xd8);
      do {
        if (piVar5 == (int *)0x0) goto LAB_00748434;
        piVar6 = (int *)*piVar5;
        piVar5 = (int *)piVar5[2];
        uStack_22c = CONCAT44(0x74830e,(uint *)uStack_22c);
        cVar4 = (**(code **)(*piVar6 + 0x34))();
      } while ((cVar4 == '\0') || (*(char *)(piVar6[0x22] + 0x3a) != '\0'));
      uStack_22c = CONCAT44(param_1[9],local_1fc);
      (**(code **)(piVar6[0xc] + 0xc))();
      local_8._0_1_ = 0xd5;
    }
LAB_00748419:
    uStack_22c = CONCAT44(0x748426,(uint *)uStack_22c);
    FUN_004115d0();
    local_8._0_1_ = 0;
    uStack_22c = CONCAT44(0x748434,(uint *)uStack_22c);
    FUN_00459820();
    goto LAB_00748434;
  }
  pcVar14 = "goods_type";
  pbVar9 = local_a4;
  do {
    bVar12 = *pbVar9;
    bVar17 = bVar12 < (byte)*pcVar14;
    if (bVar12 != *pcVar14) {
LAB_00746420:
      iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_00746425;
    }
    if (bVar12 == 0) break;
    bVar12 = pbVar9[1];
    bVar17 = bVar12 < (byte)pcVar14[1];
    if (bVar12 != pcVar14[1]) goto LAB_00746420;
    pbVar9 = pbVar9 + 2;
    pcVar14 = pcVar14 + 2;
  } while (bVar12 != 0);
  iVar10 = 0;
LAB_00746425:
  if (iVar10 == 0) {
LAB_007474d4:
    if (local_a0 == 0) goto LAB_00748434;
    uStack_22c = CONCAT44(0x7474e7,(uint *)uStack_22c);
    cVar4 = FUN_004dd3a0();
    if (cVar4 == '\0') goto LAB_00748434;
    local_70 = *(undefined8 *)(iVar16 + 0x80);
    param_1 = (uint *)&uStack_22c;
    FUN_0043a6d0();
    uVar8 = FUN_00988bb0();
    local_8._0_1_ = 0x85;
    uStack_22c = CONCAT44(local_dc,*(undefined4 *)(local_a0 + 0x80));
    FUN_005659c0();
    uStack_22c = CONCAT44(uVar8,"VALUE");
    local_8._0_1_ = 0x86;
    FUN_0043ec10();
    uStack_22c = 0xffffffff00000000;
    local_8._0_1_ = 0x87;
    FUN_00408ed0();
    uStack_22c = CONCAT44(0x74757f,(uint *)uStack_22c);
    FUN_00408ad0();
    uStack_22c = CONCAT44(0x74758a,(uint *)uStack_22c);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_22c = CONCAT44(0x747598,(uint *)uStack_22c);
    FUN_00408ad0();
    uStack_22c = CONCAT44(0x7475a8,(uint *)uStack_22c);
    FUN_009885d0();
    local_8._0_1_ = 0x88;
    uStack_22c = CONCAT44(0x7475b7,(uint *)uStack_22c);
    FUN_00989020();
    local_8._0_1_ = 0;
    uStack_22c = CONCAT44(0x7475c5,(uint *)uStack_22c);
    FUN_00408ad0();
    uStack_22c = 0x8000;
    param_1 = (uint *)(iVar16 + 0x10);
    FUN_004f1ba0(param_1,local_50,*(undefined4 *)(iVar16 + 8));
    local_8._0_1_ = 0x89;
    uStack_22c = CONCAT44(0x74760c,(uint *)uStack_22c);
    FUN_00989020();
    local_8._0_1_ = 0;
    uStack_22c = CONCAT44(0x747617,(uint *)uStack_22c);
    FUN_00408ad0();
    param_3 = (uint *)&uStack_22c;
    uStack_22c = *(undefined8 *)(iVar16 + 0x88);
    FUN_004f22e0(param_1,local_dc);
    local_8._0_1_ = 0x8a;
  }
  else {
    pcVar14 = "income";
    pbVar9 = local_a4;
    do {
      bVar12 = *pbVar9;
      bVar17 = bVar12 < (byte)*pcVar14;
      if (bVar12 != *pcVar14) {
LAB_00746454:
        iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_00746459;
      }
      if (bVar12 == 0) break;
      bVar12 = pbVar9[1];
      bVar17 = bVar12 < (byte)pcVar14[1];
      if (bVar12 != pcVar14[1]) goto LAB_00746454;
      pbVar9 = pbVar9 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar12 != 0);
    iVar10 = 0;
LAB_00746459:
    if (iVar10 == 0) goto LAB_007474d4;
    pcVar14 = "produced";
    pbVar9 = local_a4;
    do {
      bVar12 = *pbVar9;
      bVar17 = bVar12 < (byte)*pcVar14;
      if (bVar12 != *pcVar14) {
LAB_00746488:
        iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_0074648d;
      }
      if (bVar12 == 0) break;
      bVar12 = pbVar9[1];
      bVar17 = bVar12 < (byte)pcVar14[1];
      if (bVar12 != pcVar14[1]) goto LAB_00746488;
      pbVar9 = pbVar9 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar12 != 0);
    iVar10 = 0;
LAB_0074648d:
    if (iVar10 == 0) goto LAB_007474d4;
    pcVar14 = "employment_ratio";
    pbVar9 = local_a4;
    do {
      bVar12 = *pbVar9;
      bVar17 = bVar12 < (byte)*pcVar14;
      if (bVar12 != *pcVar14) {
LAB_007464c0:
        iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_007464c5;
      }
      if (bVar12 == 0) break;
      bVar12 = pbVar9[1];
      bVar17 = bVar12 < (byte)pcVar14[1];
      if (bVar12 != pcVar14[1]) goto LAB_007464c0;
      pbVar9 = pbVar9 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar12 != 0);
    iVar10 = 0;
LAB_007464c5:
    if (iVar10 != 0) {
      pcVar14 = "rgo_population";
      pbVar9 = local_a4;
      do {
        bVar12 = *pbVar9;
        bVar17 = bVar12 < (byte)*pcVar14;
        if (bVar12 != *pcVar14) {
LAB_007464f4:
          iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_007464f9;
        }
        if (bVar12 == 0) break;
        bVar12 = pbVar9[1];
        bVar17 = bVar12 < (byte)pcVar14[1];
        if (bVar12 != pcVar14[1]) goto LAB_007464f4;
        pbVar9 = pbVar9 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar12 != 0);
      iVar10 = 0;
LAB_007464f9:
      if (iVar10 != 0) {
        pcVar14 = "rgo_percent";
        pbVar9 = local_a4;
        do {
          bVar12 = *pbVar9;
          bVar17 = bVar12 < (byte)*pcVar14;
          if (bVar12 != *pcVar14) {
LAB_00746528:
            iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_0074652d;
          }
          if (bVar12 == 0) break;
          bVar12 = pbVar9[1];
          bVar17 = bVar12 < (byte)pcVar14[1];
          if (bVar12 != pcVar14[1]) goto LAB_00746528;
          pbVar9 = pbVar9 + 2;
          pcVar14 = pcVar14 + 2;
        } while (bVar12 != 0);
        iVar10 = 0;
LAB_0074652d:
        if (iVar10 != 0) {
          pcVar14 = "crime_icon";
          pbVar9 = local_a4;
          do {
            bVar12 = *pbVar9;
            bVar17 = bVar12 < (byte)*pcVar14;
            if (bVar12 != *pcVar14) {
LAB_00746560:
              iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_00746565;
            }
            if (bVar12 == 0) break;
            bVar12 = pbVar9[1];
            bVar17 = bVar12 < (byte)pcVar14[1];
            if (bVar12 != pcVar14[1]) goto LAB_00746560;
            pbVar9 = pbVar9 + 2;
            pcVar14 = pcVar14 + 2;
          } while (bVar12 != 0);
          iVar16 = 0;
LAB_00746565:
          if (iVar16 != 0) {
            pcVar14 = "crime";
            pbVar9 = local_a4;
            do {
              bVar12 = *pbVar9;
              bVar17 = bVar12 < (byte)*pcVar14;
              if (bVar12 != *pcVar14) {
LAB_00746594:
                iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                goto LAB_00746599;
              }
              if (bVar12 == 0) break;
              bVar12 = pbVar9[1];
              bVar17 = bVar12 < (byte)pcVar14[1];
              if (bVar12 != pcVar14[1]) goto LAB_00746594;
              pbVar9 = pbVar9 + 2;
              pcVar14 = pcVar14 + 2;
            } while (bVar12 != 0);
            iVar16 = 0;
LAB_00746599:
            if (iVar16 != 0) {
              pcVar14 = "crime_name";
              pbVar9 = local_a4;
              do {
                bVar12 = *pbVar9;
                bVar17 = bVar12 < (byte)*pcVar14;
                if (bVar12 != *pcVar14) {
LAB_007465c8:
                  iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                  goto LAB_007465cd;
                }
                if (bVar12 == 0) break;
                bVar12 = pbVar9[1];
                bVar17 = bVar12 < (byte)pcVar14[1];
                if (bVar12 != pcVar14[1]) goto LAB_007465c8;
                pbVar9 = pbVar9 + 2;
                pcVar14 = pcVar14 + 2;
              } while (bVar12 != 0);
              iVar16 = 0;
LAB_007465cd:
              if (iVar16 != 0) {
                pcVar14 = "crimefight_icon";
                pbVar9 = local_a4;
                do {
                  bVar12 = *pbVar9;
                  bVar17 = bVar12 < (byte)*pcVar14;
                  if (bVar12 != *pcVar14) {
LAB_00746600:
                    iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                    goto LAB_00746605;
                  }
                  if (bVar12 == 0) break;
                  bVar12 = pbVar9[1];
                  bVar17 = bVar12 < (byte)pcVar14[1];
                  if (bVar12 != pcVar14[1]) goto LAB_00746600;
                  pbVar9 = pbVar9 + 2;
                  pcVar14 = pcVar14 + 2;
                } while (bVar12 != 0);
                iVar16 = 0;
LAB_00746605:
                if (iVar16 == 0) {
LAB_0074728c:
                  param_3 = (uint *)&uStack_22c;
                  uStack_22c._4_4_ = (uint *)0x0;
                  uStack_22c._0_1_ = bVar12;
                  piVar5 = (int *)FUN_004bada0();
                  iVar16 = *piVar5;
                  FUN_00401000();
                  iVar10 = FUN_00b31c00();
                  uVar8 = __alldiv((longlong)iVar10 * (longlong)iVar16);
                  uStack_22c = CONCAT44(uStack_22c._4_4_,uVar8);
                  uVar8 = FUN_00988a50();
                  uStack_22c = CONCAT44(uVar8,local_50);
                  local_8._0_1_ = 0x93;
                  FUN_0042c180();
                  uStack_22c = 0xffffffff00000000;
                  local_8._0_1_ = 0x94;
                  FUN_00408ed0();
                  uStack_22c = CONCAT44(0x747313,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0;
                  uStack_22c = CONCAT44(0x747321,(uint *)uStack_22c);
                  FUN_00408ad0();
                  uStack_22c = CONCAT44(local_178,param_1[9]);
                  FUN_004baf50();
                  local_8._0_1_ = 0x95;
                }
                else {
                  pcVar14 = "crimefight_percent";
                  pbVar9 = local_a4;
                  do {
                    bVar12 = *pbVar9;
                    bVar17 = bVar12 < (byte)*pcVar14;
                    if (bVar12 != *pcVar14) {
LAB_00746634:
                      iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_00746639;
                    }
                    if (bVar12 == 0) break;
                    bVar12 = pbVar9[1];
                    bVar17 = bVar12 < (byte)pcVar14[1];
                    if (bVar12 != pcVar14[1]) goto LAB_00746634;
                    pbVar9 = pbVar9 + 2;
                    pcVar14 = pcVar14 + 2;
                  } while (bVar12 != 0);
                  iVar16 = 0;
LAB_00746639:
                  if (iVar16 == 0) goto LAB_0074728c;
                  pcVar14 = "total_population_icon";
                  pbVar9 = local_a4;
                  do {
                    bVar12 = *pbVar9;
                    bVar17 = bVar12 < (byte)*pcVar14;
                    if (bVar12 != *pcVar14) {
LAB_00746668:
                      iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_0074666d;
                    }
                    if (bVar12 == 0) break;
                    bVar12 = pbVar9[1];
                    bVar17 = bVar12 < (byte)pcVar14[1];
                    if (bVar12 != pcVar14[1]) goto LAB_00746668;
                    pbVar9 = pbVar9 + 2;
                    pcVar14 = pcVar14 + 2;
                  } while (bVar12 != 0);
                  iVar16 = 0;
LAB_0074666d:
                  if (iVar16 == 0) {
LAB_00747205:
                    uStack_22c = CONCAT44(0x747212,(uint *)uStack_22c);
                    FUN_009885d0();
                    uStack_22c = CONCAT44(local_34,local_b8);
                    local_8._0_1_ = 0x96;
                    FUN_009a8ee0();
                    local_8._0_1_ = 0x97;
                    uStack_22c = CONCAT44(0x747230,(uint *)uStack_22c);
                    iVar16 = FUN_00475500();
                    uStack_22c = *(undefined8 *)(iVar16 + 0x74);
                    FUN_009a9880();
                    uStack_22c = 0xffffffff00000000;
                    local_8._0_1_ = 0x98;
                    FUN_00408ed0();
                    uStack_22c = CONCAT44(0x74726c,(uint *)uStack_22c);
                    FUN_00408ad0();
                    local_8._0_1_ = 0x96;
                    uStack_22c = CONCAT44(local_b8,0x74727c);
                    FUN_009a9740();
                    local_8._0_1_ = 0;
                    uStack_22c = CONCAT44(0x747287,(uint *)uStack_22c);
                    FUN_00408ad0();
                    goto LAB_00748434;
                  }
                  pcVar14 = "total_population";
                  pbVar9 = local_a4;
                  do {
                    bVar12 = *pbVar9;
                    bVar17 = bVar12 < (byte)*pcVar14;
                    if (bVar12 != *pcVar14) {
LAB_007466a0:
                      iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_007466a5;
                    }
                    if (bVar12 == 0) break;
                    bVar12 = pbVar9[1];
                    bVar17 = bVar12 < (byte)pcVar14[1];
                    if (bVar12 != pcVar14[1]) goto LAB_007466a0;
                    pbVar9 = pbVar9 + 2;
                    pcVar14 = pcVar14 + 2;
                  } while (bVar12 != 0);
                  iVar16 = 0;
LAB_007466a5:
                  if (iVar16 == 0) goto LAB_00747205;
                  uStack_22c = CONCAT44("supply_limit",local_a4);
                  iVar16 = FUN_00aafe90();
                  puVar13 = param_1;
                  if (iVar16 != 0) {
                    uStack_22c = CONCAT44(DAT_012588e8 + 0x2d7,local_50);
                    FUN_004b3e00();
                    uStack_22c = 0xffffffff00000000;
                    local_8._0_1_ = 0x99;
                    FUN_00408ed0();
                    local_8._0_1_ = 0;
                    uStack_22c = CONCAT44(0x746700,(uint *)uStack_22c);
                    FUN_00408ad0();
                    goto LAB_00748434;
                  }
                  pcVar14 = "migration_icon";
                  pbVar9 = pbVar11;
                  do {
                    bVar12 = *pbVar9;
                    bVar17 = bVar12 < (byte)*pcVar14;
                    if (bVar12 != *pcVar14) {
LAB_00746730:
                      iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_00746735;
                    }
                    if (bVar12 == 0) break;
                    bVar12 = pbVar9[1];
                    bVar17 = bVar12 < (byte)pcVar14[1];
                    if (bVar12 != pcVar14[1]) goto LAB_00746730;
                    pbVar9 = pbVar9 + 2;
                    pcVar14 = pcVar14 + 2;
                  } while (bVar12 != 0);
                  iVar16 = 0;
LAB_00746735:
                  if (iVar16 == 0) {
LAB_00747077:
                    local_e0 = DAT_012588e8;
                    local_a0 = 0;
                    local_54 = (int *)0x0;
                    param_3 = (uint *)0x0;
                    uStack_22c = CONCAT44(0x747096,(uint *)uStack_22c);
                    local_5c = (int *)(**(code **)(*DAT_012588e8 + 0x18))();
                    if (0 < (int)local_5c) {
                      do {
                        local_68[0] = (undefined1 *)local_e0[0x304];
                        uStack_22c = CONCAT44(*(undefined4 *)(param_1[9] + 0x58),0x7470c2);
                        iVar16 = FUN_004450f0();
                        uStack_22c = CONCAT44(param_3,0x7470d2);
                        local_68[0] = (undefined1 *)FUN_004450f0();
                        local_a0 = local_a0 + iVar16;
                        local_54 = (int *)((int)local_54 + (int)local_68[0]);
                        if ((iVar16 != 0) || (local_68[0] != (undefined1 *)0x0)) {
                          uStack_22c = CONCAT44(local_50,0x747107);
                          (**(code **)(**(int **)(local_e0[0x2b3] + (int)param_3 * 4) + 0x1c))();
                          local_8._0_1_ = 0x9a;
                          uStack_22c = CONCAT44(0x747116,(uint *)uStack_22c);
                          FUN_00989020();
                          local_8._0_1_ = 0;
                          uStack_22c = CONCAT44(0x747121,(uint *)uStack_22c);
                          FUN_00408ad0();
                          uStack_22c = CONCAT44(0x74712e,(uint *)uStack_22c);
                          FUN_009885d0();
                          local_8._0_1_ = 0x9b;
                          uStack_22c = CONCAT44(0x74713d,(uint *)uStack_22c);
                          FUN_00989020();
                          local_8._0_1_ = 0;
                          uStack_22c = CONCAT44(0x747148,(uint *)uStack_22c);
                          FUN_00408ad0();
                          uStack_22c = CONCAT44(local_50,0x747156);
                          FUN_009c95b0();
                          local_8._0_1_ = 0x9c;
                          uStack_22c = CONCAT44(0x747162,(uint *)uStack_22c);
                          FUN_00989020();
                          local_8._0_1_ = 0;
                          uStack_22c = CONCAT44(0x74716d,(uint *)uStack_22c);
                          FUN_00408ad0();
                          uStack_22c = CONCAT44(0x74717a,(uint *)uStack_22c);
                          FUN_009885d0();
                          local_8._0_1_ = 0x9d;
                          uStack_22c = CONCAT44(0x747189,(uint *)uStack_22c);
                          FUN_00989020();
                          local_8._0_1_ = 0;
                          uStack_22c = CONCAT44(0x747194,(uint *)uStack_22c);
                          FUN_00408ad0();
                        }
                        param_3 = (uint *)((int)param_3 + 1);
                      } while ((int)param_3 < (int)local_5c);
                    }
                    uStack_22c = CONCAT44(local_dc,0x7471b9);
                    uVar8 = FUN_009c95b0();
                    uStack_22c = CONCAT44(uVar8,local_50);
                    local_8._0_1_ = 0x9e;
                    FUN_0042c180();
                    uStack_22c = 0xffffffff00000000;
                    local_8._0_1_ = 0x9f;
                    FUN_00408ed0();
                    uStack_22c = CONCAT44(0x7471f2,(uint *)uStack_22c);
                    FUN_00408ad0();
                    local_8._0_1_ = 0;
                    uStack_22c = CONCAT44(0x747200,(uint *)uStack_22c);
                    FUN_00408ad0();
                    goto LAB_00748434;
                  }
                  pcVar14 = "migration";
                  pbVar9 = pbVar11;
                  do {
                    bVar12 = *pbVar9;
                    bVar17 = bVar12 < (byte)*pcVar14;
                    if (bVar12 != *pcVar14) {
LAB_00746764:
                      iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_00746769;
                    }
                    if (bVar12 == 0) break;
                    bVar12 = pbVar9[1];
                    bVar17 = bVar12 < (byte)pcVar14[1];
                    if (bVar12 != pcVar14[1]) goto LAB_00746764;
                    pbVar9 = pbVar9 + 2;
                    pcVar14 = pcVar14 + 2;
                  } while (bVar12 != 0);
                  iVar16 = 0;
LAB_00746769:
                  if (iVar16 == 0) goto LAB_00747077;
                  pcVar14 = "growth_icon";
                  pbVar9 = pbVar11;
                  do {
                    bVar12 = *pbVar9;
                    bVar17 = bVar12 < (byte)*pcVar14;
                    if (bVar12 != *pcVar14) {
LAB_00746798:
                      iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_0074679d;
                    }
                    if (bVar12 == 0) break;
                    bVar12 = pbVar9[1];
                    bVar17 = bVar12 < (byte)pcVar14[1];
                    if (bVar12 != pcVar14[1]) goto LAB_00746798;
                    pbVar9 = pbVar9 + 2;
                    pcVar14 = pcVar14 + 2;
                  } while (bVar12 != 0);
                  iVar16 = 0;
LAB_0074679d:
                  if (iVar16 != 0) {
                    pbVar15 = &DAT_00e12f80;
                    pbVar9 = pbVar11;
                    do {
                      bVar12 = *pbVar9;
                      bVar17 = bVar12 < *pbVar15;
                      if (bVar12 != *pbVar15) {
LAB_007467d0:
                        iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                        goto LAB_007467d5;
                      }
                      if (bVar12 == 0) break;
                      bVar12 = pbVar9[1];
                      bVar17 = bVar12 < pbVar15[1];
                      if (bVar12 != pbVar15[1]) goto LAB_007467d0;
                      pbVar9 = pbVar9 + 2;
                      pbVar15 = pbVar15 + 2;
                    } while (bVar12 != 0);
                    iVar16 = 0;
LAB_007467d5:
                    if (iVar16 != 0) {
                      pcVar14 = "rebel_icon";
                      pbVar9 = pbVar11;
                      do {
                        bVar12 = *pbVar9;
                        bVar17 = bVar12 < (byte)*pcVar14;
                        if (bVar12 != *pcVar14) {
LAB_00746804:
                          iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                          goto LAB_00746809;
                        }
                        if (bVar12 == 0) break;
                        bVar12 = pbVar9[1];
                        bVar17 = bVar12 < (byte)pcVar14[1];
                        if (bVar12 != pcVar14[1]) goto LAB_00746804;
                        pbVar9 = pbVar9 + 2;
                        pcVar14 = pcVar14 + 2;
                      } while (bVar12 != 0);
                      iVar16 = 0;
LAB_00746809:
                      if (iVar16 != 0) {
                        pcVar14 = "rebel_percent";
                        pbVar9 = pbVar11;
                        do {
                          bVar12 = *pbVar9;
                          bVar17 = bVar12 < (byte)*pcVar14;
                          if (bVar12 != *pcVar14) {
LAB_00746838:
                            iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                            goto LAB_0074683d;
                          }
                          if (bVar12 == 0) break;
                          bVar12 = pbVar9[1];
                          bVar17 = bVar12 < (byte)pcVar14[1];
                          if (bVar12 != pcVar14[1]) goto LAB_00746838;
                          pbVar9 = pbVar9 + 2;
                          pcVar14 = pcVar14 + 2;
                        } while (bVar12 != 0);
                        iVar16 = 0;
LAB_0074683d:
                        if (iVar16 != 0) {
                          pcVar14 = "country_flag";
                          pbVar9 = pbVar11;
                          do {
                            bVar12 = *pbVar9;
                            bVar17 = bVar12 < (byte)*pcVar14;
                            if (bVar12 != *pcVar14) {
LAB_00746870:
                              iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                              goto LAB_00746875;
                            }
                            if (bVar12 == 0) break;
                            bVar12 = pbVar9[1];
                            bVar17 = bVar12 < (byte)pcVar14[1];
                            if (bVar12 != pcVar14[1]) goto LAB_00746870;
                            pbVar9 = pbVar9 + 2;
                            pcVar14 = pcVar14 + 2;
                          } while (bVar12 != 0);
                          iVar16 = 0;
LAB_00746875:
                          if (iVar16 != 0) {
                            pcVar14 = "open_popscreen";
                            pbVar9 = pbVar11;
                            do {
                              bVar12 = *pbVar9;
                              bVar17 = bVar12 < (byte)*pcVar14;
                              if (bVar12 != *pcVar14) {
LAB_00746937:
                                iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                                goto LAB_0074693c;
                              }
                              if (bVar12 == 0) break;
                              bVar12 = pbVar9[1];
                              bVar17 = bVar12 < (byte)pcVar14[1];
                              if (bVar12 != pcVar14[1]) goto LAB_00746937;
                              pbVar9 = pbVar9 + 2;
                              pcVar14 = pcVar14 + 2;
                            } while (bVar12 != 0);
                            iVar16 = 0;
LAB_0074693c:
                            if (iVar16 == 0) {
                              uStack_22c = CONCAT44(local_dc,0x746954);
                              uVar8 = (**(code **)(*(int *)param_1[9] + 0x1c))();
                              uStack_22c = CONCAT44(uVar8,local_50);
                              local_8._0_1_ = 0xa8;
                              FUN_0042c180();
                              uStack_22c = 0xffffffff00000000;
                              local_8._0_1_ = 0xa9;
                              FUN_00408ed0();
                              uStack_22c = CONCAT44(0x74698a,(uint *)uStack_22c);
                              FUN_00408ad0();
                              local_8._0_1_ = 0;
                              uStack_22c = CONCAT44(0x746998,(uint *)uStack_22c);
                              FUN_00408ad0();
                            }
                            else {
                              uStack_22c = CONCAT44("build_factory_button",pbVar11);
                              iVar16 = FUN_00aafe90();
                              if (iVar16 == 0) {
                                pcVar14 = "party_loyalty";
                                pbVar9 = pbVar11;
                                do {
                                  bVar12 = *pbVar9;
                                  bVar17 = bVar12 < (byte)*pcVar14;
                                  if (bVar12 != *pcVar14) {
LAB_00746a30:
                                    iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                                    goto LAB_00746a35;
                                  }
                                  if (bVar12 == 0) break;
                                  bVar12 = pbVar9[1];
                                  bVar17 = bVar12 < (byte)pcVar14[1];
                                  if (bVar12 != pcVar14[1]) goto LAB_00746a30;
                                  pbVar9 = pbVar9 + 2;
                                  pcVar14 = pcVar14 + 2;
                                } while (bVar12 != 0);
                                iVar16 = 0;
LAB_00746a35:
                                if (iVar16 == 0) {
                                  uStack_22c = CONCAT44(local_50,param_1[9]);
                                  FUN_004bd570();
                                  uStack_22c = 0xffffffff00000000;
                                  local_8._0_1_ = 0xab;
                                  FUN_00408ed0();
                                  local_8._0_1_ = 0;
                                  uStack_22c = CONCAT44(0x746a67,(uint *)uStack_22c);
                                  FUN_00408ad0();
                                }
                                else {
                                  pcVar14 = "workforce_chart";
                                  pbVar9 = pbVar11;
                                  do {
                                    bVar12 = *pbVar9;
                                    bVar17 = bVar12 < (byte)*pcVar14;
                                    if (bVar12 != *pcVar14) {
LAB_00746a93:
                                      iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                                      goto LAB_00746a98;
                                    }
                                    if (bVar12 == 0) break;
                                    bVar12 = pbVar9[1];
                                    bVar17 = bVar12 < (byte)pcVar14[1];
                                    if (bVar12 != pcVar14[1]) goto LAB_00746a93;
                                    pbVar9 = pbVar9 + 2;
                                    pcVar14 = pcVar14 + 2;
                                  } while (bVar12 != 0);
                                  iVar16 = 0;
LAB_00746a98:
                                  if (iVar16 == 0) {
                                    local_70 = CONCAT44(*(undefined4 *)(param_1[9] + 0x128),
                                                        (undefined4)local_70);
                                    uStack_22c = CONCAT44(&local_60,0x746ade);
                                    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4
                                                                                      + 4) +
                                                                             *(int *)(param_1[9] +
                                                                                     300) * 4) +
                                                                    0xcdc) + 0x58) + 0x4c))();
                                    uStack_22c = CONCAT44(local_68,&param_3);
                                    param_1 = (uint *)0x0;
                                    param_3 = (uint *)0x0;
                                    cVar4 = FUN_009e0c90();
                                    if (cVar4 != '\0') {
                                      iVar16 = 0;
                                      if (DAT_0131bb34 == 0) {
                                        uStack_22c = 0x18800746b19;
                                        local_68[0] = (undefined1 *)FUN_00aae9af();
                                        local_8._0_1_ = 0xac;
                                        if (local_68[0] == (undefined1 *)0x0) {
                                          uVar8 = 0;
                                        }
                                        else {
                                          uStack_22c = CONCAT44(0x746b2e,(uint *)uStack_22c);
                                          uVar8 = FUN_0041a160();
                                        }
                                        local_8._0_1_ = 0;
                                        uStack_22c = CONCAT44(uVar8,0x746b3b);
                                        FUN_00423700();
                                      }
                                      iVar10 = *(int *)(DAT_0131bb34 + 0x10) -
                                               *(int *)(DAT_0131bb34 + 0xc) >> 2;
                                      if (0 < iVar10) {
                                        do {
                                          local_68[0] = *(undefined1 **)
                                                         (local_54[0x14] + iVar16 * 4);
                                          if (local_68[0] != (undefined1 *)0x0) {
                                            if (param_1 == param_3) {
                                              if (DAT_0131bb34 == 0) {
                                                uStack_22c = 0x18800746b85;
                                                param_1 = (uint *)FUN_00aae9af();
                                                local_8._0_1_ = 0xad;
                                                if (param_1 == (uint *)0x0) {
                                                  uVar8 = 0;
                                                }
                                                else {
                                                  uStack_22c = CONCAT44(0x746b9a,(uint *)uStack_22c)
                                                  ;
                                                  uVar8 = FUN_0041a160();
                                                }
                                                local_8._0_1_ = 0;
                                                uStack_22c = CONCAT44(uVar8,0x746ba7);
                                                FUN_00423700();
                                              }
                                              if (*(int *)(DAT_0131bb34 + 0x10) -
                                                  *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar16) {
                                                uStack_22c = CONCAT44(0x746bbf,(uint *)uStack_22c);
                                                uVar8 = FUN_0096bb70();
                                              }
                                              else {
                                                uVar8 = *(undefined4 *)
                                                         (*(int *)(DAT_0131bb34 + 0xc) + iVar16 * 4)
                                                ;
                                              }
                                              uStack_22c = CONCAT44(0x746bd6,(uint *)uStack_22c);
                                              FUN_009885d0();
                                              uStack_22c = CONCAT44(local_194,uVar8);
                                              local_8._0_1_ = 0xae;
                                              uVar8 = FUN_0096d650();
                                              local_8._0_1_ = 0xaf;
                                              uStack_22c = CONCAT44(local_178,0x746c0a);
                                              FUN_009888f0();
                                              local_8._0_1_ = 0xb0;
                                              uStack_22c = CONCAT44(local_34,0x746c1e);
                                              FUN_00988f20();
                                              local_8._0_1_ = 0xb1;
                                              uStack_22c = CONCAT44(uVar8,0x746c2d);
                                              FUN_00988f20();
                                              local_8._0_1_ = 0xb2;
LAB_00746c31:
                                              uStack_22c = 0xffffffff00000000;
                                              FUN_00408ed0();
                                              uStack_22c = CONCAT44(0x746c48,(uint *)uStack_22c);
                                              FUN_00408ad0();
                                              uStack_22c = CONCAT44(0x746c53,(uint *)uStack_22c);
                                              FUN_00408ad0();
                                              uStack_22c = CONCAT44(0x746c5e,(uint *)uStack_22c);
                                              FUN_00408ad0();
                                              uStack_22c = CONCAT44(0x746c69,(uint *)uStack_22c);
                                              FUN_00408ad0();
                                              local_8 = (uint)local_8._1_3_ << 8;
                                              uStack_22c = CONCAT44(0x746c74,(uint *)uStack_22c);
                                              FUN_00408ad0();
                                              uStack_22c._4_4_ = (uint *)param_2;
LAB_00746c78:
                                              uStack_22c = CONCAT44(uStack_22c._4_4_,0x746c83);
                                              param_2 = uStack_22c._4_4_;
                                              FUN_0040c830();
                                              uStack_22c = CONCAT44(0x746c8a,(uint *)uStack_22c);
                                              FUN_00459820();
                                              ExceptionList = local_10;
                                              return param_2;
                                            }
                                            param_1 = (uint *)((int)param_1 + 1);
                                          }
                                          iVar16 = iVar16 + 1;
                                        } while (iVar16 < iVar10);
                                      }
                                    }
                                  }
                                  else {
                                    pcVar14 = "culture_chart";
                                    pbVar9 = pbVar11;
                                    do {
                                      bVar12 = *pbVar9;
                                      bVar17 = bVar12 < (byte)*pcVar14;
                                      if (bVar12 != *pcVar14) {
LAB_00746cc7:
                                        iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                                        goto LAB_00746ccc;
                                      }
                                      if (bVar12 == 0) break;
                                      bVar12 = pbVar9[1];
                                      bVar17 = bVar12 < (byte)pcVar14[1];
                                      if (bVar12 != pcVar14[1]) goto LAB_00746cc7;
                                      pbVar9 = pbVar9 + 2;
                                      pcVar14 = pcVar14 + 2;
                                    } while (bVar12 != 0);
                                    iVar16 = 0;
LAB_00746ccc:
                                    if (iVar16 == 0) {
                                      local_70 = CONCAT44(*(undefined4 *)(param_1[9] + 0x128),
                                                          (undefined4)local_70);
                                      uStack_22c = CONCAT44(&local_60,0x746d12);
                                      (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(
                                                  DAT_012587e4 + 4) + *(int *)(param_1[9] + 300) * 4
                                                  ) + 0xcdc) + 0x58) + 0x4c))();
                                      uStack_22c = CONCAT44(local_68,&param_3);
                                      param_1 = (uint *)0x0;
                                      param_3 = (uint *)0x0;
                                      cVar4 = FUN_009e0c90();
                                      if (cVar4 != '\0') {
                                        iVar16 = 0;
                                        iVar10 = *(int *)(DAT_012587e8 + 0x10) -
                                                 *(int *)(DAT_012587e8 + 0xc) >> 2;
                                        if (0 < iVar10) {
                                          local_68[0] = (undefined1 *)local_54[0x12];
                                          do {
                                            if (*(int *)(local_68[0] + iVar16 * 4) != 0) {
                                              if (param_1 == param_3) {
                                                uStack_22c = CONCAT44(0x746d7c,(uint *)uStack_22c);
                                                param_1 = (uint *)FUN_0055f660();
                                                uStack_22c = CONCAT44(0x746d8c,(uint *)uStack_22c);
                                                FUN_009885d0();
                                                local_8._0_1_ = 0xb3;
                                                uStack_22c = CONCAT44(param_1,0x746d9f);
                                                param_1 = (uint *)FUN_00974c50();
                                                local_8._0_1_ = 0xb4;
                                                uStack_22c = CONCAT44(local_178,0x746dc2);
                                                FUN_009888f0();
                                                local_8._0_1_ = 0xb5;
                                                uStack_22c = CONCAT44(local_34,0x746dd7);
                                                FUN_00988f20();
                                                local_8._0_1_ = 0xb6;
                                                uStack_22c = CONCAT44(param_1,0x746de9);
                                                FUN_00988f20();
                                                uStack_22c = 0xffffffff00000000;
                                                local_8._0_1_ = 0xb7;
                                                FUN_00408ed0();
                                                uStack_22c = CONCAT44(0x746e03,(uint *)uStack_22c);
                                                FUN_00408ad0();
                                                uStack_22c = CONCAT44(0x746e0e,(uint *)uStack_22c);
                                                FUN_00408ad0();
                                                uStack_22c = CONCAT44(0x746e19,(uint *)uStack_22c);
                                                FUN_00408ad0();
                                                uStack_22c = CONCAT44(0x746e24,(uint *)uStack_22c);
                                                FUN_00408ad0();
                                                local_8 = (uint)local_8._1_3_ << 8;
                                                uStack_22c = CONCAT44(0x746e2f,(uint *)uStack_22c);
                                                FUN_00408ad0();
                                                uStack_22c._4_4_ = (uint *)param_2;
                                                goto LAB_00746c78;
                                              }
                                              param_1 = (uint *)((int)param_1 + 1);
                                            }
                                            iVar16 = iVar16 + 1;
                                          } while (iVar16 < iVar10);
                                        }
                                      }
                                    }
                                    else {
                                      pcVar14 = "ideology_chart";
                                      do {
                                        bVar12 = *pbVar11;
                                        bVar17 = bVar12 < (byte)*pcVar14;
                                        if (bVar12 != *pcVar14) {
LAB_00746e60:
                                          iVar16 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                                          goto LAB_00746e65;
                                        }
                                        if (bVar12 == 0) break;
                                        bVar12 = pbVar11[1];
                                        bVar17 = bVar12 < (byte)pcVar14[1];
                                        if (bVar12 != pcVar14[1]) goto LAB_00746e60;
                                        pbVar11 = pbVar11 + 2;
                                        pcVar14 = pcVar14 + 2;
                                      } while (bVar12 != 0);
                                      iVar16 = 0;
LAB_00746e65:
                                      if (iVar16 == 0) {
                                        local_70 = CONCAT44(*(undefined4 *)(param_1[9] + 0x128),
                                                            (undefined4)local_70);
                                        uStack_22c = CONCAT44(&local_60,0x746eab);
                                        (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(
                                                  DAT_012587e4 + 4) + *(int *)(param_1[9] + 300) * 4
                                                  ) + 0xcdc) + 0x58) + 0x4c))();
                                        uStack_22c = CONCAT44(local_68,&param_3);
                                        param_1 = (uint *)0x0;
                                        param_3 = (uint *)0x0;
                                        cVar4 = FUN_009e0c90();
                                        if (cVar4 != '\0') {
                                          iVar16 = 0;
                                          iVar10 = *(int *)(DAT_01258a3c + 0x10) -
                                                   *(int *)(DAT_01258a3c + 0xc) >> 2;
                                          if (0 < iVar10) {
                                            local_68[0] = (undefined1 *)local_54[9];
                                            do {
                                              if (*(int *)(local_68[0] + iVar16 * 4) != 0) {
                                                if (param_1 == param_3) {
                                                  piVar5 = *(int **)(*(int *)(DAT_01258a3c + 0xc) +
                                                                    iVar16 * 4);
                                                  param_1 = (uint *)(((float)*(int *)(local_68[0] +
                                                                                     iVar16 * 4) *
                                                                     100.0) / (float)*local_54);
                                                  uStack_22c = CONCAT44(0x746f5a,(uint *)uStack_22c)
                                                  ;
                                                  FUN_009885d0();
                                                  local_8._0_1_ = 0xb8;
                                                  uStack_22c = CONCAT44(local_194,0x746f6e);
                                                  uVar8 = (**(code **)(*piVar5 + 0x18))();
                                                  local_8._0_1_ = 0xb9;
                                                  uStack_22c = ZEXT48(local_178);
                                                  FUN_00988d00();
                                                  local_8._0_1_ = 0xba;
                                                  uStack_22c = CONCAT44(local_34,0x746f9a);
                                                  FUN_00988f20();
                                                  local_8._0_1_ = 0xbb;
                                                  uStack_22c = CONCAT44(uVar8,0x746fa9);
                                                  FUN_00988f20();
                                                  local_8._0_1_ = 0xbc;
                                                  goto LAB_00746c31;
                                                }
                                                param_1 = (uint *)((int)param_1 + 1);
                                              }
                                              iVar16 = iVar16 + 1;
                                            } while (iVar16 < iVar10);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                local_70 = CONCAT44(DAT_012588e8[0x2d7],(undefined4)local_70);
                                uStack_22c = CONCAT44(*(undefined4 *)(param_1[9] + 0x188),local_50);
                                FUN_0052e9f0();
                                uStack_22c = 0xffffffff00000000;
                                local_8._0_1_ = 0xaa;
                                FUN_00408ed0();
                                local_8._0_1_ = 0;
                                uStack_22c = CONCAT44(0x746a04,(uint *)uStack_22c);
                                FUN_00408ad0();
                              }
                            }
                            goto LAB_00748434;
                          }
                          uStack_22c = CONCAT44(0x746890,(uint *)uStack_22c);
                          (**(code **)(*param_3 + 0x80))();
                          uStack_22c = CONCAT44(0x7468a6,(uint *)uStack_22c);
                          FUN_009885d0();
                          local_8._0_1_ = 0xa4;
                          uStack_22c = CONCAT44(0x7468b7,(uint *)uStack_22c);
                          uVar8 = FUN_004f97a0();
                          local_8._0_1_ = 0xa5;
                          uStack_22c = CONCAT44(uVar8,0x7468cc);
                          FUN_00988fa0();
                          local_8._0_1_ = 0xa6;
                          uStack_22c = CONCAT44(local_34,0x7468e0);
                          FUN_00988f20();
                          uStack_22c = 0xffffffff00000000;
                          local_8 = CONCAT31(local_8._1_3_,0xa7);
                          FUN_00408ed0();
                          uStack_22c = CONCAT44(0x7468fa,(uint *)uStack_22c);
                          FUN_00408ad0();
                          uStack_22c = CONCAT44(0x746905,(uint *)uStack_22c);
                          FUN_00408ad0();
                          goto LAB_00746265;
                        }
                      }
                      uStack_22c = CONCAT44(local_50,param_1[9]);
                      FUN_004b6510();
                      uStack_22c = 0xffffffff00000000;
                      local_8._0_1_ = 0xa3;
                      FUN_00408ed0();
                      local_8._0_1_ = 0;
                      uStack_22c = CONCAT44(0x746fe0,(uint *)uStack_22c);
                      FUN_00408ad0();
                      goto LAB_00748434;
                    }
                  }
                  uStack_22c = CONCAT44(local_dc,0x746ffa);
                  uVar8 = FUN_009c95b0();
                  uStack_22c = CONCAT44(uVar8,local_50);
                  local_8._0_1_ = 0xa0;
                  FUN_0042c180();
                  uStack_22c = 0xffffffff00000000;
                  local_8._0_1_ = 0xa1;
                  FUN_00408ed0();
                  uStack_22c = CONCAT44(0x747033,(uint *)uStack_22c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0;
                  uStack_22c = CONCAT44(0x747041,(uint *)uStack_22c);
                  FUN_00408ad0();
                  uStack_22c = CONCAT44(local_178,puVar13[9]);
                  FUN_004bcc40();
                  local_8._0_1_ = 0xa2;
                }
                uStack_22c = 0xffffffff00000000;
                FUN_00408ed0();
                local_8._0_1_ = 0;
                uStack_22c = CONCAT44(0x747072,(uint *)uStack_22c);
                FUN_00408ad0();
                goto LAB_00748434;
              }
            }
          }
          uStack_22c = CONCAT44(0x747350,(uint *)uStack_22c);
          cVar4 = (**(code **)(**(int **)(param_1[9] + 800) + 0x38))();
          if (cVar4 != '\0') {
            uStack_22c = CONCAT44(0x747365,(uint *)uStack_22c);
            FUN_009885d0();
            puVar13 = param_1;
            local_8._0_1_ = 0x8e;
            uStack_22c._4_4_ = (uint *)local_dc;
            uStack_22c._0_4_ = (uint *)0x747383;
            (**(code **)(**(int **)(param_1[9] + 800) + 0x18))();
            local_8._0_1_ = 0x8f;
            uStack_22c._0_4_ = local_34;
            FUN_00988f20();
            uStack_22c._0_4_ = (uint *)0xffffffff;
            local_8._0_1_ = 0x90;
            FUN_00408ed0();
            uStack_22c._0_4_ = (uint *)0x7473ae;
            FUN_00408ad0();
            uStack_22c._0_4_ = (uint *)0x7473b9;
            FUN_00408ad0();
            local_8._0_1_ = 0;
            uStack_22c._0_4_ = (uint *)0x7473c4;
            FUN_00408ad0();
            uStack_22c = CONCAT44(uStack_22c._4_4_,local_178);
            (**(code **)(**(int **)(puVar13[9] + 800) + 0x1c))();
            local_8._0_1_ = 0x91;
            FUN_00989020();
            local_8._0_1_ = 0;
            FUN_00408ad0();
            (**(code **)(**(int **)(puVar13[9] + 800) + 0x34))();
            uStack_22c = 0xffffffff00000000;
            local_8._0_1_ = 0x92;
            FUN_00408ed0();
            local_8._0_1_ = 0;
            uStack_22c = CONCAT44(0x747430,(uint *)uStack_22c);
            FUN_00408ad0();
          }
          goto LAB_00748434;
        }
      }
    }
    uStack_22c = CONCAT44(local_50,0x747443);
    FUN_00753540();
    uStack_22c = 0xffffffff00000000;
    local_8._0_1_ = 0x8b;
    FUN_00408ed0();
    local_8._0_1_ = 0;
    uStack_22c = CONCAT44(0x747464,(uint *)uStack_22c);
    FUN_00408ad0();
    param_1 = (uint *)&uStack_22c;
    uStack_22c = *(undefined8 *)(iVar16 + 0x88);
    FUN_004ef710();
    uStack_22c = 0xffffffff00000000;
    local_8._0_1_ = 0x8c;
    FUN_00408ed0();
    local_8._0_1_ = 0;
    uStack_22c = CONCAT44(0x7474ae,(uint *)uStack_22c);
    FUN_00408ad0();
    uStack_22c = CONCAT44(0x7474be,(uint *)uStack_22c);
    FUN_00989030();
    uStack_22c = CONCAT44(local_dc,iVar16);
    FUN_004c1ac0();
    local_8._0_1_ = 0x8d;
  }
  uStack_22c = CONCAT44(0x74765e,(uint *)uStack_22c);
  FUN_00989020();
  local_8._0_1_ = 0;
  uStack_22c = CONCAT44(0x74766c,(uint *)uStack_22c);
  FUN_00408ad0();
LAB_00748434:
  uVar8 = param_2;
  uStack_22c = CONCAT44(param_2,0x748443);
  FUN_0040c830();
  uStack_22c = CONCAT44(0x74844a,(uint *)uStack_22c);
  FUN_00459820();
  ExceptionList = local_10;
  return uVar8;
  while( true ) {
    piVar6 = (int *)*piVar5;
    piVar5 = (int *)piVar5[2];
    uStack_22c = CONCAT44(0x747b66,(uint *)uStack_22c);
    cVar4 = (**(code **)(*piVar6 + 0x30))();
    if ((cVar4 != '\0') && (piVar6[0x16] == *(int *)(local_54[7] + local_18 * 4))) break;
joined_r0x00747b52:
    if (piVar5 == (int *)0x0) goto LAB_00748434;
  }
  uStack_22c = CONCAT44(param_1[9],local_1fc);
  (**(code **)(piVar6[0xc] + 0xc))();
  local_8._0_1_ = 0xc4;
  goto LAB_00748419;
}

