// FUN_005e0340 @ 005e0340 body=[[005e0340, 005e0527] [005e052b, 005e069f] [005e06a3, 005e06d9] [005e06dd, 005e0704] [005e0708, 005e0800] [005e0804, 005e082e] [005e0832, 005e088a] [005e088e, 005e0921]]


void FUN_005e0340(void)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  int in_ECX;
  int *piVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_180 [108];
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint auStack_e4 [4];
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined1 *local_c8;
  undefined4 local_c4;
  undefined4 *puStack_c0;
  undefined4 local_bc;
  uint auStack_b8 [4];
  undefined4 uStack_a8;
  uint uStack_a4;
  uint auStack_9c [4];
  undefined4 uStack_8c;
  uint uStack_88;
  undefined1 auStack_64 [20];
  undefined1 auStack_50 [60];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb47;
  local_14 = ExceptionList;
  local_c8 = *(undefined1 **)(in_ECX + 0x40);
  local_c4 = *(undefined4 *)(in_ECX + 0x44);
  iVar5 = DAT_01258a94;
  if (local_c8 < 0x1269) {
    iVar5 = DAT_01258a98;
  }
  ExceptionList = &local_14;
  if (iVar5 != 0) {
    uStack_108 = CONCAT44(0x5e0396,(undefined4)uStack_108);
    ExceptionList = &local_14;
    iVar5 = FUN_009c1d40();
    if (iVar5 != 0) {
      piVar11 = (int *)(iVar5 + -8);
      goto LAB_005e03a1;
    }
  }
  piVar11 = (int *)0x0;
LAB_005e03a1:
  *(int **)(in_ECX + 0x3c) = piVar11;
  if (piVar11 != (int *)0x0) {
    local_c8 = (undefined1 *)piVar11[0x30];
    local_bc = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + piVar11[0x31] * 4);
    uStack_108 = CONCAT44(0x5e03d5,(undefined4)uStack_108);
    cVar3 = (**(code **)(*piVar11 + 0x3c))();
    if ((piVar11[0x31] == *(int *)(DAT_012588e8 + 0xb60)) && (0 < piVar11[0x10])) {
      local_c8 = (undefined1 *)piVar11[0x30];
      uStack_108 = CONCAT44(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + piVar11[0x31] * 4),0x5e041c
                           );
      puVar6 = (undefined4 *)FUN_005061e0();
      uStack_108 = 0x400e01db8;
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      uStack_110 = CONCAT44(0x5e0442,(undefined4)uStack_110);
      puStack_c0 = puVar6;
      FUN_00409350();
      uStack_c = 0;
      uStack_108 = CONCAT44(0x5e0452,(undefined4)uStack_108);
      uVar7 = (**(code **)(*piVar11 + 0x20))();
      uStack_108 = CONCAT44(uVar7,auStack_e4);
      uStack_110 = CONCAT44(auStack_9c,0x5e0462);
      iVar8 = FUN_00424aa0();
      uStack_c._0_1_ = 1;
      iVar5 = puVar6[1];
      uStack_108 = 0x44005e047c;
      puVar9 = (undefined1 *)FUN_00aae9af();
      uStack_c._0_1_ = 2;
      uVar2 = (undefined1)uStack_c;
      uStack_c._0_1_ = 2;
      local_c8 = puVar9;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
        uStack_c._0_1_ = uVar2;
      }
      else {
        uStack_108 = 0xffffffff00000000;
        *(undefined4 *)(puVar9 + 0x14) = 0xf;
        *(undefined4 *)(puVar9 + 0x10) = 0;
        *puVar9 = 0;
        uStack_110 = CONCAT44(iVar8,0x5e04ac);
        FUN_00408ed0();
        uStack_c._0_1_ = 3;
        uStack_108 = 0xffffffff00000000;
        *(undefined4 *)(puVar9 + 0x30) = 0xf;
        *(undefined4 *)(puVar9 + 0x2c) = 0;
        puVar9[0x1c] = 0;
        uStack_110 = CONCAT44(iVar8 + 0x1c,0x5e04d3);
        FUN_00408ed0();
        *(int *)(puVar9 + 0x38) = iVar5;
        *(undefined4 *)(puVar9 + 0x3c) = 0;
        puVar9[0x40] = 0;
      }
      iVar8 = puStack_c0[2];
      puStack_c0[1] = puVar9;
      puStack_c0[2] = iVar8 + 1;
      if (iVar8 == 0) {
        *puStack_c0 = puVar9;
      }
      else {
        *(undefined1 **)(iVar5 + 0x3c) = puVar9;
      }
      uStack_108 = CONCAT44(0x5e050c,(undefined4)uStack_108);
      FUN_00a39a80();
      uStack_c = 0xffffffff;
      if (0xf < uStack_d0) {
        uStack_108 = CONCAT44(auStack_e4[0],&UNK_005e0528);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_108 = 0xe00e03324;
      uStack_a4 = 0xf;
      uStack_a8 = 0;
      auStack_b8[0] = auStack_b8[0] & 0xffffff00;
      uStack_110 = CONCAT44(0x5e054c,(undefined4)uStack_110);
      FUN_00409350();
      uStack_c = 4;
      uStack_108 = 0xe00e03324;
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      uStack_110 = CONCAT44(0x5e0573,(undefined4)uStack_110);
      FUN_00409350();
      uStack_108 = CONCAT44(auStack_b8,auStack_64);
      uStack_c._0_1_ = 5;
      uStack_110 = CONCAT44(0x5e058d,(undefined4)uStack_110);
      FUN_009a8ee0();
      uStack_c._0_1_ = 6;
      uStack_108 = CONCAT44(0x5e059e,(undefined4)uStack_108);
      iVar5 = FUN_00475500();
      uStack_110 = *(undefined8 *)(iVar5 + 0x6c);
      uStack_108 = *(undefined8 *)(iVar5 + 0x74);
      uStack_114 = 0x5e05c3;
      uVar7 = FUN_009a9880();
      uStack_108 = CONCAT44(uVar7,auStack_e4);
      uStack_c._0_1_ = 7;
      uStack_110 = CONCAT44(auStack_50,0x5e05de);
      iVar8 = FUN_00424aa0();
      uStack_c._0_1_ = 8;
      iVar5 = puStack_c0[1];
      uStack_108 = 0x44005e05fc;
      puVar9 = (undefined1 *)FUN_00aae9af();
      uStack_c._0_1_ = 9;
      uVar2 = (undefined1)uStack_c;
      uStack_c._0_1_ = 9;
      local_c8 = puVar9;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
        uStack_c._0_1_ = uVar2;
      }
      else {
        uStack_108 = 0xffffffff00000000;
        *(undefined4 *)(puVar9 + 0x14) = 0xf;
        *(undefined4 *)(puVar9 + 0x10) = 0;
        *puVar9 = 0;
        uStack_110 = CONCAT44(iVar8,0x5e062c);
        FUN_00408ed0();
        uStack_c._0_1_ = 10;
        uStack_108 = 0xffffffff00000000;
        *(undefined4 *)(puVar9 + 0x30) = 0xf;
        *(undefined4 *)(puVar9 + 0x2c) = 0;
        puVar9[0x1c] = 0;
        uStack_110 = CONCAT44(iVar8 + 0x1c,0x5e0653);
        FUN_00408ed0();
        *(int *)(puVar9 + 0x38) = iVar5;
        *(undefined4 *)(puVar9 + 0x3c) = 0;
        puVar9[0x40] = 0;
      }
      iVar8 = puStack_c0[2];
      puStack_c0[1] = puVar9;
      puStack_c0[2] = iVar8 + 1;
      if (iVar8 == 0) {
        *puStack_c0 = puVar9;
      }
      else {
        *(undefined1 **)(iVar5 + 0x3c) = puVar9;
      }
      uStack_108 = CONCAT44(0x5e068f,(undefined4)uStack_108);
      FUN_00a39a80();
      if (0xf < uStack_88) {
        uStack_108 = CONCAT44(auStack_9c[0],&UNK_005e06a0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_88 = 0xf;
      uStack_8c = 0;
      auStack_9c[0] = auStack_9c[0] & 0xffffff00;
      uStack_c = CONCAT31(uStack_c._1_3_,5);
      uStack_108 = CONCAT44(auStack_64,0x5e06c9);
      FUN_009a9740();
      if (0xf < uStack_d0) {
        uStack_108 = CONCAT44(auStack_e4[0],&UNK_005e06da);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c = 0xffffffff;
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      if (0xf < uStack_a4) {
        uStack_108 = CONCAT44(auStack_b8[0],&UNK_005e0705);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_108 = 0xded94d;
      uStack_a4 = 0xf;
      uStack_a8 = 0;
      auStack_b8[0] = auStack_b8[0] & 0xffffff00;
      uStack_110 = CONCAT44(0x5e0723,(undefined4)uStack_110);
      FUN_00409350();
      uStack_c = 0xb;
      uStack_108 = 0x700e03334;
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      uStack_110 = CONCAT44(0x5e074a,(undefined4)uStack_110);
      FUN_00409350();
      local_c8 = auStack_180;
      uStack_c._0_1_ = 0xc;
      uVar16 = 0;
      iVar5 = piVar11[0x31];
      iVar8 = piVar11[0x37];
      uVar15 = 0x2d2d2d;
      iVar14 = piVar11[0x30];
      uVar13 = 0;
      puVar12 = auStack_b8;
      puVar6 = puStack_c0;
      FUN_006a4f40(puStack_c0,iVar8,puVar12,0,iVar14,iVar5,0x2d2d2d,0);
      uVar7 = FUN_006a55b0();
      FUN_006a7ed0(auStack_180,uVar7,puVar6,iVar8,puVar12,uVar13,iVar14,iVar5,uVar15,uVar16);
      uStack_c._0_1_ = 0xd;
      FUN_006a4f40();
      uVar7 = FUN_006a4f40();
      uStack_c = CONCAT31(uStack_c._1_3_,0xc);
      FUN_004e9540(uVar7);
      if (0xf < uStack_d0) {
        uStack_108 = CONCAT44(auStack_e4[0],&UNK_005e0801);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c = 0xffffffff;
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      uVar1 = auStack_e4[0] >> 8;
      auStack_e4[0] = uVar1 << 8;
      if (0xf < uStack_a4) {
        uStack_108 = CONCAT44(auStack_b8[0],&UNK_005e082f);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_108 = 0x500dfcebc;
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = uVar1 << 8;
      uStack_110 = CONCAT44(0x5e0852,(undefined4)uStack_110);
      FUN_00409350();
      uStack_c = 0xe;
      uStack_108 = CONCAT44(0x5e0862,(undefined4)uStack_108);
      piVar10 = (int *)FUN_009c7290();
      uStack_108 = CONCAT44(auStack_e4,0x5e0870);
      (**(code **)(*piVar10 + 0x60))();
      uStack_c = 0xffffffff;
      if (0xf < uStack_d0) {
        uStack_108 = CONCAT44(auStack_e4[0],&UNK_005e088b);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
    }
    if (*(char *)(*(int *)(piVar11[0x37] + 0x5c) + 0x2a) == '\0') {
      uStack_108 = CONCAT44(0x5e08b9,(undefined4)uStack_108);
      cVar4 = (**(code **)(*(int *)piVar11[0x36] + 0x20))();
      if (cVar4 != '\0') {
        local_c8 = (undefined1 *)piVar11[0x30];
        uStack_108 = CONCAT44(0x5e08e4,(undefined4)uStack_108);
        FUN_0050e840();
        uStack_108 = CONCAT44(0x5e08e9,(undefined4)uStack_108);
        uVar7 = FUN_005b6140();
        uStack_108 = CONCAT44(uVar7,0x5e08f1);
        FUN_005cbcc0();
      }
    }
    uStack_108 = CONCAT44(piVar11,0x5e08fd);
    FUN_0068aa10();
    if (cVar3 != '\0') {
      uStack_108 = CONCAT44(local_bc,0x5e090d);
      FUN_00545be0();
    }
  }
  ExceptionList = local_14;
  return;
}

