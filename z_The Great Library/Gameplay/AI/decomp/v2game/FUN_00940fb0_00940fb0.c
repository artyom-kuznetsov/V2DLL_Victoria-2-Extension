// FUN_00940fb0 @ 00940fb0 body=[[00940fb0, 00941378] [0094137c, 00941397] [0094139b, 009413b8] [009413bc, 00941479] [0094147d, 00941498] [0094149c, 009414b9] [009414bd, 0094156e] [00941572, 0094158d] [00941591, 009415ae] [009415b2, 00941664] [00941668, 00941683] [00941687, 009416a4] [009416a8, 00941756] [0094175a, 00941775] [00941779, 00941796] [0094179a, 00941844] [00941848, 00941863] [00941867, 00941884] [00941888, 0094193a] [0094193e, 00941959] [0094195d, 0094197a] [0094197e, 00941a2c] [00941a30, 00941a4b] [00941a4f, 00941a6c] [00941a70, 00941b21] [00941b25, 00941b40] [00941b44, 00941b65] [00941b6e, 00941c1a] [00941c1e, 00941c39] [00941c3d, 00941c5a] [00941c5e, 00941d05] [00941d09, 00941d24] [00941d28, 00941d45] [00941d49, 00941de4] [00941de8, 00941e03] [00941e07, 00941e24] [00941e28, 00941ead] [00941eb1, 00941ecc] [00941ed0, 00941eed] [00941ef1, 00941f76] [00941f7a, 00941f95] [00941f99, 00941fb6] [00941fba, 0094203f] [00942043, 0094205e] [00942062, 0094207f] [00942083, 00942108] [0094210c, 00942127] [0094212b, 00942148] [0094214c, 009421d1] [009421d5, 009421f0] [009421f4, 00942211] [00942215, 00942316] [0094231a, 00942338] [0094233c, 0094250e] [00942512, 00942525] [00942529, 0094253b]]


void FUN_00940fb0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char **ppcStack_124;
  char **ppcStack_120;
  char **ppcStack_11c;
  char **ppcStack_118;
  char **ppcStack_114;
  char **ppcStack_110;
  char **ppcStack_10c;
  char **ppcStack_108;
  char **ppcStack_104;
  char **ppcStack_100;
  char **ppcStack_fc;
  char **ppcStack_f8;
  char **ppcStack_f4;
  char **ppcStack_f0;
  char **ppcStack_ec;
  undefined8 uStack_e8;
  char **ppcStack_e0;
  char **ppcStack_dc;
  undefined4 local_c8 [5];
  uint local_b4;
  undefined4 local_ac [5];
  uint local_98;
  undefined4 local_90;
  int local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  uint *local_70;
  uint *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint *local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint *local_34;
  uint *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bab7a9;
  local_10 = ExceptionList;
  iVar4 = *(int *)(param_1 + 0x6c);
  iVar8 = iVar4 + 0x28;
  ExceptionList = &local_10;
  local_8c = iVar8;
  if (*(int *)(iVar4 + 0x34) != 0) {
    ppcStack_dc = (char **)0x940ff5;
    ExceptionList = &local_10;
    cVar1 = (**(code **)(**(int **)(iVar4 + 0x34) + 0x1c))();
    if (cVar1 != '\0') {
      local_84 = (uint *)0x0;
      local_88 = (uint *)0x0;
      local_80 = (uint *)0x0;
      ppcStack_dc = (char **)0x941013;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))();
      if (iVar2 != 0x9fa) {
        local_78 = *(undefined4 *)(param_1 + 0x9c);
        iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xa0) * 4
                                          ) + 0xbe8) + *(int *)(param_1 + 0xa8) * 4);
        if ((*(int *)(iVar2 + 0x34) == 0) &&
           (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar2 + 0x6c))) {
          ppcStack_dc = (char **)&local_34;
          uStack_e8 = CONCAT44(0x941064,(undefined4)uStack_e8);
          ppcStack_e0 = (char **)iVar8;
          piVar3 = (int *)FUN_00950a50();
          local_84 = (uint *)*piVar3;
          ppcStack_dc = (char **)&local_34;
          uStack_e8 = CONCAT44(0x941073,(undefined4)uStack_e8);
          ppcStack_e0 = (char **)iVar8;
          piVar3 = (int *)FUN_00950780();
          local_88 = (uint *)*piVar3;
          ppcStack_dc = (char **)&local_34;
          uStack_e8 = CONCAT44(0x941085,(undefined4)uStack_e8);
          ppcStack_e0 = (char **)iVar8;
          piVar3 = (int *)FUN_00950d20();
          local_80 = (uint *)*piVar3;
        }
      }
      local_78 = *(undefined4 *)(param_1 + 0x9c);
      piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                   *(int *)(param_1 + 0xa0) * 4) + 0xbe8) +
                                 *(int *)(param_1 + 0xa8) * 4) + 0x50);
      do {
        if (piVar3 == (int *)0x0) {
          ppcStack_dc = (char **)0x9410da;
          cVar1 = FUN_0092eff0();
          if (cVar1 == '\0') {
            ppcStack_dc = (char **)0x9410ef;
            iVar2 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))();
            if (iVar2 == 0x9fa) {
              local_34 = *(uint **)(*(int *)(DAT_012586dc + 0x30) + 0x514);
              ppcStack_e0 = (char **)0x941115;
              ppcStack_dc = (char **)iVar8;
              piVar3 = (int *)FUN_009500e0();
              uStack_e8 = (longlong)*piVar3 * (longlong)(int)local_34;
              ppcStack_dc = (char **)0x0;
              ppcStack_e0 = (char **)0x3e8;
              ppcStack_ec = (char **)0x941127;
              iVar2 = __alldiv();
              local_88 = (uint *)((int)local_88 + iVar2);
              iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x518);
              ppcStack_dc = (char **)&local_34;
              ppcStack_e0 = (char **)0x941146;
              piVar3 = (int *)FUN_00951300();
              uStack_e8 = (longlong)*piVar3 * (longlong)iVar2;
              ppcStack_dc = (char **)0x0;
              ppcStack_e0 = (char **)0x3e8;
              ppcStack_ec = (char **)0x941157;
              iVar2 = __alldiv();
              local_84 = (uint *)((int)local_84 + iVar2);
              iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x51c);
              ppcStack_dc = (char **)&local_34;
              ppcStack_e0 = (char **)0x941174;
              piVar3 = (int *)FUN_00951610();
              uStack_e8 = (longlong)*piVar3 * (longlong)iVar2;
              ppcStack_dc = (char **)0x0;
              ppcStack_e0 = (char **)0x3e8;
              ppcStack_ec = (char **)0x941185;
              iVar2 = __alldiv();
              local_80 = (uint *)((int)local_80 + iVar2);
            }
            else {
              ppcStack_e0 = (char **)0x941192;
              ppcStack_dc = (char **)iVar8;
              piVar3 = (int *)FUN_009500e0();
              iVar2 = *piVar3;
              ppcStack_dc = (char **)&local_34;
              ppcStack_e0 = (char **)0x94119f;
              piVar3 = (int *)FUN_00951300();
              local_84 = (uint *)((int)local_84 + *piVar3);
              ppcStack_dc = (char **)&local_34;
              ppcStack_e0 = (char **)0x9411af;
              piVar3 = (int *)FUN_00951610();
              local_80 = (uint *)((int)local_80 + *piVar3);
              ppcStack_dc = (char **)&local_34;
              ppcStack_e0 = (char **)0x9411bf;
              piVar3 = (int *)FUN_00950ff0();
              local_88 = (uint *)((int)local_88 + *piVar3 + iVar2);
            }
          }
          break;
        }
        iVar2 = *piVar3;
        piVar3 = (int *)piVar3[2];
      } while (*(int *)(iVar2 + 0x24) != *(int *)(*(int *)(iVar4 + 0x34) + 8));
      ppcStack_dc = (char **)0x9411d6;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))();
      if (iVar2 == 0x9fa) {
        iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x514);
        ppcStack_dc = (char **)&local_34;
        uStack_e8 = CONCAT44(0x9411fc,(undefined4)uStack_e8);
        ppcStack_e0 = (char **)iVar8;
        piVar3 = (int *)FUN_009503d0();
        uStack_e8 = (longlong)*piVar3 * (longlong)iVar2;
        ppcStack_dc = (char **)0x0;
        ppcStack_e0 = (char **)0x3e8;
        ppcStack_ec = (char **)0x94120d;
        local_7c = (uint *)__alldiv();
        iVar2 = *(int *)(DAT_012586dc + 0x30);
        uStack_e8 = (longlong)*(int *)(*(int *)(iVar4 + 0x34) + 0x100) *
                    (longlong)*(int *)(iVar2 + 0x2dc);
        ppcStack_dc = (char **)0x0;
        ppcStack_e0 = (char **)0x3e8;
        ppcStack_ec = (char **)0x941235;
        iVar4 = __alldiv();
        uStack_e8 = (longlong)iVar4 * (longlong)*(int *)(iVar2 + 0x51c);
        ppcStack_dc = (char **)0x0;
        ppcStack_e0 = (char **)0x3e8;
        ppcStack_ec = (char **)0x941248;
        local_34 = (uint *)__alldiv();
        local_70 = *(uint **)(iVar2 + 0x518);
        ppcStack_e0 = (char **)0x941260;
        ppcStack_dc = (char **)iVar8;
        piVar3 = (int *)FUN_00950050();
        uStack_e8 = (longlong)(int)local_70 * (longlong)*piVar3;
        ppcStack_dc = (char **)0x0;
        ppcStack_e0 = (char **)0x3e8;
        ppcStack_ec = (char **)0x941274;
        local_70 = (uint *)__alldiv();
      }
      else {
        ppcStack_dc = &local_74;
        uStack_e8 = CONCAT44(0x941286,(undefined4)uStack_e8);
        ppcStack_e0 = (char **)iVar8;
        puVar5 = (undefined4 *)FUN_009503d0();
        local_7c = (uint *)*puVar5;
        uStack_e8 = (longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2dc) *
                    (longlong)*(int *)(*(int *)(iVar4 + 0x34) + 0x100);
        ppcStack_dc = (char **)0x0;
        ppcStack_e0 = (char **)0x3e8;
        ppcStack_ec = (char **)0x9412b1;
        local_34 = (uint *)__alldiv();
        ppcStack_e0 = (char **)0x9412c0;
        ppcStack_dc = (char **)iVar8;
        puVar5 = (undefined4 *)FUN_00950050();
        local_70 = (uint *)*puVar5;
      }
      ppcStack_dc = (char **)0x8;
      ppcStack_e0 = (char **)0xdf060c;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
      uStack_e8 = CONCAT44(0x9412e2,(undefined4)uStack_e8);
      FUN_00409350();
      local_8 = 0;
      ppcStack_dc = (char **)0x12;
      ppcStack_e0 = (char **)0xe352f0;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      uStack_e8 = CONCAT44(0x9412fd,(undefined4)uStack_e8);
      FUN_00409350();
      local_8._0_1_ = 1;
      ppcStack_dc = (char **)local_30;
      ppcStack_e0 = (char **)0x941312;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
      ppcStack_e0 = (char **)0x1;
      local_74 = (undefined1 *)((int)&uStack_e8 + 4);
      uStack_e8 = CONCAT44(local_84,local_6c);
      ppcStack_ec = (char **)0x94132f;
      local_84 = (uint *)FUN_009c9360();
      local_8 = CONCAT31(local_8._1_3_,2);
      ppcStack_e0 = (char **)local_50;
      uStack_e8 = CONCAT44(0x941346,(undefined4)uStack_e8);
      (**(code **)(*piVar3 + 0x3c))();
      uStack_e8 = 0xffffffff00000000;
      ppcStack_ec = (char **)local_84;
      ppcStack_f0 = (char **)0x94135a;
      FUN_00408ed0();
      uStack_e8 = ZEXT48(local_84);
      ppcStack_ec = (char **)0x94136a;
      FUN_00a5ecc0();
      if (0xf < local_58) {
        uStack_e8 = CONCAT44(local_6c[0],&UNK_00941379);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_1c) {
        uStack_e8 = CONCAT44(local_30[0],&UNK_00941398);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_3c) {
        uStack_e8 = CONCAT44(local_50[0],&UNK_009413b9);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_e8 = 0x600e3530c;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
      ppcStack_ec = (char **)0x9413d4;
      FUN_00409350();
      local_8 = 3;
      uStack_e8 = 0x1200e352f0;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      ppcStack_ec = (char **)0x9413f3;
      FUN_00409350();
      local_8._0_1_ = 4;
      uStack_e8._4_4_ = local_30;
      uStack_e8._0_4_ = 0x941408;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
      uStack_e8._0_4_ = 0;
      local_74 = (undefined1 *)&ppcStack_ec;
      ppcStack_ec = (char **)local_88;
      ppcStack_f0 = (char **)local_6c;
      ppcStack_f4 = (char **)0x941427;
      local_88 = (uint *)FUN_009c9360();
      local_8 = CONCAT31(local_8._1_3_,5);
      uStack_e8 = CONCAT44(uStack_e8._4_4_,local_50);
      ppcStack_ec = (char **)0x941441;
      (**(code **)(*piVar3 + 0x3c))();
      ppcStack_ec = (char **)0xffffffff;
      ppcStack_f0 = (char **)0x0;
      ppcStack_f4 = (char **)local_88;
      ppcStack_f8 = (char **)0x941458;
      FUN_00408ed0();
      ppcStack_ec = (char **)0x0;
      ppcStack_f0 = (char **)local_88;
      ppcStack_f4 = (char **)0x94146b;
      FUN_00a5ecc0();
      if (0xf < local_58) {
        ppcStack_ec = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_f0 = (char **)&UNK_0094147a;
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_1c) {
        ppcStack_ec = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_f0 = (char **)&UNK_00941499;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_3c) {
        ppcStack_ec = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_f0 = (char **)&UNK_009414ba;
        FUN_00aae91b();
      }
      ppcStack_ec = (char **)0x9;
      ppcStack_f0 = (char **)0xdf0864;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
      ppcStack_f4 = (char **)0x9414d5;
      FUN_00409350();
      local_8 = 6;
      ppcStack_ec = (char **)0x12;
      ppcStack_f0 = (char **)0xe352f0;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      ppcStack_f4 = (char **)0x9414f4;
      FUN_00409350();
      local_8._0_1_ = 7;
      ppcStack_ec = (char **)local_30;
      ppcStack_f0 = (char **)0x941509;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
      ppcStack_f0 = (char **)0x0;
      local_74 = (undefined1 *)&ppcStack_f4;
      ppcStack_f4 = (char **)local_80;
      ppcStack_f8 = (char **)local_6c;
      ppcStack_fc = (char **)0x941525;
      local_80 = (uint *)FUN_009c9360();
      local_8 = CONCAT31(local_8._1_3_,8);
      ppcStack_f0 = (char **)local_50;
      ppcStack_f4 = (char **)0x94153c;
      (**(code **)(*piVar3 + 0x3c))();
      ppcStack_f4 = (char **)0xffffffff;
      ppcStack_f8 = (char **)0x0;
      ppcStack_fc = (char **)local_80;
      ppcStack_100 = (char **)0x941550;
      FUN_00408ed0();
      ppcStack_f4 = (char **)0x0;
      ppcStack_f8 = (char **)local_80;
      ppcStack_fc = (char **)0x941560;
      FUN_00a5ecc0();
      if (0xf < local_58) {
        ppcStack_f4 = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_f8 = (char **)&UNK_0094156f;
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_1c) {
        ppcStack_f4 = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_f8 = (char **)&UNK_0094158e;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_3c) {
        ppcStack_f4 = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_f8 = (char **)&UNK_009415af;
        FUN_00aae91b();
      }
      ppcStack_f4 = (char **)0x8;
      ppcStack_f8 = (char **)0xdf060c;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
      ppcStack_fc = (char **)0x9415ca;
      FUN_00409350();
      local_8 = 9;
      ppcStack_f4 = (char **)0x16;
      ppcStack_f8 = (char **)0xe35314;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      ppcStack_fc = (char **)0x9415e9;
      FUN_00409350();
      local_8._0_1_ = 10;
      ppcStack_f4 = (char **)local_30;
      ppcStack_f8 = (char **)0x9415fe;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
      ppcStack_f8 = (char **)0x1;
      local_74 = (undefined1 *)&ppcStack_fc;
      ppcStack_fc = (char **)local_7c;
      ppcStack_100 = (char **)local_6c;
      ppcStack_104 = (char **)0x94161b;
      local_7c = (uint *)FUN_009c9360();
      local_8 = CONCAT31(local_8._1_3_,0xb);
      ppcStack_f8 = (char **)local_50;
      ppcStack_fc = (char **)0x941632;
      (**(code **)(*piVar3 + 0x3c))();
      ppcStack_fc = (char **)0xffffffff;
      ppcStack_100 = (char **)0x0;
      ppcStack_104 = (char **)local_7c;
      ppcStack_108 = (char **)0x941646;
      FUN_00408ed0();
      ppcStack_fc = (char **)0x0;
      ppcStack_100 = (char **)local_7c;
      ppcStack_104 = (char **)0x941656;
      FUN_00a5ecc0();
      if (0xf < local_58) {
        ppcStack_fc = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_100 = (char **)&UNK_00941665;
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_1c) {
        ppcStack_fc = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_100 = (char **)&UNK_00941684;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_3c) {
        ppcStack_fc = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_100 = (char **)&UNK_009416a5;
        FUN_00aae91b();
      }
      ppcStack_fc = (char **)0x6;
      ppcStack_100 = (char **)0xe3530c;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
      ppcStack_104 = (char **)0x9416c0;
      FUN_00409350();
      local_8 = 0xc;
      ppcStack_fc = (char **)0x16;
      ppcStack_100 = (char **)0xe35314;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      ppcStack_104 = (char **)0x9416df;
      FUN_00409350();
      local_8._0_1_ = 0xd;
      ppcStack_fc = (char **)local_30;
      ppcStack_100 = (char **)0x9416f4;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
      ppcStack_100 = (char **)0x0;
      local_74 = (undefined1 *)&ppcStack_104;
      ppcStack_108 = (char **)local_6c;
      ppcStack_104 = (char **)0x0;
      ppcStack_10c = (char **)0x94170d;
      local_7c = (uint *)FUN_009c9360();
      local_8 = CONCAT31(local_8._1_3_,0xe);
      ppcStack_100 = (char **)local_50;
      ppcStack_104 = (char **)0x941724;
      (**(code **)(*piVar3 + 0x3c))();
      ppcStack_104 = (char **)0xffffffff;
      ppcStack_108 = (char **)0x0;
      ppcStack_10c = (char **)local_7c;
      ppcStack_110 = (char **)0x941738;
      FUN_00408ed0();
      ppcStack_104 = (char **)0x0;
      ppcStack_108 = (char **)local_7c;
      ppcStack_10c = (char **)0x941748;
      FUN_00a5ecc0();
      if (0xf < local_58) {
        ppcStack_104 = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_108 = (char **)&UNK_00941757;
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_1c) {
        ppcStack_104 = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_108 = (char **)&UNK_00941776;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_3c) {
        ppcStack_104 = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_108 = (char **)&UNK_00941797;
        FUN_00aae91b();
      }
      ppcStack_104 = (char **)0x9;
      ppcStack_108 = (char **)0xdf0864;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
      ppcStack_10c = (char **)0x9417b2;
      FUN_00409350();
      local_8 = 0xf;
      ppcStack_104 = (char **)0x16;
      ppcStack_108 = (char **)0xe35314;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      ppcStack_10c = (char **)0x9417cd;
      FUN_00409350();
      local_8._0_1_ = 0x10;
      ppcStack_104 = (char **)local_30;
      ppcStack_108 = (char **)0x9417e2;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
      ppcStack_108 = (char **)0x0;
      local_74 = (undefined1 *)&ppcStack_10c;
      ppcStack_110 = (char **)local_6c;
      ppcStack_10c = (char **)0x0;
      ppcStack_114 = (char **)0x9417fb;
      local_7c = (uint *)FUN_009c9360();
      local_8 = CONCAT31(local_8._1_3_,0x11);
      ppcStack_108 = (char **)local_50;
      ppcStack_10c = (char **)0x941812;
      (**(code **)(*piVar3 + 0x3c))();
      ppcStack_10c = (char **)0xffffffff;
      ppcStack_110 = (char **)0x0;
      ppcStack_114 = (char **)local_7c;
      ppcStack_118 = (char **)0x941826;
      FUN_00408ed0();
      ppcStack_10c = (char **)0x0;
      ppcStack_110 = (char **)local_7c;
      ppcStack_114 = (char **)0x941836;
      FUN_00a5ecc0();
      if (0xf < local_58) {
        ppcStack_10c = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_110 = (char **)&UNK_00941845;
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_1c) {
        ppcStack_10c = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_110 = (char **)&UNK_00941864;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_3c) {
        ppcStack_10c = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_110 = (char **)&UNK_00941885;
        FUN_00aae91b();
      }
      ppcStack_10c = (char **)0x8;
      ppcStack_110 = (char **)0xdf060c;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
      ppcStack_114 = (char **)0x9418a0;
      FUN_00409350();
      local_8 = 0x12;
      ppcStack_10c = (char **)0x16;
      ppcStack_110 = (char **)0xe3532c;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      ppcStack_114 = (char **)0x9418bf;
      FUN_00409350();
      local_8._0_1_ = 0x13;
      ppcStack_10c = (char **)local_30;
      ppcStack_110 = (char **)0x9418d4;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
      ppcStack_110 = (char **)0x1;
      local_74 = (undefined1 *)&ppcStack_114;
      ppcStack_114 = (char **)local_70;
      ppcStack_118 = (char **)local_6c;
      ppcStack_11c = (char **)0x9418f1;
      local_70 = (uint *)FUN_009c9360();
      local_8 = CONCAT31(local_8._1_3_,0x14);
      ppcStack_110 = (char **)local_50;
      ppcStack_114 = (char **)0x941908;
      (**(code **)(*piVar3 + 0x3c))();
      ppcStack_114 = (char **)0xffffffff;
      ppcStack_118 = (char **)0x0;
      ppcStack_11c = (char **)local_70;
      ppcStack_120 = (char **)0x94191c;
      FUN_00408ed0();
      ppcStack_114 = (char **)0x0;
      ppcStack_118 = (char **)local_70;
      ppcStack_11c = (char **)0x94192c;
      FUN_00a5ecc0();
      if (0xf < local_58) {
        ppcStack_114 = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_118 = (char **)&UNK_0094193b;
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_1c) {
        ppcStack_114 = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_118 = (char **)&UNK_0094195a;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_3c) {
        ppcStack_114 = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_118 = (char **)&UNK_0094197b;
        FUN_00aae91b();
      }
      ppcStack_114 = (char **)0x6;
      ppcStack_118 = (char **)0xe3530c;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
      ppcStack_11c = (char **)0x941996;
      FUN_00409350();
      local_8 = 0x15;
      ppcStack_114 = (char **)0x16;
      ppcStack_118 = (char **)0xe3532c;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      ppcStack_11c = (char **)0x9419b5;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      ppcStack_114 = (char **)local_30;
      ppcStack_118 = (char **)0x9419ca;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
      ppcStack_118 = (char **)0x0;
      local_74 = (undefined1 *)&ppcStack_11c;
      ppcStack_120 = (char **)local_6c;
      ppcStack_11c = (char **)0x0;
      ppcStack_124 = (char **)0x9419e3;
      local_70 = (uint *)FUN_009c9360();
      local_8 = CONCAT31(local_8._1_3_,0x17);
      ppcStack_118 = (char **)local_50;
      ppcStack_11c = (char **)0x9419fa;
      (**(code **)(*piVar3 + 0x3c))();
      ppcStack_11c = (char **)0xffffffff;
      ppcStack_120 = (char **)0x0;
      ppcStack_124 = (char **)local_70;
      FUN_00408ed0();
      ppcStack_11c = (char **)0x0;
      ppcStack_120 = (char **)local_70;
      ppcStack_124 = (char **)0x941a1e;
      FUN_00a5ecc0();
      if (0xf < local_58) {
        ppcStack_11c = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_120 = (char **)&UNK_00941a2d;
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_1c) {
        ppcStack_11c = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_120 = (char **)&UNK_00941a4c;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_3c) {
        ppcStack_11c = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
        ppcStack_120 = (char **)&UNK_00941a6d;
        FUN_00aae91b();
      }
      ppcStack_11c = (char **)0x9;
      ppcStack_120 = (char **)0xdf0864;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
      ppcStack_124 = (char **)0x941a88;
      FUN_00409350();
      local_8 = 0x18;
      ppcStack_11c = (char **)0x16;
      ppcStack_120 = (char **)0xe3532c;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      ppcStack_124 = (char **)0x941aa7;
      FUN_00409350();
      local_8._0_1_ = 0x19;
      ppcStack_11c = (char **)local_30;
      ppcStack_120 = (char **)0x941abc;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
      ppcStack_120 = (char **)0x0;
      local_74 = (undefined1 *)&ppcStack_124;
      ppcStack_124 = (char **)local_34;
      local_34 = (uint *)FUN_009c9360(local_6c);
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      ppcStack_120 = (char **)local_50;
      ppcStack_124 = (char **)0x941aef;
      (**(code **)(*piVar3 + 0x3c))();
      ppcStack_124 = (char **)0xffffffff;
      FUN_00408ed0(local_34,0);
      ppcStack_124 = (char **)0x0;
      FUN_00a5ecc0(local_34);
      if (0xf < local_58) {
        ppcStack_124 = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
      if (0xf < local_1c) {
        ppcStack_124 = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_3c) {
        ppcStack_124 = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto LAB_009422ab;
    }
  }
  ppcStack_dc = (char **)0x7;
  ppcStack_e0 = (char **)&DAT_00e35304;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  uStack_e8 = CONCAT44(0x941b8b,(undefined4)uStack_e8);
  FUN_00409350();
  local_8 = 0x1b;
  ppcStack_dc = (char **)0x8;
  ppcStack_e0 = (char **)0xdf060c;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  uStack_e8 = CONCAT44(0x941baa,(undefined4)uStack_e8);
  FUN_00409350();
  local_8._0_1_ = 0x1c;
  ppcStack_dc = (char **)0x12;
  ppcStack_e0 = (char **)0xe352f0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
  uStack_e8 = CONCAT44(0x941bc6,(undefined4)uStack_e8);
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,0x1d);
  ppcStack_dc = (char **)local_30;
  ppcStack_e0 = (char **)0x941bdb;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  ppcStack_e0 = (char **)local_6c;
  uStack_e8 = CONCAT44(0x941be8,(undefined4)uStack_e8);
  (**(code **)(*piVar3 + 0x3c))();
  uStack_e8 = 0xffffffff00000000;
  ppcStack_ec = (char **)local_50;
  ppcStack_f0 = (char **)0x941bfc;
  FUN_00408ed0();
  uStack_e8 = ZEXT48(local_50);
  ppcStack_ec = (char **)0x941c0c;
  FUN_00a5ecc0();
  if (0xf < local_1c) {
    uStack_e8 = CONCAT44(local_30[0],&UNK_00941c1b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_58) {
    uStack_e8 = CONCAT44(local_6c[0],&UNK_00941c3a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_3c) {
    uStack_e8 = CONCAT44(local_50[0],&UNK_00941c5b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_e8 = 0x700e35304;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  ppcStack_ec = (char **)0x941c76;
  FUN_00409350();
  local_8 = 0x1e;
  uStack_e8 = 0x600e3530c;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
  ppcStack_ec = (char **)0x941c95;
  FUN_00409350();
  local_8._0_1_ = 0x1f;
  uStack_e8 = 0x1200e352f0;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  ppcStack_ec = (char **)0x941cb1;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,0x20);
  uStack_e8._4_4_ = local_6c;
  uStack_e8._0_4_ = 0x941cc6;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  uStack_e8 = CONCAT44(uStack_e8._4_4_,local_30);
  ppcStack_ec = (char **)0x941cd3;
  (**(code **)(*piVar3 + 0x3c))();
  ppcStack_ec = (char **)0xffffffff;
  ppcStack_f0 = (char **)0x0;
  ppcStack_f4 = (char **)local_50;
  ppcStack_f8 = (char **)0x941ce7;
  FUN_00408ed0();
  ppcStack_ec = (char **)0x0;
  ppcStack_f0 = (char **)local_50;
  ppcStack_f4 = (char **)0x941cf7;
  FUN_00a5ecc0();
  if (0xf < local_58) {
    ppcStack_ec = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_f0 = (char **)&UNK_00941d06;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppcStack_ec = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_f0 = (char **)&UNK_00941d25;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_3c) {
    ppcStack_ec = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_f0 = (char **)&UNK_00941d46;
    FUN_00aae91b();
  }
  ppcStack_ec = (char **)0x7;
  ppcStack_f0 = (char **)&DAT_00e35304;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  ppcStack_f4 = (char **)0x941d61;
  FUN_00409350();
  local_8 = 0x21;
  ppcStack_ec = (char **)0x9;
  ppcStack_f0 = (char **)0xdf0864;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  ppcStack_f4 = (char **)0x941d80;
  FUN_00409350();
  local_8._0_1_ = 0x22;
  ppcStack_ec = (char **)0x941d91;
  FUN_009885d0();
  local_8 = CONCAT31(local_8._1_3_,0x23);
  ppcStack_f0 = (char **)0x941da5;
  ppcStack_ec = (char **)local_30;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  ppcStack_f0 = (char **)local_6c;
  ppcStack_f4 = (char **)0x941db2;
  (**(code **)(*piVar3 + 0x3c))();
  ppcStack_f4 = (char **)0xffffffff;
  ppcStack_f8 = (char **)0x0;
  ppcStack_fc = (char **)local_50;
  ppcStack_100 = (char **)0x941dc6;
  FUN_00408ed0();
  ppcStack_f4 = (char **)0x0;
  ppcStack_f8 = (char **)local_50;
  ppcStack_fc = (char **)0x941dd6;
  FUN_00a5ecc0();
  if (0xf < local_1c) {
    ppcStack_f4 = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_f8 = (char **)&UNK_00941de5;
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (uint *)((uint)local_30[0] & 0xffffff00);
  if (0xf < local_58) {
    ppcStack_f4 = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_f8 = (char **)&UNK_00941e04;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_3c) {
    ppcStack_f4 = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_f8 = (char **)&UNK_00941e25;
    FUN_00aae91b();
  }
  ppcStack_f4 = (char **)0x941e35;
  FUN_009885d0();
  local_8 = 0x24;
  ppcStack_f4 = (char **)0x941e49;
  FUN_009885d0();
  local_8._0_1_ = 0x25;
  ppcStack_f4 = (char **)0x941e5a;
  FUN_009885d0();
  local_8 = CONCAT31(local_8._1_3_,0x26);
  ppcStack_f8 = (char **)0x941e6e;
  ppcStack_f4 = (char **)local_50;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  ppcStack_f8 = (char **)local_6c;
  ppcStack_fc = (char **)0x941e7b;
  (**(code **)(*piVar3 + 0x3c))();
  ppcStack_fc = (char **)0xffffffff;
  ppcStack_100 = (char **)0x0;
  ppcStack_104 = (char **)local_30;
  ppcStack_108 = (char **)0x941e8f;
  FUN_00408ed0();
  ppcStack_fc = (char **)0x0;
  ppcStack_100 = (char **)local_30;
  ppcStack_104 = (char **)0x941e9f;
  FUN_00a5ecc0();
  if (0xf < local_3c) {
    ppcStack_fc = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_100 = (char **)&UNK_00941eae;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  if (0xf < local_58) {
    ppcStack_fc = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_100 = (char **)&UNK_00941ecd;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppcStack_fc = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_100 = (char **)&UNK_00941eee;
    FUN_00aae91b();
  }
  ppcStack_fc = (char **)0x941efe;
  FUN_009885d0();
  local_8 = 0x27;
  ppcStack_fc = (char **)0x941f12;
  FUN_009885d0();
  local_8._0_1_ = 0x28;
  ppcStack_fc = (char **)0x941f23;
  FUN_009885d0();
  local_8 = CONCAT31(local_8._1_3_,0x29);
  ppcStack_100 = (char **)0x941f37;
  ppcStack_fc = (char **)local_50;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  ppcStack_100 = (char **)local_6c;
  ppcStack_104 = (char **)0x941f44;
  (**(code **)(*piVar3 + 0x3c))();
  ppcStack_104 = (char **)0xffffffff;
  ppcStack_108 = (char **)0x0;
  ppcStack_10c = (char **)local_30;
  ppcStack_110 = (char **)0x941f58;
  FUN_00408ed0();
  ppcStack_104 = (char **)0x0;
  ppcStack_108 = (char **)local_30;
  ppcStack_10c = (char **)0x941f68;
  FUN_00a5ecc0();
  if (0xf < local_3c) {
    ppcStack_104 = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_108 = (char **)&UNK_00941f77;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  if (0xf < local_58) {
    ppcStack_104 = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_108 = (char **)&UNK_00941f96;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppcStack_104 = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_108 = (char **)&UNK_00941fb7;
    FUN_00aae91b();
  }
  ppcStack_104 = (char **)0x941fc7;
  FUN_009885d0();
  local_8 = 0x2a;
  ppcStack_104 = (char **)0x941fdb;
  FUN_009885d0();
  local_8._0_1_ = 0x2b;
  ppcStack_104 = (char **)0x941fec;
  FUN_009885d0();
  local_8 = CONCAT31(local_8._1_3_,0x2c);
  ppcStack_108 = (char **)0x942000;
  ppcStack_104 = (char **)local_50;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  ppcStack_108 = (char **)local_6c;
  ppcStack_10c = (char **)0x94200d;
  (**(code **)(*piVar3 + 0x3c))();
  ppcStack_10c = (char **)0xffffffff;
  ppcStack_110 = (char **)0x0;
  ppcStack_114 = (char **)local_30;
  ppcStack_118 = (char **)0x942021;
  FUN_00408ed0();
  ppcStack_10c = (char **)0x0;
  ppcStack_110 = (char **)local_30;
  ppcStack_114 = (char **)0x942031;
  FUN_00a5ecc0();
  if (0xf < local_3c) {
    ppcStack_10c = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_110 = (char **)&UNK_00942040;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  if (0xf < local_58) {
    ppcStack_10c = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_110 = (char **)&UNK_0094205f;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppcStack_10c = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_110 = (char **)&UNK_00942080;
    FUN_00aae91b();
  }
  ppcStack_10c = (char **)0x942090;
  FUN_009885d0();
  local_8 = 0x2d;
  ppcStack_10c = (char **)0x9420a4;
  FUN_009885d0();
  local_8._0_1_ = 0x2e;
  ppcStack_10c = (char **)0x9420b5;
  FUN_009885d0();
  local_8 = CONCAT31(local_8._1_3_,0x2f);
  ppcStack_110 = (char **)0x9420c9;
  ppcStack_10c = (char **)local_50;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  ppcStack_110 = (char **)local_6c;
  ppcStack_114 = (char **)0x9420d6;
  (**(code **)(*piVar3 + 0x3c))();
  ppcStack_114 = (char **)0xffffffff;
  ppcStack_118 = (char **)0x0;
  ppcStack_11c = (char **)local_30;
  ppcStack_120 = (char **)0x9420ea;
  FUN_00408ed0();
  ppcStack_114 = (char **)0x0;
  ppcStack_118 = (char **)local_30;
  ppcStack_11c = (char **)0x9420fa;
  FUN_00a5ecc0();
  if (0xf < local_3c) {
    ppcStack_114 = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_118 = (char **)&UNK_00942109;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  if (0xf < local_58) {
    ppcStack_114 = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_118 = (char **)&UNK_00942128;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppcStack_114 = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_118 = (char **)&UNK_00942149;
    FUN_00aae91b();
  }
  ppcStack_114 = (char **)0x942159;
  FUN_009885d0();
  local_8 = 0x30;
  ppcStack_114 = (char **)0x94216d;
  FUN_009885d0();
  local_8._0_1_ = 0x31;
  ppcStack_114 = (char **)0x94217e;
  FUN_009885d0();
  local_8 = CONCAT31(local_8._1_3_,0x32);
  ppcStack_118 = (char **)0x942192;
  ppcStack_114 = (char **)local_50;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  ppcStack_118 = (char **)local_6c;
  ppcStack_11c = (char **)0x94219f;
  (**(code **)(*piVar3 + 0x3c))();
  ppcStack_11c = (char **)0xffffffff;
  ppcStack_120 = (char **)0x0;
  ppcStack_124 = (char **)local_30;
  FUN_00408ed0();
  ppcStack_11c = (char **)0x0;
  ppcStack_120 = (char **)local_30;
  ppcStack_124 = (char **)0x9421c3;
  FUN_00a5ecc0();
  if (0xf < local_3c) {
    ppcStack_11c = (char **)local_50[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_120 = (char **)&UNK_009421d2;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  if (0xf < local_58) {
    ppcStack_11c = (char **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_120 = (char **)&UNK_009421f1;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = (uint *)((uint)local_6c[0] & 0xffffff00);
  if (0xf < local_1c) {
    ppcStack_11c = (char **)local_30[0];
                    /* WARNING: Subroutine does not return */
    ppcStack_120 = (char **)&UNK_00942212;
    FUN_00aae91b();
  }
  ppcStack_11c = (char **)0x942222;
  FUN_009885d0();
  local_8 = 0x33;
  ppcStack_11c = (char **)0x942236;
  FUN_009885d0();
  local_8._0_1_ = 0x34;
  ppcStack_11c = (char **)0x942247;
  FUN_009885d0();
  local_8 = CONCAT31(local_8._1_3_,0x35);
  ppcStack_120 = (char **)0x94225b;
  ppcStack_11c = (char **)local_6c;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  ppcStack_120 = (char **)local_30;
  ppcStack_124 = (char **)0x942268;
  (**(code **)(*piVar3 + 0x3c))();
  ppcStack_124 = (char **)0xffffffff;
  FUN_00408ed0(local_50,0);
  ppcStack_124 = (char **)0x0;
  FUN_00a5ecc0(local_50);
  ppcStack_124 = (char **)0x942294;
  FUN_00408ad0();
  ppcStack_124 = (char **)0x94229c;
  FUN_00408ad0();
  local_8 = 0xffffffff;
  ppcStack_124 = (char **)0x9422ab;
  FUN_00408ad0();
LAB_009422ab:
  ppcStack_124 = (char **)0xdedb28;
  FUN_004471e0();
  ppcStack_124 = (char **)local_50;
  local_8 = 0x36;
  uVar6 = FUN_0094c260(local_8c);
  local_8 = CONCAT31(local_8._1_3_,0x37);
  ppcStack_124 = (char **)local_6c;
  local_34 = (uint *)(**(code **)(**(int **)(param_1 + 4) + 0x3c))();
  FUN_00408ed0(uVar6,0,0xffffffff);
  FUN_00a5ecc0(uVar6,0);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_8 = 0xffffffff;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint *)((uint)local_50[0] & 0xffffff00);
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  FUN_0094c600(local_8c,local_ac);
  local_8 = 0x38;
  local_78 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x10);
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 0x6c) + 0x14) * 4);
  iVar8 = *(int *)(iVar4 + 0xd5c) - *(int *)(iVar4 + 0xd58) >> 3;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x20))();
  if (iVar4 == 0x9fa) {
    iVar4 = *(int *)(param_1 + 0x6c);
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0xc) * 4);
    local_78 = *(undefined4 *)(iVar2 + 0x1428);
    if (*(int *)(iVar2 + 0x142c) != 0) {
      iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0x14) * 4);
      local_78 = *(undefined4 *)(iVar2 + 0x1428);
      local_74 = *(undefined1 **)(iVar2 + 0x142c);
      local_90 = *(undefined4 *)(iVar4 + 0x10);
      cVar1 = FUN_0042bb00();
      if (cVar1 == '\0') {
        iVar8 = iVar8 + 1;
      }
    }
    if (iVar8 != 0) {
      uVar6 = FUN_009888f0(local_30);
      local_8._0_1_ = 0x39;
      local_78 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x10);
      local_74 = *(undefined1 **)(*(int *)(param_1 + 0x6c) + 0x14);
      uVar7 = FUN_0055dd40();
      local_8._0_1_ = 0x3a;
      uVar6 = FUN_0043ec10(local_50,"COUNTRY",uVar7,&DAT_00df7e7c,uVar6);
      local_8._0_1_ = 0x3b;
      uVar6 = FUN_00988fa0(uVar6);
      local_8._0_1_ = 0x3c;
      FUN_00448aa0(uVar6,0,0xffffffff);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x38);
      FUN_00408ad0();
    }
  }
  FUN_009885d0();
  local_8 = CONCAT31(local_8._1_3_,0x3d);
  (**(code **)(**(int **)(param_1 + 4) + 0x3c))(local_c8);
  FUN_00408ed0(local_ac,0,0xffffffff);
  FUN_00a5ecc0(local_ac,0);
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c8[0]);
  }
  if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_ac[0]);
  }
  ExceptionList = local_10;
  return;
}

