// FUN_004998a0 @ 004998a0 body=[[004998a0, 004999d8] [004999dc, 00499d1e] [00499d22, 00499d4c] [00499d50, 00499d75] [00499d79, 00499d9e] [00499da2, 00499dc7] [00499dcb, 00499df0] [00499df4, 00499e19] [00499e1d, 00499e3c] [00499e40, 00499e5a] [00499e5e, 00499efa] [00499efe, 00499f4f] [00499f53, 00499f78] [00499f7c, 00499fa8] [00499fac, 00499fea]]


void FUN_004998a0(int param_1)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 ***pppuVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  int local_37c [95];
  undefined **local_200 [18];
  uint local_1b8;
  undefined4 local_1a8;
  uint local_1a4;
  uint local_19c;
  undefined4 local_18c;
  uint local_188;
  uint local_180;
  undefined4 local_170;
  uint local_16c;
  uint local_164;
  undefined4 local_154;
  uint local_150;
  uint local_148;
  undefined4 local_138;
  uint local_134;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  char local_110 [4];
  uint local_10c [4];
  undefined4 local_fc;
  uint local_f8;
  uint local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  uint local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 **local_48 [4];
  undefined4 local_38;
  uint local_34;
  int local_28;
  int *local_24;
  int *local_20;
  undefined4 *local_1c;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6031c;
  local_10 = ExceptionList;
  local_18[0] = (int *)0x0;
  local_28 = 0;
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)FUN_00aae9af(0x360);
  local_8 = 0;
  local_24 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18[0] = (int *)0x1;
    puVar5 = (undefined4 *)FUN_00aae9af(0x114);
    local_8 = 2;
    if (puVar5 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
      local_1c = puVar5;
    }
    else {
      local_1c = puVar5;
      FUN_0098ffc0(param_1 + 0x21c8);
      *puVar5 = &PTR_FUN_00e37c3c;
      puVar15 = puVar5;
    }
    *puVar4 = &PTR_FUN_00e38524;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    local_8 = 3;
    *(undefined1 *)(puVar4 + 5) = 0;
    puVar4[7] = puVar15;
    puVar4[0xd0] = 0xf;
    puVar4[0xcf] = 0;
    *(undefined1 *)(puVar4 + 0xcb) = 0;
    FUN_00408ed0(local_9c,0,0xffffffff);
    puVar4[0xd2] = 0;
    puVar4[0xd3] = 0;
    puVar4[0xd4] = 0;
    *(undefined1 *)(puVar4 + 0xd6) = 1;
    puVar4[0xd7] = 0;
    local_1c = puVar4;
  }
  local_8 = 0xffffffff;
  if (((uint)local_18[0] & 1) != 0) {
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c[0]);
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
  }
  do {
    local_8 = 0xffffffff;
    piVar8 = (int *)local_1c[7];
    if ((char)piVar8[0x44] == '\0') {
      iVar6 = (**(code **)(*piVar8 + 4))();
      piVar8[2] = iVar6;
      if (iVar6 == 0) {
        piVar8[3] = 0x13;
      }
      *(undefined1 *)(piVar8 + 0x44) = 1;
    }
    piVar8 = piVar8 + 3;
    piVar16 = local_37c;
    for (iVar6 = 0x41; puVar4 = local_1c, iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar16 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar16 = piVar16 + 1;
    }
    if (local_37c[0] == 0x13) {
      (**(code **)*local_1c)(1);
      ExceptionList = local_10;
      return;
    }
    FUN_009a1440(local_1c);
    pcVar10 = (char *)(puVar4 + 9);
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4[0] = local_d4[0] & 0xffffff00;
    pcVar7 = pcVar10;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar10,(int)pcVar7 - ((int)puVar4 + 0x25));
    local_8 = 5;
    piVar8 = (int *)FUN_00aae9af(0x48);
    local_8._0_1_ = 6;
    local_24 = piVar8;
    if (piVar8 == (int *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      piVar8[1] = 0x18d;
      *piVar8 = (int)CTree::vftable;
      piVar8[7] = 0xf;
      piVar8[6] = 0;
      *(undefined1 *)(piVar8 + 2) = 0;
      FUN_00408ed0(local_d4,0,0xffffffff);
      iVar6 = DAT_00f092fc;
      piVar8[0xe] = 0xf;
      piVar8[0xd] = 0;
      *(undefined1 *)(piVar8 + 9) = 0;
      piVar8[0x10] = iVar6;
      piVar8[0x11] = -1;
      local_20 = piVar8;
    }
    piVar8 = local_20;
    local_8 = CONCAT31(local_8._1_3_,5);
    local_18[0] = local_20;
    (**(code **)(*local_20 + 0xc))(local_1c);
    ppiVar2 = *(int ***)(param_1 + 0x21e8);
    puVar14 = (uint *)(param_1 + 0x21e4);
    if ((local_18 < ppiVar2) && (ppiVar3 = (int **)*puVar14, piVar8 = local_20, ppiVar3 <= local_18)
       ) {
      local_24 = (int *)((int)local_18 - (int)ppiVar3 >> 2);
      if (ppiVar2 == *(int ***)(param_1 + 0x21ec)) {
        uVar9 = (int)ppiVar2 - (int)ppiVar3 >> 2;
        if (0x3ffffffe < uVar9) {
LAB_00499fc3:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar9 = uVar9 + 1;
        uVar12 = (int)*(int ***)(param_1 + 0x21ec) - (int)ppiVar3 >> 2;
        if (uVar12 < uVar9) {
          if (0x3fffffff - (uVar12 >> 1) < uVar12) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar12 + (uVar12 >> 1);
          }
          if (uVar12 < uVar9) {
            uVar12 = uVar9;
          }
          FUN_004bf300(uVar12);
        }
      }
      if (*(undefined4 **)(param_1 + 0x21e8) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x21e8) = *(undefined4 *)(*puVar14 + (int)local_24 * 4);
      }
    }
    else {
      if (ppiVar2 == *(int ***)(param_1 + 0x21ec)) {
        uVar9 = (int)((int)ppiVar2 - *puVar14) >> 2;
        if (0x3ffffffe < uVar9) goto LAB_00499fc3;
        uVar9 = uVar9 + 1;
        uVar12 = (int)((int)*(int ***)(param_1 + 0x21ec) - *puVar14) >> 2;
        if (uVar12 < uVar9) {
          if (0x3fffffff - (uVar12 >> 1) < uVar12) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar12 + (uVar12 >> 1);
          }
          if (uVar12 < uVar9) {
            uVar12 = uVar9;
          }
          FUN_004bf300(uVar12);
          piVar8 = local_20;
        }
      }
      if (*(undefined4 **)(param_1 + 0x21e8) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x21e8) = piVar8;
      }
    }
    *(int *)(param_1 + 0x21e8) = *(int *)(param_1 + 0x21e8) + 4;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(" added.",7);
    local_8._0_1_ = 7;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350(" with texture ",0xe);
    local_8._0_1_ = 8;
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    FUN_00409350(" name = ",8);
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    local_8._0_1_ = 10;
    pcVar10 = __itoa(local_28,local_110,10);
    pcVar7 = pcVar10;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar10,(int)pcVar7 - (int)(pcVar10 + 1));
    local_8._0_1_ = 0xb;
    FUN_00988fa0(local_f0);
    local_28 = local_28 + 1;
    local_8._0_1_ = 0xc;
    FUN_00988f20(local_b8);
    piVar8 = local_20;
    local_8._0_1_ = 0xd;
    FUN_00988f20(local_20 + 2);
    local_8._0_1_ = 0xe;
    FUN_00988f20(local_80);
    local_8._0_1_ = 0xf;
    FUN_00988f20(piVar8 + 9);
    local_8._0_1_ = 0x10;
    FUN_00988f20(local_64);
    if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_164);
    }
    local_150 = 0xf;
    local_154 = 0;
    local_164 = local_164 & 0xffffff00;
    if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1b8);
    }
    local_1a4 = 0xf;
    local_1a8 = 0;
    local_1b8 = local_1b8 & 0xffffff00;
    if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_19c);
    }
    local_188 = 0xf;
    local_18c = 0;
    local_19c = local_19c & 0xffffff00;
    if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_148);
    }
    local_134 = 0xf;
    local_138 = 0;
    local_148 = local_148 & 0xffffff00;
    if (0xf < local_16c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_180);
    }
    local_16c = 0xf;
    local_170 = 0;
    local_180 = local_180 & 0xffffff00;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f0[0]);
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_b8[0]);
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_8._0_1_ = 0x1a;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = local_10c[0] & 0xffffff00;
    FUN_00409350("map.cpp",7);
    local_8._0_1_ = 0x1b;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (undefined4 **)((uint)local_48[0] & 0xffffff00);
    FUN_00408ed0(local_12c,0,0xffffffff);
    local_8._0_1_ = 0x1c;
    uVar11 = FUN_004015b0(local_10c,0x2ff,0x10000);
    local_8._0_1_ = 0x1f;
    pppuVar13 = (undefined4 ***)local_48[0];
    if (local_34 < 0x10) {
      pppuVar13 = local_48;
    }
    local_24 = (int *)FUN_00418e30(uVar11,pppuVar13);
    local_8._0_1_ = 0x1e;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (undefined4 **)((uint)local_48[0] & 0xffffff00);
    FUN_00401280(local_24);
    local_8 = CONCAT31(local_8._1_3_,0x1b);
    FUN_00987ac0(local_200);
    local_200[0] = std::ios_base::vftable;
    FUN_00aad52d(local_200);
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_10c[0]);
    }
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = local_10c[0] & 0xffffff00;
    if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_12c[0]);
    }
    local_8 = 0xffffffff;
    local_118 = 0xf;
    local_11c = 0;
    local_12c[0] = local_12c[0] & 0xffffff00;
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d4[0]);
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4[0] = local_d4[0] & 0xffffff00;
  } while( true );
}

