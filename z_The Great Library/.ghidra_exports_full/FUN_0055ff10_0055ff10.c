// FUN_0055ff10 @ 0055ff10 body=[[0055ff10, 0056010f] [00560113, 00560142] [00560146, 0056016b] [0056016f, 00560194] [00560198, 005601bd] [005601c1, 005601ea] [005601ee, 0056023e] [00560242, 0056029e] [005602a2, 005602ff] [00560303, 0056031f] [00560323, 00560353] [0056035c, 005604e6] [005604ea, 00560519] [0056051d, 00560542] [00560546, 00560565] [00560569, 00560585] [00560589, 005605ac] [005605b0, 005605fb] [005605ff, 0056065f] [00560663, 005606c0] [005606c4, 005606e0] [005606e4, 00560714] [0056071d, 0056086e] [00560872, 00560a52] [00560a56, 00560a90]]


void FUN_0055ff10(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  void **ppvVar4;
  char *pcVar5;
  char ****ppppcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 *in_ECX;
  int *piVar10;
  undefined1 auStack_420 [12];
  undefined4 uStack_414;
  int local_3f8 [65];
  char local_2f4 [60];
  uint local_2b8;
  undefined4 local_2a8;
  uint local_2a4;
  uint local_29c;
  undefined4 local_28c;
  uint local_288;
  uint local_280;
  undefined4 local_270;
  uint local_26c;
  uint local_264;
  undefined4 local_254;
  uint local_250;
  uint local_248;
  undefined4 local_238;
  uint local_234;
  uint local_22c;
  undefined4 local_21c;
  uint local_218;
  uint local_210;
  undefined4 local_200;
  uint local_1fc;
  uint local_1f4;
  undefined4 local_1e4;
  uint local_1e0;
  uint local_1d8;
  undefined4 local_1c8;
  uint local_1c4;
  uint local_1bc;
  undefined4 local_1ac;
  uint local_1a8;
  char local_1a0 [24];
  uint local_188;
  uint local_16c;
  uint local_164;
  undefined4 local_154;
  uint local_150;
  uint local_148;
  undefined4 local_138;
  uint local_134;
  uint local_12c;
  undefined4 local_11c;
  uint local_118;
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  char ***local_4c [4];
  undefined4 local_3c;
  uint local_38;
  char ***local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b726f5;
  local_10 = ExceptionList;
  local_14 = in_ECX;
  if (param_2 < 0x68b) {
    ExceptionList = &local_10;
    if (param_2 == 0x68a) {
      while( true ) {
        local_8 = 0xffffffff;
        piVar8 = *(int **)(param_1 + 0x1c);
        if ((char)piVar8[0x44] == '\0') {
          iVar7 = (**(code **)(*piVar8 + 4))();
          piVar8[2] = iVar7;
          if (iVar7 == 0) {
            piVar8[3] = 0x13;
          }
          *(undefined1 *)(piVar8 + 0x44) = 1;
        }
        piVar8 = piVar8 + 3;
        piVar10 = local_3f8;
        for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar10 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar10 = piVar10 + 1;
        }
        if ((local_3f8[0] == 4) || (local_3f8[0] == 0x13)) break;
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        pcVar5 = (char *)(*(int *)(param_1 + 0x1c) + 0x10);
        local_a8 = 0xf;
        local_ac = 0;
        local_bc = local_bc & 0xffffff00;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        local_8 = 0x25;
        FUN_00a840b0();
        local_8 = 0xffffffff;
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_a8 = 0xf;
        local_ac = 0;
        local_bc = local_bc & 0xffffff00;
      }
LAB_00560a71:
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x2f9) {
      ExceptionList = &local_10;
      FUN_009885d0();
      local_8 = 0x24;
      uStack_414 = 0x56077e;
      FUN_00408ed0();
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x307) {
      ExceptionList = &local_10;
      FUN_009a1750();
      while( true ) {
        FUN_00436780();
        local_8 = 0;
        FUN_004367c0();
        local_8._0_1_ = 1;
        iVar7 = *(int *)(DAT_012586e0 + 0x4c);
        if (iVar7 == 1) {
          uStack_414 = 0x55fff4;
          FUN_00408ed0();
        }
        local_fc = 0xf;
        local_100 = 0;
        local_110 = local_110 & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 2;
        local_8c = 0xf;
        local_90 = 0;
        local_a0 = local_a0 & 0xffffff00;
        FUN_00409350();
        local_c4 = 0xf;
        local_c8 = 0;
        local_d8 = local_d8 & 0xffffff00;
        local_8._0_1_ = 4;
        uStack_414 = 0x560073;
        pcVar5 = __itoa(*(int *)(local_14 + 0xf4),local_1a0,10);
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        local_8._0_1_ = 5;
        FUN_00988fa0();
        local_8._0_1_ = 6;
        FUN_00988f20();
        local_8._0_1_ = 7;
        FUN_00988f20();
        local_8._0_1_ = 8;
        FUN_00988f20();
        if (0xf < local_288) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_288 = 0xf;
        local_28c = 0;
        local_29c = local_29c & 0xffffff00;
        if (0xf < local_26c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_26c = 0xf;
        local_270 = 0;
        local_280 = local_280 & 0xffffff00;
        if (0xf < local_1fc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1fc = 0xf;
        local_200 = 0;
        local_210 = local_210 & 0xffffff00;
        if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c4 = 0xf;
        local_c8 = 0;
        local_d8 = local_d8 & 0xffffff00;
        if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8c = 0xf;
        local_90 = 0;
        local_a0 = local_a0 & 0xffffff00;
        local_8._0_1_ = 0xf;
        uVar3 = (undefined1)local_8;
        local_8._0_1_ = 0xf;
        if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_fc = 0xf;
        local_100 = 0;
        local_110 = local_110 & 0xffffff00;
        if (iVar7 == 2) {
          uStack_414 = 0x560278;
          local_8._0_1_ = uVar3;
          FUN_00436de0();
          local_8 = CONCAT31(local_8._1_3_,0x11);
          uStack_414 = 0x56028a;
          FUN_00408ed0();
          if (0xf < local_234) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_234 = 0xf;
          local_238 = 0;
          local_248 = local_248 & 0xffffff00;
        }
        else {
          FUN_00988f20();
          local_8 = CONCAT31(local_8._1_3_,0x10);
          uStack_414 = 0x56022b;
          FUN_00408ed0();
          if (0xf < local_2a4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_2a4 = 0xf;
          local_2a8 = 0;
          local_2b8 = local_2b8 & 0xffffff00;
        }
        if (0xf < local_1c) break;
        ppppcVar6 = local_30;
LAB_005602d4:
        if ((*(char *)ppppcVar6 == '\0') || (iVar7 = PHYSFS_exists(), iVar7 == 0))
        goto LAB_00560364;
        *(int *)(local_14 + 0xf4) = *(int *)(local_14 + 0xf4) + 1;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
        if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_134 = 0xf;
        local_138 = 0;
        local_148 = local_148 & 0xffffff00;
        if (0xf < local_16c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      ppppcVar6 = (char ****)local_30[0];
      if ((char ****)local_30[0] != (char ****)0x0) goto LAB_005602d4;
LAB_00560364:
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      while( true ) {
        FUN_00436780();
        local_8 = 0x12;
        FUN_004367c0();
        local_8._0_1_ = 0x13;
        iVar7 = *(int *)(DAT_012586e0 + 0x4c);
        if (iVar7 == 1) {
          uStack_414 = 0x5603e8;
          FUN_00408ed0();
        }
        local_70 = 0xf;
        local_74 = 0;
        local_84 = local_84 & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0x14;
        local_118 = 0xf;
        local_11c = 0;
        local_12c = local_12c & 0xffffff00;
        FUN_00409350();
        local_54 = 0xf;
        local_58 = 0;
        local_68 = local_68 & 0xffffff00;
        local_8._0_1_ = 0x16;
        uStack_414 = 0x560452;
        pcVar5 = __itoa(*(int *)(local_14 + 0xf0),local_2f4,10);
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        local_8._0_1_ = 0x17;
        FUN_00988fa0();
        local_8._0_1_ = 0x18;
        FUN_00988f20();
        local_8._0_1_ = 0x19;
        FUN_00988f20();
        local_8._0_1_ = 0x1a;
        FUN_00988f20();
        if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1a8 = 0xf;
        local_1ac = 0;
        local_1bc = local_1bc & 0xffffff00;
        if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c4 = 0xf;
        local_1c8 = 0;
        local_1d8 = local_1d8 & 0xffffff00;
        if (0xf < local_1e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1e0 = 0xf;
        local_1e4 = 0;
        local_1f4 = local_1f4 & 0xffffff00;
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68 = local_68 & 0xffffff00;
        if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_118 = 0xf;
        local_11c = 0;
        local_12c = local_12c & 0xffffff00;
        local_8._0_1_ = 0x21;
        uVar3 = (undefined1)local_8;
        local_8._0_1_ = 0x21;
        if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_70 = 0xf;
        local_74 = 0;
        local_84 = local_84 & 0xffffff00;
        if (iVar7 == 2) {
          uStack_414 = 0x560635;
          local_8._0_1_ = uVar3;
          FUN_00436de0();
          local_8._0_1_ = 0x23;
          uStack_414 = 0x560647;
          FUN_00408ed0();
          local_8 = CONCAT31(local_8._1_3_,0x21);
          if (0xf < local_250) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_250 = 0xf;
          local_254 = 0;
          local_264 = local_264 & 0xffffff00;
        }
        else {
          FUN_00988f20();
          local_8._0_1_ = 0x22;
          uStack_414 = 0x5605e4;
          FUN_00408ed0();
          local_8 = CONCAT31(local_8._1_3_,0x21);
          if (0xf < local_218) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_218 = 0xf;
          local_21c = 0;
          local_22c = local_22c & 0xffffff00;
        }
        if (local_38 < 0x10) {
          ppppcVar6 = local_4c;
        }
        else {
          ppppcVar6 = (char ****)local_4c[0];
          if ((char ****)local_4c[0] == (char ****)0x0) break;
        }
        if ((*(char *)ppppcVar6 == '\0') || (iVar7 = PHYSFS_exists(), iVar7 == 0)) break;
        *(int *)(local_14 + 0xf0) = *(int *)(local_14 + 0xf0) + 1;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = (char ***)((uint)local_4c[0] & 0xffffff00);
        if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_150 = 0xf;
        local_154 = 0;
        local_164 = local_164 & 0xffffff00;
        if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x335) {
      ExceptionList = &local_10;
      FUN_004012f0();
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ppvVar4 = &local_10;
    if (param_2 == 0x68b) {
      while( true ) {
        ExceptionList = ppvVar4;
        local_8 = 0xffffffff;
        piVar8 = *(int **)(param_1 + 0x1c);
        if ((char)piVar8[0x44] == '\0') {
          iVar7 = (**(code **)(*piVar8 + 4))();
          piVar8[2] = iVar7;
          if (iVar7 == 0) {
            piVar8[3] = 0x13;
          }
          *(undefined1 *)(piVar8 + 0x44) = 1;
        }
        piVar8 = piVar8 + 3;
        piVar10 = local_3f8;
        for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar10 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar10 = piVar10 + 1;
        }
        if ((local_3f8[0] == 4) || (local_3f8[0] == 0x13)) break;
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        pcVar5 = (char *)(*(int *)(param_1 + 0x1c) + 0x10);
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4 = local_f4 & 0xffffff00;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        local_8 = 0x26;
        FUN_00a840b0();
        local_8 = 0xffffffff;
        if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4 = local_f4 & 0xffffff00;
        ppvVar4 = ExceptionList;
      }
      goto LAB_00560a71;
    }
    if (param_2 == 0x751) {
      in_ECX[0x18] = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
  }
  ExceptionList = &local_10;
  iVar7 = FUN_00aae9af();
  local_8 = 0x27;
  if (iVar7 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    local_14 = auStack_420;
    FUN_009885d0();
    piVar8 = (int *)FUN_00560ad0(iVar7,in_ECX);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar8 + 0xc))();
  iVar7 = *(int *)(in_ECX + 0xc);
  puVar9 = (undefined4 *)FUN_00aae9af();
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = piVar8;
    puVar9[1] = iVar7;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x10);
  *(undefined4 **)(in_ECX + 0xc) = puVar9;
  *(int *)(in_ECX + 0x10) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(in_ECX + 8) = puVar9;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 **)(iVar7 + 8) = puVar9;
  ExceptionList = local_10;
  return;
}

