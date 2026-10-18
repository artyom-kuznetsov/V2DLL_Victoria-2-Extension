// FUN_007d22b0 @ 007d22b0 body=[[007d22b0, 007d23fc] [007d2400, 007d247c] [007d2480, 007d25c7] [007d25cb, 007d25ea] [007d25f0, 007d2631] [007d2635, 007d2658] [007d265c, 007d26d0] [007d26d4, 007d26f3] [007d26f9, 007d273a] [007d273e, 007d2761] [007d2765, 007d27d9] [007d27dd, 007d2800] [007d2806, 007d2853] [007d2857, 007d287a] [007d287e, 007d28f2] [007d28f6, 007d2915] [007d291b, 007d295c] [007d2960, 007d2983] [007d2987, 007d29fe] [007d2a02, 007d2a25] [007d2a2b, 007d2a6f] [007d2a73, 007d2a96] [007d2a9a, 007d2aee] [007d2af2, 007d2b39] [007d2b3d, 007d2b5e] [007d2b62, 007d2b8c] [007d2b90, 007d2bba] [007d2bbe, 007d2be2] [007d2be6, 007d2bfa]]


undefined4 * FUN_007d22b0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  uint uVar4;
  int iVar5;
  undefined4 in_EDX;
  int iVar6;
  short sVar7;
  uint uVar8;
  uint local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  undefined4 local_80 [5];
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b61f2f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = in_ECX;
  param_1[3] = in_EDX;
  param_1[4] = param_3;
  param_1[1] = param_2;
  *param_1 = CBeachManager::vftable;
  param_1[5] = param_4;
  param_1[6] = 0;
  param_1[7] = 0x20;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_2 = param_1;
  FUN_0068f390();
  uVar8 = param_1[4] * param_1[5];
  uVar4 = -(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x10);
  param_2 = (uint *)FUN_00aad56b(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  local_8 = 0;
  if (param_2 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = param_2 + 1;
    *param_2 = uVar8;
    _eh_vector_constructor_iterator_(puVar1,0x10,uVar8,FUN_00413490,FUN_00aa8540);
  }
  local_8 = 0xffffffff;
  uVar8 = param_1[4] * param_1[5];
  param_1[6] = puVar1;
  uVar4 = -(uint)((int)((ulonglong)uVar8 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x24);
  param_2 = (uint *)FUN_00aad56b(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  local_8 = 1;
  if (param_2 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = param_2 + 1;
    *param_2 = uVar8;
    _eh_vector_constructor_iterator_
              (puVar1,0x24,uVar8,(_func_void_void_ptr *)&LAB_007d2c00,FUN_009f95e0);
  }
  local_8 = 0xffffffff;
  iVar5 = 0;
  param_1[9] = puVar1;
  if (0 < (int)(param_1[4] * param_1[5])) {
    iVar6 = 0;
    do {
      *(undefined1 *)(param_1[9] + 0x14 + iVar6) = 1;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x24;
    } while (iVar5 < (int)(param_1[4] * param_1[5]));
  }
  puVar2 = (undefined4 *)FUN_00aae9af(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 1;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
  }
  param_1[8] = puVar2;
  FUN_009f99d0(puVar2,*(undefined4 *)(param_1[1] + 100),30000);
  (**(code **)(**(int **)(param_1[8] + 4) + 0x2c))(*(int **)(param_1[8] + 4),0,0,&param_2,0);
  sVar7 = 0;
  puVar1 = param_2 + 1;
  iVar5 = 5000;
  do {
    *(short *)((int)puVar1 + -2) = sVar7 + 1;
    *(short *)puVar1 = sVar7 + 2;
    *(short *)((int)puVar1 + 2) = sVar7 + 2;
    *(short *)(puVar1 + -1) = sVar7;
    *(short *)(puVar1 + 1) = sVar7 + 3;
    *(short *)((int)puVar1 + 6) = sVar7;
    sVar7 = sVar7 + 4;
    puVar1 = puVar1 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (**(code **)(**(int **)(param_1[8] + 4) + 0x30))(*(int **)(param_1[8] + 4));
  FUN_00436780();
  local_8 = 2;
  FUN_004367c0();
  local_8._0_1_ = 3;
  param_2 = *(uint **)(DAT_012586e0 + 0x5c);
  if (param_2 == (uint *)0x1) {
    FUN_00408ed0(local_9c,0,0xffffffff);
  }
  FUN_00436780();
  local_8._0_1_ = 4;
  FUN_004367c0();
  local_8._0_1_ = 5;
  iVar5 = *(int *)(DAT_012586e0 + 0x4c);
  if (iVar5 == 1) {
    FUN_00408ed0(local_d4,0,0xffffffff);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_8._0_1_ = 6;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("/terrain/shore.tga",0x12);
  if (param_2 == (uint *)0x2) {
    local_8._0_1_ = 9;
    uVar3 = FUN_00436de0(local_48,local_9c,local_80);
    local_8._0_1_ = 10;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    local_8._0_1_ = 7;
    uVar3 = FUN_00988f20(local_2c);
    local_8._0_1_ = 8;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 6;
  local_34 = 0xf;
  local_38 = 0;
  uVar3 = FUN_009bcbf0(local_64,1);
  param_1[0xc] = uVar3;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("/terrain/shore_alpha.tga",0x18);
  if (param_2 == (uint *)0x2) {
    local_8._0_1_ = 0xd;
    uVar3 = FUN_00436de0(local_48,local_9c,local_80);
    local_8._0_1_ = 0xe;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    local_8._0_1_ = 0xb;
    uVar3 = FUN_00988f20(local_2c);
    local_8._0_1_ = 0xc;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 6;
  local_34 = 0xf;
  local_38 = 0;
  uVar3 = FUN_009bcbf0(local_64,1);
  param_1[0xd] = uVar3;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (param_2 == (uint *)0x2) {
    FUN_00409350("/terrain/shore_alpha_gradient.tga",0x21);
    local_8._0_1_ = 0x11;
    uVar3 = FUN_00436de0(local_48,local_9c,local_80);
    local_8._0_1_ = 0x12;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    FUN_00409350("/terrain/shore_alpha.tga",0x18);
    local_8._0_1_ = 0xf;
    uVar3 = FUN_00988f20(local_2c);
    local_8._0_1_ = 0x10;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 6;
  local_34 = 0xf;
  local_38 = 0;
  uVar3 = FUN_009bcbf0(local_64,1);
  param_1[0xe] = uVar3;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("/terrain/shore_alpha_outline.tga",0x20);
  if (param_2 == (uint *)0x2) {
    local_8._0_1_ = 0x15;
    uVar3 = FUN_00436de0(local_48,local_9c,local_80);
    local_8._0_1_ = 0x16;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    local_8._0_1_ = 0x13;
    uVar3 = FUN_00988f20(local_2c);
    local_8._0_1_ = 0x14;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 6;
  local_34 = 0xf;
  local_38 = 0;
  uVar3 = FUN_009bcbf0(local_64,1);
  param_1[0xf] = uVar3;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("/FX/beach.fx",0xc);
  if (iVar5 == 2) {
    local_8._0_1_ = 0x19;
    uVar3 = FUN_00436de0(local_48,local_d4,local_b8);
    local_8._0_1_ = 0x1a;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    local_8._0_1_ = 0x17;
    uVar3 = FUN_00988f20(local_2c);
    local_8._0_1_ = 0x18;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 6;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 6;
  local_34 = 0xf;
  local_38 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BeachShader",0xb);
  local_8._0_1_ = 0x1b;
  uVar3 = FUN_009be510(param_1[1] + 0x6bcfc,local_64,local_2c,*(undefined4 *)(param_1[1] + 100));
  local_8 = CONCAT31(local_8._1_3_,6);
  param_1[0xb] = uVar3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  iVar5 = (**(code **)(**(int **)(param_1[1] + 100) + 0x158))
                    (*(int **)(param_1[1] + 100),&DAT_00f09400,param_1 + 10);
  if (iVar5 < 0) {
    MessageBoxA((HWND)0x0,"CreateVertexDeclaration failed!! (WavesVertexDecl)","ERROR",0);
    FatalExit(1);
  }
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_d4[0]);
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4[0] = local_d4[0] & 0xffffff00;
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_b8[0]);
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c[0]);
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  if (local_6c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_80[0]);
}

