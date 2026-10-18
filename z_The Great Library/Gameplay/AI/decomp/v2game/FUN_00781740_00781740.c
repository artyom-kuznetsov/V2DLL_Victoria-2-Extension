// FUN_00781740 @ 00781740 body=[[00781740, 00781895] [00781899, 007818e1] [007818e5, 0078190a] [0078190e, 00781978] [0078197c, 007819a1] [007819a5, 007819c4] [007819cd, 0078243c] [00782440, 00782949] [0078294d, 00782995] [00782999, 007829be] [007829c7, 00782af9] [00782afd, 00782b25] [00782b29, 00782b46] [00782b4a, 00782b67] [00782b6b, 00782b8b] [00782b8f, 00782bae] [00782bb7, 00782c12] [00782c1b, 007832c2]]


undefined4 FUN_00781740(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  char cVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uStack_268;
  undefined1 local_254 [28];
  undefined1 local_238 [56];
  undefined1 local_200 [100];
  undefined1 local_19c [28];
  int local_180;
  int local_17c;
  undefined1 local_178 [16];
  int local_168;
  undefined4 local_164;
  undefined1 local_15c;
  int local_14c;
  undefined4 local_148;
  undefined1 local_140;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_118 [28];
  uint *local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  undefined4 local_d0 [5];
  uint local_bc;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined1 local_90 [4];
  uint local_8c [8];
  int local_6c;
  uint local_68;
  int *local_60;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined4 local_24;
  undefined1 *local_20;
  char local_19;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  puStack_c = &LAB_00b89bea;
  local_10 = ExceptionList;
  local_18 = 0;
  local_164 = 0xf;
  local_148 = 0xf;
  local_12c = 0xf;
  local_168 = 0;
  local_178[0] = 0;
  local_14c = 0;
  local_15c = 0;
  local_130 = 0;
  local_140 = 0;
  local_124 = 0;
  local_120 = 1;
  local_8 = 0;
  if (*(char *)(param_1 + 0x288) == '\0') {
    uStack_268 = CONCAT44(0x7817cf,(uint *)uStack_268);
    ExceptionList = &local_10;
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x44))();
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    pcVar12 = "combat_may_retreat";
    do {
      bVar1 = *pbVar6;
      bVar14 = bVar1 < (byte)*pcVar12;
      if (bVar1 != *pcVar12) {
LAB_00781800:
        iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_00781805;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar14 = bVar1 < (byte)pcVar12[1];
      if (bVar1 != pcVar12[1]) goto LAB_00781800;
      pbVar6 = pbVar6 + 2;
      pcVar12 = pcVar12 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_00781805:
    if (iVar7 == 0) {
      uStack_268 = 0xf00e158ec;
      local_68 = 0xf;
      local_8c[4] = local_8c[4] & 0xffffff00;
      local_6c = iVar7;
      FUN_00409350();
      uStack_268 = CONCAT44(local_8c + 4,local_90);
      local_8._0_1_ = 1;
      FUN_009a8ee0();
      local_8._0_1_ = 2;
      uStack_268 = CONCAT44(0x781848,(uint *)uStack_268);
      iVar7 = FUN_00475500();
      uStack_268 = *(undefined8 *)(iVar7 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
      uStack_268 = 0xffffffff00000000;
      local_8._0_1_ = 3;
      FUN_00408ed0();
      if (0xf < local_a0) {
        uStack_268 = CONCAT44(local_b4[0],&UNK_00781896);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = local_b4[0] & 0xffffff00;
      local_8._0_1_ = 4;
      uStack_268 = CONCAT44(0x7818c1,(uint *)uStack_268);
      FUN_009adb70();
      if (local_8c[0] != 0) {
        uStack_268 = CONCAT44(0x7818d6,(uint *)uStack_268);
        FUN_009e6a80();
        uStack_268 = CONCAT44(local_8c[0],&UNK_007818e2);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_8c[0] = 0;
      local_8c[1] = 0;
      local_8c[2] = 0;
      if (0xf < local_68) {
        uStack_268 = CONCAT44(local_8c[4],&UNK_0078190b);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_268 = CONCAT44(local_40,0x781922);
      uVar8 = FUN_009888f0();
      uStack_268 = CONCAT44(uVar8,local_8c + 4);
      local_8._0_1_ = 5;
      FUN_0042c180();
      local_8._0_1_ = 6;
      FUN_00988fa0();
      uStack_268 = 0xffffffff00000000;
      local_8._0_1_ = 7;
      FUN_00448aa0();
      if (0xf < local_a0) {
        uStack_268 = CONCAT44(local_b4[0],&UNK_00781979);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = local_b4[0] & 0xffffff00;
      if (0xf < local_68) {
        uStack_268 = CONCAT44(local_8c[4],&UNK_007819a2);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      uVar4 = (undefined1)local_8;
      local_8._0_1_ = 0;
      local_68 = 0xf;
      local_6c = 0;
      local_8c[4] = local_8c[4] & 0xffffff00;
      if (0xf < local_2c) {
        uStack_268 = CONCAT44(local_40[0],&UNK_007819c5);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto LAB_00783294;
    }
    uStack_268 = CONCAT44(0x7819d6,(uint *)uStack_268);
    (**(code **)(*param_3 + 0x44))();
    uStack_268 = CONCAT44(0x7819e0,(uint *)uStack_268);
    cVar5 = FUN_0040b360();
    if (cVar5 == '\0') {
      uStack_268 = CONCAT44(0x7819f1,(uint *)uStack_268);
      (**(code **)(*param_3 + 0x44))();
      uStack_268 = CONCAT44(0x7819fb,(uint *)uStack_268);
      cVar5 = FUN_0040b360();
      if (cVar5 == '\0') {
        uStack_268 = CONCAT44(0x781a0c,(uint *)uStack_268);
        (**(code **)(*param_3 + 0x44))();
        uStack_268 = CONCAT44(0x781a16,(uint *)uStack_268);
        cVar5 = FUN_0040b360();
        if (cVar5 == '\0') {
          uStack_268 = CONCAT44(0x781a27,(uint *)uStack_268);
          (**(code **)(*param_3 + 0x44))();
          uStack_268 = CONCAT44(0x781a31,(uint *)uStack_268);
          cVar5 = FUN_0040b360();
          if (cVar5 == '\0') {
            uStack_268 = CONCAT44(0x781a42,(uint *)uStack_268);
            (**(code **)(*param_3 + 0x44))();
            uStack_268 = CONCAT44(0x781a4c,(uint *)uStack_268);
            cVar5 = FUN_0040b360();
            if (cVar5 != '\0') {
LAB_007826b8:
              uStack_268 = CONCAT44(local_118,0x7826d2);
              (**(code **)(**(int **)(*(int *)(*(int *)(param_1[5] + 0x18) + 0x5c) + 0x14) + 0x18))
                        ();
              uStack_268 = 0xffffffff00000000;
              local_8._0_1_ = 0x12;
              FUN_00408ed0();
              local_8._0_1_ = 0;
              uStack_268 = CONCAT44(0x7826f5,(uint *)uStack_268);
              FUN_00408ad0();
              uVar4 = (undefined1)local_8;
              if (*(int *)(*(int *)(*(int *)(*(int *)(param_1[5] + 0x18) + 0x5c) + 0x14) + 0x94) !=
                  0) {
                uStack_268 = (ulonglong)*(uint *)(param_1[5] + 0x18) << 0x20;
                __allmul();
                uStack_268 = uStack_268 & 0xffffffff00000000;
                uVar8 = __alldiv();
                uStack_268 = CONCAT44(uVar8,local_19c);
                uVar8 = FUN_00988970();
                uStack_268 = CONCAT44(uVar8,local_118);
                local_8._0_1_ = 0x13;
                FUN_0042c180();
                uStack_268 = 0xffffffff00000000;
                local_8._0_1_ = 0x14;
                FUN_00408ed0();
                uStack_268 = CONCAT44(0x782793,(uint *)uStack_268);
                FUN_00408ad0();
                local_8._0_1_ = 0;
                uStack_268 = CONCAT44(0x7827a2,(uint *)uStack_268);
                FUN_00408ad0();
                uVar4 = (undefined1)local_8;
              }
              goto LAB_00783294;
            }
            uStack_268 = CONCAT44(0x781a5d,(uint *)uStack_268);
            (**(code **)(*param_3 + 0x44))();
            uStack_268 = CONCAT44(0x781a67,(uint *)uStack_268);
            cVar5 = FUN_0040b360();
            if (cVar5 != '\0') goto LAB_007826b8;
            uStack_268 = CONCAT44(0x781a7f,(uint *)uStack_268);
            FUN_009885d0();
            local_8 = CONCAT31(local_8._1_3_,0x15);
            local_18 = 2;
            uStack_268 = CONCAT44(0x781a97,(uint *)uStack_268);
            FUN_009885d0();
            local_8 = 0x16;
            local_18 = 6;
            uStack_268._0_4_ = (uint *)0x781ab1;
            uStack_268._4_4_ = local_5c;
            piVar9 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))();
            uStack_268 = CONCAT44(uStack_268._4_4_,local_b4);
            piVar9 = (int *)(**(code **)(*piVar9 + 0x44))();
            if (param_3 == piVar9) {
LAB_00781b22:
              local_19 = '\x01';
            }
            else {
              FUN_009885d0();
              local_8 = 0x17;
              local_18 = 0xe;
              FUN_009885d0();
              local_8 = 0x18;
              local_18 = 0x1e;
              piVar9 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))();
              piVar9 = (int *)(**(code **)(*piVar9 + 0x3c))(local_ec);
              local_19 = '\0';
              if (param_3 == piVar9) goto LAB_00781b22;
            }
            if ((local_18 & 0x10) != 0) {
              local_18 = local_18 & 0xffffffef;
              FUN_00408ad0();
            }
            if ((local_18 & 8) != 0) {
              local_18 = local_18 & 0xfffffff7;
              FUN_00408ad0();
            }
            if ((local_18 & 4) != 0) {
              local_18 = local_18 & 0xfffffffb;
              FUN_00408ad0();
            }
            local_8._0_1_ = 0;
            local_8._1_3_ = 0;
            if ((local_18 & 2) != 0) {
              local_18 = local_18 & 0xfffffffd;
              FUN_00408ad0();
            }
            if (local_19 != '\0') goto LAB_00781b87;
            FUN_009885d0();
            local_8 = CONCAT31(local_8._1_3_,0x19);
            local_18 = local_18 | 0x20;
            FUN_009885d0();
            local_8 = 0x1a;
            local_18 = local_18 | 0x40;
            piVar9 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))();
            piVar9 = (int *)(**(code **)(*piVar9 + 0x44))(local_b4);
            if (param_3 == piVar9) {
LAB_00781c8a:
              local_19 = '\x01';
            }
            else {
              FUN_009885d0();
              local_8 = 0x1b;
              local_18 = local_18 | 0x80;
              FUN_009885d0();
              local_8 = 0x1c;
              local_18 = local_18 | 0x100;
              piVar9 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))();
              piVar9 = (int *)(**(code **)(*piVar9 + 0x3c))(local_ec);
              local_19 = '\0';
              if (param_3 == piVar9) goto LAB_00781c8a;
            }
            if ((local_18 & 0x100) != 0) {
              local_18 = local_18 & 0xfffffeff;
              FUN_00408ad0();
            }
            if ((local_18 & 0x80) != 0) {
              local_18 = local_18 & 0xffffff7f;
              FUN_00408ad0();
            }
            if ((local_18 & 0x40) != 0) {
              local_18 = local_18 & 0xffffffbf;
              FUN_00408ad0();
            }
            local_8._0_1_ = 0;
            local_8._1_3_ = 0;
            if ((local_18 & 0x20) != 0) {
              FUN_00408ad0();
            }
            if (local_19 != '\0') goto LAB_00781b87;
            (**(code **)(*param_3 + 0x44))();
            cVar5 = FUN_0040b360();
            if (cVar5 != '\0') {
              FUN_009885d0();
              local_8._0_1_ = 0x1d;
              piVar9 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))();
              local_8._0_1_ = 0;
              FUN_00408ad0();
              FUN_009885d0();
              local_8._0_1_ = 0x1e;
              local_60 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))(local_ec);
              local_8._0_1_ = 0;
              FUN_00408ad0();
              param_1 = (undefined4 *)0x0;
              FUN_009885d0();
              local_8._0_1_ = 0x1f;
              piVar9 = (int *)(**(code **)(*piVar9 + 0x44))();
              local_8._0_1_ = 0;
              uStack_268 = CONCAT44(0x781da3,(uint *)uStack_268);
              FUN_00408ad0();
              if (piVar9 == param_3) {
                param_1 = *(undefined4 **)(puVar2[5] + 0x10);
              }
              else {
                uStack_268 = CONCAT44(0x781dbe,(uint *)uStack_268);
                FUN_009885d0();
                local_8._0_1_ = 0x20;
                uStack_268 = CONCAT44(local_40,0x781dcf);
                piVar9 = (int *)(**(code **)(*local_60 + 0x44))();
                local_8._0_1_ = 0;
                uStack_268 = CONCAT44(0x781de0,(uint *)uStack_268);
                FUN_00408ad0();
                if (piVar9 == param_3) {
                  param_1 = *(undefined4 **)(puVar2[5] + 0x14);
                }
              }
              local_24 = 0x2d2d2d;
              local_20 = (undefined1 *)0x0;
              if ((param_1 != (undefined4 *)0x0) &&
                 (0 < (int)(*(int *)((int)param_1 + 0x38) - *(int *)((int)param_1 + 0x34) &
                           0xfffffff8U))) {
                uStack_268 = CONCAT44(0x781e1d,(uint *)uStack_268);
                iVar7 = FUN_00595b90();
                if (iVar7 == 0) {
LAB_00781e4e:
                  local_24 = **(undefined4 **)((int)param_1 + 0x34);
                  local_20 = (undefined1 *)(*(undefined4 **)((int)param_1 + 0x34))[1];
                }
                else {
                  uStack_268 = CONCAT44(0x781e28,(uint *)uStack_268);
                  iVar7 = FUN_00595b90();
                  if (*(int *)(iVar7 + 0x88) == 0) goto LAB_00781e4e;
                  uStack_268 = CONCAT44(0x781e37,(uint *)uStack_268);
                  iVar7 = FUN_00595b90();
                  local_24 = *(undefined4 *)(*(int *)(iVar7 + 0x88) + 0xc0);
                  local_20 = *(undefined1 **)(*(int *)(iVar7 + 0x88) + 0xc4);
                }
              }
              puVar3 = local_20;
              uVar4 = (undefined1)local_8;
              if (local_20 != (undefined1 *)0x0) {
                uStack_268 = CONCAT44(0x781e6f,(uint *)uStack_268);
                FUN_0093fa60();
                local_8._0_1_ = 0x21;
                uVar4 = (undefined1)local_8;
                local_8._0_1_ = 0x21;
                if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar3 * 4) + 0xa60
                                     ) + 0x3a8) != 0) {
                  uStack_268 = CONCAT44(0x781ea2,(uint *)uStack_268);
                  FUN_009885d0();
                  local_8._0_1_ = 0x22;
                  uStack_268 = CONCAT44(0x781eb3,(uint *)uStack_268);
                  FUN_009885d0();
                  local_8._0_1_ = 0x23;
                  uStack_268 = CONCAT44(local_40,1000);
                  (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar3 * 4) +
                                       0xa48) + 0x24))(local_5c,0x75);
                  local_8._0_1_ = 0x24;
                  uStack_268 = CONCAT44(local_ec,0x781efd);
                  FUN_00988f20();
                  uStack_268 = 0xffffffff00000000;
                  local_8._0_1_ = 0x25;
                  FUN_00448aa0();
                  uStack_268 = CONCAT44(0x781f18,(uint *)uStack_268);
                  FUN_00408ad0();
                  uStack_268 = CONCAT44(0x781f20,(uint *)uStack_268);
                  FUN_00408ad0();
                  uStack_268 = CONCAT44(0x781f28,(uint *)uStack_268);
                  FUN_00408ad0();
                  local_8._0_1_ = 0x21;
                  uStack_268 = CONCAT44(0x781f37,(uint *)uStack_268);
                  FUN_00408ad0();
                  uVar4 = (undefined1)local_8;
                }
                local_8._0_1_ = uVar4;
                if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar3 * 4) + 0xa60
                                     ) + 0x3b0) != 0) {
                  uStack_268 = CONCAT44(0x781f66,(uint *)uStack_268);
                  FUN_009885d0();
                  local_8._0_1_ = 0x26;
                  uStack_268 = CONCAT44(0x781f77,(uint *)uStack_268);
                  FUN_009885d0();
                  local_8._0_1_ = 0x27;
                  uStack_268 = CONCAT44(local_40,1000);
                  (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar3 * 4) +
                                       0xa48) + 0x24))(local_5c,0x76);
                  local_8._0_1_ = 0x28;
                  uStack_268 = CONCAT44(local_ec,0x781fc1);
                  FUN_00988f20();
                  uStack_268 = 0xffffffff00000000;
                  local_8._0_1_ = 0x29;
                  FUN_00448aa0();
                  uStack_268 = CONCAT44(0x781fdc,(uint *)uStack_268);
                  FUN_00408ad0();
                  uStack_268 = CONCAT44(0x781fe4,(uint *)uStack_268);
                  FUN_00408ad0();
                  uStack_268 = CONCAT44(0x781fec,(uint *)uStack_268);
                  FUN_00408ad0();
                  local_8._0_1_ = 0x21;
                  uStack_268 = CONCAT44(0x781ffb,(uint *)uStack_268);
                  FUN_00408ad0();
                }
                uStack_268 = CONCAT44(0x78200b,(uint *)uStack_268);
                FUN_009885d0();
                local_8._0_1_ = 0x2a;
                uStack_268 = CONCAT44(0x78201c,(uint *)uStack_268);
                FUN_009885d0();
                uStack_268 = CONCAT44(local_40,local_90);
                local_8._0_1_ = 0x2b;
                FUN_009a8ee0();
                local_8._0_1_ = 0x2c;
                uStack_268 = CONCAT44(0x78203a,(uint *)uStack_268);
                iVar7 = FUN_00475500();
                uStack_268 = *(undefined8 *)(iVar7 + 0x74);
                FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
                local_8._0_1_ = 0x2d;
                uStack_268 = CONCAT44(local_ec,0x782074);
                FUN_00988f20();
                uStack_268 = 0xffffffff00000000;
                local_8._0_1_ = 0x2e;
                FUN_00448aa0();
                uStack_268 = CONCAT44(0x78208f,(uint *)uStack_268);
                FUN_00408ad0();
                uStack_268 = CONCAT44(0x782097,(uint *)uStack_268);
                FUN_00408ad0();
                local_8._0_1_ = 0x2b;
                uStack_268 = CONCAT44(local_90,0x7820a7);
                FUN_009a9740();
                uStack_268 = CONCAT44(0x7820af,(uint *)uStack_268);
                FUN_00408ad0();
                local_8._0_1_ = 0x21;
                uStack_268 = CONCAT44(0x7820be,(uint *)uStack_268);
                FUN_00408ad0();
                uStack_268 = CONCAT44(0x7820cb,(uint *)uStack_268);
                FUN_009885d0();
                local_8._0_1_ = 0x2f;
                uStack_268 = CONCAT44(1,*(undefined4 *)
                                         (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                           (int)puVar3 * 4) + 0xbcc) + 0x70));
                FUN_009c8ea0();
                local_8._0_1_ = 0x30;
                uStack_268 = CONCAT44(local_40,0x782115);
                FUN_00988f20();
                uStack_268 = 0xffffffff00000000;
                local_8._0_1_ = 0x31;
                FUN_00448aa0();
                uStack_268 = CONCAT44(0x782130,(uint *)uStack_268);
                FUN_00408ad0();
                uStack_268 = CONCAT44(0x78213b,(uint *)uStack_268);
                FUN_00408ad0();
                local_8._0_1_ = 0x21;
                uStack_268 = CONCAT44(0x782147,(uint *)uStack_268);
                FUN_00408ad0();
                uStack_268 = CONCAT44(1,local_200);
                FUN_00787150(&local_24,"ARMY_TECHNOLOGY_LEVELS");
                uStack_268 = CONCAT44(param_2,0x782175);
                FUN_0040c830();
                uStack_268 = CONCAT44(0x78217c,(uint *)uStack_268);
                FUN_00459820();
                goto LAB_007832a3;
              }
              goto LAB_00783294;
            }
            (**(code **)(*param_3 + 0x44))();
            uStack_268 = CONCAT44(0x782194,(uint *)uStack_268);
            cVar5 = FUN_0040b360();
            if (cVar5 == '\0') {
              local_fc = local_8c;
              local_60 = (int *)0x1;
              do {
                uStack_268 = CONCAT44(local_5c,0x7822b4);
                uVar8 = FUN_009888f0();
                local_8._0_1_ = 0x36;
                uStack_268 = CONCAT44(uVar8,0x7822c6);
                FUN_00988fa0();
                local_8._0_1_ = 0x38;
                uStack_268 = CONCAT44(0x7822d5,(uint *)uStack_268);
                FUN_00408ad0();
                uStack_268 = CONCAT44(0x7822e5,(uint *)uStack_268);
                FUN_009885d0();
                local_8._0_1_ = 0x39;
                uStack_268 = CONCAT44(local_ec,0x7822fa);
                FUN_00988f20();
                local_8._0_1_ = 0x3b;
                uStack_268 = CONCAT44(0x782309,(uint *)uStack_268);
                FUN_00408ad0();
                local_f0 = 0;
                do {
                  uStack_268 = CONCAT44(0x782320,(uint *)uStack_268);
                  FUN_009885d0();
                  local_8._0_1_ = 0x3c;
                  uStack_268._0_4_ = (uint *)0x782330;
                  uStack_268._4_4_ = local_5c;
                  piVar9 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))();
                  local_8._0_1_ = 0x3b;
                  uStack_268._0_4_ = (uint *)0x78233e;
                  FUN_00408ad0();
                  local_f4 = *(int *)(param_1[5] + 0x14) + 0x20;
                  if (local_f0 == 1) {
                    uStack_268._0_4_ = (uint *)0x782366;
                    FUN_009885d0();
                    local_8._0_1_ = 0x3d;
                    uStack_268._0_4_ = local_b4;
                    piVar9 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))();
                    local_8._0_1_ = 0x3b;
                    uStack_268._0_4_ = (uint *)0x782387;
                    FUN_00408ad0();
                    local_f4 = *(int *)(param_1[5] + 0x10) + 0x20;
                  }
                  uStack_268 = CONCAT44(uStack_268._4_4_,local_40);
                  piVar10 = (int *)(**(code **)(*piVar9 + 0x44))();
                  if (param_3 == piVar10) {
LAB_007823c2:
                    local_8c[0] = 1;
                    local_8c[1] = 0;
                    local_8c[2] = 2;
                    local_8c[3] = 3;
                    local_18 = *local_fc;
                    uStack_268 = CONCAT44(local_18,local_5c);
                    FUN_005bdd50();
                    uStack_268 = 0xffffffff00000000;
                    local_8._0_1_ = 0x3e;
                    FUN_00408ed0();
                    local_8._0_1_ = 0x3b;
                    uStack_268 = CONCAT44(0x782419,(uint *)uStack_268);
                    FUN_00408ad0();
                    local_f8 = 0;
                    uStack_268 = CONCAT44(0x782424,(uint *)uStack_268);
                    iVar7 = FUN_005c1a10();
                    iVar7 = *(int *)(iVar7 + 0x10) - *(int *)(iVar7 + 0xc) >> 2;
                    local_180 = iVar7;
                    if (0 < iVar7) {
                      do {
                        uStack_268 = CONCAT44(0x782445,(uint *)uStack_268);
                        iVar11 = FUN_005c1a10();
                        piVar9 = *(int **)(*(int *)(iVar11 + 0xc) + local_f8 * 4);
                        uVar13 = 3;
                        if (local_18 != 2) {
                          uVar13 = local_18;
                        }
                        if ((piVar9[0xd] == local_18) || (piVar9[0xd] == uVar13)) {
                          uStack_268 = CONCAT44(piVar9,&local_17c);
                          FUN_005dbf10();
                          if (0 < local_17c) {
                            if (*(char *)((int)piVar9 + 0x39) == '\0') {
                              uStack_268 = CONCAT44(0x782576,(uint *)uStack_268);
                              FUN_009885d0();
                              local_8._0_1_ = 0x46;
                              uStack_268 = CONCAT44(0x782587,(uint *)uStack_268);
                              FUN_009885d0();
                              local_8._0_1_ = 0x47;
                              uStack_268 = CONCAT44(piVar9,0x782597);
                              FUN_005dc050();
                              uStack_268 = CONCAT44(local_238,0x7825a5);
                              uVar8 = FUN_009888f0();
                              local_8._0_1_ = 0x48;
                              uStack_268 = CONCAT44(local_254,0x7825bb);
                              (**(code **)(*piVar9 + 0x18))();
                              local_8._0_1_ = 0x49;
                              uStack_268 = CONCAT44(local_5c,0x7825cf);
                              FUN_00988f20();
                              local_8._0_1_ = 0x4a;
                              uStack_268 = CONCAT44(uVar8,0x7825e1);
                              FUN_00988f20();
                              local_8._0_1_ = 0x4b;
                              uStack_268 = CONCAT44(local_8c + 4,0x7825f6);
                              FUN_00988f20();
                              uStack_268 = 0xffffffff00000000;
                              local_8 = CONCAT31(local_8._1_3_,0x4c);
                              FUN_00448aa0();
                              uStack_268 = CONCAT44(0x782611,(uint *)uStack_268);
                              FUN_00408ad0();
                              uStack_268 = CONCAT44(0x78261c,(uint *)uStack_268);
                              FUN_00408ad0();
                              uStack_268 = CONCAT44(0x782627,(uint *)uStack_268);
                              FUN_00408ad0();
                              uStack_268 = CONCAT44(0x782632,(uint *)uStack_268);
                              FUN_00408ad0();
                            }
                            else {
                              uStack_268 = CONCAT44(0x7824a7,(uint *)uStack_268);
                              FUN_009885d0();
                              local_8._0_1_ = 0x3f;
                              uStack_268 = CONCAT44(0x7824b8,(uint *)uStack_268);
                              FUN_009885d0();
                              local_20 = (undefined1 *)((int)&uStack_268 + 4);
                              local_8._0_1_ = 0x40;
                              uStack_268 = CONCAT44(local_17c,local_118);
                              uVar8 = FUN_005c0800();
                              local_8._0_1_ = 0x41;
                              uStack_268 = CONCAT44(local_19c,0x7824ef);
                              (**(code **)(*piVar9 + 0x18))();
                              local_8._0_1_ = 0x42;
                              uStack_268 = CONCAT44(local_5c,0x782503);
                              FUN_00988f20();
                              local_8._0_1_ = 0x43;
                              uStack_268 = CONCAT44(uVar8,0x782515);
                              FUN_00988f20();
                              local_8._0_1_ = 0x44;
                              uStack_268 = CONCAT44(local_8c + 4,0x78252a);
                              FUN_00988f20();
                              uStack_268 = 0xffffffff00000000;
                              local_8 = CONCAT31(local_8._1_3_,0x45);
                              FUN_00448aa0();
                              uStack_268 = CONCAT44(0x782545,(uint *)uStack_268);
                              FUN_00408ad0();
                              uStack_268 = CONCAT44(0x782550,(uint *)uStack_268);
                              FUN_00408ad0();
                              uStack_268 = CONCAT44(0x78255b,(uint *)uStack_268);
                              FUN_00408ad0();
                              uStack_268 = CONCAT44(0x782566,(uint *)uStack_268);
                              FUN_00408ad0();
                            }
                            uStack_268 = CONCAT44(0x78263d,(uint *)uStack_268);
                            FUN_00408ad0();
                            uStack_268 = CONCAT44(0x782645,(uint *)uStack_268);
                            FUN_00408ad0();
                            local_8._0_1_ = 0x3b;
                            uStack_268 = CONCAT44(0x782651,(uint *)uStack_268);
                            FUN_00408ad0();
                            iVar7 = local_180;
                          }
                        }
                        local_f8 = local_f8 + 1;
                      } while (local_f8 < iVar7);
                    }
                  }
                  else {
                    uStack_268 = CONCAT44(local_d0,0x7823ba);
                    piVar9 = (int *)(**(code **)(*piVar9 + 0x3c))();
                    if (param_3 == piVar9) goto LAB_007823c2;
                  }
                  local_f0 = local_f0 + 1;
                } while (local_f0 < 2);
                uStack_268 = CONCAT44(0x782690,(uint *)uStack_268);
                FUN_00408ad0();
                local_8._0_1_ = 0;
                uStack_268 = CONCAT44(0x78269c,(uint *)uStack_268);
                FUN_00408ad0();
                local_fc = local_fc + 1;
                local_60 = (int *)((int)local_60 + 1);
                uVar4 = (undefined1)local_8;
              } while ((int)local_60 < 4);
              goto LAB_00783294;
            }
            uStack_268 = CONCAT44(0x7821a9,(uint *)uStack_268);
            FUN_009885d0();
            local_8._0_1_ = 0x32;
            uStack_268 = CONCAT44(local_40,0x7821b9);
            uVar8 = (**(code **)(*(int *)*param_1 + 0x6c))();
            local_8._0_1_ = 0;
            uStack_268 = CONCAT44(0x7821c7,(uint *)uStack_268);
            FUN_00408ad0();
            uStack_268 = CONCAT44(*(undefined4 *)(*(int *)(param_1[5] + 0x10) + 8),uVar8);
            FUN_00783800();
            local_8._0_1_ = 0x33;
            uStack_268 = CONCAT44(0x7821fb,(uint *)uStack_268);
            FUN_004115d0();
            local_8._0_1_ = 0;
            uStack_268 = CONCAT44(0x78220a,(uint *)uStack_268);
            FUN_00459820();
            uVar4 = (undefined1)local_8;
            if ((local_168 != 0) || (local_14c != 0)) goto LAB_00783294;
            uStack_268 = CONCAT44(0x782231,(uint *)uStack_268);
            FUN_009885d0();
            local_8._0_1_ = 0x34;
            uStack_268 = CONCAT44(local_40,0x782241);
            uVar8 = (**(code **)(*(int *)*param_1 + 0x6c))();
            local_8._0_1_ = 0;
            uStack_268 = CONCAT44(0x78224f,(uint *)uStack_268);
            FUN_00408ad0();
            uStack_268 = CONCAT44(*(undefined4 *)(*(int *)(param_1[5] + 0x14) + 8),uVar8);
            FUN_00783800();
            local_8._0_1_ = 0x35;
LAB_00782276:
            uStack_268 = CONCAT44(0x782283,(uint *)uStack_268);
            FUN_004115d0();
            local_8._0_1_ = 0;
            uStack_268 = CONCAT44(0x782292,(uint *)uStack_268);
            FUN_00459820();
            uVar4 = (undefined1)local_8;
            goto LAB_00783294;
          }
        }
        uStack_268 = CONCAT44(0x7827b3,(uint *)uStack_268);
        iVar7 = (**(code **)(*(int *)param_1[5] + 0x24))();
        if (iVar7 == 2) {
          uStack_268 = CONCAT44(0x7827c8,(uint *)uStack_268);
          FUN_009885d0();
          uStack_268 = CONCAT44(local_d0,local_90);
          local_8._0_1_ = 0xc;
          FUN_009a8ee0();
          local_8._0_1_ = 0xd;
          uStack_268 = CONCAT44(0x7827e7,(uint *)uStack_268);
          iVar7 = FUN_00475500();
          uStack_268 = *(undefined8 *)(iVar7 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
          uStack_268 = 0xffffffff00000000;
          local_8._0_1_ = 0xe;
          FUN_00408ed0();
          uStack_268 = CONCAT44(0x782827,(uint *)uStack_268);
          FUN_00408ad0();
          local_8._0_1_ = 0xc;
        }
        else {
          uStack_268 = CONCAT44(0x782836,(uint *)uStack_268);
          FUN_009885d0();
          uStack_268 = CONCAT44(local_d0,local_90);
          local_8._0_1_ = 0xf;
          FUN_009a8ee0();
          local_8._0_1_ = 0x10;
          uStack_268 = CONCAT44(0x782858,(uint *)uStack_268);
          iVar7 = FUN_00475500();
          uStack_268 = *(undefined8 *)(iVar7 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
          uStack_268 = 0xffffffff00000000;
          local_8._0_1_ = 0x11;
          FUN_00408ed0();
          uStack_268 = CONCAT44(0x782898,(uint *)uStack_268);
          FUN_00408ad0();
          local_8._0_1_ = 0xf;
        }
        uStack_268 = CONCAT44(local_90,0x7828a8);
        FUN_009a9740();
        local_8._0_1_ = 0;
        uStack_268 = CONCAT44(0x7828b7,(uint *)uStack_268);
        FUN_00408ad0();
        uVar4 = (undefined1)local_8;
        goto LAB_00783294;
      }
    }
    uStack_268 = 0x1000e15924;
    local_68 = 0xf;
    local_6c = 0;
    local_8c[4] = local_8c[4] & 0xffffff00;
    FUN_00409350();
    uStack_268 = CONCAT44(local_8c + 4,local_90);
    local_8._0_1_ = 8;
    FUN_009a8ee0();
    local_8._0_1_ = 9;
    uStack_268 = CONCAT44(0x7828fc,(uint *)uStack_268);
    iVar7 = FUN_00475500();
    uStack_268 = *(undefined8 *)(iVar7 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
    uStack_268 = 0xffffffff00000000;
    local_8._0_1_ = 10;
    FUN_00408ed0();
    if (0xf < local_a0) {
      uStack_268 = CONCAT44(local_b4[0],&UNK_0078294a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    local_8._0_1_ = 0xb;
    uStack_268 = CONCAT44(0x782975,(uint *)uStack_268);
    FUN_009adb70();
    if (local_8c[0] != 0) {
      uStack_268 = CONCAT44(0x78298a,(uint *)uStack_268);
      FUN_009e6a80();
      uStack_268 = CONCAT44(local_8c[0],&UNK_00782996);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_8c[0] = 0;
    local_8c[1] = 0;
    local_8c[2] = 0;
    uVar4 = (undefined1)local_8;
    if (0xf < local_68) {
      uStack_268 = CONCAT44(local_8c[4],&UNK_007829bf);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    uStack_268 = CONCAT44(0x7829c9,(uint *)uStack_268);
    ExceptionList = &local_10;
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x44))();
    if (0xf < *(uint *)(pbVar6 + 0x14)) {
      pbVar6 = *(byte **)pbVar6;
    }
    pcVar12 = "combat_may_retreat";
    do {
      bVar1 = *pbVar6;
      bVar14 = bVar1 < (byte)*pcVar12;
      if (bVar1 != *pcVar12) {
LAB_007829f6:
        iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_007829fb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar14 = bVar1 < (byte)pcVar12[1];
      if (bVar1 != pcVar12[1]) goto LAB_007829f6;
      pbVar6 = pbVar6 + 2;
      pcVar12 = pcVar12 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_007829fb:
    if (iVar7 == 0) {
      uStack_268 = 0x100dee2cc;
      local_68 = 0xf;
      local_6c = 0;
      local_8c[4] = local_8c[4] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x4d;
      uStack_268._4_4_ = (uint *)0x1;
      piVar9 = (int *)(**(code **)(*(int *)param_1[5] + 0x28))();
      iVar7 = *piVar9;
      FUN_00401000();
      iVar11 = FUN_00b31c00();
      uVar8 = __alldiv((longlong)iVar11 * (longlong)iVar7,1000,0);
      uStack_268 = CONCAT44(uStack_268._4_4_,uVar8);
      uVar8 = FUN_00988a50();
      uStack_268 = CONCAT44(uVar8,local_ec);
      local_8._0_1_ = 0x4e;
      uVar8 = FUN_0042c180();
      local_8._0_1_ = 0x4f;
      FUN_00475d50();
      local_8._0_1_ = 0x50;
      uStack_268 = CONCAT44(local_8c + 4,0x782abc);
      FUN_00988f20();
      local_8._0_1_ = 0x51;
      uStack_268 = CONCAT44(uVar8,0x782ace);
      FUN_00988f20();
      uStack_268 = 0xffffffff00000000;
      local_8._0_1_ = 0x52;
      FUN_00408ed0();
      if (0xf < local_a0) {
        uStack_268 = CONCAT44(local_b4[0],&UNK_00782afa);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = local_b4[0] & 0xffffff00;
      if (0xf < local_8c[2]) {
        uStack_268 = CONCAT44(local_98,&UNK_00782b26);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8c[2] = 0xf;
      local_8c[1] = 0;
      local_98 = local_98 & 0xffffff00;
      if (0xf < local_48) {
        uStack_268 = CONCAT44(local_5c[0],&UNK_00782b47);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      if (0xf < local_d8) {
        uStack_268 = CONCAT44(local_ec[0],&UNK_00782b68);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_d8 = 0xf;
      local_dc = 0;
      local_ec[0] = local_ec[0] & 0xffffff00;
      if (0xf < local_2c) {
        uStack_268 = CONCAT44(local_40[0],&UNK_00782b8c);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      uVar4 = (undefined1)local_8;
      if (0xf < local_68) {
        uStack_268 = CONCAT44(local_8c[4],&UNK_00782baf);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      uStack_268 = CONCAT44(0x782bc0,(uint *)uStack_268);
      (**(code **)(*param_3 + 0x44))();
      uStack_268 = CONCAT44(0x782bca,(uint *)uStack_268);
      cVar5 = FUN_0040b360();
      if (cVar5 == '\0') {
        uStack_268 = CONCAT44(0x782c24,(uint *)uStack_268);
        (**(code **)(*param_3 + 0x44))();
        uStack_268 = CONCAT44(0x782c2e,(uint *)uStack_268);
        cVar5 = FUN_0040b360();
        if (cVar5 == '\0') {
          uStack_268 = CONCAT44(0x782c7b,(uint *)uStack_268);
          FUN_009885d0();
          local_8 = CONCAT31(local_8._1_3_,0x55);
          local_18 = 0x200;
          uStack_268 = CONCAT44(local_40,0x782c93);
          piVar9 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
          if (param_3 == piVar9) {
LAB_00782cca:
            bVar14 = true;
          }
          else {
            FUN_009885d0();
            local_8 = 0x56;
            local_18 = 0x600;
            piVar9 = (int *)(**(code **)(*(int *)param_1[1] + 0x3c))();
            bVar14 = false;
            if (param_3 == piVar9) goto LAB_00782cca;
          }
          uVar13 = local_18;
          if ((local_18 & 0x400) != 0) {
            uVar13 = local_18 & 0xfffffbff;
            local_18 = uVar13;
            FUN_00408ad0();
          }
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
          if ((uVar13 & 0x200) != 0) {
            local_18 = uVar13 & 0xfffffdff;
            FUN_00408ad0();
          }
          if (bVar14) goto LAB_00781b87;
          FUN_009885d0();
          local_8 = CONCAT31(local_8._1_3_,0x57);
          local_18 = local_18 | 0x800;
          piVar9 = (int *)(**(code **)(*(int *)param_1[2] + 0x44))();
          if (param_3 == piVar9) {
LAB_00782d7a:
            bVar14 = true;
          }
          else {
            FUN_009885d0();
            local_8 = 0x58;
            local_18 = local_18 | 0x1000;
            piVar9 = (int *)(**(code **)(*(int *)param_1[2] + 0x3c))();
            bVar14 = false;
            if (param_3 == piVar9) goto LAB_00782d7a;
          }
          uVar13 = local_18;
          if ((local_18 & 0x1000) != 0) {
            uVar13 = local_18 & 0xffffefff;
            FUN_00408ad0();
          }
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
          if ((uVar13 & 0x800) != 0) {
            FUN_00408ad0();
          }
          if (bVar14) {
LAB_00781b87:
            iVar7 = FUN_00595b90();
            if ((iVar7 == 0) || (iVar7 = FUN_00595b90(), *(int *)(iVar7 + 0x88) == 0)) {
              piVar9 = (int *)FUN_005b6140();
            }
            else {
              piVar9 = (int *)FUN_00595b90();
            }
            (**(code **)(*piVar9 + 0x24))();
            FUN_00459820();
            ExceptionList = local_10;
            return param_2;
          }
          (**(code **)(*param_3 + 0x44))();
          uStack_268 = CONCAT44(0x782dd5,(uint *)uStack_268);
          cVar5 = FUN_0040b360();
          if (cVar5 == '\0') {
            uStack_268 = CONCAT44(0x782e75,(uint *)uStack_268);
            (**(code **)(*param_3 + 0x44))();
            uStack_268 = CONCAT44(0x782e7f,(uint *)uStack_268);
            cVar5 = FUN_0040b360();
            if (cVar5 == '\0') {
              uStack_268 = CONCAT44(0x782ec8,(uint *)uStack_268);
              (**(code **)(*param_3 + 0x44))();
              uStack_268 = CONCAT44(0x782ed2,(uint *)uStack_268);
              cVar5 = FUN_0040b360();
              if (cVar5 == '\0') {
                uStack_268 = CONCAT44(0x782f1b,(uint *)uStack_268);
                (**(code **)(*param_3 + 0x44))();
                uStack_268 = CONCAT44(0x782f25,(uint *)uStack_268);
                cVar5 = FUN_0040b360();
                if (cVar5 == '\0') {
                  uStack_268 = CONCAT44(0x782f6e,(uint *)uStack_268);
                  (**(code **)(*param_3 + 0x44))();
                  uStack_268 = CONCAT44(0x782f78,(uint *)uStack_268);
                  cVar5 = FUN_0040b360();
                  if (cVar5 == '\0') {
                    uStack_268 = CONCAT44(local_178,param_3);
                    cVar5 = FUN_007832d0(param_1[1],*(int *)(param_1[5] + 0x10) + 0x20);
                    uVar4 = (undefined1)local_8;
                    if (cVar5 == '\0') {
                      uStack_268 = CONCAT44(local_178,param_3);
                      cVar5 = FUN_007832d0(param_1[2],*(int *)(param_1[5] + 0x14) + 0x20);
                      uVar4 = (undefined1)local_8;
                      if (cVar5 == '\0') {
                        uStack_268 = CONCAT44(local_178,param_3);
                        cVar5 = FUN_00784b00();
                        uVar4 = (undefined1)local_8;
                        if (cVar5 == '\0') {
                          uStack_268 = CONCAT44(local_178,param_3);
                          FUN_00784b00();
                          uVar4 = (undefined1)local_8;
                        }
                      }
                    }
                  }
                  else {
                    param_1 = (undefined4 *)0x0;
                    uStack_268 = CONCAT44(0x782f97,(uint *)uStack_268);
                    FUN_009885d0();
                    local_8._0_1_ = 0x5e;
                    uStack_268 = CONCAT44(local_d0,0x782fa8);
                    piVar9 = (int *)(**(code **)(*(int *)puVar2[1] + 0x44))();
                    local_8._0_1_ = 0;
                    uStack_268 = CONCAT44(0x782fb9,(uint *)uStack_268);
                    FUN_00408ad0();
                    if (piVar9 == param_3) {
                      param_1 = *(undefined4 **)(puVar2[5] + 0x10);
                    }
                    else {
                      uStack_268 = CONCAT44(0x782fd4,(uint *)uStack_268);
                      FUN_009885d0();
                      local_8._0_1_ = 0x5f;
                      uStack_268 = CONCAT44(local_40,0x782fe5);
                      piVar9 = (int *)(**(code **)(*(int *)puVar2[2] + 0x44))();
                      local_8._0_1_ = 0;
                      uStack_268 = CONCAT44(0x782ff6,(uint *)uStack_268);
                      FUN_00408ad0();
                      if (piVar9 == param_3) {
                        param_1 = *(undefined4 **)(puVar2[5] + 0x14);
                      }
                    }
                    local_24 = 0x2d2d2d;
                    local_20 = (undefined1 *)0x0;
                    if ((param_1 != (undefined4 *)0x0) &&
                       (0 < (int)(*(int *)((int)param_1 + 0x38) - *(int *)((int)param_1 + 0x34) &
                                 0xfffffff8U))) {
                      uStack_268 = CONCAT44(0x783033,(uint *)uStack_268);
                      iVar7 = FUN_00595b90();
                      if (iVar7 != 0) {
                        uStack_268 = CONCAT44(0x78303e,(uint *)uStack_268);
                        iVar7 = FUN_00595b90();
                        if (*(int *)(iVar7 + 0x88) != 0) {
                          uStack_268 = CONCAT44(0x78304d,(uint *)uStack_268);
                          iVar7 = FUN_00595b90();
                          local_24 = *(undefined4 *)(*(int *)(iVar7 + 0x88) + 0xc0);
                          local_20 = *(undefined1 **)(*(int *)(iVar7 + 0x88) + 0xc4);
                          goto LAB_00783072;
                        }
                      }
                      local_24 = **(undefined4 **)((int)param_1 + 0x34);
                      local_20 = (undefined1 *)(*(undefined4 **)((int)param_1 + 0x34))[1];
                    }
LAB_00783072:
                    puVar3 = local_20;
                    uVar4 = (undefined1)local_8;
                    if (local_20 != (undefined1 *)0x0) {
                      if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_20 * 4)
                                           + 0xa60) + 0x398) != 0) {
                        uStack_268 = CONCAT44(0x7830a6,(uint *)uStack_268);
                        FUN_009885d0();
                        local_8._0_1_ = 0x60;
                        uStack_268 = CONCAT44(0x7830ba,(uint *)uStack_268);
                        FUN_009885d0();
                        local_8._0_1_ = 0x61;
                        uStack_268 = CONCAT44(local_ec,1000);
                        (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar3 * 4)
                                             + 0xa48) + 0x24))(local_19c,0x73);
                        local_8._0_1_ = 0x62;
                        uStack_268 = CONCAT44(local_5c,0x783104);
                        FUN_00988f20();
                        uStack_268 = 0xffffffff00000000;
                        local_8._0_1_ = 99;
                        FUN_00448aa0();
                        uStack_268 = CONCAT44(0x78311f,(uint *)uStack_268);
                        FUN_00408ad0();
                        uStack_268 = CONCAT44(0x78312a,(uint *)uStack_268);
                        FUN_00408ad0();
                        uStack_268 = CONCAT44(0x783135,(uint *)uStack_268);
                        FUN_00408ad0();
                        local_8._0_1_ = 0;
                        uStack_268 = CONCAT44(0x783141,(uint *)uStack_268);
                        FUN_00408ad0();
                      }
                      if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar3 * 4) +
                                           0xa60) + 0x3a0) != 0) {
                        uStack_268 = CONCAT44(0x78316d,(uint *)uStack_268);
                        FUN_009885d0();
                        local_8._0_1_ = 100;
                        uStack_268 = CONCAT44(0x783181,(uint *)uStack_268);
                        FUN_009885d0();
                        local_8._0_1_ = 0x65;
                        uStack_268 = CONCAT44(local_d0,1000);
                        (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar3 * 4)
                                             + 0xa48) + 0x24))(local_19c,0x74);
                        local_8._0_1_ = 0x66;
                        uStack_268 = CONCAT44(local_40,0x7831cb);
                        FUN_00988f20();
                        uStack_268 = 0xffffffff00000000;
                        local_8._0_1_ = 0x67;
                        FUN_00448aa0();
                        uStack_268 = CONCAT44(0x7831e6,(uint *)uStack_268);
                        FUN_00408ad0();
                        uStack_268 = CONCAT44(0x7831f1,(uint *)uStack_268);
                        FUN_00408ad0();
                        uStack_268 = CONCAT44(0x7831fc,(uint *)uStack_268);
                        FUN_00408ad0();
                        local_8._0_1_ = 0;
                        uStack_268 = CONCAT44(0x783208,(uint *)uStack_268);
                        FUN_00408ad0();
                      }
                      uStack_268 = CONCAT44(1,local_178);
                      FUN_00787150(&local_24,"NAVY_TECHNOLOGY_LEVELS");
                      uVar4 = (undefined1)local_8;
                    }
                  }
                }
                else {
                  uStack_268 = CONCAT44(local_118,0x782f3a);
                  FUN_00475d50();
                  uStack_268 = 0xffffffff00000000;
                  local_8._0_1_ = 0x5d;
                  FUN_00408ed0();
                  local_8._0_1_ = 0;
                  uStack_268 = CONCAT44(0x782f60,(uint *)uStack_268);
                  FUN_00408ad0();
                  uVar4 = (undefined1)local_8;
                }
              }
              else {
                uStack_268 = CONCAT44(local_118,0x782ee7);
                FUN_00475d50();
                uStack_268 = 0xffffffff00000000;
                local_8._0_1_ = 0x5c;
                FUN_00408ed0();
                local_8._0_1_ = 0;
                uStack_268 = CONCAT44(0x782f0d,(uint *)uStack_268);
                FUN_00408ad0();
                uVar4 = (undefined1)local_8;
              }
            }
            else {
              uStack_268 = CONCAT44(local_118,0x782e94);
              FUN_00475d50();
              uStack_268 = 0xffffffff00000000;
              local_8._0_1_ = 0x5b;
              FUN_00408ed0();
              local_8._0_1_ = 0;
              uStack_268 = CONCAT44(0x782eba,(uint *)uStack_268);
              FUN_00408ad0();
              uVar4 = (undefined1)local_8;
            }
          }
          else {
            uStack_268 = CONCAT44(*(undefined4 *)(*(int *)(param_1[5] + 0x10) + 8),param_1[1]);
            FUN_00783800();
            local_8._0_1_ = 0x59;
            uStack_268 = CONCAT44(0x782e14,(uint *)uStack_268);
            FUN_004115d0();
            local_8._0_1_ = 0;
            uStack_268 = CONCAT44(0x782e23,(uint *)uStack_268);
            FUN_00459820();
            uVar4 = (undefined1)local_8;
            if ((local_168 == 0) && (local_14c == 0)) {
              uStack_268 = CONCAT44(*(undefined4 *)(*(int *)(param_1[5] + 0x14) + 8),param_1[2]);
              FUN_00783800();
              local_8._0_1_ = 0x5a;
              goto LAB_00782276;
            }
          }
        }
        else {
          uStack_268 = CONCAT44(local_118,0x782c43);
          FUN_00475d50();
          uStack_268 = 0xffffffff00000000;
          local_8._0_1_ = 0x54;
          FUN_00408ed0();
          local_8._0_1_ = 0;
          uStack_268 = CONCAT44(0x782c69,(uint *)uStack_268);
          FUN_00408ad0();
          uVar4 = (undefined1)local_8;
        }
      }
      else {
        uStack_268 = CONCAT44(local_d0,0x782bdf);
        FUN_00475d50();
        uStack_268 = 0xffffffff00000000;
        local_8._0_1_ = 0x53;
        FUN_00408ed0();
        local_8._0_1_ = 0;
        uVar4 = (undefined1)local_8;
        if (0xf < local_bc) {
          uStack_268 = CONCAT44(local_d0[0],&UNK_00782c13);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
  }
LAB_00783294:
  local_8._0_1_ = uVar4;
  uStack_268 = CONCAT44(param_2,0x7832a3);
  FUN_0040c830();
LAB_007832a3:
  uStack_268 = CONCAT44(0x7832ae,(uint *)uStack_268);
  FUN_00459820();
  ExceptionList = local_10;
  return param_2;
}

